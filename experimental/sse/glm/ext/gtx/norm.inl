///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/norm.h
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T>
    inline T length2GTX(const T x)
    {
        return x * x;
    }

    template <typename T>
    inline T length2GTX(const detail::_xvec2<T>& x)
    {
        return dot(x, x);
    }

    template <typename T>
    inline T length2GTX(const detail::_xvec3<T>& x)
    {
        return dot(x, x);
    }

    template <typename T>
    inline T length2GTX(const detail::_xvec4<T>& x)
    {
        return dot(x, x);
    }

    template <typename T> 
    inline T length2GTX(const detail::_xquat<T>& q)
    {
        return q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w;
    }

    template <typename T> 
    inline T l1NormGTX(const detail::_xvec3<T>& a, const detail::_xvec3<T>& b)
    {
        return abs(b.x - a.x) + abs(b.y - a.y) + abs(b.z - a.z);
    }
}
