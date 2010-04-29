///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-05-29
// Updated : 2006-05-29
// Licence : This source is under GNU LGPL licence
// File    : _xref4.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xref4_h__
#define __xref4_h__

namespace glm{
namespace detail{

    template <typename T>
    class _xref4
    {
	public:
        _xref4(T& x, T& y, T& z, T& w);
        _xref4<T>& operator= (const _xref4<T>& r);
        _xref4<T>& operator+=(const _xref4<T>& r);
	    _xref4<T>& operator-=(const _xref4<T>& r);
	    _xref4<T>& operator*=(const _xref4<T>& r);
	    _xref4<T>& operator/=(const _xref4<T>& r);
        _xref4<T>& operator= (const _xvec4<T>& v);
        _xref4<T>& operator+=(const _xvec4<T>& v);
	    _xref4<T>& operator-=(const _xvec4<T>& v);
	    _xref4<T>& operator*=(const _xvec4<T>& v);
	    _xref4<T>& operator/=(const _xvec4<T>& v);
        T& x;
        T& y;
        T& z;
        T& w;
    };

} //namespace detail
} //namespace glm

#endif//__xref4_h__
