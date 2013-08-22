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

	/// First, converts the normalized floating-point value v into a 8-bit integer value.
	/// Then, the results are packed into the returned 8-bit unsigned integer.
	///
	/// The conversion for component c of v to fixed point is done as follows:
	/// packUnorm1x8:	round(clamp(c, 0, +1) * 255.0)
	///
	/// @see gtc_packing
	/// @see uint16 packUnorm2x8(vec2 const & v)
	/// @see uint32 packUnorm4x8(vec4 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packUnorm4x8.xml">GLSL packUnorm4x8 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint8 packUnorm1x8(float const & v);
	GLM_FUNC_DECL float unpackUnorm1x8(uint8 v);

	/// First, converts each component of the normalized floating-point value v into 8-bit integer values.
	/// Then, the results are packed into the returned 16-bit unsigned integer.
	///
	/// The conversion for component c of v to fixed point is done as follows:
	/// packUnorm2x8:	round(clamp(c, 0, +1) * 255.0)
	///
	/// The first component of the vector will be written to the least significant bits of the output;
	/// the last component will be written to the most significant bits.
	///
	/// @see gtc_packing
	/// @see uint8 packUnorm1x8(float const & v)
	/// @see uint32 packUnorm4x8(vec4 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packUnorm4x8.xml">GLSL packUnorm4x8 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint16 packUnorm2x8(vec2 const & v);
	GLM_FUNC_DECL vec2 unpackUnorm2x8(uint16 v);
	
	/// First, converts the normalized floating-point value v into 8-bit integer value.
	/// Then, the results are packed into the returned 8-bit unsigned integer.
	///
	/// The conversion to fixed point is done as follows:
	/// packSnorm1x8:	round(clamp(s, -1, +1) * 127.0)
	///
	/// @see gtc_packing
	/// @see uint16 packSnorm2x8(vec2 const & v)
	/// @see uint32 packSnorm4x8(vec4 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packSnorm4x8.xml">GLSL packSnorm4x8 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint8 packSnorm1x8(float const & s);
	GLM_FUNC_DECL float unpackSnorm1x8(uint8 p);
	
	/// First, converts each component of the normalized floating-point value v into 8-bit integer values.
	/// Then, the results are packed into the returned 16-bit unsigned integer.
	///
	/// The conversion for component c of v to fixed point is done as follows:
	/// packSnorm2x8:	round(clamp(c, -1, +1) * 127.0)
	///
	/// The first component of the vector will be written to the least significant bits of the output;
	/// the last component will be written to the most significant bits.
	///
	/// @see gtc_packing
	/// @see uint8 packSnorm1x8(float const & v)
	/// @see uint32 packSnorm4x8(vec4 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packSnorm4x8.xml">GLSL packSnorm4x8 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint16 packSnorm2x8(vec2 const & v);
	GLM_FUNC_DECL vec2 unpackSnorm2x8(uint16 p);
	
	/// First, converts the normalized floating-point value v into a 16-bit integer value.
	/// Then, the results are packed into the returned 16-bit unsigned integer.
	///
	/// The conversion for component c of v to fixed point is done as follows:
	/// packUnorm1x16:	round(clamp(c, 0, +1) * 65535.0)
	///
	/// @see gtc_packing
	/// @see uint16 packSnorm1x16(float const & v)
	/// @see uint64 packSnorm4x16(vec4 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packUnorm4x8.xml">GLSL packUnorm4x8 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint16 packUnorm1x16(float v);

	/// First, unpacks a single 16-bit unsigned integer p into a of 16-bit unsigned integers. 
	/// Then, the value is converted to a normalized floating-point value to generate the returned scalar.
	/// 
	/// The conversion for unpacked fixed-point value f to floating point is done as follows:
	/// unpackUnorm1x16: f / 65535.0 
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/unpackUnorm2x16.xml">GLSL unpackUnorm2x16 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL float unpackUnorm1x16(uint16 p);

	/// First, converts each component of the normalized floating-point value v into 16-bit integer values.
	/// Then, the results are packed into the returned 64-bit unsigned integer.
	///
	/// The conversion for component c of v to fixed point is done as follows:
	/// packUnorm4x16:	round(clamp(c, 0, +1) * 65535.0)
	///
	/// The first component of the vector will be written to the least significant bits of the output;
	/// the last component will be written to the most significant bits.
	///
	/// @see gtc_packing
	/// @see uint16 packUnorm1x16(float const & v)
	/// @see uint32 packUnorm2x16(vec2 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packUnorm4x8.xml">GLSL packUnorm4x8 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint64 packUnorm4x16(vec4 const & v);

	/// First, unpacks a single 64-bit unsigned integer p into four 16-bit unsigned integers. 
	/// Then, each component is converted to a normalized floating-point value to generate the returned four-component vector.
	/// 
	/// The conversion for unpacked fixed-point value f to floating point is done as follows:
	/// unpackUnormx4x16: f / 65535.0 
	/// 
	/// The first component of the returned vector will be extracted from the least significant bits of the input; 
	/// the last component will be extracted from the most significant bits.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/unpackUnorm2x16.xml">GLSL unpackUnorm2x16 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL vec4 unpackUnorm4x16(uint64 const & p);

	/// First, converts the normalized floating-point value v into 16-bit integer value.
	/// Then, the results are packed into the returned 16-bit unsigned integer.
	///
	/// The conversion to fixed point is done as follows:
	/// packSnorm1x8:	round(clamp(s, -1, +1) * 32767.0)
	///
	/// @see gtc_packing
	/// @see uint32 packSnorm2x16(vec2 const & v)
	/// @see uint64 packSnorm4x16(vec4 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packSnorm4x8.xml">GLSL packSnorm4x8 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint16 packSnorm1x16(float v);
	GLM_FUNC_DECL float unpackSnorm1x16(uint16 p);

	/// First, converts each component of the normalized floating-point value v into 16-bit integer values.
	/// Then, the results are packed into the returned 64-bit unsigned integer.
	///
	/// The conversion for component c of v to fixed point is done as follows:
	/// packSnorm2x8:	round(clamp(c, -1, +1) * 32767.0)
	///
	/// The first component of the vector will be written to the least significant bits of the output;
	/// the last component will be written to the most significant bits.
	///
	/// @see gtc_packing
	/// @see uint16 packSnorm1x16(float const & v)
	/// @see uint32 packSnorm2x16(vec2 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packSnorm4x8.xml">GLSL packSnorm4x8 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint64 packSnorm4x16(vec4 const & v);
	GLM_FUNC_DECL vec4 unpackSnorm4x16(uint64 const & p);
	
	/// Returns an unsigned integer obtained by converting the components of a floating-point scalar
	/// to the 16-bit floating-point representation found in the OpenGL Specification,
	/// and then packing this 16-bit value into a 16-bit unsigned integer.
	///
	/// @see gtc_packing
	/// @see uint32 packHalf2x16(vec2 const & v)
	/// @see uint64 packHalf4x16(vec4 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packHalf2x16.xml">GLSL packHalf2x16 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint16 packHalf1x16(float const & v);
	
	/// Returns a floating-point scalar with components obtained by unpacking a 16-bit unsigned integer into a 16-bit value,
	/// interpreted as a 16-bit floating-point number according to the OpenGL Specification,
	/// and converting it to 32-bit floating-point values.
	///
	/// @see gtc_packing
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/unpackHalf2x16.xml">GLSL unpackHalf2x16 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL float unpackHalf1x16(uint16 const & v);

	/// Returns an unsigned integer obtained by converting the components of a four-component floating-point vector 
	/// to the 16-bit floating-point representation found in the OpenGL Specification, 
	/// and then packing these four 16-bit values into a 64-bit unsigned integer.
	/// The first vector component specifies the 16 least-significant bits of the result; 
	/// the forth component specifies the 16 most-significant bits.
	/// 
	/// @see gtc_packing
	/// @see uint16 packHalf1x16(float const & v)
	/// @see uint32 packHalf2x16(vec2 const & v)
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/packHalf2x16.xml">GLSL packHalf2x16 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL uint64 packHalf4x16(vec4 const & v);
	
	/// Returns a four-component floating-point vector with components obtained by unpacking a 64-bit unsigned integer into four 16-bit values,
	/// interpreting those values as 16-bit floating-point numbers according to the OpenGL Specification, 
	/// and converting them to 32-bit floating-point values.
	/// The first component of the vector is obtained from the 16 least-significant bits of v; 
	/// the forth component is obtained from the 16 most-significant bits of v.
	/// 
	/// @see gtc_packing
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/unpackHalf2x16.xml">GLSL unpackHalf2x16 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	GLM_FUNC_DECL vec4 unpackHalf4x16(uint64 const & v);

	GLM_FUNC_DECL uint32 packI10I10I10I2(ivec4 const & v);
	GLM_FUNC_DECL ivec4 unpackI10I10I10I2(uint32 const & v);

	GLM_FUNC_DECL uint32 packU10U10U10U2(uvec4 const & v);
	GLM_FUNC_DECL uvec4 unpackU10U10U10U2(uint32 const & v);

	GLM_FUNC_DECL uint32 packSnorm3x10_1x2(vec4 const & v);
	GLM_FUNC_DECL vec4 unpackSnorm3x10_1x2(uint32 const & v);

	GLM_FUNC_DECL uint32 packF11F11F10(vec3 const & v);
	GLM_FUNC_DECL vec3 unpackF11F11F10(uint32 const & v);

	/// @}
}// namespace glm

#include "packing.inl"

#endif//GLM_GTC_packing

