///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-15
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_xvec4.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_xvec4_h__
#define __glm_core_xvec4_h__

#include "./_cvec4.inl"

namespace glm{
namespace detail{

    template <typename T> 
    class _xvec4 : public _xvec4_base(T)
    {
	public:
        // Common constructors
	    _xvec4();
        _xvec4(const _xvec4<T>& v);

        // Swizzle constructors
        _xvec4(const _xref4<T>& r);
		_xvec4(const _xvec4_base(T)& b);

        // T constructors
        explicit _xvec4(const T x);
        explicit _xvec4(const T a, const T b, const T c, const T d);
        explicit _xvec4(const T a, const T b, const T c, const _xvec2<T>& d);
        explicit _xvec4(const T a, const T b, const T c, const _xvec3<T>& d);
        explicit _xvec4(const T a, const T b, const T c, const _xvec4<T>& d);
        explicit _xvec4(const T a, const T b, const _xvec2<T>& c);
        explicit _xvec4(const T a, const T b, const _xvec3<T>& c);
        explicit _xvec4(const T a, const T b, const _xvec4<T>& c);
        explicit _xvec4(const T a, const _xvec2<T>& b, const T c);
        explicit _xvec4(const T a, const _xvec2<T>& b, const _xvec2<T>& c);
        explicit _xvec4(const T a, const _xvec2<T>& b, const _xvec3<T>& c);
        explicit _xvec4(const T a, const _xvec2<T>& b, const _xvec4<T>& c);
        explicit _xvec4(const T a, const _xvec3<T>& b);
        explicit _xvec4(const T a, const _xvec4<T>& b);
        explicit _xvec4(const _xvec2<T>& a, const T b, const T c);
        explicit _xvec4(const _xvec2<T>& a, const T b, const _xvec2<T>& c);
        explicit _xvec4(const _xvec2<T>& a, const T b, const _xvec3<T>& c);
        explicit _xvec4(const _xvec2<T>& a, const T b, const _xvec4<T>& c);
        explicit _xvec4(const _xvec2<T>& a, const _xvec2<T>& b);
        explicit _xvec4(const _xvec2<T>& a, const _xvec3<T>& b);
        explicit _xvec4(const _xvec2<T>& a, const _xvec4<T>& b);
        explicit _xvec4(const _xvec3<T>& a, const T b);
        explicit _xvec4(const _xvec3<T>& a, const _xvec2<T>& b);
        explicit _xvec4(const _xvec3<T>& a, const _xvec3<T>& b);
        explicit _xvec4(const _xvec3<T>& a, const _xvec4<T>& b);

        // U constructors
        template <typename U> explicit _xvec4(const U x);
        template <typename U> explicit _xvec4(const U a, const U b, const U c, const U d);
        template <typename U> explicit _xvec4(const U a, const U b, const U c, const _xvec2<U>& d);
        template <typename U> explicit _xvec4(const U a, const U b, const U c, const _xvec3<U>& d);
        template <typename U> explicit _xvec4(const U a, const U b, const U c, const _xvec4<U>& d);
        template <typename U> explicit _xvec4(const U a, const U b, const _xvec2<U>& c);
        template <typename U> explicit _xvec4(const U a, const U b, const _xvec3<U>& c);
        template <typename U> explicit _xvec4(const U a, const U b, const _xvec4<U>& c);
        template <typename U> explicit _xvec4(const U a, const _xvec2<U>& b, const U c);
        template <typename U> explicit _xvec4(const U a, const _xvec2<U>& b, const _xvec2<U>& c);
        template <typename U> explicit _xvec4(const U a, const _xvec2<U>& b, const _xvec3<U>& c);
        template <typename U> explicit _xvec4(const U a, const _xvec2<U>& b, const _xvec4<U>& c);
        template <typename U> explicit _xvec4(const U a, const _xvec3<U>& b);
        template <typename U> explicit _xvec4(const U a, const _xvec4<U>& b);
        template <typename U> explicit _xvec4(const _xvec2<U>& a, const U b, const U c);
        template <typename U> explicit _xvec4(const _xvec2<U>& a, const U b, const _xvec2<U>& c);
        template <typename U> explicit _xvec4(const _xvec2<U>& a, const U b, const _xvec3<U>& c);
        template <typename U> explicit _xvec4(const _xvec2<U>& a, const U b, const _xvec4<U>& c);
        template <typename U> explicit _xvec4(const _xvec2<U>& a, const _xvec2<U>& b);
        template <typename U> explicit _xvec4(const _xvec2<U>& a, const _xvec3<U>& b);
        template <typename U> explicit _xvec4(const _xvec2<U>& a, const _xvec4<U>& b);
        template <typename U> explicit _xvec4(const _xvec3<U>& a, const U b);
        template <typename U> explicit _xvec4(const _xvec3<U>& a, const _xvec2<U>& b);
        template <typename U> explicit _xvec4(const _xvec3<U>& a, const _xvec3<U>& b);
        template <typename U> explicit _xvec4(const _xvec3<U>& a, const _xvec4<U>& b);
        template <typename U> explicit _xvec4(const _xvec4<U>& a);

        // Bool constructors
        explicit _xvec4(const bool x);
        explicit _xvec4(const bool a, const bool b, const bool c, const bool d);
        explicit _xvec4(const bool a, const bool b, const bool c, const _bvec2& d);
        explicit _xvec4(const bool a, const bool b, const bool c, const _bvec3& d);
        explicit _xvec4(const bool a, const bool b, const bool c, const _bvec4& d);
        explicit _xvec4(const bool a, const bool b, const _bvec2& c);
        explicit _xvec4(const bool a, const bool b, const _bvec3& c);
        explicit _xvec4(const bool a, const bool b, const _bvec4& c);
        explicit _xvec4(const bool a, const _bvec2& b, const bool c);
        explicit _xvec4(const bool a, const _bvec2& b, const _bvec2& c);
        explicit _xvec4(const bool a, const _bvec2& b, const _bvec3& c);
        explicit _xvec4(const bool a, const _bvec2& b, const _bvec4& c);
        explicit _xvec4(const bool a, const _bvec3& b);
        explicit _xvec4(const bool a, const _bvec4& b);
        explicit _xvec4(const _bvec2& a, const bool b, const bool c);
        explicit _xvec4(const _bvec2& a, const bool b, const _bvec2& c);
        explicit _xvec4(const _bvec2& a, const bool b, const _bvec3& c);
        explicit _xvec4(const _bvec2& a, const bool b, const _bvec4& c);
        explicit _xvec4(const _bvec2& a, const _bvec2& b);
        explicit _xvec4(const _bvec2& a, const _bvec3& b);
        explicit _xvec4(const _bvec2& a, const _bvec4& b);
        explicit _xvec4(const _bvec3& a, const bool b);
        explicit _xvec4(const _bvec3& a, const _bvec2& b);
        explicit _xvec4(const _bvec3& a, const _bvec3& b);
        explicit _xvec4(const _bvec3& a, const _bvec4& b);
        explicit _xvec4(const _bvec4& a);

        // Unary updatable operators
        _xvec4<T>& operator= (const _xvec4<T>& x);
	    _xvec4<T>& operator+=(const T s);
	    _xvec4<T>& operator+=(const _xvec4<T>& v);
	    _xvec4<T>& operator-=(const T s);
	    _xvec4<T>& operator-=(const _xvec4<T>& v);
	    _xvec4<T>& operator*=(const T s);
	    _xvec4<T>& operator*=(const _xvec4<T>& v);
	    _xvec4<T>& operator/=(const T s);
	    _xvec4<T>& operator/=(const _xvec4<T>& v);
	    _xvec4<T>& operator++();
        _xvec4<T>& operator--();
    };

    // Binary operators
	// operator+
    template <typename T>
	_xvec4<T> operator+ (const _xvec4<T>& v, const T s);

    template <typename T>
    _xvec4<T> operator+ (const T s, const _xvec4<T>& v);

    template <typename T>
    _xvec4<T> operator+ (const _xvec4<T>& v1, const _xvec4<T>& v2);
    
    template <typename T>
	_xvec4<T> operator+ (const _xref4<T>& v, const T s);

    template <typename T>
    _xvec4<T> operator+ (const T s, const _xref4<T>& v);
    
	template <typename T>
    _xvec4<T> operator+ (const _xref4<T>& v1, const _xref4<T>& v2);

	template <typename T>
    _xvec4<T> operator+ (const _xvec4<T>& v1, const _xref4<T>& v2);

	template <typename T>
    _xvec4<T> operator+ (const _xref4<T>& v1, const _xvec4<T>& v2);

	// operator-
    template <typename T>
	_xvec4<T> operator- (const _xvec4<T>& v, const T s);

    template <typename T>
    _xvec4<T> operator- (const T s, const _xvec4<T>& v);

    template <typename T>
    _xvec4<T> operator- (const _xvec4<T>& v1, const _xvec4<T>& v2);

    template <typename T>
	_xvec4<T> operator- (const _xref4<T>& v, const T s);

    template <typename T>
    _xvec4<T> operator- (const T s, const _xref4<T>& v);
    
	template <typename T>
    _xvec4<T> operator- (const _xref4<T>& v1, const _xref4<T>& v2);

	template <typename T>
    _xvec4<T> operator- (const _xvec4<T>& v1, const _xref4<T>& v2);

	template <typename T>
    _xvec4<T> operator- (const _xref4<T>& v1, const _xvec4<T>& v2);

	// operator*
    template <typename T>
    _xvec4<T> operator* (const _xvec4<T>& v, const T s);

    template <typename T>
    _xvec4<T> operator* (const T s, const _xvec4<T>& v);

    template <typename T>
    _xvec4<T> operator* (const _xvec4<T>& v1, const _xvec4<T>& v2);

    template <typename T>
	_xvec4<T> operator* (const _xref4<T>& v, const T s);

    template <typename T>
    _xvec4<T> operator* (const T s, const _xref4<T>& v);
    
	template <typename T>
    _xvec4<T> operator* (const _xref4<T>& v1, const _xref4<T>& v2);

	template <typename T>
    _xvec4<T> operator* (const _xvec4<T>& v1, const _xref4<T>& v2);

	template <typename T>
    _xvec4<T> operator* (const _xref4<T>& v1, const _xvec4<T>& v2);

	// operator/
    template <typename T>
    _xvec4<T> operator/ (const _xvec4<T>& v, const T s);

    template <typename T>
    _xvec4<T> operator/ (const T s, const _xvec4<T>& v);

    template <typename T>
    _xvec4<T> operator/ (const _xvec4<T>& v1, const _xvec4<T>& v2);

    template <typename T>
	_xvec4<T> operator/ (const _xref4<T>& v, const T s);

    template <typename T>
    _xvec4<T> operator/ (const T s, const _xref4<T>& v);
    
	template <typename T>
    _xvec4<T> operator/ (const _xref4<T>& v1, const _xref4<T>& v2);

	template <typename T>
    _xvec4<T> operator/ (const _xvec4<T>& v1, const _xref4<T>& v2);

	template <typename T>
    _xvec4<T> operator/ (const _xref4<T>& v1, const _xvec4<T>& v2);

    // Unary constant operators
    template <typename T> 
    const _xvec4<T> operator- (const _xvec4<T>& v);

    template <typename T> 
    const _xvec4<T> operator-- (const _xvec4<T>& v, int);

    template <typename T> 
    const _xvec4<T> operator++ (const _xvec4<T>& v, int);

} //namespace detail
} //namespace glm

#endif//__glm_core_xvec4_h__
