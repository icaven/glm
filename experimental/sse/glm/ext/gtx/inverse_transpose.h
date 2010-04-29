///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-04
// Updated : 2006-12-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/inverse_transpose.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_inverse_transpose__
#define __glm_gtx_inverse_transpose__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat2<T> inverseTransposeGTX(const detail::_xmat2<T>& m); //!< Compute the inverse transpose of a generic 2x2 matrix (From GLM_GTX_inverse extension)
    template <typename T> detail::_xmat3<T> inverseTransposeGTX(const detail::_xmat3<T>& m); //!< Compute the inverse transpose of a generic 3x3 matrix (From GLM_GTX_inverse extension)
    template <typename T> detail::_xmat4<T> inverseTransposeGTX(const detail::_xmat4<T>& m); //!< Compute the inverse transpose of a generic 4x4 matrix (From GLM_GTX_inverse extension)

    namespace gtx
    {
		//! GLM_GTX_inverse_transpose extension: Inverse transpose matrix functions
        namespace inverse_transpose
        {
            template <typename T> inline T inverseTranspose(const T& m){return inverseTransposeGTX(m);}	//!< Compute the inverse transpose of a matrix (From GLM_GTX_inverse extension)
        }
    }
}

#define GLM_GTX_inverse_transpose namespace gtx::inverse_transpose

#include "inverse_transpose.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_inverse_transpose;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_inverse_transpose__
