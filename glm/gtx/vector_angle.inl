///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-30
// Updated : 2008-09-29
// Licence : This source is under MIT License
// File    : glm/gtx/vector_angle.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType angle
	(
		genType const & x,
		genType const & y
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'angle' only accept floating-point inputs");
		return acos(clamp(dot(x, y), genType(0), genType(1)));
	}

	template <typename T, precision P, template <typename, precision> class vecType> 
	GLM_FUNC_QUALIFIER T angle
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'angle' only accept floating-point inputs");
		return acos(clamp(dot(x, y), T(0), T(1)));
	}

	//! \todo epsilon is hard coded to 0.01
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T orientedAngle
	(
		detail::tvec2<T, P> const & x,
		detail::tvec2<T, P> const & y
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'orientedAngle' only accept floating-point inputs");
		T const Angle(acos(clamp(dot(x, y), T(0), T(1))));

		detail::tvec2<T, P> const TransformedVector(glm::rotate(x, Angle));
		if(all(epsilonEqual(y, TransformedVector, T(0.01))))
			return Angle;
		else
			return -Angle;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T orientedAngle
	(
		detail::tvec3<T, P> const & x,
		detail::tvec3<T, P> const & y,
		detail::tvec3<T, P> const & ref
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'orientedAngle' only accept floating-point inputs");
		T const Angle(acos(clamp(dot(x, y), T(0), T(1))));

		return mix(Angle, -Angle, dot(ref, cross(x, y)) < T(0));
	}
}//namespace glm
