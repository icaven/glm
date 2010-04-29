///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_xvec3.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_xvec3_inl__
#define __glm_core_xvec3_inl__

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
    inline _xvec3<T>::_xvec3() :
        _cvec3<XVEC3_INST>(T(0), T(0), T(0))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _xvec3<T>& v) :
        _cvec3<XVEC3_INST>(v.x, v.y, v.z)
    {}

    // Swizzle constructors
    template <typename T> 
    inline _xvec3<T>::_xvec3(const _xref3<T>& r) :
        _cvec3<XVEC3_INST>(r.x, r.y, r.z)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _xvec3_base(T)& b) :
		_cvec3<XVEC3_INST>(b.x, b.y, b.z)
    {}

    // T constructors
    template <typename T> 
    inline _xvec3<T>::_xvec3(const T x) :
        _cvec3<XVEC3_INST>(x, x, x)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const T a, const T b, const T c) :
        _cvec3<XVEC3_INST>(a, b, c)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const T a, const T b, const _xvec2<T>& c) :
        _cvec3<XVEC3_INST>(a, b, c.x)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const T a, const T b, const _xvec3<T>& c) :
        _cvec3<XVEC3_INST>(a, b, c.x)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const T a, const T b, const _xvec4<T>& c) :
		_cvec3<XVEC3_INST>(a, b, c.x)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const T a, const _xvec2<T>& b) :
		_cvec3<XVEC3_INST>(a, b.x, b.y)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const T a, const _xvec3<T>& b) :
		_cvec3<XVEC3_INST>(a, b.x, b.y)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const T a, const _xvec4<T>& b) :
		_cvec3<XVEC3_INST>(a, b.x, b.y)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _xvec2<T>& a, T b) :
		_cvec3<XVEC3_INST>(a.x, a.y, b)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _xvec2<T>& a, const _xvec2<T>& b) :
        _cvec3<XVEC3_INST>(a.x, a.y, b.x)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _xvec2<T>& a, const _xvec3<T>& b) :
        _cvec3<XVEC3_INST>(a.x, a.y, b.x)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _xvec2<T>& a, const _xvec4<T>& b) :
        _cvec3<XVEC3_INST>(a.x, a.y, b.x)
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _xvec4<T>& a) :
        _cvec3<XVEC3_INST>(a.x, a.y, a.z)
    {}

    // U constructors
    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const U x) :
        _cvec3<XVEC3_INST>(T(x), T(x), T(x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const U a, const U b, const U c) :
        _cvec3<XVEC3_INST>(T(a), T(b), T(c))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const U a, const U b, const _xvec2<U>& c) :
		_cvec3<XVEC3_INST>(T(a), T(b), T(c.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const U a, const U b, const _xvec3<U>& c) :
		_cvec3<XVEC3_INST>(T(a), T(b), T(c.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const U a, const U b, const _xvec4<U>& c) :
        _cvec3<XVEC3_INST>(T(a), T(b), T(c.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const U a, const _xvec2<U>& b) :
        _cvec3<XVEC3_INST>(T(a), T(b.x), T(b.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const U a, const _xvec3<U>& b) :
        _cvec3<XVEC3_INST>(T(a), T(b.x), T(b.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const U a, const _xvec4<U>& b) :
        _cvec3<XVEC3_INST>(T(a), T(b.x), T(b.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const _xvec2<U>& a, U b) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(b))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const _xvec2<U>& a, const _xvec2<U>& b) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(b.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const _xvec2<U>& a, const _xvec3<U>& b) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(b.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const _xvec2<U>& a, const _xvec4<U>& b) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(b.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const _xvec3<U>& a) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(a.z))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec3<T>::_xvec3(const _xvec4<U>& a) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(a.z))
    {}

    // Bool constructors
    template <typename T> 
    inline _xvec3<T>::_xvec3(const bool x) :
        _cvec3<XVEC3_INST>(T(x), T(x), T(x))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const bool a, const bool b, const bool c) :
        _cvec3<XVEC3_INST>(T(a), T(b), T(c))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const bool a, const bool b, const _bvec2& c) :
        _cvec3<XVEC3_INST>(T(a), T(b), T(c.x))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const bool a, const bool b, const _bvec3& c) :
        _cvec3<XVEC3_INST>(T(a), T(b), T(c.x))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const bool a, const bool b, const _bvec4& c) :
        _cvec3<XVEC3_INST>(T(a), T(b), T(c.x))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const bool a, const _bvec2& b) :
        _cvec3<XVEC3_INST>(T(a), T(b.x), T(b.y))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const bool a, const _bvec3& b) :
        _cvec3<XVEC3_INST>(T(a), T(b.x), T(b.y))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const bool a, const _bvec4& b) :
        _cvec3<XVEC3_INST>(T(a), T(b.x), T(b.y))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _bvec2& a, bool b) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(b))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _bvec2& a, const _bvec2& b) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(b.x))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _bvec2& a, const _bvec3& b) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(b.x))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _bvec2& a, const _bvec4& b) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(b.x))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _bvec3& a) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(a.z))
    {}

    template <typename T> 
    inline _xvec3<T>::_xvec3(const _bvec4& a) :
        _cvec3<XVEC3_INST>(T(a.x), T(a.y), T(a.z))
    {}

    //////////////////////////////////////////////////////////////
    // vec3 and ivec3 operators

    // This function shouldn't required but it seems that VC7.1 have an optimisation bug if this operator wasn't declared
    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator=(const _xvec3<T>& v)
    {
        this->x = v.x;
        this->y = v.y;
        this->z = v.z;
        return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator+= (const T s)
    {
	    this->x += s;
	    this->y += s;
        this->z += s;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator+= (const _xvec3<T>& v)
    {
	    this->x += v.x;
	    this->y += v.y;
        this->z += v.z;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator-= (const T s)
    {
	    this->x -= s;
	    this->y -= s;
        this->z -= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator-= (const _xvec3<T>& v)
    {
	    this->x -= v.x;
	    this->y -= v.y;
        this->z -= v.z;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator*= (const T s)
    {
	    this->x *= s;
	    this->y *= s;
        this->z *= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator*= (const _xvec3<T>& v)
    {
	    this->x *= v.x;
	    this->y *= v.y;
        this->z *= v.z;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator/= (const T s)
    {
	    this->x /= s;
	    this->y /= s;
        this->z /= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator/= (const _xvec3<T>& v)
    {
	    this->x /= v.x;
	    this->y /= v.y;
        this->z /= v.z;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator++ ()
    {
	    this->x++;
	    this->y++;
        this->z++;
	    return *this;
    }

    template <typename T> 
    inline _xvec3<T>& _xvec3<T>::operator-- ()
    {
	    this->x--;
	    this->y--;
        this->z--;
	    return *this;
    }

    // Unary constant operators
    template <typename T> 
    inline const _xvec3<T> operator- (const _xvec3<T>& v)
    {
        return _xvec3<T>(
            -v.x, 
            -v.y,
            -v.z);
    }

    template <typename T> 
    inline const _xvec3<T> operator++ (const _xvec3<T>& v, int)
    {
        return _xvec3<T>(
            v.x + T(1), 
            v.y + T(1),
            v.z + T(1));
    }

    template <typename T> 
    inline const _xvec3<T> operator-- (const _xvec3<T>& v, int)
    {
        return _xvec3<T>(
            v.x - T(1), 
            v.y - T(1),
            v.z - T(1));
    }

    // Binary operators
	// operator+
    template <typename T> 
    inline _xvec3<T> operator+ (const _xvec3<T>& v, const T s)
    {
	    return _xvec3<T>(
		    v.x + s,
		    v.y + s,
            v.z + s);
    }

    template <typename T> 
    inline _xvec3<T> operator+ (const T s, const _xvec3<T>& v)
    {
	    return _xvec3<T>(
		    s + v.x,
		    s + v.y,
            s + v.z);
    }

    template <typename T> 
    inline _xvec3<T> operator+ (const _xvec3<T>& v1, const _xvec3<T>& v2)
    {
	    return _xvec3<T>(
		    v1.x + v2.x,
		    v1.y + v2.y,
            v1.z + v2.z);
    }

    template <typename T>
	inline _xvec3<T> operator+ (const _xref3<T>& v, const T s)
	{
	    return _xvec3<T>(
		    v.x + s,
		    v.y + s,
			v.z + s);
	}

    template <typename T>
    inline _xvec3<T> operator+ (const T s, const _xref3<T>& v)
	{
	    return _xvec3<T>(
		    s + v.x,
		    s + v.y,
			s + v.z);
	}
    
	template <typename T>
    inline _xvec3<T> operator+ (const _xref3<T>& v1, const _xref3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x + v2.x,
		    v1.y + v2.y,
			v1.z + v2.z);
	}

	template <typename T>
    inline _xvec3<T> operator+ (const _xvec3<T>& v1, const _xref3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x + v2.x,
		    v1.y + v2.y,
			v1.z + v2.z);
	}

	template <typename T>
    inline _xvec3<T> operator+ (const _xref3<T>& v1, const _xvec3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x + v2.x,
		    v1.y + v2.y,
			v1.z + v2.z);
	}

	// operator-
    template <typename T> 
    inline _xvec3<T> operator- (const _xvec3<T>& v, const T s)
    {
	    return _xvec3<T>(
		    v.x - s,
		    v.y - s,
            v.z - s);
    }

    template <typename T> 
    inline _xvec3<T> operator- (const T s, const _xvec3<T>& v)
    {
	    return _xvec3<T>(
		    s - v.x,
		    s - v.y,
            s - v.z);
    }

    template <typename T> 
    inline _xvec3<T> operator- (const _xvec3<T>& v1, const _xvec3<T>& v2)
    {
	    return _xvec3<T>(
		    v1.x - v2.x,
		    v1.y - v2.y,
            v1.z - v2.z);
    }

    template <typename T>
	inline _xvec3<T> operator- (const _xref3<T>& v, const T s)
	{
	    return _xvec3<T>(
		    v.x - s,
		    v.y - s,
			v.z - s);
	}

    template <typename T>
    inline _xvec3<T> operator- (const T s, const _xref3<T>& v)
	{
	    return _xvec3<T>(
		    s - v.x,
		    s - v.y,
			s - v.z);
	}
    
	template <typename T>
    inline _xvec3<T> operator- (const _xref3<T>& v1, const _xref3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x - v2.x,
		    v1.y - v2.y,
			v1.z - v2.z);
	}

	template <typename T>
    inline _xvec3<T> operator- (const _xvec3<T>& v1, const _xref3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x - v2.x,
		    v1.y - v2.y,
			v1.z - v2.z);
	}

	template <typename T>
    inline _xvec3<T> operator- (const _xref3<T>& v1, const _xvec3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x - v2.x,
		    v1.y - v2.y,
			v1.z - v2.z);
	}

	// operator*
    template <typename T> 
    inline _xvec3<T> operator* (const _xvec3<T>& v, const T s)
    {
	    return _xvec3<T>(
		    v.x * s,
		    v.y * s,
            v.z * s);
    }

    template <typename T> 
    inline _xvec3<T> operator* (const T s, const _xvec3<T>& v)
    {
	    return _xvec3<T>(
		    s * v.x,
		    s * v.y,
            s * v.z);
    }

    template <typename T> 
    inline _xvec3<T> operator* (const _xvec3<T>& v1, const _xvec3<T> & v2)
    {
	    return _xvec3<T>(
		    v1.x * v2.x,
		    v1.y * v2.y,
            v1.z * v2.z);
    }

    template <typename T>
	inline _xvec3<T> operator* (const _xref3<T>& v, const T s)
	{
	    return _xvec3<T>(
		    v.x * s,
		    v.y * s,
			v.z * s);
	}

    template <typename T>
    inline _xvec3<T> operator* (const T s, const _xref3<T>& v)
	{
	    return _xvec3<T>(
		    s * v.x,
		    s * v.y,
			s * v.z);
	}
    
	template <typename T>
    inline _xvec3<T> operator* (const _xref3<T>& v1, const _xref3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x * v2.x,
		    v1.y * v2.y,
			v1.z * v2.z);
	}

	template <typename T>
    inline _xvec3<T> operator* (const _xvec3<T>& v1, const _xref3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x * v2.x,
		    v1.y * v2.y,
			v1.z * v2.z);
	}

	template <typename T>
    inline _xvec3<T> operator* (const _xref3<T>& v1, const _xvec3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x * v2.x,
		    v1.y * v2.y,
			v1.z * v2.z);
	}

	// operator/
    template <typename T> 
    inline _xvec3<T> operator/ (const _xvec3<T>& v, const T s)
    {
	    return _xvec3<T>(
		    v.x / s,
		    v.y / s,
            v.z / s);
    }

    template <typename T> 
    inline _xvec3<T> operator/ (const T s, const _xvec3<T>& v)
    {
	    return _xvec3<T>(
		    s / v.x,
		    s / v.y,
            s / v.z);
    }

    template <typename T> 
    inline _xvec3<T> operator/ (const _xvec3<T>& v1, const _xvec3<T>& v2)
    {
	    return _xvec3<T>(
		    v1.x / v2.x,
		    v1.y / v2.y,
            v1.z / v2.z);
    }

    template <typename T>
	inline _xvec3<T> operator/ (const _xref3<T>& v, const T s)
	{
	    return _xvec3<T>(
		    v.x / s,
		    v.y / s,
			v.z / s);
	}

    template <typename T>
    inline _xvec3<T> operator/ (const T s, const _xref3<T>& v)
	{
	    return _xvec3<T>(
		    s / v.x,
		    s / v.y,
			s / v.z);
	}
    
	template <typename T>
    inline _xvec3<T> operator/ (const _xref3<T>& v1, const _xref3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x / v2.x,
		    v1.y / v2.y,
			v1.z / v2.z);
	}

	template <typename T>
    inline _xvec3<T> operator/ (const _xvec3<T>& v1, const _xref3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x / v2.x,
		    v1.y / v2.y,
			v1.z / v2.z);
	}

	template <typename T>
    inline _xvec3<T> operator/ (const _xref3<T>& v1, const _xvec3<T>& v2)
	{
	    return _xvec3<T>(
		    v1.x / v2.x,
		    v1.y / v2.y,
			v1.z / v2.z);
	}
} //namespace detail
} //namespace glm

#endif//__glm_core_xvec3_inl__
