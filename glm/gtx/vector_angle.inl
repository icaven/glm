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
	GLM_FUNC_QUALIFIER typename genType::value_type angle
	(
		genType const & x,
		genType const & y
	)
	{
#ifdef GLM_FORCE_RADIANS
		return acos(dot(x, y));
#else
		return degrees(acos(dot(x, y)));
#endif
	}

	//! \todo epsilon is hard coded to 0.01
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T orientedAngle
	(
		detail::tvec2<T, P> const & x,
		detail::tvec2<T, P> const & y
	)
	{
#ifdef GLM_FORCE_RADIANS
		T const Angle(acos(dot(x, y)));
#else
		T const Angle(degrees(acos(dot(x, y))));
#endif
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
#ifdef GLM_FORCE_RADIANS
		T const Angle(acos(dot(x, y)));
#else
		T const Angle(degrees(acos(dot(x, y))));
#endif

		if(dot(ref, cross(x, y)) < T(0))
			return -Angle;
		else
			return Angle;
	}
}//namespace glm
