///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-06
// Updated : 2007-03-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/polar_coordinates.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_polar_coordinates__
#define __glm_gtx_polar_coordinates__

// Dependency:
#include "../../glm.h"

namespace glm
{
	//! Convert Euclidean to Polar coordinates, x is the xz distance, y, the latitude and z the longitude (From GLM_GTX_polar_coordinates extension)
	template <typename T> _xvec3<T> polarGTX(const _xvec3<T>& euclidean);
	//! Convert Polar to Euclidean coordinates (From GLM_GTX_polar_coordinates extension)
	template <typename T> _xvec3<T> euclideanGTX(const _xvec3<T>& polar);

    namespace gtx
    {
		//! GLM_GTX_polar_coordinates extension: Conversion from Euclidean space to polar space and revert.
        namespace polar_coordinates
        {
            //! Convert Euclidean to Polar coordinates, x is the xz distance, y, the latitude and z the longitude (From GLM_GTX_polar_coordinates extension)
        	template <typename T> inline _xvec3<T> polar(const _xvec3<T>& euclidean){return polarGTX(euclidean);}
            //! Convert Polar to Euclidean coordinates (From GLM_GTX_polar_coordinates extension)
	        template <typename T> inline _xvec3<T> euclidean(const _xvec3<T>& polar){return euclideanGTX(polar);}
        }
    }
}

#define GLM_GTX_polar_coordinates namespace gtx::polar_coordinates

#include "polar_coordinates.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_polar_coordinates;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_polar_coordinates__
