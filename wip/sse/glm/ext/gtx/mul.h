///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-20
// Updated : 2007-04-04
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/mul.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////
// Comment:
// - Extension for Cg compatibility
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_mul__
#define __glm_gtx_mul__

// Dependency:
#include "../../glm.h"

namespace glm
{
	template <typename genType> genType mulGTX(const genType& a, const genType& b);			//!< Product of 2 matrices (From GLM_GTX_mul extension)
	template <typename genType> GLMcolType mulGTX(const genType& m, const GLMcolType& v);	//!< Product of a matrix and a vector (From GLM_GTX_mul extension)
	template <typename genType> GLMcolType mulGTX(const GLMcolType& v, const genType& m);	//!< Product of a vector and a matrix (From GLM_GTX_mul extension)

    namespace gtx
    {
		//! GLM_GTX_mul extension: mul function for Cg and HLSL compatibility.
        namespace mul
        {
            template <typename genType> inline genType mul(const genType& a, const genType& b);			//!< Product of 2 matrices (From GLM_GTX_mul extension)
            template <typename genType> inline GLMcolType mul(const genType& m, const GLMcolType& v);	//!< Product of a matrix and a vector (From GLM_GTX_mul extension)
            template <typename genType> inline GLMcolType mul(const GLMcolType& v, const genType& m);	//!< Product of a vector and a matrix (From GLM_GTX_mul extension)
        }
    }
}

#define GLM_GTX_mul namespace gtx::mul

#include "mul.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_mul;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_mul__
