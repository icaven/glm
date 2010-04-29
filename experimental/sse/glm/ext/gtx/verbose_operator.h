///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-05-21
// Updated : 2007-05-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/verbose_operator.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_verbose_operator__
#define __glm_gtx_verbose_operator__

// Dependency:
#include "../../glm.h"

namespace glm
{
	template <typename genType> genType addGTX(const genType& a, const genType& b); // Addition of two numbers, two vectors or two matrices (from GLM_GTX_verbose_operator extension)
	template <typename genType> genType subGTX(const genType& a, const genType& b); // Substration of two numbers, two vectors or two matrices (from GLM_GTX_verbose_operator extension)
	template <typename genType> genType divGTX(const genType& a, const genType& b); // Division of two numbers, two vectors or two matrices (from GLM_GTX_verbose_operator extension)

	namespace gtx
	{
		//! GLM_GTX_verbose_operator extension: Use words to replace operators
		namespace verbose_operator
		{
			template <typename genType> inline genType add(const genType& a, const genType& b){return addGTX(a, b);} // Addition of two numbers, two vectors or two matrices (from GLM_GTX_verbose_operator extension)
			template <typename genType> inline genType sub(const genType& a, const genType& b){return subGTX(a, b);} // Substration of two numbers, two vectors or two matrices (from GLM_GTX_verbose_operator extension)
			template <typename genType> inline genType div(const genType& a, const genType& b){return divGTX(a, b);} // Division of two numbers, two vectors or two matrices (from GLM_GTX_verbose_operator extension)
		}
	}
}

#include "verbose_operator.inl"

#define GLM_GTX_verbose_operator namespace gtx::verbose_operator

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_verbose_operator;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_verbose_operator__
