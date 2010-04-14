///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/normal.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_normal__
#define __glm_gtx_normal__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> _xvec3<T> triangleNormalGTX(const _xvec3<T>& p1, const _xvec3<T>& p2, const _xvec3<T>& p3); //!< /brief Computes triangle normal from triangle points. (from GLM_GTX_normal extension)

    namespace gtx
    {
		//! GLM_GTX_normal extension: Compute the normal of a triangle.
        namespace normal
        {
            template <typename T> inline _xvec3<T> triangleNormal(const _xvec3<T>& p1, const _xvec3<T>& p2, const _xvec3<T>& p3){return triangleNormalGTX(p1, p2, p3);} //!< /brief Computes triangle normal from triangle points. (from GLM_GTX_normal extension)
        }
    }
}

#define GLM_GTX_normal namespace gtx::normal

#include "normal.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_normal;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_normal__
