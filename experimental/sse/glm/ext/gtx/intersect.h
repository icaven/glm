///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-04-03
// Updated : 2007-04-03
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/intersect.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_closest_point
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_intersect__
#define __glm_gtx_intersect__

// Dependency:
#include "../../glm.h"
#include "../gtx/closest_point.h"

namespace glm
{
    //! Compute the intersection of a ray and a triangle (From GLM_GTX_intersect extension)
	template <typename genType>
	bool intersectRayTriangleGTX(
		const genType& orig, const genType& dir,
		const genType& vert0, const genType& vert1, const genType& vert2,
		genType& position);

    //! Compute the intersection of a line and a triangle (From GLM_GTX_intersect extension)
	template <typename genType>
	bool intersectLineTriangleGTX(
		const genType& orig, const genType& dir,
		const genType& vert0, const genType& vert1, const genType& vert2,
		genType& position);

    //! Compute the intersection of a ray and a sphere (From GLM_GTX_intersect extension)
	template <typename genType>
	bool intersectRaySphereGTX(
		const genType& orig, const genType& dir,
		const genType& center, GLMvalType radius,
		genType& position, genType& normal);

    //! Compute the intersection of a line and a sphere (From GLM_GTX_intersect extension)
	template <typename genType>
	bool intersectLineSphereGTX(
		const genType& point0, const genType& point1,
		const genType& center, GLMvalType radius,
		genType& position, genType& normal);

	namespace gtx
	{
		//! GLM_GTX_intersect extension: Add intersection functions
		namespace intersect
		{
            //! Compute the intersection of a ray and a triangle (From GLM_GTX_intersect extension)
			template <typename genType>
			inline bool intersectRayTriangle(
				const genType& orig, const genType& dir,
				const genType& vert0, const genType& vert1, const genType& vert2,
				genType& position)
			{
				return intersectRayTriangleGTX(orig, dir, vert0, vert1, vert2, position);
			}

            //! Compute the intersection of a line and a triangle (From GLM_GTX_intersect extension)
			template <typename genType>
			inline bool intersectLineTriangle(
				const genType& orig, const genType& dir,
				const genType& vert0, const genType& vert1, const genType& vert2,
				genType& position)
			{
				return intersectLineTriangleGTX(orig, dir, vert0, vert1, vert2, position);
			}

            //! Compute the intersection of a ray and a sphere (From GLM_GTX_intersect extension)
			template <typename genType>
			inline bool intersectRaySphere(
				const genType& orig, const genType& dir,
				const genType& center, GLMvalType radius,
				genType& position, genType& normal)
			{
				return intersectRaySphereGTX(orig, dir, center, radius, position, normal);
			}

            //! Compute the intersection of a line and a sphere (From GLM_GTX_intersect extension)
			template <typename genType>
			inline bool intersectLineSphere(
				const genType& point0, const genType& point1,
				const genType& center, GLMvalType radius,
				genType& position, genType& normal)
			{
				return intersectLineSphereGTX(point0, point1, center, radius, position, normal);
			}
		}
	}
}

#define GLM_GTX_intersect namespace gtx::intersect

#include "intersect.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_intersect;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_intersect__
