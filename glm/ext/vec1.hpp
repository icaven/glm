/// @ref ext_vec1
/// @file glm/ext/vec1.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_vec1 GLM_EXT_vec1
/// @ingroup ext
///
/// Include <glm/ext/vec1.hpp> to use the features of this extension.
///
/// Add vec1, ivec1, uvec1 and bvec1 types.

#pragma once

#include "../detail/type_vec1.hpp"
#include <cstddef>

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_vec1 extension included")
#endif

namespace glm
{
	/// 1 component vector of single-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @see ext_vec1
	typedef vec<1, float, highp>		highp_vec1;

	/// 1 component vector of single-precision floating-point numbers using medium precision arithmetic in term of ULPs.
	///
	/// @see ext_vec1
	typedef vec<1, float, mediump>		mediump_vec1;

	/// 1 component vector of single-precision floating-point numbers using low precision arithmetic in term of ULPs.
	///
	/// @see ext_vec1
	typedef vec<1, float, lowp>			lowp_vec1;

	/// 1 component vector of double-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @see ext_vec1
	typedef vec<1, double, highp>		highp_dvec1;

	/// 1 component vector of double-precision floating-point numbers using medium precision arithmetic in term of ULPs.
	///
	/// @see ext_vec1
	typedef vec<1, double, mediump>		mediump_dvec1;

	/// 1 component vector of double-precision floating-point numbers using low precision arithmetic in term of ULPs.
	///
	/// @see ext_vec1
	typedef vec<1, double, lowp>		lowp_dvec1;

	/// 1 component vector of signed integer numbers.
	///
	/// @see ext_vec1
	typedef vec<1, int, highp>			highp_ivec1;

	/// 1 component vector of signed integer numbers.
	///
	/// @see ext_vec1
	typedef vec<1, int, mediump>		mediump_ivec1;

	/// 1 component vector of signed integer numbers.
	///
	/// @see ext_vec1
	typedef vec<1, int, lowp>			lowp_ivec1;

	/// 1 component vector of unsigned integer numbers.
	///
	/// @see ext_vec1
	typedef vec<1, uint, highp>			highp_uvec1;

	/// 1 component vector of unsigned integer numbers.
	///
	/// @see ext_vec1
	typedef vec<1, uint, mediump>		mediump_uvec1;

	/// 1 component vector of unsigned integer numbers.
	///
	/// @see ext_vec1
	typedef vec<1, uint, lowp>			lowp_uvec1;

	/// 1 component vector of bool values.
	///
	/// @see ext_vec1
	typedef vec<1, bool, highp>			highp_bvec1;

	/// 1 component vector of bool values.
	///
	/// @see ext_vec1
	typedef vec<1, bool, mediump>		mediump_bvec1;

	/// 1 component vector of bool values.
	///
	/// @see ext_vec1
	typedef vec<1, bool, lowp>			lowp_bvec1;

#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tvec1 = vec<1, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

	//////////////////////////
	// vec1 definition

#if(defined(GLM_PRECISION_HIGHP_BOOL))
	typedef highp_bvec1				bvec1;
#elif(defined(GLM_PRECISION_MEDIUMP_BOOL))
	typedef mediump_bvec1			bvec1;
#elif(defined(GLM_PRECISION_LOWP_BOOL))
	typedef lowp_bvec1				bvec1;
#else
	/// 1 component vector of boolean.
	/// @see gtc_vec1 extension.
	typedef highp_bvec1				bvec1;
#endif//GLM_PRECISION

#if(defined(GLM_PRECISION_HIGHP_FLOAT))
	typedef highp_vec1				vec1;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mediump_vec1			vec1;
#elif(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef lowp_vec1				vec1;
#else
	/// 1 component vector of floating-point numbers.
	/// @see gtc_vec1 extension.
	typedef highp_vec1				vec1;
#endif//GLM_PRECISION

#if(defined(GLM_PRECISION_HIGHP_DOUBLE))
	typedef highp_dvec1				dvec1;
#elif(defined(GLM_PRECISION_MEDIUMP_DOUBLE))
	typedef mediump_dvec1			dvec1;
#elif(defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef lowp_dvec1				dvec1;
#else
	/// 1 component vector of floating-point numbers.
	/// @see gtc_vec1 extension.
	typedef highp_dvec1				dvec1;
#endif//GLM_PRECISION

#if(defined(GLM_PRECISION_HIGHP_INT))
	typedef highp_ivec1			ivec1;
#elif(defined(GLM_PRECISION_MEDIUMP_INT))
	typedef mediump_ivec1		ivec1;
#elif(defined(GLM_PRECISION_LOWP_INT))
	typedef lowp_ivec1			ivec1;
#else
	/// 1 component vector of signed integer numbers.
	/// @see gtc_vec1 extension.
	typedef highp_ivec1			ivec1;
#endif//GLM_PRECISION

#if(defined(GLM_PRECISION_HIGHP_UINT))
	typedef highp_uvec1			uvec1;
#elif(defined(GLM_PRECISION_MEDIUMP_UINT))
	typedef mediump_uvec1		uvec1;
#elif(defined(GLM_PRECISION_LOWP_UINT))
	typedef lowp_uvec1			uvec1;
#else
	/// 1 component vector of unsigned integer numbers.
	/// @see gtc_vec1 extension.
	typedef highp_uvec1			uvec1;
#endif//GLM_PRECISION

	/// @}
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "../detail/type_vec1.hpp"
#endif//GLM_EXTERNAL_TEMPLATE
