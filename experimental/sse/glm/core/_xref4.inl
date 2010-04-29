///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-05-29
// Updated : 2006-05-29
// Licence : This source is under GNU LGPL licence
// File    : _xref4.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xref4_inl__
#define __xref4_inl__

#include "./_xref4.h"

namespace glm{
namespace detail{

    template <typename T>
    inline _xref4<T>::_xref4(T& x, T& y, T& z, T& w) :
        x(x),
        y(y),
        z(z),
        w(w)
    {}

    template <typename T>
    inline _xref4<T>& _xref4<T>::operator=(const _xref4<T>& r)
    {
        x = r.x;
        y = r.y;
        z = r.z;
        w = r.w;
        return *this;
    }

    template <typename T>
    inline _xref4<T>& _xref4<T>::operator+=(const _xref4<T>& r)
    {
        x += r.x;
        y += r.y;
        z += r.z;
        w += r.w;
        return *this;
    }

    template <typename T>
	inline _xref4<T>& _xref4<T>::operator-=(const _xref4<T>& r)
    {
        x -= r.x;
        y -= r.y;
        z -= r.z;
        w -= r.w;
        return *this;
    }

    template <typename T>
	inline _xref4<T>& _xref4<T>::operator*=(const _xref4<T>& r)
    {
        x *= r.x;
        y *= r.y;
        z *= r.z;
        w *= r.w;
        return *this;
    }

    template <typename T>
	inline _xref4<T>& _xref4<T>::operator/=(const _xref4<T>& r)
    {
        x /= r.x;
        y /= r.y;
        z /= r.z;
        w /= r.w;
        return *this;
    }

    template <typename T>
    _xref4<T>& _xref4<T>::operator=(const _xvec4<T>& v)
    {
        x = v.x;
        y = v.y;
        z = v.z;
        w = v.w;
        return *this;
    }

    template <typename T>
    inline _xref4<T>& _xref4<T>::operator+=(const _xvec4<T>& v)
    {
        x += v.x;
        y += v.y;
        z += v.z;
        w += v.w;
        return *this;
    }

    template <typename T>
	inline _xref4<T>& _xref4<T>::operator-=(const _xvec4<T>& v)
    {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        w -= v.w;
        return *this;
    }

    template <typename T>
	inline _xref4<T>& _xref4<T>::operator*=(const _xvec4<T>& v)
    {
        x *= v.x;
        y *= v.y;
        z *= v.z;
        w *= v.w;
        return *this;
    }

    template <typename T>
	inline _xref4<T>& _xref4<T>::operator/=(const _xvec4<T>& v)
    {
        x /= v.x;
        y /= v.y;
        z /= v.z;
        w /= v.w;
        return *this;
    }

} //namespace detail
} //namespace glm

#endif//__xref4_inl__
