///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_xvec4.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_xvec4_inl__
#define __glm_core_xvec4_inl__

#include "./_xvec2.h"
#include "./_bvec2.h"
#include "./_xvec3.h"
#include "./_bvec3.h"
#include "./_xvec4.h"
#include "./_bvec4.h"
#include "./_swizzle.inl"

namespace glm{
namespace detail{

    // Common constructors
    template <typename T> 
    inline _xvec4<T>::_xvec4() :
		_cvec4<XVEC4_INST>(T(0), T(0), T(0), T(0))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec4<T>& v) :
		_cvec4<XVEC4_INST>(v.x, v.y, v.z, v.w)
    {}

    // Swizzle constructors
    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xref4<T>& r) :
		_cvec4<XVEC4_INST>(r.x, r.y, r.z, r.w)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec4_base(T)& b) :
		_cvec4<XVEC4_INST>(b.x, b.y, b.z, b.w)
    {}

    // T constructors
    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s) :
		_cvec4<XVEC4_INST>(s, s, s, s)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T x, const T y, const T z, const T w) :
		_cvec4<XVEC4_INST>(x, y, z, w)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s1, const T s2, const T s3, const _xvec2<T>& v) :
		_cvec4<XVEC4_INST>(s1, s2, s3, v.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s1, const T s2, const T s3, const _xvec3<T>& v) :
		_cvec4<XVEC4_INST>(s1, s2, s3, v.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s1, const T s2, const T s3, const _xvec4<T>& v) :
		_cvec4<XVEC4_INST>(s1, s2, s3, v.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s1, const T s2, const _xvec2<T>& v) :
		_cvec4<XVEC4_INST>(s1, s2, v.x, v.y)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s1, const T s2, const _xvec3<T>& v) :
		_cvec4<XVEC4_INST>(s1, s2, v.x, v.y)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s1, const T s2, const _xvec4<T>& v) :
		_cvec4<XVEC4_INST>(s1, s2, v.x, v.y)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s1, const _xvec2<T>& v, const T s2) :
		_cvec4<XVEC4_INST>(s1, v.x, v.y, s2)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s, const _xvec2<T>& v1, const _xvec2<T>& v2) :
		_cvec4<XVEC4_INST>(s, v1.x, v1.y, v2.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s, const _xvec2<T>& v1, const _xvec3<T>& v2) :
		_cvec4<XVEC4_INST>(s, v1.x, v1.y, v2.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s, const _xvec2<T>& v1, const _xvec4<T>& v2) :
		_cvec4<XVEC4_INST>(s, v1.x, v1.y, v2.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s, const _xvec3<T>& v) :
		_cvec4<XVEC4_INST>(s, v.x, v.y, v.z)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const T s, const _xvec4<T>& v) :
		_cvec4<XVEC4_INST>(s, v.x, v.y, v.z)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec2<T>& v, const T s1, const T s2) :
		_cvec4<XVEC4_INST>(v.x, v.y, s1, s2)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec2<T>& v1, const T s, const _xvec2<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, s, v2.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec2<T>& v1, const T s, const _xvec3<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, s, v2.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec2<T>& v1, const T s, const _xvec4<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, s, v2.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec2<T>& v1, const _xvec2<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, v2.x, v2.y)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec2<T>& v1, const _xvec3<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, v2.x, v2.y)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec2<T>& v1, const _xvec4<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, v2.x, v2.y)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec3<T>& v, const T s) :
		_cvec4<XVEC4_INST>(v.x, v.y, v.z, s)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec3<T>& v1, const _xvec2<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, v1.z, v2.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec3<T>& v1, const _xvec3<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, v1.z, v2.x)
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _xvec3<T>& v1, const _xvec4<T>& v2) :
		_cvec4<XVEC4_INST>(v1.x, v1.y, v1.z, v2.x)
    {}

    // U constructors
    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s) :
		_cvec4<XVEC4_INST>(T(s), T(s), T(s), T(s))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s1, const U s2, const U s3, const U s4) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(s3), T(s4))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s1, const U s2, const U s3, const _xvec2<U>& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(s3), T(v.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s1, const U s2, const U s3, const _xvec3<U>& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(s3), T(v.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s1, const U s2, const U s3, const _xvec4<U>& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(s3), T(v.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s1, const U s2, const _xvec2<U>& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(v.x), T(v.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s1, const U s2, const _xvec3<U>& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(v.x), T(v.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s1, const U s2, const _xvec4<U>& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(v.x), T(v.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s1, const _xvec2<U>& v, const U s2) :
		_cvec4<XVEC4_INST>(T(s1), T(v.x), T(v.y), T(s2))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s, const _xvec2<U>& v1, const _xvec2<U>& v2) :
		_cvec4<XVEC4_INST>(T(s), T(v1.x), T(v1.y), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s, const _xvec2<U>& v1, const _xvec3<U>& v2) :
		_cvec4<XVEC4_INST>(T(s), T(v1.x), T(v1.y), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s, const _xvec2<U>& v1, const _xvec4<U>& v2) :
		_cvec4<XVEC4_INST>(T(s), T(v1.x), T(v1.y), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s, const _xvec3<U>& v) :
		_cvec4<XVEC4_INST>(T(s), T(v.x), T(v.y), T(v.z))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const U s, const _xvec4<U>& v) :
		_cvec4<XVEC4_INST>(T(s), T(v.x), T(v.y), T(v.z))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec2<U>& v, const U s1, const U s2) :
		_cvec4<XVEC4_INST>(T(v.x), T(v.y), T(s1), T(s2))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec2<U>& v1, const U s, const _xvec2<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(s), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec2<U>& v1, const U s, const _xvec3<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(s), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec2<U>& v1, const U s, const _xvec4<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(s), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec2<U>& v1, const _xvec2<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v2.x), T(v2.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec2<U>& v1, const _xvec3<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v2.x), T(v2.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec2<U>& v1, const _xvec4<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v2.x), T(v2.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec3<U>& v, const U s) :
		_cvec4<XVEC4_INST>(T(v.x), T(v.y), T(v.z), T(s))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec3<U>& v1, const _xvec2<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v1.z), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec3<U>& v1, const _xvec3<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v1.z), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec3<U>& v1, const _xvec4<U>& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v1.z), T(v2.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec4<T>::_xvec4(const _xvec4<U>& v) :
		_cvec4<XVEC4_INST>(T(v.x), T(v.y), T(v.z), T(v.w))
    {}

    // Bool constructors
	template <typename T>
	inline _xvec4<T>::_xvec4(const bool x) :
	   _cvec4<XVEC4_INST>(T(x), T(x), T(x), T(x))
	{}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool x, const bool y, const bool z, const bool w) :
        _cvec4<XVEC4_INST>(T(x), T(y), T(z), T(w))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s1, const bool s2, const bool s3, const _bvec2& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(s3), T(v.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s1, const bool s2, const bool s3, const _bvec3& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(s3), T(v.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s1, const bool s2, const bool s3, const _bvec4& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(s3), T(v.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s1, const bool s2, const _bvec2& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(v.x), T(v.y))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s1, const bool s2, const _bvec3& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(v.x), T(v.y))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s1, const bool s2, const _bvec4& v) :
		_cvec4<XVEC4_INST>(T(s1), T(s2), T(v.x), T(v.y))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s1, const _bvec2& v, const bool s2) :
		_cvec4<XVEC4_INST>(T(s1), T(v.x), T(v.y), T(s2))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s, const _bvec2& v1, const _bvec2& v2) :
		_cvec4<XVEC4_INST>(T(s), T(v1.x), T(v1.y), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s, const _bvec2& v1, const _bvec3& v2) :
		_cvec4<XVEC4_INST>(T(s), T(v1.x), T(v1.y), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s, const _bvec2& v1, const _bvec4& v2) :
		_cvec4<XVEC4_INST>(T(s), T(v1.x), T(v1.y), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s, const _bvec3& v) :
		_cvec4<XVEC4_INST>(T(s), T(v.x), T(v.y), T(v.z))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const bool s, const _bvec4& v) :
		_cvec4<XVEC4_INST>(T(s), T(v.x), T(v.y), T(v.z))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec2& v, const bool s1, const bool s2) :
		_cvec4<XVEC4_INST>(T(v.x), T(v.y), T(s1), T(s2))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec2& v1, const bool s, const _bvec2& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(s), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec2& v1, const bool s, const _bvec3& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(s), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec2& v1, const bool s, const _bvec4& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(s), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec2& v1, const _bvec2& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v2.x), T(v2.y))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec2& v1, const _bvec3& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v2.x), T(v2.y))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec2& v1, const _bvec4& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v2.x), T(v2.y))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec3& v, const bool s) :
		_cvec4<XVEC4_INST>(T(v.x), T(v.y), T(v.z), T(s))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec3& v1, const _bvec2& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v1.z), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec3& v1, const _bvec3& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v1.z), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec3& v1, const _bvec4& v2) :
		_cvec4<XVEC4_INST>(T(v1.x), T(v1.y), T(v1.z), T(v2.x))
    {}

    template <typename T> 
    inline _xvec4<T>::_xvec4(const _bvec4& v) :
		_cvec4<XVEC4_INST>(T(v.x), T(v.y), T(v.z), T(v.w))
    {}

    // vec4 and ivec4 operators definitions

    // This function shouldn't required but it seems that VC7.1 have an optimisation bug if this operator wasn't declared
    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator=(const _xvec4<T>& x)
    {
        this->x = x.x;
        this->y = x.y;
        this->z = x.z;
        this->w = x.w;
        return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator+= (const T s)
    {
	    this->x += s;
	    this->y += s;
        this->z += s;
        this->w += s;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator+=(const _xvec4<T> & v)
    {
	    this->x += v.x;
	    this->y += v.y;
        this->z += v.z;
        this->w += v.w;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator-= (const T s)
    {
	    this->x -= s;
	    this->y -= s;
        this->z -= s;
        this->w -= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator-=(const _xvec4<T> & v)
    {
	    this->x -= v.x;
	    this->y -= v.y;
        this->z -= v.z;
        this->w -= v.w;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator*=(const T s)
    {
	    this->x *= s;
	    this->y *= s;
        this->z *= s;
        this->w *= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator*= (const _xvec4<T> & v)
    {
	    this->x *= v.x;
	    this->y *= v.y;
        this->z *= v.z;
        this->w *= v.w;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator/=(const T s)
    {
	    this->x /= s;
	    this->y /= s;
        this->z /= s;
        this->w /= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator/= (const _xvec4<T> & v)
    {
	    this->x /= v.x;
	    this->y /= v.y;
        this->z /= v.z;
        this->w /= v.w;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator++ ()
    {
	    ++this->x;
	    ++this->y;
        ++this->z;
		++this->w;
	    return *this;
    }

    template <typename T> 
    inline _xvec4<T>& _xvec4<T>::operator-- ()
    {
	    --this->x;
	    --this->y;
        --this->z;
		--this->w;
	    return *this;
    }

    // Unary constant operators
    template <typename T> 
    inline const _xvec4<T> operator- (const _xvec4<T>& v)
    {
        return _xvec4<T>(
            -v.x, 
            -v.y,
            -v.z,
            -v.w);
    }

    template <typename T> 
    inline const _xvec4<T> operator++ (const _xvec4<T>& v, int)
    {
        return _xvec4<T>(
            v.x + T(1), 
            v.y + T(1),
            v.z + T(1),
            v.w + T(1));
    }

    template <typename T> 
    inline const _xvec4<T> operator-- (const _xvec4<T>& v, int)
    {
        return _xvec4<T>(
            v.x - T(1), 
            v.y - T(1),
            v.z - T(1),
            v.w - T(1));
    }
/*
	template <typename T> 
    inline _xvec4<T>& operator%=(const T s)
	{
	    this->x %= s;
	    this->y %= s;
		this->z %= s;
		this->w %= s;
	    return *this;
	}

	template <typename T> 
    inline _xvec4<T>& operator%=(const _xvec4<T>& v)
	{
	    this->x %= v.x;
	    this->y %= v.y;
		this->z %= v.z;
		this->w %= v.w;
	    return *this;
	}

	template <typename T> 
	inline _xvec4<T>& operator&=(const T s)
	{
	    this->x &= s;
	    this->y &= s;
		this->z &= s;
		this->w &= s;
	    return *this;
	}

    template <typename T> 
	inline _xvec4<T>& operator&=(const _xvec4<T>& v)
	{
	    this->x &= v.x;
	    this->y &= v.y;
		this->z &= v.z;
		this->w &= v.w;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec4<T>& operator|=(const T s)
	{
	    this->x |= s;
	    this->y |= s;
		this->z |= s;
		this->w |= s;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec4<T>& operator|=(const _xvec4<T>& v)
	{
	    this->x |= v.x;
	    this->y |= v.y;
		this->z |= v.z;
		this->w |= v.w;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec4<T>& operator^=(const T s)
	{
	    this->x ^= s;
	    this->y ^= s;
		this->z ^= s;
		this->w ^= s;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec4<T>& operator^=(const _xvec4<T>& v)
	{
	    this->x ^= v.x;
	    this->y ^= v.y;
		this->z ^= v.z;
		this->w ^= v.w;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec4<T>& operator<<=(const T s)
	{
	    this->x <<= s;
	    this->y <<= s;
		this->z <<= s;
		this->w <<= s;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec4<T>& operator<<=(const _xvec4<T>& v)
	{
	    this->x <<= v.x;
	    this->y <<= v.y;
		this->z <<= v.z;
		this->w <<= v.w;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec4<T>& operator>>=(const T s)
	{
	    this->x >>= s;
	    this->y >>= s;
		this->z >>= s;
		this->w >>= s;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec4<T>& operator>>=(const _xvec4<T>& v)
	{
	    this->x >>= v.x;
	    this->y >>= v.y;
		this->z >>= v.z;
		this->w >>= v.w;
	    return *this;
	}

	// Bit operators
    template <typename T>
	inline _xvec4<T> operator% (const _xvec4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x % s,
		    v.y % s,
			v.z % s,
			v.w % s);
	}

    template <typename T>
    inline _xvec4<T> operator% (const T s, const _xvec4<T>& v)
	{
	    return _xvec4<T>(
		    s % v.x,
		    s % v.y,
			s % v.z,
			s % v.w);
	}

    template <typename T>
    inline _xvec4<T> operator% (const _xvec4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x % v2.x,
		    v1.y % v2.y,
			v1.z % v2.z,
			v1.w % v2.w);
	}

    template <typename T>
	inline _xvec4<T> operator& (const _xvec4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x & s,
		    v.y & s,
			v.z & s,
			v.w & s);
	}

    template <typename T>
    inline _xvec4<T> operator& (const T s, const _xvec4<T>& v)
	{
	    return _xvec4<T>(
		    s & v.x,
		    s & v.y,
			s & v.z,
			s & v.w);
	}

    template <typename T>
    inline _xvec4<T> operator& (const _xvec4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x & v2.x,
		    v1.y & v2.y,
			v1.z & v2.z,
			v1.w & v2.w);
	}

    template <typename T>
	inline _xvec4<T> operator| (const _xvec4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x | s,
		    v.y | s,
			v.z | s,
			v.w | s);
	}

    template <typename T>
    inline _xvec4<T> operator| (const T s, const _xvec4<T>& v)
	{
	    return _xvec4<T>(
		    s | v.x,
		    s | v.y,
			s | v.z,
			s | v.w);
	}

    template <typename T>
    inline _xvec4<T> operator| (const _xvec4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x | v2.x,
		    v1.y | v2.y,
			v1.z | v2.z,
			v1.w | v2.w);
	}
	
    template <typename T>
	inline _xvec4<T> operator^ (const _xvec4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x ^ s,
		    v.y ^ s,
			v.z ^ s,
			v.w ^ s);
	}

    template <typename T>
    inline _xvec4<T> operator^ (const T s, const _xvec4<T>& v)
	{
	    return _xvec4<T>(
		    s ^ v.x,
		    s ^ v.y,
			s ^ v.z,
			s ^ v.w);
	}

    template <typename T>
    inline _xvec4<T> operator^ (const _xvec4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x ^ v2.x,
		    v1.y ^ v2.y,
			v1.z ^ v2.z,
			v1.w ^ v2.w);
	}

    template <typename T>
	inline _xvec4<T> operator<< (const _xvec4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x << s,
		    v.y << s,
			v.z << s,
			v.w << s);
	}

    template <typename T>
    inline _xvec4<T> operator<< (const T s, const _xvec4<T>& v)
	{
	    return _xvec4<T>(
		    s << v.x,
		    s << v.y,
			s << v.z,
			s << v.w);
	}

    template <typename T>
    inline _xvec4<T> operator<< (const _xvec4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x << v2.x,
		    v1.y << v2.y,
			v1.z << v2.z,
			v1.w << v2.w);
	}

	template <typename T>
	inline _xvec4<T> operator>> (const _xvec4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x >> s,
		    v.y >> s,
			v.z >> s,
			v.w >> s);
	}

    template <typename T>
    inline _xvec4<T> operator>> (const T s, const _xvec4<T>& v)
	{
	    return _xvec4<T>(
		    s >> v.x,
		    s >> v.y,
			s >> v.z,
			s >> v.w);
	}

    template <typename T>
    inline _xvec4<T> operator>> (const _xvec4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x >> v2.x,
		    v1.y >> v2.y,
			v1.z >> v2.z,
			v1.w >> v2.w);
	}

    template <typename T> 
    inline const _xvec4<T> operator~ (const _xvec4<T>& v)
	{
	    return _xvec4<T>(
		    ~v.x,
		    ~v.y,
			~v.z,
			~v.w);
	}
*/
    // Binary operators
	//operator+
    template <typename T>
	inline _xvec4<T> operator+ (const _xvec4<T>& v, const T s)
    {
	    return _xvec4<T>(
		    v.x + s,
		    v.y + s,
            v.z + s,
            v.w + s);
    }

    template <typename T>
    inline _xvec4<T> operator+ (const T s, const _xvec4<T>& v)
    {
	    return _xvec4<T>(
		    v.x + s,
		    v.y + s,
            v.z + s,
            v.w + s);
    }

    template <typename T>
    inline _xvec4<T> operator+ (const _xvec4<T>& v1, const _xvec4<T>& v2)
    {
	    return _xvec4<T>(
		    v1.x + v2.x,
		    v1.y + v2.y,
            v1.z + v2.z,
            v1.w + v2.w);
    }
    
    template <typename T>
	inline _xvec4<T> operator+ (const _xref4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x + s,
		    v.y + s,
			v.z + s,
			v.w + s);
	}

    template <typename T>
    inline _xvec4<T> operator+ (const T s, const _xref4<T>& v)
	{
	    return _xvec4<T>(
		    s + v.x,
		    s + v.y,
			s + v.z,
			s + v.w);
	}
    
	template <typename T>
    inline _xvec4<T> operator+ (const _xref4<T>& v1, const _xref4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x + v2.x,
		    v1.y + v2.y,
			v1.z + v2.z,
			v1.w + v2.w);
	}

	template <typename T>
    inline _xvec4<T> operator+ (const _xvec4<T>& v1, const _xref4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x + v2.x,
		    v1.y + v2.y,
			v1.z + v2.z,
			v1.w + v2.w);
	}

	template <typename T>
    inline _xvec4<T> operator+ (const _xref4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x + v2.x,
		    v1.y + v2.y,
			v1.z + v2.z,
			v1.w + v2.w);
	}

	//operator-
    template <typename T>
	inline _xvec4<T> operator- (const _xvec4<T>& v, const T s)
    {
	    return _xvec4<T>(
		    v.x - s,
		    v.y - s,
            v.z - s,
            v.w - s);
    }

    template <typename T>
    inline _xvec4<T> operator- (const T s, const _xvec4<T>& v)
    {
	    return _xvec4<T>(
		    s - v.x,
		    s - v.y,
            s - v.z,
            s - v.w);
    }

    template <typename T>
    inline _xvec4<T> operator- (const _xvec4<T>& v1, const _xvec4<T>& v2)
    {
	    return _xvec4<T>(
		    v1.x - v2.x,
		    v1.y - v2.y,
            v1.z - v2.z,
            v1.w - v2.w);
    }

    template <typename T>
	inline _xvec4<T> operator- (const _xref4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x - s,
		    v.y - s,
			v.z - s,
			v.w - s);
	}

    template <typename T>
    inline _xvec4<T> operator- (const T s, const _xref4<T>& v)
	{
	    return _xvec4<T>(
		    s - v.x,
		    s - v.y,
			s - v.z,
			s - v.w);
	}
    
	template <typename T>
    inline _xvec4<T> operator- (const _xref4<T>& v1, const _xref4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x - v2.x,
		    v1.y - v2.y,
			v1.z - v2.z,
			v1.w - v2.w);
	}

	template <typename T>
    inline _xvec4<T> operator- (const _xvec4<T>& v1, const _xref4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x - v2.x,
		    v1.y - v2.y,
			v1.z - v2.z,
			v1.w - v2.w);
	}

	template <typename T>
    inline _xvec4<T> operator- (const _xref4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x - v2.x,
		    v1.y - v2.y,
			v1.z - v2.z,
			v1.w - v2.w);
	}

	//operator*
    template <typename T>
    inline _xvec4<T> operator* (const _xvec4<T>& v, const T s)
    {
	    return _xvec4<T>(
		    v.x * s,
		    v.y * s,
            v.z * s,
            v.w * s);
    }

    template <typename T>
    inline _xvec4<T> operator* (const T s, const _xvec4<T>& v)
    {
	    return _xvec4<T>(
		    s * v.x,
		    s * v.y,
            s * v.z,
            s * v.w);
    }

    template <typename T>
    inline _xvec4<T> operator* (const _xvec4<T>& v1, const _xvec4<T>& v2)
    {
	    return _xvec4<T>(
		    v1.x * v2.x,
		    v1.y * v2.y,
            v1.z * v2.z,
            v1.w * v2.w);
    }

    template <typename T>
	inline _xvec4<T> operator* (const _xref4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x * s,
		    v.y * s,
			v.z * s,
			v.w * s);
	}

    template <typename T>
    inline _xvec4<T> operator* (const T s, const _xref4<T>& v)
	{
	    return _xvec4<T>(
		    s * v.x,
		    s * v.y,
			s * v.z,
			s * v.w);
	}
    
	template <typename T>
    inline _xvec4<T> operator* (const _xref4<T>& v1, const _xref4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x * v2.x,
		    v1.y * v2.y,
			v1.z * v2.z,
			v1.w * v2.w);
	}

	template <typename T>
    inline _xvec4<T> operator* (const _xvec4<T>& v1, const _xref4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x * v2.x,
		    v1.y * v2.y,
			v1.z * v2.z,
			v1.w * v2.w);
	}

	template <typename T>
    inline _xvec4<T> operator* (const _xref4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x * v2.x,
		    v1.y * v2.y,
			v1.z * v2.z,
			v1.w * v2.w);
	}

	// operator/
    template <typename T>
    inline _xvec4<T> operator/ (const _xvec4<T>& v, const T s)
    {
	    return _xvec4<T>(
		    v.x / s,
		    v.y / s,
            v.z / s,
            v.w / s);
    }

    template <typename T>
    inline _xvec4<T> operator/ (const T s, const _xvec4<T>& v)
    {
	    return _xvec4<T>(
		    s / v.x,
		    s / v.y,
            s / v.z,
            s / v.w);
    }

    template <typename T>
    inline _xvec4<T> operator/ (const _xvec4<T>& v1, const _xvec4<T>& v2)
    {
	    return _xvec4<T>(
		    v1.x / v2.x,
		    v1.y / v2.y,
            v1.z / v2.z,
            v1.w / v2.w);
    }

    template <typename T>
	inline _xvec4<T> operator/ (const _xref4<T>& v, const T s)
	{
	    return _xvec4<T>(
		    v.x / s,
		    v.y / s,
			v.z / s,
			v.w / s);
	}

    template <typename T>
    inline _xvec4<T> operator/ (const T s, const _xref4<T>& v)
	{
	    return _xvec4<T>(
		    s / v.x,
		    s / v.y,
			s / v.z,
			s / v.w);
	}
    
	template <typename T>
    inline _xvec4<T> operator/ (const _xref4<T>& v1, const _xref4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x / v2.x,
		    v1.y / v2.y,
			v1.z / v2.z,
			v1.w / v2.w);
	}

	template <typename T>
    inline _xvec4<T> operator/ (const _xvec4<T>& v1, const _xref4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x / v2.x,
		    v1.y / v2.y,
			v1.z / v2.z,
			v1.w / v2.w);
	}

	template <typename T>
    inline _xvec4<T> operator/ (const _xref4<T>& v1, const _xvec4<T>& v2)
	{
	    return _xvec4<T>(
		    v1.x / v2.x,
		    v1.y / v2.y,
			v1.z / v2.z,
			v1.w / v2.w);
	}
} //namespace detail
} //namespace glm

#endif//__glm_core_xvec4_inl__
