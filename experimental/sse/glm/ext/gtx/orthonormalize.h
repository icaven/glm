///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/orthonormalize.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_orthonormalize__
#define __glm_gtx_orthonormalize__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat3<T> orthonormalizeGTX(const detail::_xmat3<T>& m);                      //!< \brief Returns the orthonormalized matrix of m (from GLM_GTX_orthonormalize extension)
    template <typename T> detail::_xvec3<T> orthonormalizeGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);  //!< \brief Orthonormalizes x according y (from GLM_GTX_orthonormalize extension)

    namespace gtx
    {
		//! GLM_GTX_orthonormalize extension: Orthonormalize matrices.
        namespace orthonormalize
        {
            template <typename T> inline detail::_xmat3<T> orthonormalize(const detail::_xmat3<T>& m){return orthonormalizeGTX(m);}                         //!< \brief Returns the orthonormalized matrix of m (from GLM_GTX_orthonormalize extension)
            template <typename T> inline detail::_xvec3<T> orthonormalize(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y){return orthonormalizeGTX(x, y);}  //!< \brief Orthonormalizes x according y (from GLM_GTX_orthonormalize extension)
        }
    }
}

#define GLM_GTX_orthonormalize namespace gtx::orthonormalize

#include "orthonormalize.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_orthonormalize;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_orthonormalize__
