///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-05
// Updated : 2010-02-16
// Licence : This source is under MIT License
// File    : glm/gtx/vector_query.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <cassert>

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool areCollinear
	(
		detail::tvec2<T, P> const & v0,
		detail::tvec2<T, P> const & v1,
		typename detail::tvec2<T, P>::T const & epsilon
	)
	{
		return length(cross(detail::tvec3<T, P>(v0, T(0)), detail::tvec3<T, P>(v1, T(0)))) < epsilon;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool areCollinear
	(
		detail::tvec3<T, P> const & v0,
		detail::tvec3<T, P> const & v1,
		typename detail::tvec3<T, P>::T const & epsilon
	)
	{
		return length(cross(v0, v1)) < epsilon;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool areCollinear
	(
		detail::tvec4<T, P> const & v0,
		detail::tvec4<T, P> const & v1,
		typename detail::tvec4<T, P>::T const & epsilon
	)
	{
		return length(cross(detail::tvec3<T, P>(v0), detail::tvec3<T, P>(v1))) < epsilon;
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER bool areOrthogonal
	(
		genType const & v0,
		genType const & v1,
		typename genType::T const & epsilon
	)
	{
		return abs(dot(v0, v1)) <= max(
			typename genType::value_type(1),
			length(v0)) * max(
				typename genType::value_type(1),
				length(v1)) * epsilon;
	}

	template <typename genType, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER bool isNormalized
	(
		vecType<genType, P> const & v,
		genType const & epsilon
	)
	{
		return abs(length(v) - genType(1)) <= genType(2) * epsilon;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull
	(
		detail::tvec2<T, P> const & v,
		T const & epsilon
	)
	{
		return length(v) <= epsilon;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull
	(
		detail::tvec3<T, P> const & v,
		T const & epsilon
	)
	{
		return length(v) <= epsilon;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull
	(
		detail::tvec4<T, P> const & v,
		T const & epsilon
	)
	{
		return length(v) <= epsilon;
	}

	template <typename T>
	GLM_FUNC_QUALIFIER bool isCompNull
	(
		T const & s, 
		T const & epsilon
	)
	{
		return abs(s) < epsilon;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tvec2<bool, P> isCompNull
	(
		detail::tvec2<T, P> const & v,
		T const & epsilon)
	{
		return detail::tvec2<bool, P>(
			(abs(v.x) < epsilon),
			(abs(v.y) < epsilon));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tvec3<bool, P> isCompNull
	(
		detail::tvec3<T, P> const & v,
		T const & epsilon
	)
	{
		return detail::tvec3<bool, P>(
			abs(v.x) < epsilon,
			abs(v.y) < epsilon,
			abs(v.z) < epsilon);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tvec4<bool, P> isCompNull
	(
		detail::tvec4<T, P> const & v,
		T const & epsilon
	)
	{
		return detail::tvec4<bool, P>(
			abs(v.x) < epsilon,
			abs(v.y) < epsilon,
			abs(v.z) < epsilon,
			abs(v.w) < epsilon);
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER bool areOrthonormal
	(
		genType const & v0,
		genType const & v1,
		typename genType::T const & epsilon
	)
	{
		return isNormalized(v0, epsilon) && isNormalized(v1, epsilon) && (abs(dot(v0, v1)) <= epsilon);
	}

}//namespace glm
