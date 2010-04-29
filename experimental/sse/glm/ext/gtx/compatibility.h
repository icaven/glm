///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-24
// Updated : 2007-09-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/compatibility.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_mul
// - GLM_GTX_half
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_compatibility__
#define __glm_gtx_compatibility__

// Dependency:
#include "../../glm.h"  
#include "../../glmsetup.h"  
#include "../gtx/mul.h"
#include "../gtx/half.h"

#ifdef GLM_COMPILER_VC
#include <cfloat>
#endif
#ifdef GLM_COMPILER_GCC
#include <cmath>
#endif

namespace glm
{
	template <typename T> inline T lerpGTX(T x, T y, T a){return mix(x, y, a);} //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility extension)

	template <typename T> inline detail::_xvec2<T> lerpGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, T a){return mix(x, y, a);} //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec3<T> lerpGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, T a){return mix(x, y, a);} //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec4<T> lerpGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, T a){return mix(x, y, a);} //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility extension)

	template <typename T> inline detail::_xvec2<T> lerpGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& a){return mix(x, y, a);} //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec3<T> lerpGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& a){return mix(x, y, a);} //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec4<T> lerpGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& a){return mix(x, y, a);} //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility extension)

	template <typename T> inline T saturateGTX(T x){clamp(x, T(0), T(1));} //!< \brief Returns clamp(x, 0, 1) for each component in x. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec2<T> saturateGTX(const detail::_xvec2<T>& x){clamp(x, T(0), T(1));} //!< \brief Returns clamp(x, 0, 1) for each component in x. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec3<T> saturateGTX(const detail::_xvec3<T>& x){clamp(x, T(0), T(1));} //!< \brief Returns clamp(x, 0, 1) for each component in x. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec4<T> saturateGTX(const detail::_xvec4<T>& x){clamp(x, T(0), T(1));} //!< \brief Returns clamp(x, 0, 1) for each component in x. (From GLM_GTX_compatibility extension)

	template <typename T> inline T atan2GTX(T x, T y){atan(x, y);}  //!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLM_GTX_compatibility extension)
	template <typename T> inline detail::_xvec2<T> atan2GTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y){atan(x, y);} //!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec3<T> atan2GTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y){atan(x, y);} //!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLM_GTX_compatibility extension)
    template <typename T> inline detail::_xvec4<T> atan2GTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y){atan(x, y);} //!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLM_GTX_compatibility extension)

	template <typename T> bool isfiniteGTX(T x); //!< \brief Determines whether the given floating-point value is finite. (From GLM_GTX_compatibility extension) 
	template <typename T> detail::_bvec2 isfiniteGTX(const detail::_xvec2<T>& x); //!< \brief Determines whether the given floating-point values is finite. (From GLM_GTX_compatibility extension)
    template <typename T> detail::_bvec3 isfiniteGTX(const detail::_xvec3<T>& x); //!< \brief Determines whether the given floating-point values is finite. (From GLM_GTX_compatibility extension)
    template <typename T> detail::_bvec4 isfiniteGTX(const detail::_xvec4<T>& x); //!< \brief Determines whether the given floating-point values is finite. (From GLM_GTX_compatibility extension)

	template <typename T> bool isinfGTX(T x); //!< \brief Determines whether the given floating-point value is infinite. (From GLM_GTX_compatibility extension) 
	template <typename T> detail::_bvec2 isinfGTX(const detail::_xvec2<T>& x); //!< \brief Determines whether the given floating-point values is infinite. (From GLM_GTX_compatibility extension) 
    template <typename T> detail::_bvec3 isinfGTX(const detail::_xvec3<T>& x); //!< \brief Determines whether the given floating-point values is infinite. (From GLM_GTX_compatibility extension) 
    template <typename T> detail::_bvec4 isinfGTX(const detail::_xvec4<T>& x); //!< \brief Determines whether the given floating-point values is infinite. (From GLM_GTX_compatibility extension) 

	template <typename T> bool isnanGTX(T x); //!< \brief Checks given floating-point value for not a number (NAN) (From GLM_GTX_compatibility extension)
	template <typename T> detail::_bvec2 isnanGTX(const detail::_xvec2<T>& x); //!< \brief Checks given floating-point values for not a number (NAN) (From GLM_GTX_compatibility extension)
    template <typename T> detail::_bvec3 isnanGTX(const detail::_xvec3<T>& x); //!< \brief Checks given floating-point values for not a number (NAN) (From GLM_GTX_compatibility extension)
    template <typename T> detail::_bvec4 isnanGTX(const detail::_xvec4<T>& x); //!< \brief Checks given floating-point values for not a number (NAN) (From GLM_GTX_compatibility extension)

	typedef bool bool1GTX;
	typedef detail::_bvec2 bool2GTX;
	typedef detail::_bvec3 bool3GTX;
	typedef detail::_bvec4 bool4GTX;
/*
	typedef bool bool1x1GTX;
	typedef detail::_xmat2<bool> bool2x2GTX;
	typedef detail::_xmat3<bool> bool3x3GTX;
	typedef detail::_xmat4<bool> bool4x4GTX;

	typedef detail::_xmat2x3<bool> bool2x3GTX;
	typedef detail::_xmat2x4<bool> bool2x4GTX;
	typedef detail::_xmat3x2<bool> bool3x2GTX;
	typedef detail::_xmat3x4<bool> bool3x4GTX;
	typedef detail::_xmat4x2<bool> bool4x2GTX;
	typedef detail::_xmat4x3<bool> bool4x3GTX;
*/
	typedef int __int1GTX;
	typedef detail::_xvec2<int> __int2GTX;
	typedef detail::_xvec3<int> __int3GTX;
	typedef detail::_xvec4<int> __int4GTX;

	typedef int __int1x1GTX;
	typedef detail::_xmat2<int> __int2x2GTX;
	typedef detail::_xmat3<int> __int3x3GTX;
	typedef detail::_xmat4<int> __int4x4GTX;

	typedef detail::_xmat2x3<int> __int2x3GTX;
	typedef detail::_xmat2x4<int> __int2x4GTX;
	typedef detail::_xmat3x2<int> __int3x2GTX;
	typedef detail::_xmat3x4<int> __int3x4GTX;
	typedef detail::_xmat4x2<int> __int4x2GTX;
	typedef detail::_xmat4x3<int> __int4x3GTX;

	typedef __halfGTX __half1GTX;
	typedef detail::_xvec2<__halfGTX> __half2GTX;
	typedef detail::_xvec3<__halfGTX> __half3GTX;
	typedef detail::_xvec4<__halfGTX> __half4GTX;

	typedef __halfGTX __half1x1GTX;
	typedef detail::_xmat2<__halfGTX> __half2x2GTX;
	typedef detail::_xmat3<__halfGTX> __half3x3GTX;
	typedef detail::_xmat4<__halfGTX> __half4x4GTX;

	typedef detail::_xmat2x3<__halfGTX> __half2x3GTX;
	typedef detail::_xmat2x4<__halfGTX> __half2x4GTX;
	typedef detail::_xmat3x2<__halfGTX> __half3x2GTX;
	typedef detail::_xmat3x4<__halfGTX> __half3x4GTX;
	typedef detail::_xmat4x2<__halfGTX> __half4x2GTX;
	typedef detail::_xmat4x3<__halfGTX> __half4x3GTX;

	typedef float __float1GTX;
	typedef detail::_xvec2<float> __float2GTX;
	typedef detail::_xvec3<float> __float3GTX;
	typedef detail::_xvec4<float> __float4GTX;

	typedef float __float1x1GTX;
	typedef detail::_xmat2<float> __float2x2GTX;
	typedef detail::_xmat3<float> __float3x3GTX;
	typedef detail::_xmat4<float> __float4x4GTX;

	typedef detail::_xmat2x3<float> __float2x3GTX;
	typedef detail::_xmat2x4<float> __float2x4GTX;
	typedef detail::_xmat3x2<float> __float3x2GTX;
	typedef detail::_xmat3x4<float> __float3x4GTX;
	typedef detail::_xmat4x2<float> __float4x2GTX;
	typedef detail::_xmat4x3<float> __float4x3GTX;

	typedef double __double1GTX;
	typedef detail::_xvec2<double> __double2GTX;
	typedef detail::_xvec3<double> __double3GTX;
	typedef detail::_xvec4<double> __double4GTX;

	typedef double __double1x1GTX;
	typedef detail::_xmat2<double> __double2x2GTX;
	typedef detail::_xmat3<double> __double3x3GTX;
	typedef detail::_xmat4<double> __double4x4GTX;

	typedef detail::_xmat2x3<double> __double2x3GTX;
	typedef detail::_xmat2x4<double> __double2x4GTX;
	typedef detail::_xmat3x2<double> __double3x2GTX;
	typedef detail::_xmat3x4<double> __double3x4GTX;
	typedef detail::_xmat4x2<double> __double4x2GTX;
	typedef detail::_xmat4x3<double> __double4x3GTX;

	namespace gtx
	{
		//! GLM_GTX_compatibility extension: Provide functions to increase the compatibility with Cg and HLSL languages
		namespace compatibility
		{
			template <typename T> inline T lerp(T x, T y, T a){return mix(x, y, a);} //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility)

			template <typename T> inline detail::_xvec2<T> lerp(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, T a){return mix(x, y, a);} //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility)
			template <typename T> inline detail::_xvec3<T> lerp(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, T a){return mix(x, y, a);} //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility)
			template <typename T> inline detail::_xvec4<T> lerp(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, T a){return mix(x, y, a);} //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility)

			template <typename T> inline detail::_xvec2<T> lerp(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& a){return mix(x, y, a);} //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility)
			template <typename T> inline detail::_xvec3<T> lerp(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& a){return mix(x, y, a);} //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility)
			template <typename T> inline detail::_xvec4<T> lerp(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& a){return mix(x, y, a);} //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_compatibility)

			template <typename T> inline T saturate(T x){saturateGTX(x);} //!< \brief Returns clamp(x, 0, 1) for each component in x. (From GLM_GTX_compatibility)
			template <typename T> inline detail::_xvec2<T> saturate(const detail::_xvec2<T>& x){saturateGTX(x);} //!< \brief Returns clamp(x, 0, 1) for each component in x. (From GLM_GTX_compatibility)
			template <typename T> inline detail::_xvec3<T> saturate(const detail::_xvec3<T>& x){saturateGTX(x);} //!< \brief Returns clamp(x, 0, 1) for each component in x. (From GLM_GTX_compatibility)
			template <typename T> inline detail::_xvec4<T> saturate(const detail::_xvec4<T>& x){saturateGTX(x);} //!< \brief Returns clamp(x, 0, 1) for each component in x. (From GLM_GTX_compatibility)

			template <typename T> inline T atan2(T x, T y){atan(x, y);}
			template <typename T> inline detail::_xvec2<T> atan2(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y){atan(x, y);}
			template <typename T> inline detail::_xvec3<T> atan2(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y){atan(x, y);}
			template <typename T> inline detail::_xvec4<T> atan2(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y){atan(x, y);}

			template <typename T> inline bool isfinite(T x){return isfiniteGTX(x);}
			template <typename T> inline detail::_bvec2 isfinite(const detail::_xvec2<T>& x){return isfiniteGTX(x);}
			template <typename T> inline detail::_bvec3 isfinite(const detail::_xvec3<T>& x){return isfiniteGTX(x);}
			template <typename T> inline detail::_bvec4 isfinite(const detail::_xvec4<T>& x){return isfiniteGTX(x);}

			template <typename T> inline bool isinf(T x){return isinfGTX(x);}
			template <typename T> inline detail::_bvec2 isinf(const detail::_xvec2<T>& x){return isinfGTX(x);}
			template <typename T> inline detail::_bvec3 isinf(const detail::_xvec3<T>& x){return isinfGTX(x);}
			template <typename T> inline detail::_bvec4 isinf(const detail::_xvec4<T>& x){return isinfGTX(x);}

			template <typename T> inline bool isnan(T x){return isnanGTX(x);}
			template <typename T> inline detail::_bvec2 isnan(const detail::_xvec2<T>& x){return isnanGTX(x);}
			template <typename T> inline detail::_bvec3 isnan(const detail::_xvec3<T>& x){return isnanGTX(x);}
			template <typename T> inline detail::_bvec4 isnan(const detail::_xvec4<T>& x){return isnanGTX(x);}

			typedef bool bool1;
			typedef detail::_bvec2 bool2;
			typedef detail::_bvec3 bool3;
			typedef detail::_bvec4 bool4;
/*
			typedef bool bool1x1;
			typedef detail::_xmat2<bool> bool2x2;
			typedef detail::_xmat3<bool> bool3x3;
			typedef detail::_xmat4<bool> bool4x4;

			typedef detail::_xmat2x3<bool> bool2x3;
			typedef detail::_xmat2x4<bool> bool2x4;
			typedef detail::_xmat3x2<bool> bool3x2;
			typedef detail::_xmat3x4<bool> bool3x4;
			typedef detail::_xmat4x2<bool> bool4x2;
			typedef detail::_xmat4x3<bool> bool4x3;
*/
			typedef int int1;
			typedef detail::_xvec2<int> int2;
			typedef detail::_xvec3<int> int3;
			typedef detail::_xvec4<int> int4;

			typedef int int1x1;
			typedef detail::_xmat2<int> int2x2;
			typedef detail::_xmat3<int> int3x3;
			typedef detail::_xmat4<int> int4x4;

			typedef detail::_xmat2x3<int> int2x3;
			typedef detail::_xmat2x4<int> int2x4;
			typedef detail::_xmat3x2<int> int3x2;
			typedef detail::_xmat3x4<int> int3x4;
			typedef detail::_xmat4x2<int> int4x2;
			typedef detail::_xmat4x3<int> int4x3;

			typedef __halfGTX half1;
			typedef detail::_xvec2<__halfGTX> half2;
			typedef detail::_xvec3<__halfGTX> half3;
			typedef detail::_xvec4<__halfGTX> half4;

			typedef detail::_xmat2<__halfGTX> half2x2;
			typedef detail::_xmat3<__halfGTX> half3x3;
			typedef detail::_xmat4<__halfGTX> half4x4;

			typedef detail::_xmat2x3<__halfGTX> half2x3;
			typedef detail::_xmat2x4<__halfGTX> half2x4;
			typedef detail::_xmat3x2<__halfGTX> half3x2;
			typedef detail::_xmat3x4<__halfGTX> half3x4;
			typedef detail::_xmat4x2<__halfGTX> half4x2;
			typedef detail::_xmat4x3<__halfGTX> half4x3;

			typedef float float1;
			typedef detail::_xvec2<float> float2;
			typedef detail::_xvec3<float> float3;
			typedef detail::_xvec4<float> float4;

			typedef float float1x1;
			typedef detail::_xmat2<float> float2x2;
			typedef detail::_xmat3<float> float3x3;
			typedef detail::_xmat4<float> float4x4;

			typedef detail::_xmat2x3<float> float2x3;
			typedef detail::_xmat2x4<float> float2x4;
			typedef detail::_xmat3x2<float> float3x2;
			typedef detail::_xmat3x4<float> float3x4;
			typedef detail::_xmat4x2<float> float4x2;
			typedef detail::_xmat4x3<float> float4x3;

			typedef double double1;
			typedef detail::_xvec2<double> double2;
			typedef detail::_xvec3<double> double3;
			typedef detail::_xvec4<double> double4;

			typedef double double1x1;
			typedef detail::_xmat2<double> double2x2;
			typedef detail::_xmat3<double> double3x3;
			typedef detail::_xmat4<double> double4x4;

			typedef detail::_xmat2x3<double> double2x3;
			typedef detail::_xmat2x4<double> double2x4;
			typedef detail::_xmat3x2<double> double3x2;
			typedef detail::_xmat3x4<double> double3x4;
			typedef detail::_xmat4x2<double> double4x2;
			typedef detail::_xmat4x3<double> double4x3;
		}
	}
}

#define GLM_GTX_compatibility namespace gtx::compatibility

#include "compatibility.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_compatibility;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_compatibility__










