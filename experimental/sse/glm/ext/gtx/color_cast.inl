///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-06-21
// Updated : 2007-08-03
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/color_cast.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T> 
	inline __uint8GTX u8channel_castGTX(T a)
	{
		return static_cast<__uint8GTX>(a * T(255));
	}

	template <typename T> 
	inline __uint16GTX u16channel_castGTX(T a)
	{
		return static_cast<__uint16GTX>(a * T(65535));
	}

	template <typename T>
	inline __uint32GTX u32_rgbx_castGTX(const detail::_xvec3<T>& c)
	{
		__uint32GTX result = 0;
		result += static_cast<__uint32GTX>(c.x * detail::_xvec3<T>::value_type(255)) <<  0;
		result += static_cast<__uint32GTX>(c.y * detail::_xvec3<T>::value_type(255)) <<  8;
		result += static_cast<__uint32GTX>(c.z * detail::_xvec3<T>::value_type(255)) << 16;
		return result;
	}

	template <typename T>
	inline __uint32GTX u32_xrgb_castGTX(const detail::_xvec3<T>& c)
	{
		__uint32GTX result = 0;
        result += static_cast<__uint32GTX>(c.x * detail::_xvec3<T>::value_type(255)) <<  8;
		result += static_cast<__uint32GTX>(c.y * detail::_xvec3<T>::value_type(255)) << 16;
		result += static_cast<__uint32GTX>(c.z * detail::_xvec3<T>::value_type(255)) << 24;
		return result;
	}

	template <typename T>
	inline __uint32GTX u32_bgrx_castGTX(const detail::_xvec3<T>& c)
	{
		__uint32GTX result = 0;
		result += static_cast<__uint32GTX>(c.x * detail::_xvec3<T>::value_type(255)) << 16;
		result += static_cast<__uint32GTX>(c.y * detail::_xvec3<T>::value_type(255)) <<  8;
		result += static_cast<__uint32GTX>(c.z * detail::_xvec3<T>::value_type(255)) <<  0;
		return result;
	}

	template <typename T>
	inline __uint32GTX u32_xbgr_castGTX(const detail::_xvec3<T>& c)
	{
		__uint32GTX result = 0;
		result += static_cast<__uint32GTX>(c.x * detail::_xvec3<T>::value_type(255)) << 24;
		result += static_cast<__uint32GTX>(c.y * detail::_xvec3<T>::value_type(255)) << 16;
		result += static_cast<__uint32GTX>(c.z * detail::_xvec3<T>::value_type(255)) <<  8;
		result += static_cast<__uint32GTX>(c.w * detail::_xvec3<T>::value_type(255)) <<  0;
		return result;
	}

	template <typename T>
	inline __uint32GTX u32_rgba_castGTX(const detail::_xvec4<T>& c)
	{
		__uint32GTX result = 0;
		result += static_cast<__uint32GTX>(c.x * detail::_xvec4<T>::value_type(255)) <<  0;
		result += static_cast<__uint32GTX>(c.y * detail::_xvec4<T>::value_type(255)) <<  8;
		result += static_cast<__uint32GTX>(c.z * detail::_xvec4<T>::value_type(255)) << 16;
		result += static_cast<__uint32GTX>(c.w * detail::_xvec4<T>::value_type(255)) << 24;
		return result;
	}

	template <typename T>
	inline __uint32GTX u32_argb_castGTX(const detail::_xvec4<T>& c)
	{
		__uint32GTX result = 0;
		result += static_cast<__uint32GTX>(c.x * detail::_xvec4<T>::value_type(255)) <<  8;
		result += static_cast<__uint32GTX>(c.y * detail::_xvec4<T>::value_type(255)) << 16;
		result += static_cast<__uint32GTX>(c.z * detail::_xvec4<T>::value_type(255)) << 24;
		result += static_cast<__uint32GTX>(c.w * detail::_xvec4<T>::value_type(255)) <<  0;
		return result;
	}

	template <typename T>
	inline __uint32GTX u32_bgra_castGTX(const detail::_xvec4<T>& c)
	{
		__uint32GTX result = 0;
		result += static_cast<__uint32GTX>(c.x * detail::_xvec4<T>::value_type(255)) << 16;
		result += static_cast<__uint32GTX>(c.y * detail::_xvec4<T>::value_type(255)) <<  8;
		result += static_cast<__uint32GTX>(c.z * detail::_xvec4<T>::value_type(255)) <<  0;
		result += static_cast<__uint32GTX>(c.w * detail::_xvec4<T>::value_type(255)) << 24;
		return result;
	}

	template <typename T>
	inline __uint32GTX u32_abgr_castGTX(const detail::_xvec4<T>& c)
	{
		__uint32GTX result = 0;
		result += static_cast<__uint32GTX>(c.x * detail::_xvec4<T>::value_type(255)) << 24;
		result += static_cast<__uint32GTX>(c.y * detail::_xvec4<T>::value_type(255)) << 16;
		result += static_cast<__uint32GTX>(c.z * detail::_xvec4<T>::value_type(255)) <<  8;
		result += static_cast<__uint32GTX>(c.w * detail::_xvec4<T>::value_type(255)) <<  0;
		return result;
	}

	template <typename T>
	inline __uint64GTX u64_rgbx_castGTX(const detail::_xvec3<T>& c)
	{
		__uint64GTX result = 0;
		result += static_cast<__uint64GTX>(c.x * detail::_xvec3<T>::value_type(65535)) <<  0;
		result += static_cast<__uint64GTX>(c.y * detail::_xvec3<T>::value_type(65535)) << 16;
		result += static_cast<__uint64GTX>(c.z * detail::_xvec3<T>::value_type(65535)) << 32;
		return result;
	}

	template <typename T>
	inline __uint64GTX u32_xrgb_castGTX(const detail::_xvec3<T>& c)
	{
		__uint64GTX result = 0;
		result += static_cast<__uint64GTX>(c.x * detail::_xvec3<T>::value_type(65535)) << 16;
		result += static_cast<__uint64GTX>(c.y * detail::_xvec3<T>::value_type(65535)) << 32;
		result += static_cast<__uint64GTX>(c.z * detail::_xvec3<T>::value_type(65535)) << 48;
		return result;
	}

	template <typename T>
	inline __uint64GTX u32_bgrx_castGTX(const detail::_xvec3<T>& c)
	{
		__uint64GTX result = 0;
		result += static_cast<__uint64GTX>(c.x * detail::_xvec3<T>::value_type(65535)) << 32;
		result += static_cast<__uint64GTX>(c.y * detail::_xvec3<T>::value_type(65535)) << 16;
		result += static_cast<__uint64GTX>(c.z * detail::_xvec3<T>::value_type(65535)) <<  0;
		return result;
	}

	template <typename T>
	inline __uint64GTX u32_xbgr_castGTX(const detail::_xvec3<T>& c)
	{
		__uint64GTX result = 0;
		result += static_cast<__uint64GTX>(c.x * detail::_xvec3<T>::value_type(65535)) << 48;
		result += static_cast<__uint64GTX>(c.y * detail::_xvec3<T>::value_type(65535)) << 32;
		result += static_cast<__uint64GTX>(c.z * detail::_xvec3<T>::value_type(65535)) << 16;
		result += static_cast<__uint64GTX>(c.w * detail::_xvec3<T>::value_type(65535)) <<  0;
		return result;
	}

	template <typename T>
	inline __uint64GTX u64_rgba_castGTX(const detail::_xvec4<T>& c)
	{
		__uint64GTX result = 0;
		result += static_cast<__uint64GTX>(c.x * detail::_xvec4<T>::value_type(65535)) <<  0;
		result += static_cast<__uint64GTX>(c.y * detail::_xvec4<T>::value_type(65535)) << 16;
		result += static_cast<__uint64GTX>(c.z * detail::_xvec4<T>::value_type(65535)) << 32;
		result += static_cast<__uint64GTX>(c.w * detail::_xvec4<T>::value_type(65535)) << 48;
		return result;
	}

	template <typename T>
	inline __uint64GTX u64_argb_castGTX(const detail::_xvec4<T>& c)
	{
		__uint64GTX result = 0;
		result += static_cast<__uint64GTX>(c.x * detail::_xvec4<T>::value_type(65535)) << 16;
		result += static_cast<__uint64GTX>(c.y * detail::_xvec4<T>::value_type(65535)) << 32;
		result += static_cast<__uint64GTX>(c.z * detail::_xvec4<T>::value_type(65535)) << 48;
		result += static_cast<__uint64GTX>(c.w * detail::_xvec4<T>::value_type(65535)) <<  0;
		return result;
	}

	template <typename T>
	inline __uint64GTX u64_bgra_castGTX(const detail::_xvec4<T>& c)
	{
		__uint64GTX result = 0;
		result += static_cast<__uint64GTX>(c.x * detail::_xvec4<T>::value_type(65535)) << 32;
		result += static_cast<__uint64GTX>(c.y * detail::_xvec4<T>::value_type(65535)) << 16;
		result += static_cast<__uint64GTX>(c.z * detail::_xvec4<T>::value_type(65535)) <<  0;
		result += static_cast<__uint64GTX>(c.w * detail::_xvec4<T>::value_type(65535)) << 48;
		return result;
	}

	template <typename T>
	inline __uint64GTX u64_abgr_castGTX(const detail::_xvec4<T>& c)
	{
		__uint64GTX result = 0;
		result += static_cast<__uint64GTX>(c.x * detail::_xvec4<T>::value_type(65535)) << 48;
		result += static_cast<__uint64GTX>(c.y * detail::_xvec4<T>::value_type(65535)) << 32;
		result += static_cast<__uint64GTX>(c.z * detail::_xvec4<T>::value_type(65535)) << 16;
		result += static_cast<__uint64GTX>(c.w * detail::_xvec4<T>::value_type(65535)) <<  0;
		return result;
	}

	template <>
	inline __halfGTX f16_channel_castGTX<__uint32GTX>(__uint32GTX color)
	{
		return __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(255));
	}

#ifdef GLM_COMPILER_VC
	template <>
	inline detail::_xvec3<__halfGTX> f16_rgbx_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(255));
		result.y = __halfGTX(static_cast<float>(color >>  8) / static_cast<float>(255));
		result.z = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(255));
		return result;
	}

	template <>
	inline detail::_xvec3<__halfGTX> f16_xrgb_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >>  8) / static_cast<float>(255));
		result.y = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(255));
		result.z = __halfGTX(static_cast<float>(color >> 24) / static_cast<float>(255));
		return result;
	}

	template <>
	inline detail::_xvec3<__halfGTX> f16_bgrx_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(255));
		result.y = __halfGTX(static_cast<float>(color >>  8) / static_cast<float>(255));
		result.z = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(255));
		return result;
	}

	template <>
	inline detail::_xvec3<__halfGTX> f16_xbgr_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 24) / static_cast<float>(255));
		result.y = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(255));
		result.z = __halfGTX(static_cast<float>(color >>  8) / static_cast<float>(255));
		return result;
	}

	template <>
	inline detail::_xvec4<__halfGTX> f16_rgba_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(255));
		result.y = __halfGTX(static_cast<float>(color >>  8) / static_cast<float>(255));
		result.z = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(255));
		result.w = __halfGTX(static_cast<float>(color >> 24) / static_cast<float>(255));
		return result;
	}

	template <>
	inline detail::_xvec4<__halfGTX> f16_argb_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >>  8) / static_cast<float>(255));
		result.y = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(255));
		result.z = __halfGTX(static_cast<float>(color >> 24) / static_cast<float>(255));
		result.w = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(255));
		return result;
	}

	template <>
	inline detail::_xvec4<__halfGTX> f16_bgra_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(255));
		result.y = __halfGTX(static_cast<float>(color >>  8) / static_cast<float>(255));
		result.z = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(255));
		result.w = __halfGTX(static_cast<float>(color >> 24) / static_cast<float>(255));
		return result;
	}

	template <>
	inline detail::_xvec4<__halfGTX> f16_abgr_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 24) / static_cast<float>(255));
		result.y = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(255));
		result.z = __halfGTX(static_cast<float>(color >>  8) / static_cast<float>(255));
		result.w = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(255));
		return result;
	}
#endif//GLM_COMPILER_VC

	template <>
	inline float f32_channel_castGTX<__uint8GTX>(__uint8GTX color)
	{
		return static_cast<float>(color >>  0) / static_cast<float>(255);
	}

	template <>
	inline detail::_xvec3<float> f32_rgbx_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<float> result;
		result.x = static_cast<float>(color >>  0) / static_cast<float>(255);
		result.y = static_cast<float>(color >>  8) / static_cast<float>(255);
		result.z = static_cast<float>(color >> 16) / static_cast<float>(255);
		return result;
	}

	template <>
	inline detail::_xvec3<float> f32_xrgb_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<float> result;
		result.x = static_cast<float>(color >>  8) / static_cast<float>(255);
		result.y = static_cast<float>(color >> 16) / static_cast<float>(255);
		result.z = static_cast<float>(color >> 24) / static_cast<float>(255);
		return result;
	}

	template <>
	inline detail::_xvec3<float> f32_bgrx_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<float> result;
		result.x = static_cast<float>(color >> 16) / static_cast<float>(255);
		result.y = static_cast<float>(color >>  8) / static_cast<float>(255);
		result.z = static_cast<float>(color >>  0) / static_cast<float>(255);
		return result;
	}

	template <>
	inline detail::_xvec3<float> f32_xbgr_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<float> result;
		result.x = static_cast<float>(color >> 24) / static_cast<float>(255);
		result.y = static_cast<float>(color >> 16) / static_cast<float>(255);
		result.z = static_cast<float>(color >>  8) / static_cast<float>(255);
		return result;
	}

	template <>
	inline detail::_xvec4<float> f32_rgba_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<float> result;
		result.x = static_cast<float>(color >>  0) / static_cast<float>(255);
		result.y = static_cast<float>(color >>  8) / static_cast<float>(255);
		result.z = static_cast<float>(color >> 16) / static_cast<float>(255);
		result.w = static_cast<float>(color >> 24) / static_cast<float>(255);
		return result;
	}

	template <>
	inline detail::_xvec4<float> f32_argb_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<float> result;
		result.x = static_cast<float>(color >>  8) / static_cast<float>(255);
		result.y = static_cast<float>(color >> 16) / static_cast<float>(255);
		result.z = static_cast<float>(color >> 24) / static_cast<float>(255);
		result.w = static_cast<float>(color >>  0) / static_cast<float>(255);
		return result;
	}

	template <>
	inline detail::_xvec4<float> f32_bgra_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<float> result;
		result.x = static_cast<float>(color >> 16) / static_cast<float>(255);
		result.y = static_cast<float>(color >>  8) / static_cast<float>(255);
		result.z = static_cast<float>(color >>  0) / static_cast<float>(255);
		result.w = static_cast<float>(color >> 24) / static_cast<float>(255);
		return result;
	}

	template <>
	inline detail::_xvec4<float> f32_abgr_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<float> result;
		result.x = static_cast<float>(color >> 24) / static_cast<float>(255);
		result.y = static_cast<float>(color >> 16) / static_cast<float>(255);
		result.z = static_cast<float>(color >>  8) / static_cast<float>(255);
		result.w = static_cast<float>(color >>  0) / static_cast<float>(255);
		return result;
	}

	template <>
	inline double f64_channel_castGTX<__uint8GTX>(__uint8GTX color)
	{
		return static_cast<double>(color >>  0) / static_cast<double>(255);
	}

	template <>
	inline detail::_xvec3<double> f64_rgbx_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<double> result;
		result.x = static_cast<double>(color >>  0) / static_cast<double>(255);
		result.y = static_cast<double>(color >>  8) / static_cast<double>(255);
		result.z = static_cast<double>(color >> 16) / static_cast<double>(255);
		return result;
	}

	template <>
	inline detail::_xvec3<double> f64_xrgb_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<double> result;
		result.x = static_cast<double>(color >>  8) / static_cast<double>(255);
		result.y = static_cast<double>(color >> 16) / static_cast<double>(255);
		result.z = static_cast<double>(color >> 24) / static_cast<double>(255);
		return result;
	}

	template <>
	inline detail::_xvec3<double> f64_bgrx_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<double> result;
		result.x = static_cast<double>(color >> 16) / static_cast<double>(255);
		result.y = static_cast<double>(color >>  8) / static_cast<double>(255);
		result.z = static_cast<double>(color >>  0) / static_cast<double>(255);
		return result;
	}

	template <>
	inline detail::_xvec3<double> f64_xbgr_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec3<double> result;
		result.x = static_cast<double>(color >> 24) / static_cast<double>(255);
		result.y = static_cast<double>(color >> 16) / static_cast<double>(255);
		result.z = static_cast<double>(color >>  8) / static_cast<double>(255);
		return result;
	}

	template <>
	inline detail::_xvec4<double> f64_rgba_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<double> result;
		result.x = static_cast<double>(color >>  0) / static_cast<double>(255);
		result.y = static_cast<double>(color >>  8) / static_cast<double>(255);
		result.z = static_cast<double>(color >> 16) / static_cast<double>(255);
		result.w = static_cast<double>(color >> 24) / static_cast<double>(255);
		return result;
	}

	template <>
	inline detail::_xvec4<double> f64_argb_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<double> result;
		result.x = static_cast<double>(color >>  8) / static_cast<double>(255);
		result.y = static_cast<double>(color >> 16) / static_cast<double>(255);
		result.z = static_cast<double>(color >> 24) / static_cast<double>(255);
		result.w = static_cast<double>(color >>  0) / static_cast<double>(255);
		return result;
	}

	template <>
	inline detail::_xvec4<double> f64_bgra_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<double> result;
		result.x = static_cast<double>(color >> 16) / static_cast<double>(255);
		result.y = static_cast<double>(color >>  8) / static_cast<double>(255);
		result.z = static_cast<double>(color >>  0) / static_cast<double>(255);
		result.w = static_cast<double>(color >> 24) / static_cast<double>(255);
		return result;
	}

	template <>
	inline detail::_xvec4<double> f64_abgr_castGTX<__uint32GTX>(__uint32GTX color)
	{
		detail::_xvec4<double> result;
		result.x = static_cast<double>(color >> 24) / static_cast<double>(255);
		result.y = static_cast<double>(color >> 16) / static_cast<double>(255);
		result.z = static_cast<double>(color >>  8) / static_cast<double>(255);
		result.w = static_cast<double>(color >>  0) / static_cast<double>(255);
		return result;
	}

	template <>
	inline __halfGTX f16_channel_castGTX<__uint16GTX>(__uint16GTX color)
	{
		return __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(65535));
	}

#ifdef GLM_COMPILER_VC
	template <>
	inline detail::_xvec3<__halfGTX> f16_rgbx_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(65535));
		result.y = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(65535));
		result.z = __halfGTX(static_cast<float>(color >> 32) / static_cast<float>(65535));
		return result;
	}

	template <>
	inline detail::_xvec3<__halfGTX> f16_xrgb_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(65535));
		result.y = __halfGTX(static_cast<float>(color >> 32) / static_cast<float>(65535));
		result.z = __halfGTX(static_cast<float>(color >> 48) / static_cast<float>(65535));
		return result;
	}

	template <>
	inline detail::_xvec3<__halfGTX> f16_bgrx_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 32) / static_cast<float>(65535));
		result.y = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(65535));
		result.z = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(65535));
		return result;
	}

	template <>
	inline detail::_xvec3<__halfGTX> f16_xbgr_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 48) / static_cast<float>(65535));
		result.y = __halfGTX(static_cast<float>(color >> 32) / static_cast<float>(65535));
		result.z = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(65535));
		return result;
	}

	template <>
	inline detail::_xvec4<__halfGTX> f16_rgba_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(65535));
		result.y = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(65535));
		result.z = __halfGTX(static_cast<float>(color >> 32) / static_cast<float>(65535));
		result.w = __halfGTX(static_cast<float>(color >> 48) / static_cast<float>(65535));
		return result;
	}

	template <>
	inline detail::_xvec4<__halfGTX> f16_argb_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(65535));
		result.y = __halfGTX(static_cast<float>(color >> 32) / static_cast<float>(65535));
		result.z = __halfGTX(static_cast<float>(color >> 48) / static_cast<float>(65535));
		result.w = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(65535));
		return result;
	}

	template <>
	inline detail::_xvec4<__halfGTX> f16_bgra_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 32) / static_cast<float>(65535));
		result.y = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(65535));
		result.z = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(65535));
		result.w = __halfGTX(static_cast<float>(color >> 48) / static_cast<float>(65535));
		return result;
	}

	template <>
	inline detail::_xvec4<__halfGTX> f16_abgr_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<__halfGTX> result;
		result.x = __halfGTX(static_cast<float>(color >> 48) / static_cast<float>(65535));
		result.y = __halfGTX(static_cast<float>(color >> 32) / static_cast<float>(65535));
		result.z = __halfGTX(static_cast<float>(color >> 16) / static_cast<float>(65535));
		result.w = __halfGTX(static_cast<float>(color >>  0) / static_cast<float>(65535));
		return result;
	}
#endif//GLM_COMPILER_VC

	template <>
	inline float f32_channel_castGTX<__uint16GTX>(__uint16GTX color)
	{
		return static_cast<float>(color >>  0) / static_cast<float>(65535);
	}

	template <>
	inline detail::_xvec3<float> f32_rgbx_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<float> result;
		result.x = static_cast<float>(color >>  0) / static_cast<float>(65535);
		result.y = static_cast<float>(color >> 16) / static_cast<float>(65535);
		result.z = static_cast<float>(color >> 32) / static_cast<float>(65535);
		return result;
	}

	template <>
	inline detail::_xvec3<float> f32_xrgb_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<float> result;
		result.x = static_cast<float>(color >> 16) / static_cast<float>(65535);
		result.y = static_cast<float>(color >> 32) / static_cast<float>(65535);
		result.z = static_cast<float>(color >> 48) / static_cast<float>(65535);
		return result;
	}

	template <>
	inline detail::_xvec3<float> f32_bgrx_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<float> result;
		result.x = static_cast<float>(color >> 32) / static_cast<float>(65535);
		result.y = static_cast<float>(color >> 16) / static_cast<float>(65535);
		result.z = static_cast<float>(color >>  0) / static_cast<float>(65535);
		return result;
	}

	template <>
	inline detail::_xvec3<float> f32_xbgr_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<float> result;
		result.x = static_cast<float>(color >> 48) / static_cast<float>(65535);
		result.y = static_cast<float>(color >> 32) / static_cast<float>(65535);
		result.z = static_cast<float>(color >> 16) / static_cast<float>(65535);
		return result;
	}

	template <>
	inline detail::_xvec4<float> f32_rgba_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<float> result;
		result.x = static_cast<float>(color >>  0) / static_cast<float>(65535);
		result.y = static_cast<float>(color >> 16) / static_cast<float>(65535);
		result.z = static_cast<float>(color >> 32) / static_cast<float>(65535);
		result.w = static_cast<float>(color >> 48) / static_cast<float>(65535);
		return result;
	}

	template <>
	inline detail::_xvec4<float> f32_argb_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<float> result;
		result.x = static_cast<float>(color >> 16) / static_cast<float>(65535);
		result.y = static_cast<float>(color >> 32) / static_cast<float>(65535);
		result.z = static_cast<float>(color >> 48) / static_cast<float>(65535);
		result.w = static_cast<float>(color >>  0) / static_cast<float>(65535);
		return result;
	}

	template <>
	inline detail::_xvec4<float> f32_bgra_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<float> result;
		result.x = static_cast<float>(color >> 32) / static_cast<float>(65535);
		result.y = static_cast<float>(color >> 16) / static_cast<float>(65535);
		result.z = static_cast<float>(color >>  0) / static_cast<float>(65535);
		result.w = static_cast<float>(color >> 48) / static_cast<float>(65535);
		return result;
	}

	template <>
	inline detail::_xvec4<float> f32_abgr_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<float> result;
		result.x = static_cast<float>(color >> 48) / static_cast<float>(65535);
		result.y = static_cast<float>(color >> 32) / static_cast<float>(65535);
		result.z = static_cast<float>(color >> 16) / static_cast<float>(65535);
		result.w = static_cast<float>(color >>  0) / static_cast<float>(65535);
		return result;
	}

	template <>
	inline double f64_channel_castGTX<__uint16GTX>(__uint16GTX color)
	{
		return static_cast<double>(color >>  0) / static_cast<double>(65535);
	}

	template <>
	inline detail::_xvec3<double> f64_rgbx_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<double> result;
		result.x = static_cast<double>(color >>  0) / static_cast<double>(65535);
		result.y = static_cast<double>(color >> 16) / static_cast<double>(65535);
		result.z = static_cast<double>(color >> 32) / static_cast<double>(65535);
		return result;
	}

	template <>
	inline detail::_xvec3<double> f64_xrgb_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<double> result;
		result.x = static_cast<double>(color >> 16) / static_cast<double>(65535);
		result.y = static_cast<double>(color >> 32) / static_cast<double>(65535);
		result.z = static_cast<double>(color >> 48) / static_cast<double>(65535);
		return result;
	}

	template <>
	inline detail::_xvec3<double> f64_bgrx_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<double> result;
		result.x = static_cast<double>(color >> 32) / static_cast<double>(65535);
		result.y = static_cast<double>(color >> 16) / static_cast<double>(65535);
		result.z = static_cast<double>(color >>  0) / static_cast<double>(65535);
		return result;
	}

	template <>
	inline detail::_xvec3<double> f64_xbgr_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec3<double> result;
		result.x = static_cast<double>(color >> 48) / static_cast<double>(65535);
		result.y = static_cast<double>(color >> 32) / static_cast<double>(65535);
		result.z = static_cast<double>(color >> 16) / static_cast<double>(65535);
		return result;
	}

	template <>
	inline detail::_xvec4<double> f64_rgba_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<double> result;
		result.x = static_cast<double>(color >>  0) / static_cast<double>(65535);
		result.y = static_cast<double>(color >> 16) / static_cast<double>(65535);
		result.z = static_cast<double>(color >> 32) / static_cast<double>(65535);
		result.w = static_cast<double>(color >> 48) / static_cast<double>(65535);
		return result;
	}

	template <>
	inline detail::_xvec4<double> f64_argb_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<double> result;
		result.x = static_cast<double>(color >> 16) / static_cast<double>(65535);
		result.y = static_cast<double>(color >> 32) / static_cast<double>(65535);
		result.z = static_cast<double>(color >> 48) / static_cast<double>(65535);
		result.w = static_cast<double>(color >>  0) / static_cast<double>(65535);
		return result;
	}

	template <>
	inline detail::_xvec4<double> f64_bgra_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<double> result;
		result.x = static_cast<double>(color >> 32) / static_cast<double>(65535);
		result.y = static_cast<double>(color >> 16) / static_cast<double>(65535);
		result.z = static_cast<double>(color >>  0) / static_cast<double>(65535);
		result.w = static_cast<double>(color >> 48) / static_cast<double>(65535);
		return result;
	}

	template <>
	inline detail::_xvec4<double> f64_abgr_castGTX<__uint64GTX>(__uint64GTX color)
	{
		detail::_xvec4<double> result;
		result.x = static_cast<double>(color >> 48) / static_cast<double>(65535);
		result.y = static_cast<double>(color >> 32) / static_cast<double>(65535);
		result.z = static_cast<double>(color >> 16) / static_cast<double>(65535);
		result.w = static_cast<double>(color >>  0) / static_cast<double>(65535);
		return result;
	}
}
