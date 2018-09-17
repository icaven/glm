#include "../vector_relational.hpp"
#include "../common.hpp"
#include "../detail/qualifier.hpp"

namespace glm
{
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, T, Q> const& x, vec<L, T, Q> const& y, T Epsilon)
	{
		return equal(x, y, vec<L, T, Q>(Epsilon));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, T, Q> const& Epsilon)
	{
		return lessThanEqual(abs(x - y), Epsilon);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, T Epsilon)
	{
		return notEqual(x, y, vec<L, T, Q>(Epsilon));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, T, Q> const& Epsilon)
	{
		return greaterThan(abs(x - y), Epsilon);
	}


	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, T, Q> const& x, vec<L, T, Q> const& y, int MaxULPs)
	{
		return equal(x, y, vec<L, int, Q>(MaxULPs));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, int, Q> const& MaxULPs)
	{
		vec<L, bool, Q> Result;
		for(length_t i = 0; i < L; ++i)
		{
			detail::float_t const a(x[i]);
			detail::float_t const b(y[i]);

			// Different signs means they do not match.
			if(a.negative() != b.negative())
			{
				// Check for equality to make sure +0==-0
				return a.mantissa() == b.mantissa() && a.exponent() == b.exponent();
			}

			// Find the difference in ULPs.
			int const DiffULPs = abs(a.i - b.i);
			Result[i] = DiffULPs <= MaxULPs;
		}
		return Result;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, int MaxULPs)
	{
		return !equal(x, y, MaxULPs);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, int, Q> const& MaxULPs)
	{
		return !equal(x, y, MaxULPs);
	}
}//namespace glm
