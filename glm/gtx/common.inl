/// @ref gtx_common
/// @file glm/gtx/common.inl

#include <cmath>

namespace glm{
namespace detail
{
	template <int D, typename T, precision P, template <int, typename, precision> class vecType, bool isFloat = true>
	struct compute_fmod
	{
		GLM_FUNC_QUALIFIER static vecType<D, T, P> call(vecType<D, T, P> const & a, vecType<D, T, P> const & b)
		{
			return detail::functor2<D, T, P>::call(std::fmod, a, b);
		}
	};

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	struct compute_fmod<D, T, P, vecType, false>
	{
		GLM_FUNC_QUALIFIER static vecType<D, T, P> call(vecType<D, T, P> const & a, vecType<D, T, P> const & b)
		{
			return a % b;
		}
	};
}//namespace detail

	template <typename T> 
	GLM_FUNC_QUALIFIER bool isdenormal(T const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

#		if GLM_HAS_CXX11_STL
			return std::fpclassify(x) == FP_SUBNORMAL;
#		else
			return x != static_cast<T>(0) && std::fabs(x) < std::numeric_limits<T>::min();
#		endif
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec1<T, P>::bool_type isdenormal
	(
		tvec1<T, P> const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

		return typename tvec1<T, P>::bool_type(
			isdenormal(x.x));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec2<T, P>::bool_type isdenormal
	(
		tvec2<T, P> const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

		return typename tvec2<T, P>::bool_type(
			isdenormal(x.x),
			isdenormal(x.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec3<T, P>::bool_type isdenormal
	(
		tvec3<T, P> const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

		return typename tvec3<T, P>::bool_type(
			isdenormal(x.x),
			isdenormal(x.y),
			isdenormal(x.z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec4<T, P>::bool_type isdenormal
	(
		tvec4<T, P> const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

		return typename tvec4<T, P>::bool_type(
			isdenormal(x.x),
			isdenormal(x.y),
			isdenormal(x.z),
			isdenormal(x.w));
	}

	// fmod
	template <typename genType>
	GLM_FUNC_QUALIFIER genType fmod(genType x, genType y)
	{
		return fmod(tvec1<genType>(x), y).x;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> fmod(vecType<D, T, P> const & x, T y)
	{
		return detail::compute_fmod<D, T, P, vecType, std::numeric_limits<T>::is_iec559>::call(x, vecType<D, T, P>(y));
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> fmod(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		return detail::compute_fmod<D, T, P, vecType, std::numeric_limits<T>::is_iec559>::call(x, y);
	}
}//namespace glm
