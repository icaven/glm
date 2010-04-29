///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-04-03
// Updated : 2007-04-03
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/mixed_product.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_mixed_product__
#define __glm_gtx_mixed_product__

// Dependency:
#include "../../glm.h"

namespace glm
{
	//! Mixed product of 3 vectors (from GLM_GTX_mixed_product extension)
    template <typename genType> 
	GLMvalType mixedProductGTX(
		const genType& v1, 
		const genType& v2, 
		const genType& v3); 

    namespace gtx
    {
		//! GLM_GTX_mixed_product extension: Mixed product of 3 vectors.
        namespace mixed_product
        {
			//! Mixed product of 3 vectors (from GLM_GTX_mixed_product extension)
            template <typename genType> 
			inline GLMvalType mixedProduct(
				const genType& v1, 
				const genType& v2, 
				const genType& v3)
			{
				return mixedProductGTX(v1, v2, v3);
			}
        }
    }
}

#define GLM_GTX_mixed_product namespace gtx::mixed_product

#include "mixed_product.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_mixed_product;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_mixed_product__
