///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2011-05-06
// Licence : This source is under MIT licence
// File    : test/gtc/type_precision.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_MESSAGES
#include <glm/glm.hpp>
#include <glm/gtc/type_precision.hpp>

/*
//typedef i8									i8vec1;		//!< \brief 8bit signed integer scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<i8>					i8vec2;     //!< \brief 8bit signed integer vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<i8>					i8vec3;     //!< \brief 8bit signed integer vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<i8>					i8vec4;     //!< \brief 8bit signed integer vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef i16									i16vec1;	//!< \brief 16bit signed integer scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<i16>					i16vec2;    //!< \brief 16bit signed integer vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<i16>					i16vec3;    //!< \brief 16bit signed integer vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<i16>					i16vec4;    //!< \brief 16bit signed integer vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef i32									i32vec1;	//!< \brief 32bit signed integer scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<i32>					i32vec2;    //!< \brief 32bit signed integer vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<i32>					i32vec3;    //!< \brief 32bit signed integer vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<i32>					i32vec4;    //!< \brief 32bit signed integer vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef i64									i64vec1;	//!< \brief 32bit signed integer scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<i64>					i64vec2;    //!< \brief 64bit signed integer vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<i64>					i64vec3;    //!< \brief 64bit signed integer vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<i64>					i64vec4;    //!< \brief 64bit signed integer vector of 4 components. (from GLM_GTC_type_precision extension)

/////////////////////////////
// Unsigned int vector types 


//typedef u8									u8vec1;		//!< \brief 8bit unsigned integer scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<u8>					u8vec2;     //!< \brief 8bit unsigned integer vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<u8>					u8vec3;     //!< \brief 8bit unsigned integer vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<u8>					u8vec4;     //!< \brief 8bit unsigned integer vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef u16									u16vec1;    //!< \brief 16bit unsigned integer scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<u16>					u16vec2;    //!< \brief 16bit unsigned integer vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<u16>					u16vec3;    //!< \brief 16bit unsigned integer vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<u16>					u16vec4;    //!< \brief 16bit unsigned integer vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef u32									u32vec1;    //!< \brief 32bit unsigned integer scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<u32>					u32vec2;    //!< \brief 32bit unsigned integer vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<u32>					u32vec3;    //!< \brief 32bit unsigned integer vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<u32>					u32vec4;    //!< \brief 32bit unsigned integer vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef u64									u64vec1;    //!< \brief 64bit unsigned integer scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<u64>					u64vec2;    //!< \brief 64bit unsigned integer vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<u64>					u64vec3;    //!< \brief 64bit unsigned integer vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<u64>					u64vec4;    //!< \brief 64bit unsigned integer vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef f16									f16vec1;    //!< \brief Half-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<f16>					f16vec2;    //!< \brief Half-precision floating-point vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<f16>					f16vec3;    //!< \brief Half-precision floating-point vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<f16>					f16vec4;    //!< \brief Half-precision floating-point vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef f32									f32vec1;    //!< \brief Single-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<f32>					f32vec2;    //!< \brief Single-precision floating-point vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<f32>					f32vec3;    //!< \brief Single-precision floating-point vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<f32>					f32vec4;    //!< \brief Single-precision floating-point vector of 4 components. (from GLM_GTC_type_precision extension)

//typedef f64									f64vec1;    //!< \brief Single-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tvec2<f64>					f64vec2;    //!< \brief Double-precision floating-point vector of 2 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec3<f64>					f64vec3;    //!< \brief Double-precision floating-point vector of 3 components. (from GLM_GTC_type_precision extension)
typedef detail::tvec4<f64>					f64vec4;    //!< \brief Double-precision floating-point vector of 4 components. (from GLM_GTC_type_precision extension)

//////////////////////
// Float matrix types 

//typedef f32									fmat1;	//!< \brief Single-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x2<f32>				fmat2;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x3<f32>				fmat3;	//!< \brief Single-precision floating-point 3x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x4<f32>				fmat4;	//!< \brief Single-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)

//typedef f32									fmat1x1;	//!< \brief Single-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x2<f32>				fmat2x2;  //!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x3<f32>				fmat2x3;	//!< \brief Single-precision floating-point 2x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x4<f32>				fmat2x4;	//!< \brief Single-precision floating-point 2x4 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x2<f32>				fmat3x2;	//!< \brief Single-precision floating-point 3x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x3<f32>				fmat3x3;	//!< \brief Single-precision floating-point 3x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x4<f32>				fmat3x4;	//!< \brief Single-precision floating-point 3x4 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x2<f32>				fmat4x2;	//!< \brief Single-precision floating-point 4x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x3<f32>				fmat4x3;	//!< \brief Single-precision floating-point 4x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x4<f32>				fmat4x4;	//!< \brief Single-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)

//typedef f16									f16mat1;    //!< \brief Half-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x2<f16>				f16mat2;	//!< \brief Half-precision floating-point 2x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x3<f16>				f16mat3;	//!< \brief Half-precision floating-point 3x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x4<f16>				f16mat4;	//!< \brief Half-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)

//typedef f16									f16mat1x1;	//!< \brief Half-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x2<f16>				f16mat2x2;	//!< \brief Half-precision floating-point 2x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x3<f16>				f16mat2x3;	//!< \brief Half-precision floating-point 2x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x4<f16>				f16mat2x4;	//!< \brief Half-precision floating-point 2x4 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x2<f16>				f16mat3x2;	//!< \brief Half-precision floating-point 3x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x3<f16>				f16mat3x3;	//!< \brief Half-precision floating-point 3x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x4<f16>				f16mat3x4;	//!< \brief Half-precision floating-point 3x4 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x2<f16>				f16mat4x2;	//!< \brief Half-precision floating-point 4x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x3<f16>				f16mat4x3;	//!< \brief Half-precision floating-point 4x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x4<f16>				f16mat4x4;	//!< \brief Half-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)

//typedef f32									f32mat1;	//!< \brief Single-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x2<f32>				f32mat2;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x3<f32>				f32mat3;	//!< \brief Single-precision floating-point 3x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x4<f32>				f32mat4;	//!< \brief Single-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)

//typedef f32									f32mat1x1;	//!< \brief Single-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x2<f32>				f32mat2x2;  //!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x3<f32>				f32mat2x3;	//!< \brief Single-precision floating-point 2x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x4<f32>				f32mat2x4;	//!< \brief Single-precision floating-point 2x4 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x2<f32>				f32mat3x2;	//!< \brief Single-precision floating-point 3x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x3<f32>				f32mat3x3;	//!< \brief Single-precision floating-point 3x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x4<f32>				f32mat3x4;	//!< \brief Single-precision floating-point 3x4 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x2<f32>				f32mat4x2;	//!< \brief Single-precision floating-point 4x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x3<f32>				f32mat4x3;	//!< \brief Single-precision floating-point 4x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x4<f32>				f32mat4x4;	//!< \brief Single-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)

//typedef f64									f64mat1;	//!< \brief Double-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x2<f64>				f64mat2;	//!< \brief Double-precision floating-point 2x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x3<f64>				f64mat3;	//!< \brief Double-precision floating-point 3x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x4<f64>				f64mat4;	//!< \brief Double-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)

//typedef f64									f64mat1x1;	//!< \brief Double-precision floating-point scalar. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x2<f64>				f64mat2x2;	//!< \brief Double-precision floating-point 2x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x3<f64>				f64mat2x3;	//!< \brief Double-precision floating-point 2x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat2x4<f64>				f64mat2x4;	//!< \brief Double-precision floating-point 2x4 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x2<f64>				f64mat3x2;	//!< \brief Double-precision floating-point 3x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x3<f64>				f64mat3x3;	//!< \brief Double-precision floating-point 3x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat3x4<f64>				f64mat3x4;	//!< \brief Double-precision floating-point 3x4 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x2<f64>				f64mat4x2;	//!< \brief Double-precision floating-point 4x2 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x3<f64>				f64mat4x3;	//!< \brief Double-precision floating-point 4x3 matrix. (from GLM_GTC_type_precision extension)
typedef detail::tmat4x4<f64>				f64mat4x4;	//!< \brief Double-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)
*/
static int test_scalar_size()
{
    return !(
        sizeof(glm::int8) == 1 && 
        sizeof(glm::int16) == 2 && 
        sizeof(glm::int32) == 4 &&
        sizeof(glm::int64) == 8 &&
        sizeof(glm::uint8) == 1 && 
        sizeof(glm::uint16) == 2 && 
        sizeof(glm::uint32) == 4 &&
        sizeof(glm::uint64) == 8 &&
        sizeof(glm::float16) == 2 && 
        sizeof(glm::float32) == 4 &&
        sizeof(glm::float64) == 8);
}

static int test_ivec_size()
{
    return !(
        sizeof(glm::i8vec2) == 2 && 
        sizeof(glm::i8vec3) == 3 && 
        sizeof(glm::i8vec4) == 4 && 
        sizeof(glm::i16vec2) == 4 && 
        sizeof(glm::i16vec3) == 6 && 
        sizeof(glm::i16vec4) == 8 && 
        sizeof(glm::i32vec2) == 8 && 
        sizeof(glm::i32vec3) == 12 && 
        sizeof(glm::i32vec4) == 16 && 
        sizeof(glm::i64vec2) == 16 && 
        sizeof(glm::i64vec3) == 24 && 
        sizeof(glm::i64vec4) == 32);
}

static int test_quat_size()
{
    return !(
        sizeof(glm::f16quat) == 8 && 
        sizeof(glm::f32quat) == 16 && 
        sizeof(glm::f64quat) == 32);
}

int main()
{
	int Error = 0;
    Error += test_scalar_size();
    //Error += test_mat_size();
    Error += test_ivec_size();
    Error += test_quat_size();
	return Error;
}
