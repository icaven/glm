/// @ref core

#include "compute_vector_relational.hpp"

// Bug #782: Warning C4701: potentially uninitialized local variable 'Result' used
#if ((GLM_COMPILER & GLM_COMPILER_VC) && (GLM_COMPILER >= GLM_COMPILER_VC12))
#	define GLM_BUG_VC_INIT (false)
#else
#	define GLM_BUG_VC_INIT
#endif

namespace glm{
namespace detail
{
	enum relational_type
	{
		EQUAL,
		NOT_EQUAL,
		LESS,
		LESS_EQUAL,
		GREATER,
		GREATER_EQUAL,
		ANY,
		ALL,
		NOT
	};

	template <relational_type R>
	struct relational
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1);
	};

	template <>
	struct relational<EQUAL>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1)
		{
			return Src0 == Src1;
		}
	};

	template <>
	struct relational<NOT_EQUAL>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1)
		{
			return Src0 != Src1;
		}
	};

	template <>
	struct relational<LESS>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1)
		{
			return Src0 < Src1;
		}
	};

	template <>
	struct relational<LESS_EQUAL>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1)
		{
			return Src0 <= Src1;
		}
	};

	template <>
	struct relational<GREATER>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1)
		{
			return Src0 > Src1;
		}
	};

	template <>
	struct relational<GREATER_EQUAL>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1)
		{
			return Src0 >= Src1;
		}
	};

	template <>
	struct relational<ANY>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1)
		{
			return Src0 || Src1;
		}
	};

	template <>
	struct relational<ALL>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T Src1)
		{
			return Src0 && Src1;
		}
	};

	template <>
	struct relational<NOT>
	{
		template<typename T>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(T Src0, T)
		{
			return !Src0;
		}
	};



	template<length_t I, length_t N, relational_type R>
	struct reduce_relational
	{
		template<typename vecType>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static void call(bool& Dst, vecType const& Src)
		{
			Dst = relational<R>::call(Dst, Src[I]);
			reduce_relational<I + 1, N, R>::call(Dst, Src);
		}
	};

	template <length_t N, relational_type R>
	struct reduce_relational<N, N, R>
	{
		template<typename vecType>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static void call(bool&, vecType const&)
		{}
	};



	template<length_t I, length_t N, relational_type R>
	struct loop_relational
	{
		template<typename vecBType, typename vecType>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static void call(vecBType& Dst, vecType const& Src0, vecType const& Src1)
		{
			Dst[I] = relational<R>::call(Src0[I], Src1[I]);
			loop_relational<I + 1, N, R>::call(Dst, Src0, Src1);
		}
	};

	template <length_t N, relational_type R>
	struct loop_relational<N, N, R>
	{
		template<typename vecBType, typename vecType>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static void call(vecBType&, vecType const&, vecType const&)
		{}
	};
}//namespace detail

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> lessThan(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result GLM_BUG_VC_INIT;
		detail::loop_relational<0, L, detail::LESS>::call(Result, x, y);
		return Result;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> lessThanEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result GLM_BUG_VC_INIT;
		detail::loop_relational<0, L, detail::LESS_EQUAL>::call(Result, x, y);
		return Result;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> greaterThan(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result GLM_BUG_VC_INIT;
		detail::loop_relational<0, L, detail::GREATER>::call(Result, x, y);
		return Result;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> greaterThanEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result GLM_BUG_VC_INIT;
		detail::loop_relational<0, L, detail::GREATER_EQUAL>::call(Result, x, y);
		return Result;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result GLM_BUG_VC_INIT;
		detail::loop_relational<0, L, detail::EQUAL>::call(Result, x, y);
		return Result;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result GLM_BUG_VC_INIT;
		detail::loop_relational<0, L, detail::NOT_EQUAL>::call(Result, x, y);
		return Result;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool any(vec<L, bool, Q> const& v)
	{
		bool Result = false;
		detail::reduce_relational<0, L, detail::ANY>::call(Result, v);
		return Result;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool all(vec<L, bool, Q> const& v)
	{
		bool Result = true;
		detail::reduce_relational<0, L, detail::ALL>::call(Result, v);
		return Result;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> not_(vec<L, bool, Q> const& v)
	{
		vec<L, bool, Q> Result;
		detail::loop_relational<0, L, detail::NOT>::call(Result, v, v);
		return Result;
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
#	include "func_vector_relational_simd.inl"
#endif
