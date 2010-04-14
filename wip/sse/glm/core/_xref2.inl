///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-05-29
// Updated : 2006-05-29
// Licence : This source is under GNU LGPL licence
// File    : _xref2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xref2_inl__
#define __xref2_inl__

#include "./_xref2.h"

namespace glm{
namespace detail{

    template <typename T>
    inline _xref2<T>::_xref2(T& x, T& y) :
        x(x),
        y(y)
    {}

    template <typename T>
    inline _xref2<T>& _xref2<T>::operator=(const _xref2<T>& r)
    {
        x = r.x;
        y = r.y;
        return *this;
    }

    template <typename T>
    inline _xref2<T>& _xref2<T>::operator+=(const _xref2<T>& r)
    {
        x += r.x;
        y += r.y;
        return *this;
    }

    template <typename T>
	inline _xref2<T>& _xref2<T>::operator-=(const _xref2<T>& r)
    {
        x -= r.x;
        y -= r.y;
        return *this;
    }

    template <typename T>
	inline _xref2<T>& _xref2<T>::operator*=(const _xref2<T>& r)
    {
        x *= r.x;
        y *= r.y;
        return *this;
    }

    template <typename T>
	inline _xref2<T>& _xref2<T>::operator/=(const _xref2<T>& r)
    {
        x /= r.x;
        y /= r.y;
        return *this;
    }

    template <typename T>
    inline _xref2<T>& _xref2<T>::operator=(const _xvec2<T>& v)
    {
        x = v.x;
        y = v.y;
        return *this;
    }

    template <typename T>
    inline _xref2<T>& _xref2<T>::operator+=(const _xvec2<T>& v)
    {
        x += v.x;
        y += v.y;
        return *this;
    }

    template <typename T>
	inline _xref2<T>& _xref2<T>::operator-=(const _xvec2<T>& v)
    {
        x -= v.x;
        y -= v.y;
        return *this;
    }

    template <typename T>
	inline _xref2<T>& _xref2<T>::operator*=(const _xvec2<T>& v)
    {
        x *= v.x;
        y *= v.y;
        return *this;
    }

    template <typename T>
	inline _xref2<T>& _xref2<T>::operator/=(const _xvec2<T>& v)
    {
        x /= v.x;
        y /= v.y;
        return *this;
    }

} //namespace detail
} //namespace glm

#endif//__xref2_inl__
