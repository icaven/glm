#include "scalar_integer.hpp"

namespace glm
{
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> isPowerOfTwo(vec<L, T, Q> const& Value)
	{
		vec<L, T, Q> const Result(abs(Value));
		return equal(Result & (Result - 1), vec<L, T, Q>(0));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> nextPowerOfTwo(vec<L, T, Q> const& v)
	{
		return detail::compute_ceilPowerOfTwo<L, T, Q, std::numeric_limits<T>::is_signed>::call(v);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> prevPowerOfTwo(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(prevPowerOfTwo, v);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> isMultiple(vec<L, T, Q> const& Value, T Multiple)
	{
		return (Value % Multiple) == vec<L, T, Q>(0);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> isMultiple(vec<L, T, Q> const& Value, vec<L, T, Q> const& Multiple)
	{
		return (Value % Multiple) == vec<L, T, Q>(0);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> nextMultiple(vec<L, T, Q> const& Source, T Multiple)
	{
		return detail::functor2<vec, L, T, Q>::call(nextMultiple, Source, vec<L, T, Q>(Multiple));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> nextMultiple(vec<L, T, Q> const& Source, vec<L, T, Q> const& Multiple)
	{
		return detail::functor2<vec, L, T, Q>::call(nextMultiple, Source, Multiple);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> prevMultiple(vec<L, T, Q> const& Source, T Multiple)
	{
		return detail::functor2<vec, L, T, Q>::call(prevMultiple, Source, vec<L, T, Q>(Multiple));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> prevMultiple(vec<L, T, Q> const& Source, vec<L, T, Q> const& Multiple)
	{
		return detail::functor2<vec, L, T, Q>::call(prevMultiple, Source, Multiple);
	}
}//namespace glm
