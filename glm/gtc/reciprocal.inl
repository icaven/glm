/// @ref gtc_reciprocal
/// @file glm/gtc/reciprocal.inl

#include "../trigonometric.hpp"
#include <limits>

namespace glm
{
	// sec
	template <typename genType>
	GLM_FUNC_QUALIFIER genType sec(genType angle)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'sec' only accept floating-point values");
		return genType(1) / glm::cos(angle);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> sec(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'sec' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(sec, x);
	}

	// csc
	template <typename genType>
	GLM_FUNC_QUALIFIER genType csc(genType angle)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'csc' only accept floating-point values");
		return genType(1) / glm::sin(angle);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> csc(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'csc' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(csc, x);
	}

	// cot
	template <typename genType>
	GLM_FUNC_QUALIFIER genType cot(genType angle)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'cot' only accept floating-point values");
	
		genType const pi_over_2 = genType(3.1415926535897932384626433832795 / 2.0);
		return glm::tan(pi_over_2 - angle);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> cot(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'cot' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(cot, x);
	}

	// asec
	template <typename genType>
	GLM_FUNC_QUALIFIER genType asec(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'asec' only accept floating-point values");
		return acos(genType(1) / x);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> asec(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'asec' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(asec, x);
	}

	// acsc
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acsc(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acsc' only accept floating-point values");
		return asin(genType(1) / x);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> acsc(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'acsc' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(acsc, x);
	}

	// acot
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acot(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acot' only accept floating-point values");

		genType const pi_over_2 = genType(3.1415926535897932384626433832795 / 2.0);
		return pi_over_2 - atan(x);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> acot(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'acot' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(acot, x);
	}

	// sech
	template <typename genType>
	GLM_FUNC_QUALIFIER genType sech(genType angle)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'sech' only accept floating-point values");
		return genType(1) / glm::cosh(angle);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> sech(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'sech' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(sech, x);
	}

	// csch
	template <typename genType>
	GLM_FUNC_QUALIFIER genType csch(genType angle)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'csch' only accept floating-point values");
		return genType(1) / glm::sinh(angle);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> csch(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'csch' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(csch, x);
	}

	// coth
	template <typename genType>
	GLM_FUNC_QUALIFIER genType coth(genType angle)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'coth' only accept floating-point values");
		return glm::cosh(angle) / glm::sinh(angle);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> coth(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'coth' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(coth, x);
	}

	// asech
	template <typename genType>
	GLM_FUNC_QUALIFIER genType asech(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'asech' only accept floating-point values");
		return acosh(genType(1) / x);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> asech(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'asech' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(asech, x);
	}

	// acsch
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acsch(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acsch' only accept floating-point values");
		return acsch(genType(1) / x);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> acsch(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'acsch' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(acsch, x);
	}

	// acoth
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acoth(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acoth' only accept floating-point values");
		return atanh(genType(1) / x);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> acoth(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'acoth' only accept floating-point inputs");
		return detail::functor1<D, T, T, P>::call(acoth, x);
	}
}//namespace glm
