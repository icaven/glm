///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-08
// Updated : 2011-10-14
// Licence : This source is under MIT License
// File    : glm/gtx/fast_trigonometry.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	// sin
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastSin(T x)
	{
		return x - ((x * x * x) / T(6)) + ((x * x * x * x * x) / T(120)) - ((x * x * x * x * x * x * x) / T(5040));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastSin(vecType<T, P> const & x)
	{
		return detail::functor1<T, T, P, vecType>::call(fastSin, x);
	}

	// cos
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastCos(T x)
	{
		return T(1) - (x * x * T(0.5)) + (x * x * x * x * T(0.041666666666)) - (x * x * x * x * x * x * T(0.00138888888888));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastCos(vecType<T, P> const & x)
	{
		return detail::functor1<T, T, P, vecType>::call(fastCos, x);
	}

	// tan
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastTan(T x)
	{
		return x + (x * x * x * T(0.3333333333)) + (x * x * x * x * x * T(0.1333333333333)) + (x * x * x * x * x * x * x * T(0.0539682539));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastTan(vecType<T, P> const & x)
	{
		return detail::functor1<T, T, P, vecType>::call(fastTan, x);
	}

	// asin
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastAsin(T x)
	{
		return x + (x * x * x * T(0.166666667)) + (x * x * x * x * x * T(0.075)) + (x * x * x * x * x * x * x * T(0.0446428571)) + (x * x * x * x * x * x * x * x * x * T(0.0303819444));// + (x * x * x * x * x * x * x * x * x * x * x * T(0.022372159));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastAsin(vecType<T, P> const & x)
	{
		return detail::functor1<T, T, P, vecType>::call(fastAsin, x);
	}

	// acos
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastAcos(T x)
	{
		return T(1.5707963267948966192313216916398) - fastAsin(x); //(PI / 2)
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastAcos(vecType<T, P> const & x)
	{
		return detail::functor1<T, T, P, vecType>::call(fastAcos, x);
	}

	// atan
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastAtan(T y, T x)
	{
		T sgn = sign(y) * sign(x);
		return abs(fastAtan(y / x)) * sgn;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastAtan(vecType<T, P> const & y, vecType<T, P> const & x)
	{
		return detail::functor2<T, P, vecType>::call(fastAtan, y, x);
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER T fastAtan(T x)
	{
		return x - (x * x * x * T(0.333333333333)) + (x * x * x * x * x * T(0.2)) - (x * x * x * x * x * x * x * T(0.1428571429)) + (x * x * x * x * x * x * x * x * x * T(0.111111111111)) - (x * x * x * x * x * x * x * x * x * x * x * T(0.0909090909));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastAtan(vecType<T, P> const & x)
	{
		return detail::functor1<T, T, P, vecType>::call(fastAtan, x);
	}
}//namespace glm
