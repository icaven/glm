///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-05-29
// Updated : 2006-05-29
// Licence : This source is under GNU LGPL licence
// File    : _xref3.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xref3_h__
#define __xref3_h__

namespace glm{
namespace detail{

    template <typename T>
    class _xref3
    {
	public:
        _xref3(T& x, T& y, T& z);
        _xref3<T>& operator= (const _xref3<T>& r);
        _xref3<T>& operator+=(const _xref3<T>& r);
	    _xref3<T>& operator-=(const _xref3<T>& r);
	    _xref3<T>& operator*=(const _xref3<T>& r);
	    _xref3<T>& operator/=(const _xref3<T>& r);
        _xref3<T>& operator= (const _xvec3<T>& v);
        _xref3<T>& operator+=(const _xvec3<T>& v);
	    _xref3<T>& operator-=(const _xvec3<T>& v);
	    _xref3<T>& operator*=(const _xvec3<T>& v);
	    _xref3<T>& operator/=(const _xvec3<T>& v);
        T& x;
        T& y;
        T& z;
    };

} //namespace detail
} //namespace glm

#endif//__xref3_h__
