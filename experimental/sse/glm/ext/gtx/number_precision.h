///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-05-10
// Updated : 2007-05-10
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/number_precision.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_half
// - GLM_GTX_double
// - GLM_GTX_integer
// - GLM_GTX_unsigned_integer
// - GLM_GTX_quaternion
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_number_precision__
#define __glm_gtx_number_precision__

// Dependency:
#include "../../glm.h"
#include "../gtx/half.h"
#include "../gtx/double.h"
#include "../gtx/integer.h"
#include "../gtx/unsigned_int.h"
#include "../gtx/quaternion.h"

namespace glm
{
	typedef signed char					__int8GTX;          //!< 8bit signed integer. (from GLM_GTX_number_precision extension)
	typedef signed short				__int16GTX;         //!< 16bit signed integer. (from GLM_GTX_number_precision extension)
	typedef signed int					__int32GTX;         //!< 32bit signed integer. (from GLM_GTX_number_precision extension)
	typedef signed long long			__int64GTX;         //!< 64bit signed integer. (from GLM_GTX_number_precision extension)

	typedef signed char					__i8GTX;            //!< 8bit signed integer. (from GLM_GTX_number_precision extension)
	typedef signed short				__i16GTX;           //!< 16bit signed integer. (from GLM_GTX_number_precision extension)
	typedef signed int					__i32GTX;           //!< 32bit signed integer. (from GLM_GTX_number_precision extension)
	typedef signed long long			__i64GTX;           //!< 64bit signed integer. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<signed char>			__i8vec2GTX;        //!< 8bit signed integer vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<signed char>			__i8vec3GTX;        //!< 8bit signed integer vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<signed char>			__i8vec4GTX;        //!< 8bit signed integer vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<signed short>		__i16vec2GTX;       //!< 16bit signed integer vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<signed short>		__i16vec3GTX;       //!< 16bit signed integer vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<signed short>		__i16vec4GTX;       //!< 16bit signed integer vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<signed int>			__i32vec2GTX;       //!< 32bit signed integer vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<signed int>			__i32vec3GTX;       //!< 32bit signed integer vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<signed int>			__i32vec4GTX;       //!< 32bit signed integer vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<signed long long>	__i64vec2GTX;       //!< 64bit signed integer vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<signed long long>	__i64vec3GTX;       //!< 64bit signed integer vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<signed long long>	__i64vec4GTX;       //!< 64bit signed integer vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef unsigned char				__uint8GTX;         //!< 8bit unsigned integer. (from GLM_GTX_number_precision extension)
	typedef unsigned short				__uint16GTX;        //!< 16bit unsigned integer. (from GLM_GTX_number_precision extension)
	typedef unsigned int				__uint32GTX;        //!< 32bit unsigned integer. (from GLM_GTX_number_precision extension)
	typedef unsigned long long			__uint64GTX;        //!< 64bit unsigned integer. (from GLM_GTX_number_precision extension)

	typedef unsigned char				__u8GTX;            //!< 8bit unsigned integer. (from GLM_GTX_number_precision extension)
	typedef unsigned short				__u16GTX;           //!< 16bit unsigned integer. (from GLM_GTX_number_precision extension)
	typedef unsigned int				__u32GTX;           //!< 32bit unsigned integer. (from GLM_GTX_number_precision extension)
	typedef unsigned long long			__u64GTX;           //!< 64bit unsigned integer. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<unsigned char>		__u8vec2GTX;        //!< 8bit unsigned integer vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<unsigned char>		__u8vec3GTX;        //!< 8bit unsigned integer vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<unsigned char>		__u8vec4GTX;        //!< 8bit unsigned integer vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<unsigned short>		__u16vec2GTX;       //!< 16bit unsigned integer vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<unsigned short>		__u16vec3GTX;       //!< 16bit unsigned integer vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<unsigned short>		__u16vec4GTX;       //!< 16bit unsigned integer vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<unsigned int>		__u32vec2GTX;       //!< 32bit unsigned integer vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<unsigned int>		__u32vec3GTX;       //!< 32bit unsigned integer vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<unsigned int>		__u32vec4GTX;       //!< 32bit unsigned integer vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<unsigned long long>	__u64vec2GTX;       //!< 64bit unsigned integer vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<unsigned long long>	__u64vec3GTX;       //!< 64bit unsigned integer vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<unsigned long long>	__u64vec4GTX;       //!< 64bit unsigned integer vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef __halfGTX					__float16GTX;       //!< Half-precision floating-point number. (from GLM_GTX_number_precision extension)
	typedef float						__float32GTX;       //!< Single-precision floating-point number. (from GLM_GTX_number_precision extension)
	typedef double						__float64GTX;       //!< Double-precision floating-point number. (from GLM_GTX_number_precision extension)

	typedef __halfGTX					__f16GTX;           //!< Half-precision floating-point number. (from GLM_GTX_number_precision extension)
	typedef float						__f32GTX;           //!< Single-precision floating-point number. (from GLM_GTX_number_precision extension)
	typedef double						__f64GTX;           //!< Double-precision floating-point number. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<__halfGTX>			__f16vec2GTX;       //!< Half-precision floating-point vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<__halfGTX>			__f16vec3GTX;       //!< Half-precision floating-point vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<__halfGTX>			__f16vec4GTX;       //!< Half-precision floating-point vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<float>				__f32vec2GTX;       //!< Single-precision floating-point vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<float>				__f32vec3GTX;       //!< Single-precision floating-point vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<float>				__f32vec4GTX;       //!< Single-precision floating-point vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xvec2<double>				__f64vec2GTX;       //!< Double-precision floating-point vector of 2 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec3<double>				__f64vec3GTX;       //!< Double-precision floating-point vector of 3 components. (from GLM_GTX_number_precision extension)
	typedef detail::_xvec4<double>				__f64vec4GTX;       //!< Double-precision floating-point vector of 4 components. (from GLM_GTX_number_precision extension)

	typedef detail::_xmat2<__halfGTX>			__f16mat2GTX;       //!< Half-precision floating-point 2x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3<__halfGTX>			__f16mat3GTX;       //!< Half-precision floating-point 3x3 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4<__halfGTX>			__f16mat4GTX;       //!< Half-precision floating-point 4x4 matrix. (from GLM_GTX_number_precision extension)

	typedef detail::_xmat2x3<__halfGTX>			__f16mat2x3GTX;     //!< Half-precision floating-point 2x3 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat2x4<__halfGTX>			__f16mat2x4GTX;     //!< Half-precision floating-point 2x4 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3x2<__halfGTX>			__f16mat3x2GTX;     //!< Half-precision floating-point 3x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3x4<__halfGTX>			__f16mat3x4GTX;     //!< Half-precision floating-point 3x4 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4x2<__halfGTX>			__f16mat4x2GTX;     //!< Half-precision floating-point 4x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4x3<__halfGTX>			__f16mat4x3GTX;     //!< Half-precision floating-point 4x3 matrix. (from GLM_GTX_number_precision extension)

	typedef detail::_xmat2<float>				__f32mat2GTX;       //!< Single-precision floating-point 2x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3<float>				__f32mat3GTX;       //!< Single-precision floating-point 3x3 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4<float>				__f32mat4GTX;       //!< Single-precision floating-point 4x4 matrix. (from GLM_GTX_number_precision extension)

	typedef detail::_xmat2x3<float>				__f32mat2x3GTX;     //!< Single-precision floating-point 2x3 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat2x4<float>				__f32mat2x4GTX;     //!< Single-precision floating-point 2x4 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3x2<float>				__f32mat3x2GTX;     //!< Single-precision floating-point 3x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3x4<float>				__f32mat3x4GTX;     //!< Single-precision floating-point 3x4 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4x2<float>				__f32mat4x2GTX;     //!< Single-precision floating-point 4x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4x3<float>				__f32mat4x3GTX;     //!< Single-precision floating-point 4x3 matrix. (from GLM_GTX_number_precision extension)

	typedef detail::_xmat2<double>				__f64mat2GTX;       //!< Double-precision floating-point 2x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3<double>				__f64mat3GTX;       //!< Double-precision floating-point 3x3 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4<double>				__f64mat4GTX;       //!< Double-precision floating-point 4x4 matrix. (from GLM_GTX_number_precision extension)

	typedef detail::_xmat2x3<float>				__f64mat2x3GTX;     //!< Double-precision floating-point 2x3 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat2x4<float>				__f64mat2x4GTX;     //!< Double-precision floating-point 2x4 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3x2<float>				__f64mat3x2GTX;     //!< Double-precision floating-point 3x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat3x4<float>				__f64mat3x4GTX;     //!< Double-precision floating-point 3x4 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4x2<float>				__f64mat4x2GTX;     //!< Double-precision floating-point 4x2 matrix. (from GLM_GTX_number_precision extension)
	typedef detail::_xmat4x3<float>				__f64mat4x3GTX;     //!< Double-precision floating-point 4x3 matrix. (from GLM_GTX_number_precision extension)

	typedef detail::_xquat<__halfGTX>			__f16quatGTX;       //!< Half-precision floating-point quaternion. (from GLM_GTX_number_precision extension)
	typedef detail::_xquat<float>				__f32quatGTX;       //!< Single-precision floating-point quaternion. (from GLM_GTX_number_precision extension)
	typedef detail::_xquat<double>				__f64quatGTX;       //!< Double-precision floating-point quaternion. (from GLM_GTX_number_precision extension)

	namespace gtx
	{
		//! GLM_GTX_number_precision extension: Defined size types.
		namespace number_precision
		{
			typedef signed char					int8;       //!< 8bit signed integer. (from GLM_GTX_number_precision extension)
			typedef signed short				int16;      //!< 16bit signed integer. (from GLM_GTX_number_precision extension)
			typedef signed int					int32;      //!< 32bit signed integer. (from GLM_GTX_number_precision extension)
			typedef signed long long			int64;      //!< 64bit signed integer. (from GLM_GTX_number_precision extension)

			typedef signed char					i8;         //!< 8bit signed integer. (from GLM_GTX_number_precision extension)
			typedef signed short				i16;        //!< 16bit signed integer. (from GLM_GTX_number_precision extension)
			typedef signed int					i32;        //!< 32bit signed integer. (from GLM_GTX_number_precision extension)
			typedef signed long long			i64;        //!< 64bit signed integer. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<signed char>			i8vec2;     //!< 8bit signed integer vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<signed char>			i8vec3;     //!< 8bit signed integer vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<signed char>			i8vec4;     //!< 8bit signed integer vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<signed short>		i16vec2;    //!< 16bit signed integer vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<signed short>		i16vec3;    //!< 16bit signed integer vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<signed short>		i16vec4;    //!< 16bit signed integer vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<signed int>			i32vec2;    //!< 32bit signed integer vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<signed int>			i32vec3;    //!< 32bit signed integer vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<signed int>			i32vec4;    //!< 32bit signed integer vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<signed long long>	i64vec2;    //!< 64bit signed integer vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<signed long long>	i64vec3;    //!< 64bit signed integer vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<signed long long>	i64vec4;    //!< 64bit signed integer vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef unsigned char				uint8;      //!< 8bit unsigned integer. (from GLM_GTX_number_precision extension)
			typedef unsigned short				uint16;     //!< 16bit unsigned integer. (from GLM_GTX_number_precision extension)
			typedef unsigned int				uint32;     //!< 32bit unsigned integer. (from GLM_GTX_number_precision extension)
			typedef unsigned long long			uint64;     //!< 64bit unsigned integer. (from GLM_GTX_number_precision extension)

			typedef unsigned char				u8;         //!< 8bit unsigned integer. (from GLM_GTX_number_precision extension)
			typedef unsigned short				u16;        //!< 16bit unsigned integer. (from GLM_GTX_number_precision extension)
			typedef unsigned int				u32;        //!< 32bit unsigned integer. (from GLM_GTX_number_precision extension)
			typedef unsigned long long			u64;        //!< 64bit unsigned integer. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<unsigned char>		u8vec2;     //!< 8bit unsigned integer vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<unsigned char>		u8vec3;     //!< 8bit unsigned integer vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<unsigned char>		u8vec4;     //!< 8bit unsigned integer vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<unsigned short>		u16vec2;    //!< 16bit unsigned integer vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<unsigned short>		u16vec3;    //!< 16bit unsigned integer vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<unsigned short>		u16vec4;    //!< 16bit unsigned integer vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<unsigned int>		u32vec2;    //!< 32bit unsigned integer vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<unsigned int>		u32vec3;    //!< 32bit unsigned integer vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<unsigned int>		u32vec4;    //!< 32bit unsigned integer vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<unsigned long long>	u64vec2;    //!< 64bit unsigned integer vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<unsigned long long>	u64vec3;    //!< 64bit unsigned integer vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<unsigned long long>	u64vec4;    //!< 64bit unsigned integer vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef __halfGTX					float16;    //!< Half-precision floating-point number. (from GLM_GTX_number_precision extension)
			typedef float						float32;    //!< Single-precision floating-point number. (from GLM_GTX_number_precision extension)
			typedef double						float64;    //!< Double-precision floating-point number. (from GLM_GTX_number_precision extension)

			typedef __halfGTX					f16;        //!< Half-precision floating-point number. (from GLM_GTX_number_precision extension)
			typedef float						f32;        //!< Single-precision floating-point number. (from GLM_GTX_number_precision extension)
			typedef double						f64;        //!< Double-precision floating-point number. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<__halfGTX>			f16vec2;    //!< Half-precision floating-point vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<__halfGTX>			f16vec3;    //!< Half-precision floating-point vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<__halfGTX>			f16vec4;    //!< Half-precision floating-point vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<float>				f32vec2;    //!< Single-precision floating-point vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<float>				f32vec3;    //!< Single-precision floating-point vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<float>				f32vec4;    //!< Single-precision floating-point vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xvec2<double>				f64vec2;    //!< Double-precision floating-point vector of 2 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec3<double>				f64vec3;    //!< Double-precision floating-point vector of 3 components. (from GLM_GTX_number_precision extension)
			typedef detail::_xvec4<double>				f64vec4;    //!< Double-precision floating-point vector of 4 components. (from GLM_GTX_number_precision extension)

			typedef detail::_xmat2<__halfGTX>			f16mat2;    //!< Half-precision floating-point 2x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3<__halfGTX>			f16mat3;    //!< Half-precision floating-point 3x3 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4<__halfGTX>			f16mat4;    //!< Half-precision floating-point 4x4 matrix. (from GLM_GTX_number_precision extension)

			typedef detail::_xmat2x3<__halfGTX>			f16mat2x3;  //!< Half-precision floating-point 2x3 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat2x4<__halfGTX>			f16mat2x4;  //!< Half-precision floating-point 2x4 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3x2<__halfGTX>			f16mat3x2;  //!< Half-precision floating-point 3x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3x4<__halfGTX>			f16mat3x4;  //!< Half-precision floating-point 3x4 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4x2<__halfGTX>			f16mat4x2;  //!< Half-precision floating-point 4x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4x3<__halfGTX>			f16mat4x3;  //!< Half-precision floating-point 4x3 matrix. (from GLM_GTX_number_precision extension)

			typedef detail::_xmat2<float>				f32mat2;    //!< Single-precision floating-point 2x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3<float>				f32mat3;    //!< Single-precision floating-point 3x3 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4<float>				f32mat4;    //!< Single-precision floating-point 4x4 matrix. (from GLM_GTX_number_precision extension)

			typedef detail::_xmat2x3<float>				f32mat2x3;  //!< Single-precision floating-point 2x3 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat2x4<float>				f32mat2x4;  //!< Single-precision floating-point 2x4 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3x2<float>				f32mat3x2;  //!< Single-precision floating-point 3x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3x4<float>				f32mat3x4;  //!< Single-precision floating-point 3x4 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4x2<float>				f32mat4x2;  //!< Single-precision floating-point 4x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4x3<float>				f32mat4x3;  //!< Single-precision floating-point 4x3 matrix. (from GLM_GTX_number_precision extension)

			typedef detail::_xmat2<double>				f64mat2;    //!< Double-precision floating-point 2x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3<double>				f64mat3;    //!< Double-precision floating-point 3x3 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4<double>				f64mat4;    //!< Double-precision floating-point 4x4 matrix. (from GLM_GTX_number_precision extension)

			typedef detail::_xmat2x3<double>			f64mat2x3;  //!< Double-precision floating-point 2x3 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat2x4<double>			f64mat2x4;  //!< Double-precision floating-point 2x4 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3x2<double>			f64mat3x2;  //!< Double-precision floating-point 3x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat3x4<double>			f64mat3x4;  //!< Double-precision floating-point 3x4 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4x2<double>			f64mat4x2;  //!< Double-precision floating-point 4x2 matrix. (from GLM_GTX_number_precision extension)
			typedef detail::_xmat4x3<double>			f64mat4x3;  //!< Double-precision floating-point 4x3 matrix. (from GLM_GTX_number_precision extension)

			typedef detail::_xquat<__halfGTX>			f16quat;    //!< Half-precision floating-point quaternion. (from GLM_GTX_number_precision extension)
			typedef detail::_xquat<float>				f32quat;    //!< Single-precision floating-point quaternion. (from GLM_GTX_number_precision extension)
			typedef detail::_xquat<double>				f64quat;    //!< Double-precision floating-point quaternion. (from GLM_GTX_number_precision extension)
		}
	}
}

#define GLM_GTX_number_precision namespace gtx::number_precision

#include "number_precision.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_number_precision;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_number_precision__
