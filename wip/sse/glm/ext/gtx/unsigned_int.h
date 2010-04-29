///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-24
// Updated : 2006-11-14
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/unsigned_int.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_unsigned_int
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_unsigned_int__
#define __glm_gtx_unsigned_int__

// Dependency:
#include "../../glm.h"
#include "../gtx/integer.h"

namespace glm
{
	unsigned int powGTX(unsigned int x, unsigned int y);    //!< \brief Returns x raised to the y power. (From GLM_GTX_unsigned_int extensions)
	unsigned int sqrtGTX(unsigned int x);                   //!< \brief Returns the positive square root of x. (From GLM_GTX_unsigned_int extensions)
	unsigned int modGTX(unsigned int x, unsigned int y);    //!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_unsigned_int extensions)

	namespace gtx
	{
		//! GLM_GTX_unsigned_int extension: Add support for unsigned integer for core functions
		namespace unsigned_int
		{
			inline unsigned int pow(unsigned int x, unsigned int y){return powGTX(x, y);}   //!< \brief Returns x raised to the y power. (From GLM_GTX_unsigned_int extensions)
			inline unsigned int sqrt(unsigned int x){return sqrtGTX(x);}                    //!< \brief Returns the positive square root of x. (From GLM_GTX_unsigned_int extensions)
			inline unsigned int mod(unsigned int x, unsigned int y){return modGTX(x, y);}   //!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_unsigned_int extensions)
		}
	}
}

#define GLM_GTX_unsigned_int namespace gtx::unsigned_int; using namespace gtx::integer

#include "unsigned_int.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_unsigned_int;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_unsigned_int__
