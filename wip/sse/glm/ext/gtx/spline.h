///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-25
// Updated : 2007-03-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/spline.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_spline__
#define __glm_gtx_spline__

// Dependency:
#include "../../glm.h"

namespace glm
{
	template <typename genType> genType catmullRomGTX(const genType& v1, const genType& v2, const genType& v3, const genType& v4, const GLMvalType& s);    //!< Return a point from a catmull rom curve (from GLM_GTX_spline extension)
	template <typename genType> genType hermiteGTX(const genType& v1, const genType& t1, const genType& v2, const genType& t2, const GLMvalType& s);       //!< Return a point from a hermite curve (from GLM_GTX_spline extension)
	template <typename genType> genType cubicGTX(const genType& v1, const genType& v2, const genType& v3, const genType& v4, const GLMvalType& s);         //!< Return a point from a cubic curve (from GLM_GTX_spline extension)

    namespace gtx
    {
		//! GLM_GTX_spline extension: Spline functions
        namespace spline
        {
	        template <typename genType> inline genType catmullRom(const genType& v1, const genType& v2, const genType& v3, const genType& v4, const GLMvalType& s){return catmullRomGTX(v1, v2, v3, v4, s);}   //!< Return a point from a catmull rom curve (from GLM_GTX_spline extension)
	        template <typename genType> inline genType hermite(const genType& v1, const genType& t1, const genType& v2, const genType& t2, const GLMvalType& s){return hermiteGTX(v1, t1, v2, t2, s);}         //!< Return a point from a hermite curve (from GLM_GTX_spline extension)
	        template <typename genType> inline genType cubic(const genType& v1, const genType& v2, const genType& v3, const genType& v4, const GLMvalType& s){return cubicGTX(v1, v2, v3, v4, s);}             //!< Return a point from a cubic curve (from GLM_GTX_spline extension)      
        }
    }
}

#define GLM_GTX_spline namespace gtx::spline

#include "spline.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_spline;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_spline__

