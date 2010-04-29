///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/transpose.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_transpose__
#define __glm_gtx_transpose__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat2<T> transposeGTX(const detail::_xmat2<T>& x); //!< - Deprecated - Returns the transposed 2 * 2 matrix of x (From GLM_GTX_transpose extension)
    template <typename T> detail::_xmat3<T> transposeGTX(const detail::_xmat3<T>& x); //!< - Deprecated - Returns the transposed 3 * 3 matrix of x (From GLM_GTX_transpose extension)
    template <typename T> detail::_xmat4<T> transposeGTX(const detail::_xmat4<T>& x); //!< - Deprecated - Returns the transposed 4 * 4 matrix of x (From GLM_GTX_transpose extension)

    namespace gtx
    {
		//! GLM_GTX_transpose extension: - Deprecated - Use GLM core function instead
        namespace transpose
        {
            template <typename T> inline detail::_xmat2<T> transpose(const detail::_xmat2<T>& x){return transposeGTX(x);} //!< - Deprecated - Returns the transposed 2 * 2 matrix of x (From GLM_GTX_transpose extension)
            template <typename T> inline detail::_xmat3<T> transpose(const detail::_xmat3<T>& x){return transposeGTX(x);} //!< - Deprecated - Returns the transposed 3 * 3 matrix of x (From GLM_GTX_transpose extension)
            template <typename T> inline detail::_xmat4<T> transpose(const detail::_xmat4<T>& x){return transposeGTX(x);} //!< - Deprecated - Returns the transposed 4 * 4 matrix of x (From GLM_GTX_transpose extension)
        }
    }
}

#define GLM_GTX_transpose namespace gtx::transpose

#include "transpose.inl"
/* Deprecated
#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_transpose;}
#endif//GLM_GTX_INCLUDED
*/
#endif//__glm_gtx_transpose__
