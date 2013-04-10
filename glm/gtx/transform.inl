///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2009-04-29
// Licence : This source is under MIT License
// File    : glm/gtx/transform.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, defaultp> translate(
		T x, T y, T z)
	{
		return translate(
			detail::tmat4x4<T, defaultp>(1.0f),
			detail::tvec3<T, defaultp>(x, y , z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, P> translate(
		detail::tmat4x4<T, P> const & m,
		T x, T y, T z)
	{
		return translate(
			m, detail::tvec3<T, P>(x, y , z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, P> translate(
		detail::tvec3<T, P> const & v)
	{
		return translate(
			detail::tmat4x4<T, P>(1.0f), v);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, defaultp> rotate(
		T angle,
		T x, T y, T z)
	{
		return rotate(
			detail::tmat4x4<T, defaultp>(1), angle, detail::tvec3<T, defaultp>(x, y, z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, P> rotate(
		T angle, 
		detail::tvec3<T, P> const & v)
	{
		return rotate(
			detail::tmat4x4<T, P>(1), angle, v);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, P> rotate(
		detail::tmat4x4<T, P> const & m,
		T angle, 
		T x, T y, T z)
	{
		return rotate(
			m, angle, detail::tvec3<T, P>(x, y, z));
	}

	template <typename T>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, defaultp> scale(T x, T y, T z)
	{
		return scale(
			detail::tmat4x4<T, defaultp>(1), detail::tvec3<T, defaultp>(x, y, z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, P> scale(
		detail::tmat4x4<T, P> const & m,
		T x, T y, T z)
	{
		return scale(
			m, detail::tvec3<T, P>(x, y, z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tmat4x4<T, P> scale(
		detail::tvec3<T, P> const & v)
	{
		return scale(
			detail::tmat4x4<T, P>(1.0f), v);
	}

}//namespace glm
