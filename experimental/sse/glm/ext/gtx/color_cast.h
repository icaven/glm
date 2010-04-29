///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-06-21
// Updated : 2007-08-03
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/color_cast.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_half
// - GLM_GTX_double
// - GLM_GTX_int
// - GLM_GTX_unsigned_int
// - GLM_GTX_number_precision
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_color_cast__
#define __glm_gtx_color_cast__

// Dependency:
#include "../../glm.h"
#include "../gtx/half.h"
#include "../gtx/double.h"
#include "../gtx/integer.h"
#include "../gtx/unsigned_int.h"
#include "../gtx/number_precision.h"

namespace glm
{
	template <typename T> __uint8GTX u8channel_castGTX(T a);							//!< Conversion of a floating value into a 8bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint16GTX u16channel_castGTX(T a);							//!< Conversion of a floating value into a 16bit unsigned int value. (From GLM_GTX_color_cast extension)

	template <typename T> __uint32GTX u32_rgbx_castGTX(const detail::_xvec3<T>& c);     //!< Conversion of a 3 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint32GTX u32_xrgb_castGTX(const detail::_xvec3<T>& c);     //!< Conversion of a 3 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint32GTX u32_bgrx_castGTX(const detail::_xvec3<T>& c);     //!< Conversion of a 3 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint32GTX u32_xbgr_castGTX(const detail::_xvec3<T>& c);     //!< Conversion of a 3 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)

	template <typename T> __uint32GTX u32_rgba_castGTX(const detail::_xvec4<T>& c);     //!< Conversion of a 4 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint32GTX u32_argb_castGTX(const detail::_xvec4<T>& c);     //!< Conversion of a 4 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint32GTX u32_bgra_castGTX(const detail::_xvec4<T>& c);     //!< Conversion of a 4 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint32GTX u32_abgr_castGTX(const detail::_xvec4<T>& c);     //!< Conversion of a 4 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)

	template <typename T> __uint64GTX u64_rgbx_castGTX(const detail::_xvec3<T>& c);     //!< Conversion of a 3 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint64GTX u64_xrgb_castGTX(const detail::_xvec3<T>& c);     //!< Conversion of a 3 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint64GTX u64_bgrx_castGTX(const detail::_xvec3<T>& c);     //!< Conversion of a 3 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint64GTX u64_xbgr_castGTX(const detail::_xvec3<T>& c);     //!< Conversion of a 3 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)

	template <typename T> __uint64GTX u64_rgba_castGTX(const detail::_xvec4<T>& c);     //!< Conversion of a 4 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint64GTX u64_argb_castGTX(const detail::_xvec4<T>& c);     //!< Conversion of a 4 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint64GTX u64_bgra_castGTX(const detail::_xvec4<T>& c);     //!< Conversion of a 4 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
	template <typename T> __uint64GTX u64_abgr_castGTX(const detail::_xvec4<T>& c);     //!< Conversion of a 4 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)

	template <typename T> __halfGTX f16_channel_castGTX(T a);							//!< Conversion of a u8 or u16 value to a single channel floating value. (From GLM_GTX_color_cast extension)

	template <typename T> detail::_xvec3<__halfGTX> f16_rgbx_castGTX(T color);          //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<__halfGTX> f16_xrgb_castGTX(T color);          //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<__halfGTX> f16_bgrx_castGTX(T color);          //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<__halfGTX> f16_xbgr_castGTX(T color);          //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)

	template <typename T> detail::_xvec4<__halfGTX> f16_rgba_castGTX(T color);          //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<__halfGTX> f16_argb_castGTX(T color);          //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<__halfGTX> f16_bgra_castGTX(T color);          //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<__halfGTX> f16_abgr_castGTX(T color);          //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)

	template <typename T> float f32_channel_castGTX(T a);								//!< Conversion of a u8 or u16 value to a single channel floating value. (From GLM_GTX_color_cast extension)

	template <typename T> detail::_xvec3<float> f32_rgbx_castGTX(T color);              //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<float> f32_xrgb_castGTX(T color);              //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<float> f32_bgrx_castGTX(T color);              //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<float> f32_xbgr_castGTX(T color);              //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)

	template <typename T> detail::_xvec4<float> f32_rgba_castGTX(T color);              //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<float> f32_argb_castGTX(T color);              //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<float> f32_bgra_castGTX(T color);              //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<float> f32_abgr_castGTX(T color);              //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)

	template <typename T> double f64_channel_castGTX(T a);								//!< Conversion of a u8 or u16 value to a single channel floating value. (From GLM_GTX_color_cast extension)

	template <typename T> detail::_xvec3<double> f64_rgbx_castGTX(T color);             //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<double> f64_xrgb_castGTX(T color);             //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<double> f64_bgrx_castGTX(T color);             //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec3<double> f64_xbgr_castGTX(T color);             //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)

	template <typename T> detail::_xvec4<double> f64_rgba_castGTX(T color);             //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<double> f64_argb_castGTX(T color);             //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<double> f64_bgra_castGTX(T color);             //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
	template <typename T> detail::_xvec4<double> f64_abgr_castGTX(T color);             //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)

	namespace gtx
	{
		//! GLM_GTX_color_cast extension: Conversion between two color types
		namespace color_cast
		{
			template <typename T> inline __uint8GTX u8channel_cast(T a){return u8channel_castGTX(a);}							//!< Conversion of a floating value into a 8bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint16GTX u16channel_cast(T a){return u16channel_castGTX(a);}						//!< Conversion of a floating value into a 16bit unsigned int value. (From GLM_GTX_color_cast extension)

			template <typename T> inline __uint32GTX u32_rgbx_cast(const detail::_xvec3<T>& c){return u32_rgbx_castGTX(c);}     //!< Conversion of a 3 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint32GTX u32_xrgb_cast(const detail::_xvec3<T>& c){return u32_xrgb_castGTX(c);}     //!< Conversion of a 3 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint32GTX u32_bgrx_cast(const detail::_xvec3<T>& c){return u32_bgrx_castGTX(c);}     //!< Conversion of a 3 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint32GTX u32_xbgr_cast(const detail::_xvec3<T>& c){return u32_xbgr_castGTX(c);}     //!< Conversion of a 3 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)

			template <typename T> inline __uint32GTX u32_rgba_cast(const detail::_xvec4<T>& c){return u32_rgba_castGTX(c);}     //!< Conversion of a 4 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint32GTX u32_argb_cast(const detail::_xvec4<T>& c){return u32_argb_castGTX(c);}     //!< Conversion of a 4 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint32GTX u32_bgra_cast(const detail::_xvec4<T>& c){return u32_bgra_castGTX(c);}     //!< Conversion of a 4 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint32GTX u32_abgr_cast(const detail::_xvec4<T>& c){return u32_abgr_castGTX(c);}     //!< Conversion of a 4 components color into an 32bit unsigned int value. (From GLM_GTX_color_cast extension)

			template <typename T> inline __uint64GTX u64_rgbx_cast(const detail::_xvec3<T>& c){return u32_rgbx_castGTX(c);}     //!< Conversion of a 3 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint64GTX u64_xrgb_cast(const detail::_xvec3<T>& c){return u32_xrgb_castGTX(c);}     //!< Conversion of a 3 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint64GTX u64_bgrx_cast(const detail::_xvec3<T>& c){return u32_bgrx_castGTX(c);}     //!< Conversion of a 3 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint64GTX u64_xbgr_cast(const detail::_xvec3<T>& c){return u32_xbgr_castGTX(c);}     //!< Conversion of a 3 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)

			template <typename T> inline __uint64GTX u64_rgba_cast(const detail::_xvec4<T>& c){return u32_rgba_castGTX(c);}     //!< Conversion of a 4 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint64GTX u64_argb_cast(const detail::_xvec4<T>& c){return u32_argb_castGTX(c);}     //!< Conversion of a 4 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint64GTX u64_bgra_cast(const detail::_xvec4<T>& c){return u32_bgra_castGTX(c);}     //!< Conversion of a 4 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)
			template <typename T> inline __uint64GTX u64_abgr_cast(const detail::_xvec4<T>& c){return u32_abgr_castGTX(c);}     //!< Conversion of a 4 components color into an 64bit unsigned int value. (From GLM_GTX_color_cast extension)

			template <typename T> inline __halfGTX f16_channel_cast(T a){return f16_channel_castGTX(a);}						//!< Conversion of a u8 or u16 value to a single channel floating value. (From GLM_GTX_color_cast extension)

			template <typename T> inline detail::_xvec3<__halfGTX> f16_rgbx_cast(T c){return f16_rgbx_castGTX(c);}              //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<__halfGTX> f16_xrgb_cast(T c){return f16_xrgb_castGTX(c);}              //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<__halfGTX> f16_bgrx_cast(T c){return f16_bgrx_castGTX(c);}              //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<__halfGTX> f16_xbgr_cast(T c){return f16_xbgr_castGTX(c);}              //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)

			template <typename T> inline detail::_xvec4<__halfGTX> f16_rgba_cast(T c){return f16_rgba_castGTX(c);}              //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<__halfGTX> f16_argb_cast(T c){return f16_argb_castGTX(c);}              //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<__halfGTX> f16_bgra_cast(T c){return f16_bgra_castGTX(c);}              //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<__halfGTX> f16_abgr_cast(T c){return f16_abgr_castGTX(c);}              //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)

			template <typename T> inline float f32_channel_cast(T a){return f32_channel_castGTX(a);}							//!< Conversion of a u8 or u16 value to a single channel floating value. (From GLM_GTX_color_cast extension)

			template <typename T> inline detail::_xvec3<float> f32_rgbx_cast(T c){return f32_rgbx_castGTX(c);}                  //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<float> f32_xrgb_cast(T c){return f32_xrgb_castGTX(c);}                  //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<float> f32_bgrx_cast(T c){return f32_bgrx_castGTX(c);}                  //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<float> f32_xbgr_cast(T c){return f32_xbgr_castGTX(c);}                  //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)

			template <typename T> inline detail::_xvec4<float> f32_rgba_cast(T c){return f32_rgba_castGTX(c);}                  //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<float> f32_argb_cast(T c){return f32_argb_castGTX(c);}                  //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<float> f32_bgra_cast(T c){return f32_bgra_castGTX(c);}                  //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<float> f32_abgr_cast(T c){return f32_abgr_castGTX(c);}                  //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)

			template <typename T> inline double f64_channel_cast(T a){return f64_channel_castGTX(a);}							//!< Conversion of a u8 or u16 value to a single channel floating value. (From GLM_GTX_color_cast extension)

			template <typename T> inline detail::_xvec3<double> f64_rgbx_cast(T c){return f64_rgbx_castGTX(c);}                 //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<double> f64_xrgb_cast(T c){return f64_xrgb_castGTX(c);}                 //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<double> f64_bgrx_cast(T c){return f64_bgrx_castGTX(c);}                 //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec3<double> f64_xbgr_cast(T c){return f64_xbgr_castGTX(c);}                 //!< Conversion of a u32 or u64 color into 3 components floating color. (From GLM_GTX_color_cast extension)

			template <typename T> inline detail::_xvec4<double> f64_rgba_cast(T c){return f64_rgba_castGTX(c);}                 //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<double> f64_argb_cast(T c){return f64_argb_castGTX(c);}                 //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<double> f64_bgra_cast(T c){return f64_bgra_castGTX(c);}                 //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
			template <typename T> inline detail::_xvec4<double> f64_abgr_cast(T c){return f64_abgr_castGTX(c);}                 //!< Conversion of a u32 or u64 color into 4 components floating color. (From GLM_GTX_color_cast extension)
		}
	}
}

#define GLM_GTX_color_cast namespace gtx::color_cast

#include "color_cast.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_color_cast;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_color_cast__
