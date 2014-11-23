///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
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
/// @ref gtc_type_aligned
/// @file glm/gtc/type_aligned.hpp
/// @date 2014-11-23 / 2014-12-23
/// @author Christophe Riccio
/// 
/// @see core (dependence)
/// @see gtc_quaternion (dependence)
/// 
/// @defgroup gtc_type_aligned GLM_GTC_type_aligned
/// @ingroup gtc
/// 
/// @brief Defines aligned types.
/// 
/// @ref core_precision defines aligned types.
/// 
/// <glm/gtc/type_aligned.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#pragma once

// Dependency:
#include "../gtc/type_precision.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_type_aligned extension included")
#endif

namespace glm
{
	///////////////////////////
	// Signed int vector types 

	/// @addtogroup gtc_type_aligned
	/// @{

	/// Low precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 lowp_int8;
	
	/// Low precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 lowp_int16;

	/// Low precision 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 lowp_int32;

	/// Low precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 lowp_int64;

	/// Low precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 lowp_int8_t;
	
	/// Low precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 lowp_int16_t;

	/// Low precision 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 lowp_int32_t;

	/// Low precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 lowp_int64_t;

	/// Low precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 lowp_i8;
	
	/// Low precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 lowp_i16;

	/// Low precision 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 lowp_i32;

	/// Low precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 lowp_i64;

	/// Medium precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 mediump_int8;
	
	/// Medium precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 mediump_int16;

	/// Medium precision 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 mediump_int32;

	/// Medium precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 mediump_int64;

	/// Medium precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 mediump_int8_t;
	
	/// Medium precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 mediump_int16_t;

	/// Medium precision 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 mediump_int32_t;

	/// Medium precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 mediump_int64_t;

	/// Medium precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 mediump_i8;
	
	/// Medium precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 mediump_i16;

	/// Medium precision 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 mediump_i32;

	/// Medium precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 mediump_i64;

	/// High precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 highp_int8;
	
	/// High precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 highp_int16;

	/// High precision 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 highp_int32;

	/// High precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 highp_int64;

	/// High precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 highp_int8_t;
	
	/// High precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 highp_int16_t;

	/// 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 highp_int32_t;

	/// High precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 highp_int64_t;

	/// High precision 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 highp_i8;
	
	/// High precision 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 highp_i16;

	/// High precision 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 highp_i32;

	/// High precision 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 highp_i64;
	

	/// 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 int8;
	
	/// 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 int16;

	/// 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 int32;

	/// 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 int64;

#if GLM_HAS_EXTENDED_INTEGER_TYPE
	using std::int8_t;
	using std::int16_t;
	using std::int32_t;
	using std::int64_t;
#else
	/// 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 int8_t;
	
	/// 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 int16_t;

	/// 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 int32_t;

	/// 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 int64_t;
#endif

	/// 8 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int8 i8;
	
	/// 16 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int16 i16;

	/// 32 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int32 i32;

	/// 64 bit signed integer type.
	/// @see gtc_type_aligned
	typedef detail::int64 i64;


	/// 8 bit signed integer scalar type.
	/// @see gtc_type_aligned
	typedef tvec1<i8, defaultp> i8vec1;
	
	/// 8 bit signed integer vector of 2 components type.
	/// @see gtc_type_aligned
	typedef tvec2<i8, defaultp> i8vec2;

	/// 8 bit signed integer vector of 3 components type.
	/// @see gtc_type_aligned
	typedef tvec3<i8, defaultp> i8vec3;

	/// 8 bit signed integer vector of 4 components type.
	/// @see gtc_type_aligned
	typedef tvec4<i8, defaultp> i8vec4;


	/// 16 bit signed integer scalar type.
	/// @see gtc_type_aligned
	typedef tvec1<i16, defaultp> i16vec1;
	
	/// 16 bit signed integer vector of 2 components type.
	/// @see gtc_type_aligned
	typedef tvec2<i16, defaultp> i16vec2;

	/// 16 bit signed integer vector of 3 components type.
	/// @see gtc_type_aligned
	typedef tvec3<i16, defaultp> i16vec3;

	/// 16 bit signed integer vector of 4 components type.
	/// @see gtc_type_aligned
	typedef tvec4<i16, defaultp> i16vec4;


	/// 32 bit signed integer scalar type.
	/// @see gtc_type_aligned
	typedef tvec1<i32, defaultp> i32vec1;
	
	/// 32 bit signed integer vector of 2 components type.
	/// @see gtc_type_aligned
	typedef tvec2<i32, defaultp> i32vec2;

	/// 32 bit signed integer vector of 3 components type.
	/// @see gtc_type_aligned
	typedef tvec3<i32, defaultp> i32vec3;

	/// 32 bit signed integer vector of 4 components type.
	/// @see gtc_type_aligned
	typedef tvec4<i32, defaultp> i32vec4;


	/// 64 bit signed integer scalar type.
	/// @see gtc_type_aligned
	typedef tvec1<i64, defaultp> i64vec1;
	
	/// 64 bit signed integer vector of 2 components type.
	/// @see gtc_type_aligned
	typedef tvec2<i64, defaultp> i64vec2;

	/// 64 bit signed integer vector of 3 components type.
	/// @see gtc_type_aligned
	typedef tvec3<i64, defaultp> i64vec3;

	/// 64 bit signed integer vector of 4 components type.
	/// @see gtc_type_aligned
	typedef tvec4<i64, defaultp> i64vec4;


	/////////////////////////////
	// Unsigned int vector types

	/// Low precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 lowp_uint8;
	
	/// Low precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 lowp_uint16;

	/// Low precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 lowp_uint32;

	/// Low precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 lowp_uint64;

	/// Low precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 lowp_uint8_t;
	
	/// Low precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 lowp_uint16_t;

	/// Low precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 lowp_uint32_t;

	/// Low precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 lowp_uint64_t;

	/// Low precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 lowp_u8;
	
	/// Low precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 lowp_u16;

	/// Low precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 lowp_u32;

	/// Low precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 lowp_u64;
	
	/// Medium precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 mediump_uint8;
	
	/// Medium precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 mediump_uint16;

	/// Medium precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 mediump_uint32;

	/// Medium precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 mediump_uint64;

	/// Medium precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 mediump_uint8_t;
	
	/// Medium precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 mediump_uint16_t;

	/// Medium precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 mediump_uint32_t;

	/// Medium precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 mediump_uint64_t;

	/// Medium precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 mediump_u8;
	
	/// Medium precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 mediump_u16;

	/// Medium precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 mediump_u32;

	/// Medium precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 mediump_u64;
	
	/// High precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 highp_uint8;
	
	/// High precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 highp_uint16;

	/// High precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 highp_uint32;

	/// High precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 highp_uint64;

	/// High precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 highp_uint8_t;
	
	/// High precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 highp_uint16_t;

	/// High precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 highp_uint32_t;

	/// High precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 highp_uint64_t;

	/// High precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 highp_u8;
	
	/// High precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 highp_u16;

	/// High precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 highp_u32;

	/// High precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 highp_u64;

	/// Default precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 uint8;
	
	/// Default precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 uint16;

	/// Default precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 uint32;

	/// Default precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 uint64;

#if GLM_HAS_EXTENDED_INTEGER_TYPE
	using std::uint8_t;
	using std::uint16_t;
	using std::uint32_t;
	using std::uint64_t;
#else
	/// Default precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 uint8_t;
	
	/// Default precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 uint16_t;

	/// Default precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 uint32_t;

	/// Default precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 uint64_t;
#endif

	/// Default precision 8 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint8 u8;
	
	/// Default precision 16 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint16 u16;

	/// Default precision 32 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint32 u32;

	/// Default precision 64 bit unsigned integer type.
	/// @see gtc_type_aligned
	typedef detail::uint64 u64;


	/// Default precision 8 bit unsigned integer scalar type.
	/// @see gtc_type_aligned
	typedef tvec1<u8, defaultp> u8vec1;
	
	/// Default precision 8 bit unsigned integer vector of 2 components type.
	/// @see gtc_type_aligned
	typedef tvec2<u8, defaultp> u8vec2;

	/// Default precision 8 bit unsigned integer vector of 3 components type.
	/// @see gtc_type_aligned
	typedef tvec3<u8, defaultp> u8vec3;

	/// Default precision 8 bit unsigned integer vector of 4 components type.
	/// @see gtc_type_aligned
	typedef tvec4<u8, defaultp> u8vec4;


	/// Default precision 16 bit unsigned integer scalar type.
	/// @see gtc_type_aligned
	typedef tvec1<u16, defaultp> u16vec1;
	
	/// Default precision 16 bit unsigned integer vector of 2 components type.
	/// @see gtc_type_aligned
	typedef tvec2<u16, defaultp> u16vec2;

	/// Default precision 16 bit unsigned integer vector of 3 components type.
	/// @see gtc_type_aligned
	typedef tvec3<u16, defaultp> u16vec3;

	/// Default precision 16 bit unsigned integer vector of 4 components type.
	/// @see gtc_type_aligned
	typedef tvec4<u16, defaultp> u16vec4;


	/// Default precision 32 bit unsigned integer scalar type.
	/// @see gtc_type_aligned
	typedef tvec1<u32, defaultp> u32vec1;
	
	/// Default precision 32 bit unsigned integer vector of 2 components type.
	/// @see gtc_type_aligned
	typedef tvec2<u32, defaultp> u32vec2;

	/// Default precision 32 bit unsigned integer vector of 3 components type.
	/// @see gtc_type_aligned
	typedef tvec3<u32, defaultp> u32vec3;

	/// Default precision 32 bit unsigned integer vector of 4 components type.
	/// @see gtc_type_aligned
	typedef tvec4<u32, defaultp> u32vec4;


	/// Default precision 64 bit unsigned integer scalar type.
	/// @see gtc_type_aligned
	typedef tvec1<u64, defaultp> u64vec1;
	
	/// Default precision 64 bit unsigned integer vector of 2 components type.
	/// @see gtc_type_aligned
	typedef tvec2<u64, defaultp> u64vec2;

	/// Default precision 64 bit unsigned integer vector of 3 components type.
	/// @see gtc_type_aligned
	typedef tvec3<u64, defaultp> u64vec3;

	/// Default precision 64 bit unsigned integer vector of 4 components type.
	/// @see gtc_type_aligned
	typedef tvec4<u64, defaultp> u64vec4;


	//////////////////////
	// Float vector types

	/// 32 bit single-precision floating-point scalar.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(float32, aligned_float32, 4);

	/// 64 bit double-precision floating-point scalar.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(float64, aligned_float64, 8);


	/// 32 bit single-precision floating-point scalar.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(float32_t, aligned_float32_t, 4);

	/// 64 bit double-precision floating-point scalar.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(float64_t, aligned_float64_t, 8);


	/// 32 bit single-precision floating-point scalar.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(float32, aligned_f32, 4);

	/// 64 bit double-precision floating-point scalar.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(float64, aligned_f64, 8);


	/// Single-precision floating-point vector of 1 component.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fvec1, aligned_fvec1, 4);

	/// Single-precision floating-point vector of 2 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fvec2, aligned_fvec2, 8);

	/// Single-precision floating-point vector of 3 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fvec3, aligned_fvec3, 12);

	/// Single-precision floating-point vector of 4 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fvec4, aligned_fvec4, 16);

	
	/// Single-precision floating-point vector of 1 component.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32vec1, aligned_f32vec1, 4);

	/// Single-precision floating-point vector of 2 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32vec2, aligned_f32vec2, 8);

	/// Single-precision floating-point vector of 3 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32vec3, aligned_f32vec3, 12);

	/// Single-precision floating-point vector of 4 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32vec4, aligned_f32vec4, 16);


	/// Double-precision floating-point vector of 1 component.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64vec1, aligned_f64vec1, 8);

	/// Double-precision floating-point vector of 2 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64vec2, aligned_f64vec2, 16);

	/// Double-precision floating-point vector of 3 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64vec3, aligned_f64vec3, 24);

	/// Double-precision floating-point vector of 4 components.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64vec4, aligned_f64vec4, 32);


	//////////////////////
	// Float matrix types 

	/// Single-precision floating-point 1x1 matrix.
	/// @see gtc_type_aligned
	//typedef detail::tmat1x1<f32> fmat1;

	/// Single-precision floating-point 2x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat2x2, aligned_fmat2, 16);

	/// Single-precision floating-point 3x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat3x3, aligned_fmat3, 16);

	/// Single-precision floating-point 4x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat4x4, aligned_fmat4, 16);


	/// Single-precision floating-point 1x1 matrix.
	/// @see gtc_type_aligned
	//typedef f32 fmat1x1;

	/// Single-precision floating-point 2x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat2x2, aligned_fmat2x2, 16);

	/// Single-precision floating-point 2x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat2x3, aligned_fmat2x3, 16);

	/// Single-precision floating-point 2x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat2x4, aligned_fmat2x4, 16);

	/// Single-precision floating-point 3x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat3x2, aligned_fmat3x2, 16);

	/// Single-precision floating-point 3x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat3x3, aligned_fmat3x3, 16);

	/// Single-precision floating-point 3x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat3x4, aligned_fmat3x4, 16);

	/// Single-precision floating-point 4x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat4x2, aligned_fmat4x2, 16);

	/// Single-precision floating-point 4x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat4x3, aligned_fmat4x3, 16);

	/// Single-precision floating-point 4x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(fmat4x4, aligned_fmat4x4, 16);


	/// Single-precision floating-point 1x1 matrix.
	/// @see gtc_type_aligned
	//typedef detail::tmat1x1<f32, defaultp> f32mat1;

	/// Single-precision floating-point 2x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat2x2, aligned_f32mat2, 16);

	/// Single-precision floating-point 3x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat3x3, aligned_f32mat3, 16);

	/// Single-precision floating-point 4x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat4x4, aligned_f32mat4, 16);


	/// Single-precision floating-point 1x1 matrix.
	/// @see gtc_type_aligned
	//typedef f32 f32mat1x1;

	/// Single-precision floating-point 2x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat2x2, aligned_f32mat2x2, 16);

	/// Single-precision floating-point 2x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat2x3, aligned_f32mat2x3, 16);

	/// Single-precision floating-point 2x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat2x4, aligned_f32mat2x4, 16);

	/// Single-precision floating-point 3x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat3x2, aligned_f32mat3x2, 16);

	/// Single-precision floating-point 3x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat3x3, aligned_f32mat3x3, 16);

	/// Single-precision floating-point 3x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat3x4, aligned_f32mat3x4, 16);

	/// Single-precision floating-point 4x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat4x2, aligned_f32mat4x2, 16);

	/// Single-precision floating-point 4x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat4x3, aligned_f32mat4x3, 16);

	/// Single-precision floating-point 4x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32mat4x4, aligned_f32mat4x4, 16);


	/// Double-precision floating-point 1x1 matrix.
	/// @see gtc_type_aligned
	//typedef detail::tmat1x1<f64, defaultp> f64mat1;

	/// Double-precision floating-point 2x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat2x2, aligned_f64mat2, 32);

	/// Double-precision floating-point 3x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat3x3, aligned_f64mat3, 32);

	/// Double-precision floating-point 4x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat4x4, aligned_f64mat4, 32);


	/// Double-precision floating-point 1x1 matrix.
	/// @see gtc_type_aligned
	//typedef f64 f64mat1x1;

	/// Double-precision floating-point 2x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat2x2, aligned_f64mat2x2, 32);

	/// Double-precision floating-point 2x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat2x3, aligned_f64mat2x3, 32);

	/// Double-precision floating-point 2x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat2x4, aligned_f64mat2x4, 32);

	/// Double-precision floating-point 3x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat3x2, aligned_f64mat3x2, 32);

	/// Double-precision floating-point 3x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat3x3, aligned_f64mat3x3, 32);

	/// Double-precision floating-point 3x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat3x4, aligned_f64mat3x4, 32);

	/// Double-precision floating-point 4x2 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat4x2, aligned_f64mat4x2, 32);

	/// Double-precision floating-point 4x3 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat4x3, aligned_f64mat4x3, 32);

	/// Double-precision floating-point 4x4 matrix.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64mat4x4, aligned_f64mat4x4, 32);


	//////////////////////////
	// Quaternion types

	/// Single-precision floating-point quaternion.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f32quat, aligned_f32quat, 16);

	/// Double-precision floating-point quaternion.
	/// @see gtc_type_aligned
	GLM_ALIGNED_TYPEDEF(f64quat, aligned_f64quat, 32);

	/// @}
}//namespace glm

#include "type_aligned.inl"
