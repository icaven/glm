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
/// @ref core
/// @file glm/core/type_vec.hpp
/// @date 2010-01-26 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#ifndef glm_core_type_vec
#define glm_core_type_vec

namespace glm{
namespace detail
{
	template <typename T> struct tvec1;
	template <typename T> struct tvec2;
	template <typename T> struct tvec3;
	template <typename T> struct tvec4;
	
	template <typename T>
	struct is_vector
	{
		enum is_vector_enum
		{
			_YES = 0,
			_NO = 1
		};
	};
	
#	define GLM_DETAIL_IS_VECTOR(TYPE)	\
		template <typename T>			\
		struct is_vector<TYPE<T> >		\
		{								\
			enum is_vector_enum			\
			{							\
				_YES = 1,				\
				_NO = 0					\
			};							\
		}
}//namespace detail
	
	typedef detail::tvec1<highp_float>		highp_vec1_t;
	typedef detail::tvec1<mediump_float>	mediump_vec1_t;
	typedef detail::tvec1<lowp_float>		lowp_vec1_t;
	typedef detail::tvec1<highp_int>		highp_ivec1_t;
	typedef detail::tvec1<mediump_int>		mediump_ivec1_t;
	typedef detail::tvec1<lowp_int>			lowp_ivec1_t;
	typedef detail::tvec1<highp_uint>		highp_uvec1_t;
	typedef detail::tvec1<mediump_uint>		mediump_uvec1_t;
	typedef detail::tvec1<lowp_uint>		lowp_uvec1_t;
	
	/// @addtogroup core_precision
	/// @{
	
	/// 2 components vector of high precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<highp_float>		highp_vec2;
	
	/// 2 components vector of medium precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<mediump_float>	mediump_vec2;
	
	/// 2 components vector of low precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<lowp_float>		lowp_vec2;
	
	/// 2 components vector of high precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<highp_int>		highp_ivec2;
	
	/// 2 components vector of medium precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<mediump_int>		mediump_ivec2;
	
	/// 2 components vector of low precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<lowp_int>			lowp_ivec2;
	
	/// 2 components vector of high precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<highp_uint>		highp_uvec2;
	
	/// 2 components vector of medium precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<mediump_uint>		mediump_uvec2;
	
	/// 2 components vector of low precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec2<lowp_uint>		lowp_uvec2;
	
	/// @}
	
	
	/// @addtogroup core_precision
	/// @{
	
	/// 3 components vector of high precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<highp_float>		highp_vec3;
	
	/// 3 components vector of medium precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<mediump_float>	mediump_vec3;
	
	/// 3 components vector of low precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<lowp_float>		lowp_vec3;
	
	/// 3 components vector of high precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<highp_int>		highp_ivec3;
	
	/// 3 components vector of medium precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<mediump_int>		mediump_ivec3;
	
	/// 3 components vector of low precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<lowp_int>			lowp_ivec3;
	
	/// 3 components vector of high precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<highp_uint>		highp_uvec3;
	
	/// 3 components vector of medium precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<mediump_uint>		mediump_uvec3;
	
	/// 3 components vector of low precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec3<lowp_uint>		lowp_uvec3;
	
	/// @}
	
	/// @addtogroup core_precision
	/// @{
	
	/// 4 components vector of high precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<highp_float>		highp_vec4;
	
	/// 4 components vector of medium precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<mediump_float>	mediump_vec4;
	
	/// 4 components vector of low precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<lowp_float>		lowp_vec4;
	
	/// 4 components vector of high precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<highp_int>		highp_ivec4;
	
	/// 4 components vector of medium precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<mediump_int>		mediump_ivec4;
	
	/// 4 components vector of low precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<lowp_int>			lowp_ivec4;
	
	/// 4 components vector of high precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<highp_uint>		highp_uvec4;
	
	/// 4 components vector of medium precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<mediump_uint>		mediump_uvec4;
	
	/// 4 components vector of low precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::tvec4<lowp_uint>		lowp_uvec4;
	
	/// @}
	
	/// @addtogroup core_types
	/// @{
	
	//////////////////////////
	// Float definition
	
#if(defined(GLM_PRECISION_HIGHP_FLOAT))
	typedef highp_vec2			vec2;
	typedef highp_vec3			vec3;
	typedef highp_vec4			vec4;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mediump_vec2		vec2;
	typedef mediump_vec3		vec3;
	typedef mediump_vec4		vec4;
#elif(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef lowp_vec2			vec2;
	typedef lowp_vec3			vec3;
	typedef lowp_vec4			vec4;
#else
	/// 2 components vector of floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_vec2		vec2;
	
	//! 3 components vector of floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_vec3		vec3;
	
	//! 4 components vector of floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_vec4		vec4;
#endif//GLM_PRECISION
	
	//////////////////////////
	// Signed integer definition
	
#if(defined(GLM_PRECISION_HIGHP_INT))
	typedef highp_ivec2			ivec2;
	typedef highp_ivec3			ivec3;
	typedef highp_ivec4			ivec4;
#elif(defined(GLM_PRECISION_MEDIUMP_INT))
	typedef mediump_ivec2		ivec2;
	typedef mediump_ivec3		ivec3;
	typedef mediump_ivec4		ivec4;
#elif(defined(GLM_PRECISION_LOWP_INT))
	typedef lowp_ivec2			ivec2;
	typedef lowp_ivec3			ivec3;
	typedef lowp_ivec4			ivec4;
#else
	//! 2 components vector of signed integer numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_ivec2		ivec2;
	
	//! 3 components vector of signed integer numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_ivec3		ivec3;
	
	//! 4 components vector of signed integer numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_ivec4		ivec4;
#endif//GLM_PRECISION
	
	//////////////////////////
	// Unsigned integer definition
	
#if(defined(GLM_PRECISION_HIGHP_UINT))
	typedef highp_uvec2			uvec2;
	typedef highp_uvec3			uvec3;
	typedef highp_uvec4			uvec4;
#elif(defined(GLM_PRECISION_MEDIUMP_UINT))
	typedef mediump_uvec2		uvec2;
	typedef mediump_uvec3		uvec3;
	typedef mediump_uvec4		uvec4;
#elif(defined(GLM_PRECISION_LOWP_UINT))
	typedef lowp_uvec2			uvec2;
	typedef lowp_uvec3			uvec3;
	typedef lowp_uvec4			uvec4;
#else
	/// 2 components vector of unsigned integer numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_uvec2		uvec2;
	
	/// 3 components vector of unsigned integer numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_uvec3		uvec3;
	
	/// 4 components vector of unsigned integer numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef mediump_uvec4		uvec4;
#endif//GLM_PRECISION
	
	//////////////////////////
	// Boolean definition
	
	//! 2 components vector of boolean.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef detail::tvec2<bool>		bvec2;
	
	//! 3 components vector of boolean.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef detail::tvec3<bool>		bvec3;
	
	//! 4 components vector of boolean.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef detail::tvec4<bool>		bvec4;
	
	//////////////////////////
	// Double definition
	
	//! Vector of 2 double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef detail::tvec2<double>	dvec2;
	
	//! Vector of 3 double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef detail::tvec3<double>	dvec3;
	
	//! Vector of 4 double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef detail::tvec4<double>	dvec4;
	
	/// @}
}//namespace glm

#endif//glm_core_type_vec
