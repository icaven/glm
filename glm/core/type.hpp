///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-01-08
// Updated : 2011-06-06
// Licence : This source is under MIT License
// File    : glm/core/type.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_core_type
#define glm_core_type

#include "type_half.hpp"
#include "type_float.hpp"
#include "type_int.hpp"

#include "type_gentype.hpp"

#include "type_vec1.hpp"
#include "type_vec2.hpp"
#include "type_vec3.hpp"
#include "type_vec4.hpp"

#include "type_mat2x2.hpp"
#include "type_mat2x3.hpp"
#include "type_mat2x4.hpp"
#include "type_mat3x2.hpp"
#include "type_mat3x3.hpp"
#include "type_mat3x4.hpp"
#include "type_mat4x2.hpp"
#include "type_mat4x3.hpp"
#include "type_mat4x4.hpp"

namespace glm
{
	//////////////////////////
	// Float definition

#if(defined(GLM_PRECISION_HIGHP_FLOAT))
	typedef highp_vec2          vec2;
	typedef highp_vec3          vec3;
	typedef highp_vec4          vec4;
	typedef highp_mat2x2		mat2x2;
	typedef highp_mat2x3		mat2x3;
	typedef highp_mat2x4		mat2x4;
	typedef highp_mat3x2		mat3x2;
	typedef highp_mat3x3		mat3x3;
	typedef highp_mat3x4		mat3x4;
	typedef highp_mat4x2		mat4x2;
	typedef highp_mat4x3		mat4x3;
	typedef highp_mat4x4		mat4x4;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mediump_vec2		vec2;
	typedef mediump_vec3		vec3;
	typedef mediump_vec4		vec4;
	typedef mediump_mat2x2      mat2x2;
	typedef mediump_mat2x3      mat2x3;
	typedef mediump_mat2x4      mat2x4;
	typedef mediump_mat3x2      mat3x2;
	typedef mediump_mat3x3      mat3x3;
	typedef mediump_mat3x4      mat3x4;
	typedef mediump_mat4x2      mat4x2;
	typedef mediump_mat4x3      mat4x3;
	typedef mediump_mat4x4      mat4x4;
#elif(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef lowp_vec2			vec2;
	typedef lowp_vec3			vec3;
	typedef lowp_vec4			vec4;
	typedef lowp_mat2x2			mat2x2;
	typedef lowp_mat2x3			mat2x3;
	typedef lowp_mat2x4			mat2x4;
	typedef lowp_mat3x2			mat3x2;
	typedef lowp_mat3x3			mat3x3;
	typedef lowp_mat3x4			mat3x4;
	typedef lowp_mat4x2			mat4x2;
	typedef lowp_mat4x3			mat4x3;
	typedef lowp_mat4x4			mat4x4;
#else
	//! 2 components vector of floating-point numbers. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef mediump_vec2		vec2;

	//! 3 components vector of floating-point numbers. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef mediump_vec3		vec3;

	//! 4 components vector of floating-point numbers. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef mediump_vec4		vec4;

	//! 2 columns of 2 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat2x2		mat2x2;

	//! 2 columns of 3 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat2x3		mat2x3;

	//! 2 columns of 4 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat2x4		mat2x4;

	//! 3 columns of 2 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat3x2		mat3x2;

	//! 3 columns of 3 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat3x3		mat3x3;

	//! 3 columns of 4 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat3x4		mat3x4;

	//! 4 columns of 2 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat4x2		mat4x2;

	//! 4 columns of 3 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat4x3		mat4x3;

	//! 4 columns of 4 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mediump_mat4x4		mat4x4;

#endif//GLM_PRECISION

	//! 2 columns of 2 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mat2x2							mat2;

	//! 3 columns of 3 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mat3x3							mat3;

	//! 4 columns of 4 components matrix of floating-point numbers. 
	//! (From GLSL 1.30.8 specification, section 4.1.6 Matrices)
	//! \ingroup core_types
	typedef mat4x4							mat4;

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
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef mediump_ivec2		ivec2;

	//! 3 components vector of signed integer numbers. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef mediump_ivec3		ivec3;

	//! 4 components vector of signed integer numbers. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
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
	//! 2 components vector of unsigned integer numbers. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef mediump_uvec2		uvec2;

	//! 3 components vector of unsigned integer numbers. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef mediump_uvec3		uvec3;

	//! 4 components vector of unsigned integer numbers. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef mediump_uvec4		uvec4;
#endif//GLM_PRECISION

	//////////////////////////
	// Boolean definition

	//! 2 components vector of boolean. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef detail::tvec2<bool>		bvec2;

	//! 3 components vector of boolean. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef detail::tvec3<bool>		bvec3;

	//! 4 components vector of boolean. 
	//! From GLSL 1.30.8 specification, section 4.1.5 Vectors.
	//! \ingroup core_types
	typedef detail::tvec4<bool>		bvec4;

	//////////////////////////
	// Double definition

	//! Vector of 2 double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tvec2<double>	dvec2;

	//! Vector of 3 double-precision floating-point numbers.
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tvec3<double>	dvec3;

	//! Vector of 4 double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tvec4<double>	dvec4;

	//! 2 * 2 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat2x2<double>	dmat2;

	//! 3 * 3 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat3x3<double>	dmat3;

	//! 4 * 4 matrix of double-precision floating-point numbers.
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat4x4<double>	dmat4;

	//! 2 * 2 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat2x2<double>	dmat2x2;

	//! 2 * 3 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat2x3<double>	dmat2x3;

	//! 2 * 4 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat2x4<double>	dmat2x4;

	//! 3 * 2 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat3x2<double>	dmat3x2;

	//! 3 * 3 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat3x3<double>	dmat3x3;

	//! 3 * 4 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat3x4<double>	dmat3x4;

	//! 4 * 2 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat4x2<double>	dmat4x2;

	//! 4 * 3 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat4x3<double>	dmat4x3;

	//! 4 * 4 matrix of double-precision floating-point numbers. 
	//! From GLSL 4.00.8 specification, section 4.1 Basic Types.
	//! \ingroup core_types
	typedef detail::tmat4x4<double>	dmat4x4;

}//namespace glm

#endif//glm_core_type
