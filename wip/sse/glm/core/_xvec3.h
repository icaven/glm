///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-15
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_xvec3.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Optimisation note: Don't use vec3 class instead of vec4 because you think it 
// whould be faster. It whouldn't be the case especially if you use SSE 
// intructions set in your compiler option and/or mat4 transformations.
// An advide: test your code speed with vec3 and vec4 to select the faster.
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_xvec3_h__
#define __glm_core_xvec3_h__

#include "./_cvec3.inl"

namespace glm{
namespace detail{

    template <typename T> 
    class _xvec3 : public _xvec3_base(T)
    {
	public:
        // Common constructors
	    _xvec3();
        _xvec3(const _xvec3<T>& v);

        // Swizzle constructors
        _xvec3(const _xref3<T>& r);
		_xvec3(const _xvec3_base(T)& b);

        // T constructors
        explicit _xvec3(const T x);
        explicit _xvec3(const T a, const T b, const T c);
        explicit _xvec3(const T a, const T b, const _xvec2<T>& c);
        explicit _xvec3(const T a, const T b, const _xvec3<T>& c);
        explicit _xvec3(const T a, const T b, const _xvec4<T>& c);
        explicit _xvec3(const T a, const _xvec2<T>& b);
        explicit _xvec3(const T a, const _xvec3<T>& b);
        explicit _xvec3(const T a, const _xvec4<T>& b);
        explicit _xvec3(const _xvec2<T>& a, T b);
        explicit _xvec3(const _xvec2<T>& a, const _xvec2<T>& b);
        explicit _xvec3(const _xvec2<T>& a, const _xvec3<T>& b);
        explicit _xvec3(const _xvec2<T>& a, const _xvec4<T>& b);
        explicit _xvec3(const _xvec4<T>& a);

        // U constructors
        template <typename U> explicit _xvec3(const U x);
        template <typename U> explicit _xvec3(const U a, const U b, const U c);
        template <typename U> explicit _xvec3(const U a, const U b, const _xvec2<U>& c);
        template <typename U> explicit _xvec3(const U a, const U b, const _xvec3<U>& c);
        template <typename U> explicit _xvec3(const U a, const U b, const _xvec4<U>& c);
        template <typename U> explicit _xvec3(const U a, const _xvec2<U>& b);
        template <typename U> explicit _xvec3(const U a, const _xvec3<U>& b);
        template <typename U> explicit _xvec3(const U a, const _xvec4<U>& b);
        template <typename U> explicit _xvec3(const _xvec2<U>& a, U b);
        template <typename U> explicit _xvec3(const _xvec2<U>& a, const _xvec2<U>& b);
        template <typename U> explicit _xvec3(const _xvec2<U>& a, const _xvec3<U>& b);
        template <typename U> explicit _xvec3(const _xvec2<U>& a, const _xvec4<U>& b);
        template <typename U> explicit _xvec3(const _xvec3<U>& a);
        template <typename U> explicit _xvec3(const _xvec4<U>& a);

        // Bool constructors
        explicit _xvec3(const bool x);
        explicit _xvec3(const bool a, const bool b, const bool c);
        explicit _xvec3(const bool a, const bool b, const _bvec2& c);
        explicit _xvec3(const bool a, const bool b, const _bvec3& c);
        explicit _xvec3(const bool a, const bool b, const _bvec4& c);
        explicit _xvec3(const bool a, const _bvec2& b);
        explicit _xvec3(const bool a, const _bvec3& b);
        explicit _xvec3(const bool a, const _bvec4& b);
        explicit _xvec3(const _bvec2& a, bool b);
        explicit _xvec3(const _bvec2& a, const _bvec2& b);
        explicit _xvec3(const _bvec2& a, const _bvec3& b);
        explicit _xvec3(const _bvec2& a, const _bvec4& b);
        explicit _xvec3(const _bvec3& a);
        explicit _xvec3(const _bvec4& a);

        // Unary updatable operators
        _xvec3<T>& operator= (const _xvec3<T>& v);
	    _xvec3<T>& operator+=(const T s);
	    _xvec3<T>& operator+=(const _xvec3<T>& v);
	    _xvec3<T>& operator-=(const T s);
	    _xvec3<T>& operator-=(const _xvec3<T>& v);
	    _xvec3<T>& operator*=(const T s);
	    _xvec3<T>& operator*=(const _xvec3<T>& v);
	    _xvec3<T>& operator/=(const T s);
	    _xvec3<T>& operator/=(const _xvec3<T>& v);
        _xvec3<T>& operator++();
	    _xvec3<T>& operator--();
/*
		// Bit operators
	    _xvec3<T>& operator%=(const T s);
	    _xvec3<T>& operator%=(const _xvec3<T>& v);
		_xvec3<T>& operator&=(const T s);
	    _xvec3<T>& operator&=(const _xvec3<T>& v);
	    _xvec3<T>& operator|=(const T s);
	    _xvec3<T>& operator|=(const _xvec3<T>& v);
	    _xvec3<T>& operator^=(const T s);
	    _xvec3<T>& operator^=(const _xvec3<T>& v);
	    _xvec3<T>& operator<<=(const T s);
	    _xvec3<T>& operator<<=(const _xvec3<T>& v);
	    _xvec3<T>& operator>>=(const T s);
	    _xvec3<T>& operator>>=(const _xvec3<T>& v);
*/
    };
/*
	// Bit operators
    template <typename T>
	_xvec3<T> operator% (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator% (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator% (const _xvec3<T>& v1, const _xvec3<T>& v2);

    template <typename T>
	_xvec3<T> operator& (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator& (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator& (const _xvec3<T>& v1, const _xvec3<T>& v2);

    template <typename T>
	_xvec3<T> operator| (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator| (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator| (const _xvec3<T>& v1, const _xvec3<T>& v2);

    template <typename T>
	_xvec3<T> operator^ (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator^ (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator^ (const _xvec3<T>& v1, const _xvec3<T>& v2);

    template <typename T>
	_xvec3<T> operator<< (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator<< (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator<< (const _xvec3<T>& v1, const _xvec3<T>& v2);

	template <typename T>
	_xvec3<T> operator>> (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator>> (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator>> (const _xvec3<T>& v1, const _xvec3<T>& v2);

    template <typename T> 
    const _xvec3<T> operator~ (const _xvec2<T>& v);
*/
    // Binasy opesators
	// operator+
    template <typename T>
	_xvec3<T> operator+ (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator+ (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator+ (const _xvec3<T>& v1, const _xvec3<T>& v2);
    
    template <typename T>
	_xvec3<T> operator+ (const _xref3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator+ (const T s, const _xref3<T>& v);
    
	template <typename T>
    _xvec3<T> operator+ (const _xref3<T>& v1, const _xref3<T>& v2);

	template <typename T>
    _xvec3<T> operator+ (const _xvec3<T>& v1, const _xref3<T>& v2);

	template <typename T>
    _xvec3<T> operator+ (const _xref3<T>& v1, const _xvec3<T>& v2);

	// operator-
    template <typename T>
	_xvec3<T> operator- (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator- (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator- (const _xvec3<T>& v1, const _xvec3<T>& v2);

    template <typename T>
	_xvec3<T> operator- (const _xref3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator- (const T s, const _xref3<T>& v);
    
	template <typename T>
    _xvec3<T> operator- (const _xref3<T>& v1, const _xref3<T>& v2);

	template <typename T>
    _xvec3<T> operator- (const _xvec3<T>& v1, const _xref3<T>& v2);

	template <typename T>
    _xvec3<T> operator- (const _xref3<T>& v1, const _xvec3<T>& v2);

	// operator*
    template <typename T>
    _xvec3<T> operator* (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator* (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator* (const _xvec3<T>& v1, const _xvec3<T>& v2);

    template <typename T>
	_xvec3<T> operator* (const _xref3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator* (const T s, const _xref3<T>& v);
    
	template <typename T>
    _xvec3<T> operator* (const _xref3<T>& v1, const _xref3<T>& v2);

	template <typename T>
    _xvec3<T> operator* (const _xvec3<T>& v1, const _xref3<T>& v2);

	template <typename T>
    _xvec3<T> operator* (const _xref3<T>& v1, const _xvec3<T>& v2);

	// operator/
    template <typename T>
    _xvec3<T> operator/ (const _xvec3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator/ (const T s, const _xvec3<T>& v);

    template <typename T>
    _xvec3<T> operator/ (const _xvec3<T>& v1, const _xvec3<T>& v2);

    template <typename T>
	_xvec3<T> operator/ (const _xref3<T>& v, const T s);

    template <typename T>
    _xvec3<T> operator/ (const T s, const _xref3<T>& v);
    
	template <typename T>
    _xvec3<T> operator/ (const _xref3<T>& v1, const _xref3<T>& v2);

	template <typename T>
    _xvec3<T> operator/ (const _xvec3<T>& v1, const _xref3<T>& v2);

	template <typename T>
    _xvec3<T> operator/ (const _xref3<T>& v1, const _xvec3<T>& v2);

    // Unary constant operators
    template <typename T> 
    const _xvec3<T> operator- (const _xvec3<T>& v);

    template <typename T> 
    const _xvec3<T> operator-- (const _xvec3<T>& v, int);

    template <typename T> 
    const _xvec3<T> operator++ (const _xvec3<T>& v, int);

} //namespace detail
} //namespace glm

#endif//__glm_core_xvec3_h__
