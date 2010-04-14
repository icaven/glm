///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/projection.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_projection__
#define __glm_gtx_projection__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xvec2<T> projGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& Normal); //!< \brief Projects x on Normal (from GLM_GTX_projection extension)
    template <typename T> detail::_xvec3<T> projGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& Normal); //!< \brief Projects x on Normal (from GLM_GTX_projection extension)
    template <typename T> detail::_xvec4<T> projGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& Normal); //!< \brief Projects x on Normal (from GLM_GTX_projection extension)

    namespace gtx
    {
		//! GLM_GTX_projection extension: Projection of a vector to other one
        namespace projection
        {
            template <typename T> inline detail::_xvec2<T> proj(const detail::_xvec2<T>& x, const detail::_xvec2<T>& Normal){return projGTX(x, Normal);} //!< \brief Projects x on Normal (from GLM_GTX_projection extension)
            template <typename T> inline detail::_xvec3<T> proj(const detail::_xvec3<T>& x, const detail::_xvec3<T>& Normal){return projGTX(x, Normal);} //!< \brief Projects x on Normal (from GLM_GTX_projection extension)
            template <typename T> inline detail::_xvec4<T> proj(const detail::_xvec4<T>& x, const detail::_xvec4<T>& Normal){return projGTX(x, Normal);} //!< \brief Projects x on Normal (from GLM_GTX_projection extension)
        }
    }
}

#define GLM_GTX_projection namespace gtx::projection

#include "projection.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_projection;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_projection__
