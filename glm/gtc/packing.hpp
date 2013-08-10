///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
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
/// @ref gtc_packing
/// @file glm/gtc/packing.hpp
/// @date 2013-08-08 / 2013-08-08
/// @author Christophe Riccio
///
/// @see core (dependence)
///
/// @defgroup gtc_packing GLM_GTC_packing
/// @ingroup gtc
/// 
/// @brief This extension provides a set of function to convert vertors to packed
/// formats.
/// 
/// <glm/gtc/packing.hpp> need to be included to use these features.
///////////////////////////////////////////////////////////////////////////////////

#ifndef GLM_GTC_packing
#define GLM_GTC_packing GLM_VERSION

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTC_packing extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_packing
	/// @{

	uint16 packUnorm1x16(float v);
	float unpackUnorm1x16(uint16 v);

	uint64 packUnorm4x16(vec4 const & v);
	vec4 unpackUnorm4x16(uint64 const & v);

	uint16 packSnorm1x16(float v);
	float unpackSnorm1x16(uint16 v);

	uint64 packSnorm4x16(vec4 const & v);
	vec4 unpackSnorm4x16(uint64 const & v);

	uint16 packUnorm2x8(vec2 const & v);
	vec2 unpackUnorm2x8(uint16 v);

	uint16 packSnorm2x8(vec2 const & v);
	vec2 unpackSnorm2x8(uint16 v);

	GLM_FUNC_DECL uint16 packHalf1x16(float const & v);
	GLM_FUNC_DECL float unpackHalf1x16(uint16 const & v);

	/// Returns an unsigned integer obtained by converting the components of a two-component floating-point vector 
	/// to the 16-bit floating-point representation found in the OpenGL Specification, 
	/// and then packing these two 16- bit integers into a 32-bit unsigned integer.
	/// The first vector component specifies the 16 least-significant bits of the result; 
	/// the second component specifies the 16 most-significant bits.
	/// 
	/// @see gtc_packing
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packHalf2x16.xml">GLSL packHalf2x16 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint64 packHalf4x16(vec4 const & v);
	
	/// Returns a two-component floating-point vector with components obtained by unpacking a 32-bit unsigned integer into a pair of 16-bit values, 
	/// interpreting those values as 16-bit floating-point numbers according to the OpenGL Specification, 
	/// and converting them to 32-bit floating-point values.
	/// The first component of the vector is obtained from the 16 least-significant bits of v; 
	/// the second component is obtained from the 16 most-significant bits of v.
	/// 
	/// @see gtc_packing
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/unpackHalf2x16.xml">GLSL unpackHalf2x16 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL vec4 unpackHalf4x16(uint64 const & v);
	
	GLM_FUNC_DECL uint32 packSnorm3x10Snorm1x2(vec4 const & v);
	GLM_FUNC_DECL vec4 unpackSnorm3x10Snorm1x2(uint32 const & v);

	GLM_FUNC_DECL uint32 packI3x10I1x2(ivec4 const & v);
	GLM_FUNC_DECL ivec4 unpackI3x10I1x2(uint32 const & v);

	GLM_FUNC_DECL uint32 packU10U10U10U2(uvec4 const & v);
	GLM_FUNC_DECL uvec4 unpackU10U10U10U2(uint32 const & v);

	GLM_FUNC_DECL uint32 packF11F11F10(vec3 const & v);
	GLM_FUNC_DECL vec3 unpackF11F11F10(uint32 const & v);

	/// @}
}// namespace glm

#include "packing.inl"

#endif//GLM_GTC_packing

