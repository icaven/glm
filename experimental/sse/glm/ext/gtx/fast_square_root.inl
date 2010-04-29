///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-04
// Updated : 2006-12-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/fast_square_root.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    // fastSqrtGTX
	template <typename T>
    inline T fastSqrtGTX(const T x)
    {
        return 1.0f / fastInverseSqrtGTX(x);
    }

	template <typename T>
    inline detail::_xvec2<T> fastSqrtGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastSqrtGTX(x.x), 
            fastSqrtGTX(x.y));
    }

	template <typename T>
    inline detail::_xvec3<T> fastSqrtGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastSqrtGTX(x.x), 
            fastSqrtGTX(x.y), 
            fastSqrtGTX(x.z));
    }

	template <typename T>
    inline detail::_xvec4<T> fastSqrtGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastSqrtGTX(x.x), 
            fastSqrtGTX(x.y), 
            fastSqrtGTX(x.z), 
            fastSqrtGTX(x.w));
    }

    // fastInversesqrtGTX
	template <typename T>
    inline T fastInverseSqrtGTX(const T x)
    {
        float xhalf = 0.5f * x;
        int i = *(int*)&x;
        i = 0x5f375a86 - (i >> 1);
        x = *(float*)&i;
        x = x * (1.5f - xhalf * x * x);
        return T(x);
    }

	template <typename T>
    inline detail::_xvec2<T> fastInverseSqrtGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastInverseSqrtGTX(x.x), 
            fastInverseSqrtGTX(x.y));
    }

	template <typename T>
    inline detail::_xvec3<T> fastInverseSqrtGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastInverseSqrtGTX(x.x), 
            fastInverseSqrtGTX(x.y), 
            fastInverseSqrtGTX(x.z));
    }

	template <typename T>
    inline detail::_xvec4<T> fastInverseSqrtGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastInverseSqrtGTX(x.x), 
            fastInverseSqrtGTX(x.y), 
            fastInverseSqrtGTX(x.z), 
            fastInverseSqrtGTX(x.w));
    }

    // fastLengthGTX
	template <typename T>
    inline T fastLengthGTX(const T x)
    {
        return abs(x);
    }

	template <typename T>
    inline T fastLengthGTX(const detail::_xvec2<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y;
        return fastSqrtGTX(sqr);
    }

	template <typename T>
    inline T fastLengthGTX(const detail::_xvec3<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y + x.z * x.z;
        return fastSqrtGTX(sqr);
    }

	template <typename T>
    inline T fastLengthGTX(const detail::_xvec4<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w;
        return fastSqrtGTX(sqr);
    }

    // fastDistanceGTX
	template <typename T>
    inline T fastDistanceGTX(const T x, const T y)
    {
        return fastLengthGTX(y - x);
    }

	template <typename T>
    inline T fastDistanceGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return fastLengthGTX(y - x);
    }

	template <typename T>
    inline T fastDistanceGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return fastLengthGTX(y - x);
    }

	template <typename T>
    inline T fastDistanceGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return fastLengthGTX(y - x);
    }

    // fastNormalizeGTX
	template <typename T>
    inline T fastNormalizeGTX(const T x)
    {
        return x > 0.0f ? 1.0f : -1.0f;
    }

	template <typename T>
    inline detail::_xvec2<T> fastNormalizeGTX(const detail::_xvec2<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y;
	    return x * fastInverseSqrtGTX(sqr);
    }

	template <typename T>
    inline detail::_xvec3<T> fastNormalizeGTX(const detail::_xvec3<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y + x.z * x.z;
	    return x * fastInverseSqrtGTX(sqr);
    }

	template <typename T>
    inline detail::_xvec4<T> fastNormalizeGTX(const detail::_xvec4<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w;
	    return x * fastInverseSqrtGTX(sqr);
    }
}
