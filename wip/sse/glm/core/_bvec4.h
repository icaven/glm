///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_bvec4.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_bvec4__
#define __glm_core_bvec4__

#include "./_cvec4.inl"

namespace glm{
namespace detail{

    class _bvec4 : public _cvec4<bool, _bvec2, _bvec3, _bvec4, _xref2<bool>, _xref3<bool>, _xref4<bool> >
    {
	public:
        // Common constructors
	    _bvec4();
        _bvec4(const _bvec4& v);

        // Swizzle constructors
        _bvec4(const _xref4<bool>& r);

        // Bool constructors
        explicit _bvec4(const bool x);
        explicit _bvec4(const bool a, const bool b, const bool c, const bool d);
        explicit _bvec4(const bool a, const bool b, const bool c, const _bvec2& d);
        explicit _bvec4(const bool a, const bool b, const bool c, const _bvec3& d);
        explicit _bvec4(const bool a, const bool b, const bool c, const _bvec4& d);
        explicit _bvec4(const bool a, const bool b, const _bvec2& c);
        explicit _bvec4(const bool a, const bool b, const _bvec3& c);
        explicit _bvec4(const bool a, const bool b, const _bvec4& c);
        explicit _bvec4(const bool a, const _bvec2& b, const bool c);
        explicit _bvec4(const bool a, const _bvec2& b, const _bvec2& c);
        explicit _bvec4(const bool a, const _bvec2& b, const _bvec3& c);
        explicit _bvec4(const bool a, const _bvec2& b, const _bvec4& c);
        explicit _bvec4(const bool a, const _bvec3& b);
        explicit _bvec4(const bool a, const _bvec4& b);
        explicit _bvec4(const _bvec2& a, const bool b, const bool c);
        explicit _bvec4(const _bvec2& a, const bool b, const _bvec2& c);
        explicit _bvec4(const _bvec2& a, const bool b, const _bvec3& c);
        explicit _bvec4(const _bvec2& a, const bool b, const _bvec4& c);
        explicit _bvec4(const _bvec2& a, const _bvec2& b);
        explicit _bvec4(const _bvec2& a, const _bvec3& b);
        explicit _bvec4(const _bvec2& a, const _bvec4& b);
        explicit _bvec4(const _bvec3& a, const bool b);
        explicit _bvec4(const _bvec3& a, const _bvec2& b);
        explicit _bvec4(const _bvec3& a, const _bvec3& b);
        explicit _bvec4(const _bvec3& a, const _bvec4& b);

        // U constructors
        template <typename U> explicit _bvec4(const U x);
        template <typename U> explicit _bvec4(const U a, const U b, const U c, const U d);
        template <typename U> explicit _bvec4(const U a, const U b, const U c, const _xvec2<U>& d);
        template <typename U> explicit _bvec4(const U a, const U b, const U c, const _xvec3<U>& d);
        template <typename U> explicit _bvec4(const U a, const U b, const U c, const _xvec4<U>& d);
        template <typename U> explicit _bvec4(const U a, const U b, const _xvec2<U>& c);
        template <typename U> explicit _bvec4(const U a, const U b, const _xvec3<U>& c);
        template <typename U> explicit _bvec4(const U a, const U b, const _xvec4<U>& c);
        template <typename U> explicit _bvec4(const U a, const _xvec2<U>& b, const U c);
        template <typename U> explicit _bvec4(const U a, const _xvec2<U>& b, const _xvec2<U>& c);
        template <typename U> explicit _bvec4(const U a, const _xvec2<U>& b, const _xvec3<U>& c);
        template <typename U> explicit _bvec4(const U a, const _xvec2<U>& b, const _xvec4<U>& c);
        template <typename U> explicit _bvec4(const U a, const _xvec3<U>& b);
        template <typename U> explicit _bvec4(const U a, const _xvec4<U>& b);
        template <typename U> explicit _bvec4(const _xvec2<U>& a, const U b, const U c);
        template <typename U> explicit _bvec4(const _xvec2<U>& a, const U b, const _xvec2<U>& c);
        template <typename U> explicit _bvec4(const _xvec2<U>& a, const U b, const _xvec3<U>& c);
        template <typename U> explicit _bvec4(const _xvec2<U>& a, const U b, const _xvec4<U>& c);
        template <typename U> explicit _bvec4(const _xvec2<U>& a, const _xvec2<U>& b);
        template <typename U> explicit _bvec4(const _xvec2<U>& a, const _xvec3<U>& b);
        template <typename U> explicit _bvec4(const _xvec2<U>& a, const _xvec4<U>& b);
        template <typename U> explicit _bvec4(const _xvec3<U>& a, const U b);
        template <typename U> explicit _bvec4(const _xvec3<U>& a, const _xvec2<U>& b);
        template <typename U> explicit _bvec4(const _xvec3<U>& a, const _xvec3<U>& b);
        template <typename U> explicit _bvec4(const _xvec3<U>& a, const _xvec4<U>& b);
        template <typename U> explicit _bvec4(const _xvec4<U>& a);

        // Operators
        _bvec4& operator=(const _bvec4& x);
		//_bvec4 operator!() const ;
    };

} //namespace detail
} //namespace glm

#endif//__glm_core_bvec4__
