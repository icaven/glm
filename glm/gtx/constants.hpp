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
/// @ref constants
/// @file glm/gtx/constants.hpp
/// @date 2011-09-30 / 2011-09-30
/// @author Christophe Riccio
///
/// @see core (dependence)
/// @see gtc_half_float (dependence)
///
/// @defgroup gtx_constants GLM_GTX_constants: Provide build-in constants
/// @ingroup gtx
/// 
/// @brief Allow to perform bit operations on integer values
/// 
/// <glm/gtx/constants.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#ifndef GLM_GTX_constants
#define GLM_GTX_constants GLM_VERSION

// Dependency:
#include "../glm.hpp"
#include "../gtc/half_float.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTX_constants extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_constants
	/// @{

	template <typename T>
	T pi();

	template <typename T>
	GLM_FUNC_QUALIFIER T pi()
	{
		return T(3.14159265358979323846264338327950288);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T root_pi()
	{
		return T(1.772453850905516027);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T half_pi()
	{
		return T(1.57079632679489661923132169163975144);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T quarter_pi()
	{
		return T(0.785398163397448309615660845819875721);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T one_over_pi()
	{
		return T(0.318309886183790671537767526745028724);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T two_over_pi()
	{
		return T(0.636619772367581343075535053490057448);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T two_over_root_pi()
	{
		return T(1.12837916709551257389615890312154517);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T one_over_root_two()
	{
		return T(0.707106781186547524400844362104849039);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T root_half_pi()
	{
		return T(1.253314137315500251);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T root_two_pi()
	{
		return T(2.506628274631000502);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T root_ln_four()
	{
		return T(1.17741002251547469);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T e()
	{
		return T(2.71828182845904523536);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T euler()
	{
		return T(0.577215664901532860606);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T root_two()
	{
		return T(1.41421356237309504880168872420969808);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T ln_two()
	{
		return T(0.693147180559945309417232121458176568);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T ln_ten()
	{
		return T(2.30258509299404568401799145468436421);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T ln_ln_two()
	{
		return T(-0.3665129205816643);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T third()
	{
		return T(0.333333333333333333);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T twothirds()
	{
		return T(0.666666666666666666);
	}

	/// @}
} //namespace glm

#include "constants.inl"

#endif//GLM_GTX_constants
