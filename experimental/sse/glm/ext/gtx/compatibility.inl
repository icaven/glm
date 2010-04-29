///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-16
// Updated : 2007-09-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/compatibility.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	// isfiniteGTX
	template <typename T> 
	inline bool isfiniteGTX(T x)
	{
#ifdef GLM_COMPILER_VC
		return _finite(x);
#endif

#ifdef GLM_COMPILER_GCC
		return std::isfinite(x);
#endif
	}

	template <typename T> 
	inline detail::_bvec2 isfiniteGTX(const detail::_xvec2<T>& x)
	{
		return detail::_bvec2(
			isfiniteGTX(x.x),
			isfiniteGTX(x.y));
	}

    template <typename T> 
	inline detail::_bvec3 isfiniteGTX(const detail::_xvec3<T>& x)
	{
		return detail::_bvec3(
			isfiniteGTX(x.x),
			isfiniteGTX(x.y),
			isfiniteGTX(x.z));
	}

    template <typename T> 
	inline detail::_bvec4 isfiniteGTX(const detail::_xvec4<T>& x)
	{
		return detail::_bvec4(
			isfiniteGTX(x.x),
			isfiniteGTX(x.y),
			isfiniteGTX(x.z),
			isfiniteGTX(x.w));
	}

	// isinfGTX
	template <typename T> 
	inline bool isinfGTX(T x)
	{
#ifdef GLM_COMPILER_VC
		return _fpclass(x) == _FPCLASS_NINF || _fpclass(x) == _FPCLASS_PINF;
#endif

#ifdef GLM_COMPILER_GCC
		return std::isinf(x);
#endif
	}

	template <typename T> 
	inline detail::_bvec2 isinfGTX(const detail::_xvec2<T>& x)
	{
		return detail::_bvec2(
			isinfGTX(x.x),
			isinfGTX(x.y));
	}

    template <typename T> 
	inline detail::_bvec3 isinfGTX(const detail::_xvec3<T>& x)
	{
		return detail::_bvec3(
			isinfGTX(x.x),
			isinfGTX(x.y),
			isinfGTX(x.z));
	}

    template <typename T> 
	inline detail::_bvec4 isinfGTX(const detail::_xvec4<T>& x)
	{
		return detail::_bvec4(
			isinfGTX(x.x),
			isinfGTX(x.y),
			isinfGTX(x.z),
			isinfGTX(x.w));
	}

	// isnanGTX
	template <typename T> 
	inline bool isnanGTX(T x)
	{
#ifdef GLM_COMPILER_VC
		return _isnan(x);
#endif

#ifdef GLM_COMPILER_GCC
		return std::isnan(x);
#endif
	}

	template <typename T> 
	inline detail::_bvec2 isnanGTX(const detail::_xvec2<T>& x)
	{
		return detail::_bvec2(
			isnanGTX(x.x),
			isnanGTX(x.y));
	}

    template <typename T> 
	inline detail::_bvec3 isnanGTX(const detail::_xvec3<T>& x)
	{
		return detail::_bvec3(
			isnanGTX(x.x),
			isnanGTX(x.y),
			isnanGTX(x.z));
	}

    template <typename T> 
	inline detail::_bvec4 isnanGTX(const detail::_xvec4<T>& x)
	{
		return detail::_bvec4(
			isnanGTX(x.x),
			isnanGTX(x.y),
			isnanGTX(x.z),
			isnanGTX(x.w));
	}
}

