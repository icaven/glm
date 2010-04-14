///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : _bvec2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __bvec2_inl__
#define __bvec2_inl__

#include "./_bvec2.h"
#include "./_bvec3.h"
#include "./_bvec4.h"
#include "./_xref2.h"
#include "./_xref3.h"
#include "./_xref4.h"
#include "./_swizzle.inl"

namespace glm{
namespace detail{

    //////////////////////////////////////////////////////////////
    // Common constructors

    inline _bvec2::_bvec2() :
		_cvec2<BVEC2_INST>(false, false)
    {}

    inline _bvec2::_bvec2(const _bvec2& v) :
        _cvec2<BVEC2_INST>(v.x, v.y)
    {}

    //////////////////////////////////////////////////////////////
    // Swizzle constructors
    inline _bvec2::_bvec2(const _xref2<bool>& r) :
        _cvec2<BVEC2_INST>(r.x, r.y)
    {}

    //////////////////////////////////////////////////////////////
    // Bool constructors

    inline _bvec2::_bvec2(const bool a) :
        _cvec2<BVEC2_INST>(a, a)
    {}

    inline _bvec2::_bvec2(const bool a, const bool b) :
        _cvec2<BVEC2_INST>(a, b)
    {}

    inline _bvec2::_bvec2(const bool a, const _bvec2& b) :
        _cvec2<BVEC2_INST>(a, b.x)
    {}

    inline _bvec2::_bvec2(const bool a, const _bvec3& b) :
        _cvec2<BVEC2_INST>(a, b.x)
    {}

    inline _bvec2::_bvec2(const bool a, const _bvec4& b) :
        _cvec2<BVEC2_INST>(a, b.x)
    {}

    inline _bvec2::_bvec2(const _bvec3& a) :
        _cvec2<BVEC2_INST>(a.x, a.y)
    {}

    inline _bvec2::_bvec2(const _bvec4& a) :
        _cvec2<BVEC2_INST>(a.x, a.y)
    {}

    //////////////////////////////////////////////////////////////
    // U constructors

    template <typename U> 
    inline _bvec2::_bvec2(const U a) :
        _cvec2<BVEC2_INST>(bool(a), bool(a))
    {}

    template <typename U> 
    inline _bvec2::_bvec2(const U a, const U b) :
        _cvec2<BVEC2_INST>(bool(a), bool(b))
    {}

    template <typename U> 
    inline _bvec2::_bvec2(const U a, const _xvec2<U>& b) :
        _cvec2<BVEC2_INST>(bool(a), bool(b.x))
    {}

    template <typename U> 
    inline _bvec2::_bvec2(const U a, const _xvec3<U>& b) :
        _cvec2<BVEC2_INST>(bool(a), bool(b.x))
    {}

    template <typename U> 
    inline _bvec2::_bvec2(const U a, const _xvec4<U>& b) :
        _cvec2<BVEC2_INST>(bool(a), bool(b.x))
    {}

    template <typename U> 
    inline _bvec2::_bvec2(const _xvec3<U>& a) :
        _cvec2<BVEC2_INST>(bool(a.x), bool(a.y))
    {}

    template <typename U> 
    inline _bvec2::_bvec2(const _xvec4<U>& a) :
        _cvec2<BVEC2_INST>(bool(a.x), bool(a.y))
    {}

    //////////////////////////////////////////////////////////////
    // bvec2 operators

    // This function shouldn't required but it seems that VC7.1 have an optimisation bug if this operator wasn't declared
    inline _bvec2& _bvec2::operator=(const _bvec2& x)
    {
        this->x = x.x;
        this->y = x.y;
        return *this;
    }
/*
    inline _bvec2 _bvec2::operator--()
    {
	    x = !x;
	    y = !y;
	    return *this;
    }

    inline _bvec2 _bvec2::operator++()
    {
	    x = !x;
	    y = !y;
	    return *this;
    }

    inline const _bvec2 _bvec2::operator--(int n) const 
    {
        return _bvec2(
			!this->x, 
			!this->y);
    }

    inline const _bvec2 _bvec2::operator++(int n) const
    {
	    return _bvec2(
			!this->x, 
			!this->y);
    }
*/
	//inline _bvec2 _bvec2::operator!() const 
	//{
	//	return _bvec2(
	//		!this->x, 
	//		!this->y);
	//}

} //namespace detail
} //namespace glm

#endif //__bvec2_inl__
