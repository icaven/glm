///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-05-21
// Updated : 2007-05-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/component_wise.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_component_wise__
#define __glm_gtx_component_wise__

// Dependency:
#include "../../glm.h"

namespace glm
{
	template <typename genType> GLMvalType compAddGTX(const genType& v); //!< Add all vector components together. (From GLM_GTX_component_wise extension)
	template <typename genType> GLMvalType compMulGTX(const genType& v); //!< Multiply all vector components together. (From GLM_GTX_component_wise extension)

	template <typename genType> GLMvalType compMinGTX(const genType& v); //!< Find the minimum value between single vector components. (From GLM_GTX_component_wise extension)
	template <typename genType> GLMvalType compMaxGTX(const genType& v); //!< Find the maximum value between single vector components. (From GLM_GTX_component_wise extension)

	namespace gtx
	{
		//! GLM_GTX_component_wise extension: Operations between components of a type
		namespace component_wise
		{
			template <typename genType> inline GLMvalType compAdd(const genType& v){return compAddGTX(v);} //!< Add all vector components together. (From GLM_GTX_component_wise extension)
			template <typename genType> inline GLMvalType compMul(const genType& v){return compMulGTX(v);} //!< Multiply all vector components together. (From GLM_GTX_component_wise extension)

			template <typename genType> inline GLMvalType compMin(const genType& v){return compMinGTX(v);} //!< Find the minimum value between single vector components. (From GLM_GTX_component_wise extension)
			template <typename genType> inline GLMvalType compMax(const genType& v){return compMaxGTX(v);} //!< Find the maximum value between single vector components. (From GLM_GTX_component_wise extension)
		}
	}
}

#define GLM_GTX_component_wise namespace gtx::component_wise

#include "component_wise.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_component_wise;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_component_wise__
