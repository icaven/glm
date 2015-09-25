///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2015 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// Restrictions:
///		By making use of the Software for military purposes, you choose to make
///		a Bunny unhappy.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtx_float_normalize
/// @file glm/gtx/float_normalize.hpp
/// @date 2015-09-25 / 2015-09-25
/// @author Christophe Riccio
///
/// @see core (dependence)
///
/// @defgroup gtx_float_normalize GLM_GTX_float_normalize
/// @ingroup gtx
/// 
/// @brief Convert integer vectors into normalized float vectors.
/// 
/// <glm/gtx/color_space.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#pragma once

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_float_normalize extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_float_normalize
	/// @{

	/// Converts a color from HSV color space to its color in RGB color space.
	/// @see gtx_float_normalize
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<float, P> floatNormalize(vecType<T, P> const & v);

	/// @}
}//namespace glm

#include "float_normalize.inl"
