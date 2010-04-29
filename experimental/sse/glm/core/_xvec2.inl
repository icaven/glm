///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : _xvec2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xvec2_inl__
#define __xvec2_inl__

#include "./_cvec2.h"
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
    inline _xvec2<T>::_xvec2() : 
        _cvec2<XVEC2_INST>(T(0), T(0))
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const _xvec2<T>& v) :
        _cvec2<XVEC2_INST>(v.x, v.y)
    {}

    // Swizzle conclassor
    template <typename T> 
    inline _xvec2<T>::_xvec2(const _xref2<T>& r) :
        _cvec2<XVEC2_INST>(r.x, r.y)
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const _xvec2_base(T)& b) :
		_cvec2<XVEC2_INST>(b.x, b.y)
    {}

    // T constructors
    template <typename T> 
    inline _xvec2<T>::_xvec2(const T x) :
        _cvec2<XVEC2_INST>(x, x)
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const T a, const T b) :
        _cvec2<XVEC2_INST>(a, b)
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const T a, const _xvec2<T>& b) :
        _cvec2<XVEC2_INST>(a, b.x)
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const T a, const _xvec3<T>& b) :
        _cvec2<XVEC2_INST>(a, b.x)
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const T a, const _xvec4<T>& b) :
        _cvec2<XVEC2_INST>(a, b.x)
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const _xvec3<T>& a) :
        _cvec2<XVEC2_INST>(a.x, a.y)
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const _xvec4<T>& a) :
        _cvec2<XVEC2_INST>(a.x, a.y)
    {}

    // U constructors
    template <typename T> 
    template <typename U> 
    inline _xvec2<T>::_xvec2(const U x) :
        _cvec2<XVEC2_INST>(T(x), T(x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec2<T>::_xvec2(const U a, const U b) :
        _cvec2<XVEC2_INST>(T(a), T(b))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec2<T>::_xvec2(const U a, const _xvec2<U>& b) :
		_cvec2<XVEC2_INST>(T(a), T(b.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec2<T>::_xvec2(const U a, const _xvec3<U>& b) :
		_cvec2<XVEC2_INST>(T(a), T(b.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec2<T>::_xvec2(const U a, const _xvec4<U>& b) :
		_cvec2<XVEC2_INST>(T(a), T(b.x))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec2<T>::_xvec2(const _xvec2<U>& a) :
        _cvec2<XVEC2_INST>(T(a.x), T(a.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec2<T>::_xvec2(const _xvec3<U>& a) :
        _cvec2<XVEC2_INST>(T(a.x), T(a.y))
    {}

    template <typename T> 
    template <typename U> 
    inline _xvec2<T>::_xvec2(const _xvec4<U>& a) :
        _cvec2<XVEC2_INST>(T(a.x), T(a.y))
    {}

    // Bool constructors
    template <typename T> 
    inline _xvec2<T>::_xvec2(const bool x) :
        _cvec2<XVEC2_INST>(T(x), T(x))
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const bool a, const bool b) :
        _cvec2<XVEC2_INST>(T(a), T(b))
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const bool a, const _bvec2& b) :
        _cvec2<XVEC2_INST>(T(a), T(b.x))
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const bool a, const _bvec3& b) :
        _cvec2<XVEC2_INST>(T(a), T(b.x))
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const bool a, const _bvec4& b) :
        _cvec2<XVEC2_INST>(T(a), T(b.x))
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const _bvec3& a) :
        _cvec2<XVEC2_INST>(T(a.x), T(a.y))
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const _bvec4& a) :
        _cvec2<XVEC2_INST>(T(a.x), T(a.y))
    {}

    template <typename T> 
    inline _xvec2<T>::_xvec2(const _bvec2& a) :
        _cvec2<XVEC2_INST>(T(a.x), T(a.y))
    {}

    //////////////////////////////////////////////////////////////
    // vec2 and ivec2 operators

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator=(const _xvec2<T>& v)
    {
        this->x = v.x;
        this->y = v.y;
        return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator+= (const T s)
    {
	    this->x += s;
	    this->y += s;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator+= (const _xvec2<T>& v)
    {
	    this->x += v.x;
	    this->y += v.y;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator-= (const T s)
    {
	    this->x -= s;
	    this->y -= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator-= (const _xvec2<T>& v)
    {
	    this->x -= v.x;
	    this->y -= v.y;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator*= (const T s)
    {
	    this->x *= s;
	    this->y *= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator*= (const _xvec2<T>& v)
    {
	    this->x *= v.x;
	    this->y *= v.y;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator/= (const T s)
    {
	    this->x /= s;
	    this->y /= s;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator/= (const _xvec2<T>& v)
    {
	    this->x /= v.x;
	    this->y /= v.y;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator++ ()
    {
	    ++this->x;
	    ++this->y;
	    return *this;
    }

    template <typename T> 
    inline _xvec2<T>& _xvec2<T>::operator-- ()
    {
	    --this->x;
	    --this->y;
	    return *this;
    }
/*
	template <typename T> 
    inline _xvec2<T>& operator%=(const T s)
	{
	    this->x %= s;
	    this->y %= s;
	    return *this;
	}

	template <typename T> 
    inline _xvec2<T>& operator%=(const _xvec2<T>& v)
	{
	    this->x %= v.x;
	    this->y %= v.y;
	    return *this;
	}

	template <typename T> 
	inline _xvec2<T>& operator&=(const T s)
	{
	    this->x &= s;
	    this->y &= s;
	    return *this;
	}

    template <typename T> 
	inline _xvec2<T>& operator&=(const _xvec2<T>& v)
	{
	    this->x &= v.x;
	    this->y &= v.y;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec2<T>& operator|=(const T s)
	{
	    this->x |= s;
	    this->y |= s;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec2<T>& operator|=(const _xvec2<T>& v)
	{
	    this->x |= v.x;
	    this->y |= v.y;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec2<T>& operator^=(const T s)
	{
	    this->x ^= s;
	    this->y ^= s;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec2<T>& operator^=(const _xvec2<T>& v)
	{
	    this->x ^= v.x;
	    this->y ^= v.y;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec2<T>& operator<<=(const T s)
	{
	    this->x <<= s;
	    this->y <<= s;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec2<T>& operator<<=(const _xvec2<T>& v)
	{
	    this->x <<= v.x;
	    this->y <<= v.y;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec2<T>& operator>>=(const T s)
	{
	    this->x >>= s;
	    this->y >>= s;
	    return *this;
	}
    
    template <typename T> 
	inline _xvec2<T>& operator>>=(const _xvec2<T>& v)
	{
	    this->x >>= v.x;
	    this->y >>= v.y;
	    return *this;
	}

	// Bit operators
    template <typename T>
	inline _xvec2<T> operator% (const _xvec2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x % s,
		    v.y % s);
	}

    template <typename T>
    inline _xvec2<T> operator% (const T s, const _xvec2<T>& v)
	{
	    return _xvec2<T>(
		    s % v.x,
		    s % v.y);
	}

    template <typename T>
    inline _xvec2<T> operator% (const _xvec2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x % v2.x,
		    v1.y % v2.y);
	}

    template <typename T>
	inline _xvec2<T> operator& (const _xvec2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x & s,
		    v.y & s);
	}

    template <typename T>
    inline _xvec2<T> operator& (const T s, const _xvec2<T>& v)
	{
	    return _xvec2<T>(
		    s & v.x,
		    s & v.y);
	}

    template <typename T>
    inline _xvec2<T> operator& (const _xvec2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x & v2.x,
		    v1.y & v2.y);
	}

    template <typename T>
	inline _xvec2<T> operator| (const _xvec2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x | s,
		    v.y | s);
	}

    template <typename T>
    inline _xvec2<T> operator| (const T s, const _xvec2<T>& v)
	{
	    return _xvec2<T>(
		    s | v.x,
		    s | v.y);
	}

    template <typename T>
    inline _xvec2<T> operator| (const _xvec2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x | v2.x,
		    v1.y | v2.y);
	}
	
    template <typename T>
	inline _xvec2<T> operator^ (const _xvec2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x ^ s,
		    v.y ^ s);
	}

    template <typename T>
    inline _xvec2<T> operator^ (const T s, const _xvec2<T>& v)
	{
	    return _xvec2<T>(
		    s ^ v.x,
		    s ^ v.y);
	}

    template <typename T>
    inline _xvec2<T> operator^ (const _xvec2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x ^ v2.x,
		    v1.y ^ v2.y);
	}

    template <typename T>
	inline _xvec2<T> operator<< (const _xvec2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x << s,
		    v.y << s);
	}

    template <typename T>
    inline _xvec2<T> operator<< (const T s, const _xvec2<T>& v)
	{
	    return _xvec2<T>(
		    s << v.x,
		    s << v.y);
	}

    template <typename T>
    inline _xvec2<T> operator<< (const _xvec2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x << v2.x,
		    v1.y << v2.y);
	}

	template <typename T>
	inline _xvec2<T> operator>> (const _xvec2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x >> s,
		    v.y >> s);
	}

    template <typename T>
    inline _xvec2<T> operator>> (const T s, const _xvec2<T>& v)
	{
	    return _xvec2<T>(
		    s >> v.x,
		    s >> v.y);
	}

    template <typename T>
    inline _xvec2<T> operator>> (const _xvec2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x >> v2.x,
		    v1.y >> v2.y);
	}

    template <typename T> 
    inline const _xvec2<T> operator~ (const _xvec2<T>& v)
	{
	    return _xvec2<T>(
		    ~v.x,
		    ~v.y);
	}
*/
    // Binary operators
	//operator+
    template <typename T> 
    inline _xvec2<T> operator+ (const _xvec2<T>& v, const T s)
    {
	    return _xvec2<T>(
		    v.x + s,
		    v.y + s);
    }

    template <typename T> 
    inline _xvec2<T> operator+ (const T s, const _xvec2<T>& v)
    {
	    return _xvec2<T>(
		    s + v.x,
		    s + v.y);
    }

    template <typename T> 
    inline _xvec2<T> operator+ (const _xvec2<T>& v1, const _xvec2<T>& v2)
    {
	    return _xvec2<T>(
		    v1.x + v2.x,
		    v1.y + v2.y);
    }

    template <typename T>
	inline _xvec2<T> operator+ (const _xref2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x + s,
		    v.y + s);
	}

    template <typename T>
    inline _xvec2<T> operator+ (const T s, const _xref2<T>& v)
	{
	    return _xvec2<T>(
		    s + v.x,
		    s + v.y);
	}
    
	template <typename T>
    inline _xvec2<T> operator+ (const _xref2<T>& v1, const _xref2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x + v2.x,
		    v1.y + v2.y);
	}

	template <typename T>
    inline _xvec2<T> operator+ (const _xvec2<T>& v1, const _xref2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x + v2.x,
		    v1.y + v2.y);
	}

	template <typename T>
    inline _xvec2<T> operator+ (const _xref2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x + v2.x,
		    v1.y + v2.y);
	}

	//operator-
    template <typename T> 
    inline _xvec2<T> operator- (const _xvec2<T>& v, const T s)
    {
	    return _xvec2<T>(
		    v.x - s,
		    v.y - s);
    }

    template <typename T> 
    inline _xvec2<T> operator- (const T s, const _xvec2<T>& v)
    {
	    return _xvec2<T>(
		    s - v.x,
		    s - v.y);
    }

    template <typename T> 
    inline _xvec2<T> operator- (const _xvec2<T>& v1, const _xvec2<T>& v2)
    {
	    return _xvec2<T>(
		    v1.x - v2.x,
		    v1.y - v2.y);
    }

    template <typename T>
	inline _xvec2<T> operator- (const _xref2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x - s,
		    v.y - s);
	}

    template <typename T>
    inline _xvec2<T> operator- (const T s, const _xref2<T>& v)
	{
	    return _xvec2<T>(
		    s - v.x,
		    s - v.y);
	}
    
	template <typename T>
    inline _xvec2<T> operator- (const _xref2<T>& v1, const _xref2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x - v2.x,
		    v1.y - v2.y);
	}

	template <typename T>
    inline _xvec2<T> operator- (const _xvec2<T>& v1, const _xref2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x - v2.x,
		    v1.y - v2.y);
	}

	template <typename T>
    inline _xvec2<T> operator- (const _xref2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x - v2.x,
		    v1.y - v2.y);
	}

	//operator*
    template <typename T> 
    inline _xvec2<T> operator* (const _xvec2<T>& v, const T s)
    {
	    return _xvec2<T>(
		    v.x * s,
		    v.y * s);
    }

    template <typename T> 
    inline _xvec2<T> operator* (const T s, const _xvec2<T>& v)
    {
	    return _xvec2<T>(
		    s * v.x,
		    s * v.y);
    }

    template <typename T> 
    inline _xvec2<T> operator* (const _xvec2<T>& v1, const _xvec2<T> & v2)
    {
	    return _xvec2<T>(
		    v1.x * v2.x,
		    v1.y * v2.y);
    }

    template <typename T>
	inline _xvec2<T> operator* (const _xref2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x * s,
		    v.y * s);
	}

    template <typename T>
    inline _xvec2<T> operator* (const T s, const _xref2<T>& v)
	{
	    return _xvec2<T>(
		    s * v.x,
		    s * v.y);
	}
    
	template <typename T>
    inline _xvec2<T> operator* (const _xref2<T>& v1, const _xref2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x * v2.x,
		    v1.y * v2.y);
	}

	template <typename T>
    inline _xvec2<T> operator* (const _xvec2<T>& v1, const _xref2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x * v2.x,
		    v1.y * v2.y);
	}

	template <typename T>
    inline _xvec2<T> operator* (const _xref2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x * v2.x,
		    v1.y * v2.y);
	}

	//operator/
    template <typename T> 
    inline _xvec2<T> operator/ (const _xvec2<T>& v, const T s)
    {
	    return _xvec2<T>(
		    v.x / s,
		    v.y / s);
    }

    template <typename T> 
    inline _xvec2<T> operator/ (const T s, const _xvec2<T>& v)
    {
	    return _xvec2<T>(
		    s / v.x,
		    s / v.y);
    }

    template <typename T> 
    inline _xvec2<T> operator/ (const _xvec2<T>& v1, const _xvec2<T>& v2)
    {
	    return _xvec2<T>(
		    v1.x / v2.x,
		    v1.y / v2.y);
    }

    template <typename T>
	inline _xvec2<T> operator/ (const _xref2<T>& v, const T s)
	{
	    return _xvec2<T>(
		    v.x / s,
		    v.y / s);
	}

    template <typename T>
    inline _xvec2<T> operator/ (const T s, const _xref2<T>& v)
	{
	    return _xvec2<T>(
		    s / v.x,
		    s / v.y);
	}
    
	template <typename T>
    inline _xvec2<T> operator/ (const _xref2<T>& v1, const _xref2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x / v2.x,
		    v1.y / v2.y);
	}

	template <typename T>
    inline _xvec2<T> operator/ (const _xvec2<T>& v1, const _xref2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x / v2.x,
		    v1.y / v2.y);
	}

	template <typename T>
    inline _xvec2<T> operator/ (const _xref2<T>& v1, const _xvec2<T>& v2)
	{
	    return _xvec2<T>(
		    v1.x / v2.x,
		    v1.y / v2.y);
	}

    // Unary constant operators
    template <typename T> 
    inline const _xvec2<T> operator- (const _xvec2<T>& v)
    {
        return _xvec2<T>(
            -v.x, 
            -v.y);
    }

    template <typename T> 
    inline const _xvec2<T> operator++ (const _xvec2<T>& v, int)
    {
        return _xvec2<T>(
            v.x + T(1), 
            v.y + T(1));
    }

    template <typename T> 
    inline const _xvec2<T> operator-- (const _xvec2<T>& v, int)
    {
        return _xvec2<T>(
            v.x - T(1), 
            v.y - T(1));
    }

} //namespace detail
} //namespace glm

#endif //__xvec2_inl__
