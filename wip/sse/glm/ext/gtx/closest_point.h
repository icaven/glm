///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-30
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/closest_point.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_closest_point__
#define __glm_gtx_closest_point__

// Dependency:
#include "../../glm.h"

namespace glm
{
	//! Find the point on a straight line which is the closet of a point. (from GLM_GTX_closest_point extension) 
    template <typename T> 
	detail::_xvec3<T> closestPointOnLineGTX(
		const detail::_xvec3<T>& point, 
		const detail::_xvec3<T>& a, 
		const detail::_xvec3<T>& b); 

	namespace gtx
	{
		//! GLM_GTX_closest_point extension: Find the point on a straight line which is the closet of a point.
		namespace closest_point
		{
			//! Find the point on a straight line which is the closet of a point. (from GLM_GTX_closest_point extension) 		
			template <typename T> 
			inline detail::_xvec3<T> closestPointOnLine(
				const detail::_xvec3<T>& point, 
				const detail::_xvec3<T>& a, 
				const detail::_xvec3<T>& b)
			{
				return closestPointOnLineGTX(point, a, b);
			}
		}
	}
}

#define GLM_GTX_closest_point namespace gtx::closest_point

#include "closest_point.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_closest_point;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_closest_point__
