///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-14
// Updated : 2007-03-14
// Licence : This source is under GNU LGPL licence
// File    : gtx_extented_min_max.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T> 
	inline detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const T y, const T z)
	{
		return min(x, min(y, z));
	}

    template <typename T> 
	inline detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const T y, const T z)
	{
		return min(x, min(y, z));
	}

    template <typename T> 
	inline detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const T y, const T z)
	{
		return min(x, min(y, z));
	}

    template <typename T> 
	inline detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const T y, const T z, const T w)
	{
		return min(x, min(y, min(z, w)));
	}

    template <typename T> 
	inline detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const T y, const T z, const T w)
	{
		return min(x, min(y, min(z, w)));
	}

    template <typename T> 
	inline detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const T y, const T z, const T w)
	{
		return min(x, min(y, min(z, w)));
	}

    template <typename T> 
	inline detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z)
	{
		return min(x, min(y, z));
	}

    template <typename T> 
	inline detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z)
	{
		return min(x, min(y, z));
	}

    template <typename T> 
	inline detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z)
	{
		return min(x, min(y, z));
	}
	
    template <typename T> 
	inline detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z, const detail::_xvec2<T>& w)
	{
		return min(min(x, y), min(z, w));
	}

    template <typename T> 
	inline detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z, const detail::_xvec3<T>& w)
	{
		return min(min(x, y), min(z, w));
	}

    template <typename T> 
	inline detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z, const detail::_xvec4<T>& w)
	{
		return min(min(x, y), min(z, w));
	}

	template <typename T> 
	inline detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const T y, const T z)
	{
		return max(x, max(y, z));
	}

    template <typename T> 
	inline detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const T y, const T z)
	{
		return max(x, max(y, z));
	}

    template <typename T> 
	inline detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const T y, const T z)
	{
		return max(x, max(y, z));
	}

    template <typename T> 
	inline detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const T y, const T z, const T w)
	{
		return max(max(x, y), max(z, w));
	}

    template <typename T> 
	inline detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const T y, const T z, const T w)
	{
		return max(max(x, y), max(z, w));
	}

    template <typename T> 
	inline detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const T y, const T z, const T w)
	{
		return max(max(x, y), max(z, w));
	}
	
    template <typename T> 
	inline detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z)
	{
		return max(max(x, y), z);
	}

    template <typename T> 
	inline detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z)
	{
		return max(max(x, y), z);
	}

    template <typename T> 
	inline detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z)
	{
		return max(max(x, y), z);
	}

    template <typename T> 
	inline detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z, const detail::_xvec2<T>& w)
	{
		return max(max(x, y), max(z, w));
	}

    template <typename T> 
	inline detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z, const detail::_xvec3<T>& w)
	{
		return max(max(x, y), max(z, w));
	}

    template <typename T> 
	inline detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z, const detail::_xvec4<T>& w)
	{
		return max(max(x, y), max(z, w));
	}
}
