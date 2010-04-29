///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_cross_product.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_matrix_cross_product__
#define __glm_gtx_matrix_cross_product__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat3<T> matrixCross3GTX(const detail::_xvec3<T>& x); //!< Build a cross product matrix (From GLM_GTX_matrix_cross_product extension)
    template <typename T> detail::_xmat4<T> matrixCross4GTX(const detail::_xvec3<T>& x); //!< Build a cross product matrix (From GLM_GTX_matrix_cross_product extension)

    namespace gtx
    {
		//! GLM_GTX_matrix_cross_product: Build cross product matrices
        namespace matrix_cross_product
        {
            template <typename T> inline detail::_xmat3<T> matrixCross3(const detail::_xvec3<T>& x){return matrixCross3GTX(x);} //!< Build a cross product matrix (From GLM_GTX_matrix_cross_product extension)
            template <typename T> inline detail::_xmat4<T> matrixCross4(const detail::_xvec3<T>& x){return matrixCross4GTX(x);} //!< Build a cross product matrix (From GLM_GTX_matrix_cross_product extension)
        }
    }
}

#define GLM_GTX_matrix_cross_product namespace gtx::matrix_cross_product

#include "matrix_cross_product.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_matrix_cross_product;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_matrix_cross_product__
