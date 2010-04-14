///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-15
// Licence : This source is under GNU LGPL licence
// File    : _xvec2.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xvec2_h__
#define __xvec2_h__

#include "./_cvec2.inl"

namespace glm{
namespace detail{

    template <typename T> 
	class _xvec2 : public _xvec2_base(T)
    {
	public:
        // Common constructors
	    _xvec2();
        _xvec2(const _xvec2<T>& v);

        // Swizzle constructors
        _xvec2(const _xref2<T>& r);
		_xvec2(const _xvec2_base(T)& b);

        // T constructors
        explicit _xvec2(const T x);
        explicit _xvec2(const T a, const T b);
        explicit _xvec2(const T a, const _xvec2<T>& b);
        explicit _xvec2(const T a, const _xvec3<T>& b);
        explicit _xvec2(const T a, const _xvec4<T>& b);
        explicit _xvec2(const _xvec3<T>& a);
        explicit _xvec2(const _xvec4<T>& a);

        // U constructors
        template <typename U> explicit _xvec2(const U x);
        template <typename U> explicit _xvec2(const U a, const U b);
        template <typename U> explicit _xvec2(const U a, const _xvec2<U>& b);
        template <typename U> explicit _xvec2(const U a, const _xvec3<U>& b);
        template <typename U> explicit _xvec2(const U a, const _xvec4<U>& b);
        template <typename U> explicit _xvec2(const _xvec2<U>& a);
        template <typename U> explicit _xvec2(const _xvec3<U>& a);
        template <typename U> explicit _xvec2(const _xvec4<U>& a);

        // Bool constructors
        explicit _xvec2(const bool x);
        explicit _xvec2(const bool a, const bool b);
        explicit _xvec2(const bool a, const _bvec2& b);
        explicit _xvec2(const bool a, const _bvec3& b);
        explicit _xvec2(const bool a, const _bvec4& b);
        explicit _xvec2(const _bvec2& a);
        explicit _xvec2(const _bvec3& a);
        explicit _xvec2(const _bvec4& a);

        // Unary updatable operators
        _xvec2<T>& operator= (const _xvec2<T>& v);
	    _xvec2<T>& operator+=(const T s);
	    _xvec2<T>& operator+=(const _xvec2<T>& v);
	    _xvec2<T>& operator-=(const T s);
	    _xvec2<T>& operator-=(const _xvec2<T>& v);
	    _xvec2<T>& operator*=(const T s);
	    _xvec2<T>& operator*=(const _xvec2<T>& v);
	    _xvec2<T>& operator/=(const T s);
	    _xvec2<T>& operator/=(const _xvec2<T>& v);
        _xvec2<T>& operator++();
	    _xvec2<T>& operator--();
/*
		// Bit operators
	    _xvec2<T>& operator%=(const T s);
	    _xvec2<T>& operator%=(const _xvec2<T>& v);
		_xvec2<T>& operator&=(const T s);
	    _xvec2<T>& operator&=(const _xvec2<T>& v);
	    _xvec2<T>& operator|=(const T s);
	    _xvec2<T>& operator|=(const _xvec2<T>& v);
	    _xvec2<T>& operator^=(const T s);
	    _xvec2<T>& operator^=(const _xvec2<T>& v);
	    _xvec2<T>& operator<<=(const T s);
	    _xvec2<T>& operator<<=(const _xvec2<T>& v);
	    _xvec2<T>& operator>>=(const T s);
	    _xvec2<T>& operator>>=(const _xvec2<T>& v);
*/
    };
/*
	// Bit operators
    template <typename T>
	_xvec2<T> operator% (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator% (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator% (const _xvec2<T>& v1, const _xvec2<T>& v2);

    template <typename T>
	_xvec2<T> operator& (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator& (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator& (const _xvec2<T>& v1, const _xvec2<T>& v2);

    template <typename T>
	_xvec2<T> operator| (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator| (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator| (const _xvec2<T>& v1, const _xvec2<T>& v2);

    template <typename T>
	_xvec2<T> operator^ (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator^ (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator^ (const _xvec2<T>& v1, const _xvec2<T>& v2);

    template <typename T>
	_xvec2<T> operator<< (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator<< (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator<< (const _xvec2<T>& v1, const _xvec2<T>& v2);

	template <typename T>
	_xvec2<T> operator>> (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator>> (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator>> (const _xvec2<T>& v1, const _xvec2<T>& v2);

    template <typename T> 
    const _xvec2<T> operator~ (const _xvec2<T>& v);
*/
    // Binary operators
	// operator+
    template <typename T>
	_xvec2<T> operator+ (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator+ (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator+ (const _xvec2<T>& v1, const _xvec2<T>& v2);
    
    template <typename T>
	_xvec2<T> operator+ (const _xref2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator+ (const T s, const _xref2<T>& v);
    
	template <typename T>
    _xvec2<T> operator+ (const _xref2<T>& v1, const _xref2<T>& v2);

	template <typename T>
    _xvec2<T> operator+ (const _xvec2<T>& v1, const _xref2<T>& v2);

	template <typename T>
    _xvec2<T> operator+ (const _xref2<T>& v1, const _xvec2<T>& v2);

	// operator-
    template <typename T>
	_xvec2<T> operator- (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator- (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator- (const _xvec2<T>& v1, const _xvec2<T>& v2);

    template <typename T>
	_xvec2<T> operator- (const _xref2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator- (const T s, const _xref2<T>& v);
    
	template <typename T>
    _xvec2<T> operator- (const _xref2<T>& v1, const _xref2<T>& v2);

	template <typename T>
    _xvec2<T> operator- (const _xvec2<T>& v1, const _xref2<T>& v2);

	template <typename T>
    _xvec2<T> operator- (const _xref2<T>& v1, const _xvec2<T>& v2);

	// operator*
    template <typename T>
    _xvec2<T> operator* (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator* (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator* (const _xvec2<T>& v1, const _xvec2<T>& v2);

    template <typename T>
	_xvec2<T> operator* (const _xref2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator* (const T s, const _xref2<T>& v);
    
	template <typename T>
    _xvec2<T> operator* (const _xref2<T>& v1, const _xref2<T>& v2);

	template <typename T>
    _xvec2<T> operator* (const _xvec2<T>& v1, const _xref2<T>& v2);

	template <typename T>
    _xvec2<T> operator* (const _xref2<T>& v1, const _xvec2<T>& v2);

	// operator/
    template <typename T>
    _xvec2<T> operator/ (const _xvec2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator/ (const T s, const _xvec2<T>& v);

    template <typename T>
    _xvec2<T> operator/ (const _xvec2<T>& v1, const _xvec2<T>& v2);

    template <typename T>
	_xvec2<T> operator/ (const _xref2<T>& v, const T s);

    template <typename T>
    _xvec2<T> operator/ (const T s, const _xref2<T>& v);
    
	template <typename T>
    _xvec2<T> operator/ (const _xref2<T>& v1, const _xref2<T>& v2);

	template <typename T>
    _xvec2<T> operator/ (const _xvec2<T>& v1, const _xref2<T>& v2);

	template <typename T>
    _xvec2<T> operator/ (const _xref2<T>& v1, const _xvec2<T>& v2);

    // Unary constant operators
    template <typename T> 
    const _xvec2<T> operator- (const _xvec2<T>& v);

    template <typename T> 
    const _xvec2<T> operator--(const _xvec2<T>& v, int);

    template <typename T> 
    const _xvec2<T> operator++(const _xvec2<T>& v, int);

} //namespace detail
} //namespace glm

#endif //__xvec2_h__
