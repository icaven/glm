///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-12-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/perpendicular.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_projection
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_perpendicular__
#define __glm_gtx_perpendicular__

// Dependency:
#include "../../glm.h"
#include "../gtx/projection.h"

namespace glm
{
    template <typename T> detail::_xvec2<T> perpGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& Normal); //!< \brief Projects x a perpendicular axis of Normal (from GLM_GTX_perpendicular extension)
    template <typename T> detail::_xvec3<T> perpGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& Normal); //!< \brief Projects x a perpendicular axis of Normal (from GLM_GTX_perpendicular extension)
    template <typename T> detail::_xvec4<T> perpGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& Normal); //!< \brief Projects x a perpendicular axis of Normal (from GLM_GTX_perpendicular extension)

    namespace gtx
    {
		//! GLM_GTX_perpendicular extension: Perpendicular of a vector from other one
        namespace perpendicular
        {
            template <typename T> inline detail::_xvec2<T> perp(const detail::_xvec2<T>& x, const detail::_xvec2<T>& Normal){return perpGTX(x, Normal);} //!< \brief Projects x a perpendicular axis of Normal (from GLM_GTX_perpendicular extension)
            template <typename T> inline detail::_xvec3<T> perp(const detail::_xvec3<T>& x, const detail::_xvec3<T>& Normal){return perpGTX(x, Normal);} //!< \brief Projects x a perpendicular axis of Normal (from GLM_GTX_perpendicular extension)
            template <typename T> inline detail::_xvec4<T> perp(const detail::_xvec4<T>& x, const detail::_xvec4<T>& Normal){return perpGTX(x, Normal);} //!< \brief Projects x a perpendicular axis of Normal (from GLM_GTX_perpendicular extension)
        }
    }
}

#define GLM_GTX_perpendicular namespace gtx::perpendicular

#include "perpendicular.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_perpendicular;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_perpendicular__
