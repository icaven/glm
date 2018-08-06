/// @ref ext_vector_relational
/// @file glm/ext/vector_relational.inl

// Dependency:
#include "../ext/vector_relational.hpp"
#include "../common.hpp"

namespace glm{
namespace detail
{
	enum matrix_relational_type
	{
		MAT_EQUAL,
		MAT_NOT_EQUAL
	};

	template <relational_type R>
	struct matrix_relational
	{
		template<typename vecType, typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(vecType const& Src0, vecType const& Src1, T Epsilon);
	};

	template <>
	struct matrix_relational<EQUAL>
	{
		template<typename vecType, typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(vecType const& Src0, vecType const& Src1, T Epsilon)
		{
			return all(equal(Src0, Src1, Epsilon));
		}
	};

	template <>
	struct matrix_relational<NOT_EQUAL>
	{
		template<typename vecType, typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(vecType const& Src0, vecType const& Src1, T Epsilon)
		{
			return any(notEqual(Src0, Src1, Epsilon));
		}
	};

	template<length_t I, length_t N, relational_type R>
	struct loop_matrix_relational
	{
		template<typename vecBType, typename matType, typename vecType>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static void call(vecBType& Dst, matType const& Src0, matType const& Src1, vecType const& Epsilon)
		{
			Dst[I] = matrix_relational<R>::call(Src0[I], Src1[I], Epsilon[I]);
			loop_matrix_relational<I + 1, N, R>::call(Dst, Src0, Src1, Epsilon);
		}
	};

	template <length_t N, relational_type R>
	struct loop_matrix_relational<N, N, R>
	{
		template<typename vecBType, typename matType, typename vecType>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static void call(vecBType&, matType const&, matType const&, vecType const&)
		{}
	};
}//namespace detail

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(mat<C, R, T, Q> const& a, mat<C, R, T, Q> const& b)
	{
		return equal(a, b, static_cast<T>(0));
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(mat<C, R, T, Q> const& a, mat<C, R, T, Q> const& b, T epsilon)
	{
		return equal(a, b, vec<C, T, Q>(epsilon));
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(mat<C, R, T, Q> const& a, mat<C, R, T, Q> const& b, vec<C, T, Q> const& epsilon)
	{
		vec<C, bool, Q> Result;
		detail::loop_matrix_relational<0, C, detail::EQUAL>::call(Result, a, b, epsilon);
		return Result;
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
	{
		return notEqual(x, y, static_cast<T>(0));
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y, T epsilon)
	{
		return notEqual(x, y, vec<C, T, Q>(epsilon));
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(mat<C, R, T, Q> const& a, mat<C, R, T, Q> const& b, vec<C, T, Q> const& epsilon)
	{
		vec<C, bool, Q> Result;
		detail::loop_matrix_relational<0, C, detail::NOT_EQUAL>::call(Result, a, b, epsilon);
		return Result;
	}
}//namespace glm
