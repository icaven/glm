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
	template <typename T>
	GLM_FUNC_QUALIFIER T wrapAngle(T const & angle)
	{
		return abs<T>(mod<T>(angle, two_pi<T>()));
	}

	VECTORIZE_VEC(wrapAngle)

	template <typename T>
	GLM_FUNC_QUALIFIER T cos_52s(T const &  x)
	{
		T const xx(x * x);
		return (T(0.9999932946) + xx * (T(-0.4999124376) + xx * (T(0.0414877472) + xx * T(-0.0012712095))));
	}

	VECTORIZE_VEC(cos_52s)

	// cos
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastCos(T const & x)
	{
		T const angle(wrapAngle<T>(x));
		if(angle<half_pi<T>()) return cos_52s(angle);
		if(angle<pi<T>()) return -cos_52s(pi<T>() - angle);
		if(angle<(T(3) * half_pi<T>())) return -cos_52s(angle - pi<T>());
		return cos_52s(two_pi<T>() - angle);
	}

	VECTORIZE_VEC(fastCos)

	// sin
	template <typename T>
	GLM_FUNC_QUALIFIER T fastSin(T const & x)
	{
		return fastCos<T>(half_pi<T>() - x);
	}

	VECTORIZE_VEC(fastSin)

	// tan
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastTan(T const & x)
	{
		return x + (x * x * x * T(0.3333333333)) + (x * x * x * x * x * T(0.1333333333333)) + (x * x * x * x * x * x * x * T(0.0539682539));
	}

	VECTORIZE_VEC(fastTan)

	// asin
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastAsin(T const & x)
	{
		return x + (x * x * x * T(0.166666667)) + (x * x * x * x * x * T(0.075)) + (x * x * x * x * x * x * x * T(0.0446428571)) + (x * x * x * x * x * x * x * x * x * T(0.0303819444));// + (x * x * x * x * x * x * x * x * x * x * x * T(0.022372159));
	}

	VECTORIZE_VEC(fastAsin)

	// acos
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastAcos(T const & x)
	{
		return T(1.5707963267948966192313216916398) - fastAsin(x); //(PI / 2)
	}

	VECTORIZE_VEC(fastAcos)

	// atan
	template <typename T> 
	GLM_FUNC_QUALIFIER T fastAtan(T const & y, T const & x)
	{
		T sgn = sign(y) * sign(x);
		return abs(fastAtan(y / x)) * sgn;
	}

	VECTORIZE_VEC_VEC(fastAtan)

	template <typename T> 
	GLM_FUNC_QUALIFIER T fastAtan(T const & x)
	{
		return x - (x * x * x * T(0.333333333333)) + (x * x * x * x * x * T(0.2)) - (x * x * x * x * x * x * x * T(0.1428571429)) + (x * x * x * x * x * x * x * x * x * T(0.111111111111)) - (x * x * x * x * x * x * x * x * x * x * x * T(0.0909090909));
	}

	VECTORIZE_VEC(fastAtan)

}//namespace glm
