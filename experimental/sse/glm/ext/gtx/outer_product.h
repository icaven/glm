///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2006 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-03-30
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/outer_product.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_outer_product__
#define __glm_gtx_outer_product__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat2<T> outerProductGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< Product of x extended to a matrix with the y extended to a transposed matrix. (from GLM_GTX_outer_product extension)
    template <typename T> detail::_xmat3<T> outerProductGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< Product of x extended to a matrix with the y extended to a transposed matrix. (from GLM_GTX_outer_product extension)
    template <typename T> detail::_xmat4<T> outerProductGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< Product of x extended to a matrix with the y extended to a transposed matrix. (from GLM_GTX_outer_product extension)

    namespace gtx
    {
		//! GLM_GTX_outer_product extension: Product of x extended to a matrix with the y extended to a transposed matrix. (Deprecated: included in GLM core)
        namespace outer_product
        {
            template <typename T> inline detail::_xmat2<T> outerProduct(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y){return outerProductGTX(x, y);} //!< Product of x extended to a matrix with the y extended to a transposed matrix. (from GLM_GTX_outer_product extension)
            template <typename T> inline detail::_xmat3<T> outerProduct(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y){return outerProductGTX(x, y);} //!< Product of x extended to a matrix with the y extended to a transposed matrix. (from GLM_GTX_outer_product extension)
            template <typename T> inline detail::_xmat4<T> outerProduct(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y){return outerProductGTX(x, y);} //!< Product of x extended to a matrix with the y extended to a transposed matrix. (from GLM_GTX_outer_product extension)
        }
    }
}

#define GLM_GTX_outer_product namespace gtx::outer_product

#include "outer_product.inl"
/* Deprecated
#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_outer_product;}
#endif//GLM_GTX_INCLUDED
*/
#endif//__glm_gtx_outer_product__
