///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
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
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtx_integer
/// @file glm/gtx/integer.hpp
/// @date 2005-12-24 / 2011-06-07
/// @author Christophe Riccio
///
/// @see core (dependence)
///
/// @defgroup gtx_integer GLM_GTX_integer: Extended integer functions
/// @ingroup gtx
/// 
/// @brief Add support for integer for core functions
/// 
/// <glm/gtx/integer.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#ifndef GLM_GTX_integer
#define GLM_GTX_integer 50

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTX_integer extension included")
#endif

namespace glm{
namespace gtx
{
	/// @addtogroup gtx_integer
	/// @{

	//! Returns x raised to the y power. 
	//! From GLM_GTX_integer extension.
	int pow(int x, int y);

	//! Returns the positive square root of x.
	//! From GLM_GTX_integer extension.
	int sqrt(int x);

	//! Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y.
	//! From GLM_GTX_integer extension.
	int mod(int x, int y);

	//! Return the factorial value of a number (!12 max, integer only)
	//! From GLM_GTX_integer extension.
	template <typename genType> 
	genType factorial(genType const & x);

	/// @}
}//namespace gtx
}//namespace glm

#include "integer.inl"

#endif//GLM_GTX_integer
