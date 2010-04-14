///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_bvec3.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_bvec3__
#define __glm_core_bvec3__

#include "./_cvec3.inl"

namespace glm{
namespace detail{

    class _bvec3 : public _cvec3<bool, _bvec2, _bvec3, _bvec4, _xref2<bool>, _xref3<bool> >
    {
	public:
        // Common constructors
	    _bvec3();
        _bvec3(const _bvec3& v);

        // Swizzle constructors
        _bvec3(const _xref3<bool>& r);

        // Bool constructors
        explicit _bvec3(const bool a);
        explicit _bvec3(const bool a, const bool b, const bool c);
        explicit _bvec3(const bool a, const bool b, const _bvec2& c);
        explicit _bvec3(const bool a, const bool b, const _bvec3& c);
        explicit _bvec3(const bool a, const bool b, const _bvec4& c);
        explicit _bvec3(const bool a, const _bvec2& b);
        explicit _bvec3(const bool a, const _bvec3& b);
        explicit _bvec3(const bool a, const _bvec4& b);
        explicit _bvec3(const _bvec2& a, bool b);
        explicit _bvec3(const _bvec2& a, const _bvec2& b);
        explicit _bvec3(const _bvec2& a, const _bvec3& b);
        explicit _bvec3(const _bvec2& a, const _bvec4& b);
        explicit _bvec3(const _bvec4& a);

        // U constructors
        template <typename U> explicit _bvec3(const U x);
        template <typename U> explicit _bvec3(const U a, const U b, const U c);
        template <typename U> explicit _bvec3(const U a, const U b, const _xvec2<U>& c);
        template <typename U> explicit _bvec3(const U a, const U b, const _xvec3<U>& c);
        template <typename U> explicit _bvec3(const U a, const U b, const _xvec4<U>& c);
        template <typename U> explicit _bvec3(const U a, const _xvec2<U>& b);
        template <typename U> explicit _bvec3(const U a, const _xvec3<U>& b);
        template <typename U> explicit _bvec3(const U a, const _xvec4<U>& b);
        template <typename U> explicit _bvec3(const _xvec2<U>& a, U b);
        template <typename U> explicit _bvec3(const _xvec2<U>& a, const _xvec2<U>& b);
        template <typename U> explicit _bvec3(const _xvec2<U>& a, const _xvec3<U>& b);
        template <typename U> explicit _bvec3(const _xvec2<U>& a, const _xvec4<U>& b);
        template <typename U> explicit _bvec3(const _xvec3<U>& a);
        template <typename U> explicit _bvec3(const _xvec4<U>& a);

        // Operators
        _bvec3& operator=(const _bvec3& x);
	    //_bvec3 operator! () const;
    };

} //namespace detail
} //namespace glm

#endif//__glm_core_bvec3__
