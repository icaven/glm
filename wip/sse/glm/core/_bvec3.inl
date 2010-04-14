///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : _bvec3.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __bvec3_inl__
#define __bvec3_inl__

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

    inline _bvec3::_bvec3() :
        _cvec3<BVEC3_INST>(false, false, false)
    {}

    inline _bvec3::_bvec3(const _bvec3& v) : 
		_cvec3<BVEC3_INST>(v.x, v.y, v.z)
    {}

    //////////////////////////////////////////////////////////////
    // Swizzle constructors
    inline _bvec3::_bvec3(const _xref3<bool>& r) :
        _cvec3<BVEC3_INST>(r.x, r.y, r.z)
    {}

    //////////////////////////////////////////////////////////////
    // Bool constructors

    inline _bvec3::_bvec3(const bool a) :
        _cvec3<BVEC3_INST>(a, a, a)
    {}

    inline _bvec3::_bvec3(const bool a, const bool b, const bool c) :
        _cvec3<BVEC3_INST>(a, b, c)
    {}

    inline _bvec3::_bvec3(const bool a, const bool b, const _bvec2& c) :
        _cvec3<BVEC3_INST>(a, b, c.x)
    {}

    inline _bvec3::_bvec3(const bool a, const bool b, const _bvec3& c) :
        _cvec3<BVEC3_INST>(a, b, c.x)
    {}

    inline _bvec3::_bvec3(const bool a, const bool b, const _bvec4& c) :
        _cvec3<BVEC3_INST>(a, b, c.x)
    {}

    inline _bvec3::_bvec3(const bool a, const _bvec2& b) :
        _cvec3<BVEC3_INST>(a, b.x, b.y)
    {}

    inline _bvec3::_bvec3(const bool a, const _bvec3& b) :
        _cvec3<BVEC3_INST>(a, b.x, b.y)
    {}

    inline _bvec3::_bvec3(const bool a, const _bvec4& b) :
        _cvec3<BVEC3_INST>(a, b.x, b.y)
    {}

    inline _bvec3::_bvec3(const _bvec2& a, bool b) :
        _cvec3<BVEC3_INST>(a.x, a.y, b)
    {}

    inline _bvec3::_bvec3(const _bvec2& a, const _bvec2& b) :
        _cvec3<BVEC3_INST>(a.x, a.y, b.x)
    {}

    inline _bvec3::_bvec3(const _bvec2& a, const _bvec3& b) :
        _cvec3<BVEC3_INST>(a.x, a.y, b.x)
    {}

    inline _bvec3::_bvec3(const _bvec2& a, const _bvec4& b) :
        _cvec3<BVEC3_INST>(a.x, a.y, b.x)
    {}

    inline _bvec3::_bvec3(const _bvec4& a) :
        _cvec3<BVEC3_INST>(a.x, a.y, a.z)
    {}

    //////////////////////////////////////////////////////////////
    // U constructors

    template <typename U> 
    inline _bvec3::_bvec3(const U a) :
        _cvec3<BVEC3_INST>(bool(a), bool(a), bool(a))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const U a, const U b, const U c) :
        _cvec3<BVEC3_INST>(bool(a), bool(b), bool(c))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const U a, const U b, const _xvec2<U>& c) :
        _cvec3<BVEC3_INST>(bool(a), bool(b), bool(c.x))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const U a, const U b, const _xvec3<U>& c) :
        _cvec3<BVEC3_INST>(bool(a), bool(b), bool(c.x))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const U a, const U b, const _xvec4<U>& c) :
        _cvec3<BVEC3_INST>(bool(a), bool(b), bool(c.x))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const U a, const _xvec2<U>& b) :
		_cvec3<BVEC3_INST>(bool(a), bool(b.x), bool(b.y))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const U a, const _xvec3<U>& b) :
		_cvec3<BVEC3_INST>(bool(a), bool(b.x), bool(b.y))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const U a, const _xvec4<U>& b) :
		_cvec3<BVEC3_INST>(bool(a), bool(b.x), bool(b.y))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const _xvec2<U>& a, U b) :
		_cvec3<BVEC3_INST>(bool(a.x), bool(a.y), bool(b))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const _xvec2<U>& a, const _xvec2<U>& b) :
		_cvec3<BVEC3_INST>(bool(a.x), bool(a.y), bool(b.x))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const _xvec2<U>& a, const _xvec3<U>& b) :
		_cvec3<BVEC3_INST>(bool(a.x), bool(a.y), bool(b.x))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const _xvec2<U>& a, const _xvec4<U>& b) :
		_cvec3<BVEC3_INST>(bool(a.x), bool(a.y), bool(b.x))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const _xvec3<U>& a) :
		_cvec3<BVEC3_INST>(bool(a.x), bool(a.y), bool(a.z))
    {}

    template <typename U> 
    inline _bvec3::_bvec3(const _xvec4<U>& a) :
		_cvec3<BVEC3_INST>(bool(a.x), bool(a.y), bool(a.z))
    {}

    //////////////////////////////////////////////////////////////
    // bvec3 operators

    // This function shouldn't required but it seems that VC7.1 have an optimisation bug if this operator wasn't declared
    inline _bvec3& _bvec3::operator=(const _bvec3& x)
    {
        this->x = x.x;
        this->y = x.y;
        this->z = x.z;
        return *this;
    }
/*
    inline _bvec3 _bvec3::operator--()
    {
	    this->x = !x;
	    this->y = !y;
        this->z = !z;
	    return *this;
    }

    inline _bvec3 _bvec3::operator++()
    {
	    this->x = !x;
	    this->y = !y;
        this->z = !z;
	    return *this;
    }

    inline const _bvec3 _bvec3::operator--(int n) const 
    {
		return _bvec3(
			!this->x, 
			!this->y, 
			!this->z);
    }

    inline const _bvec3 _bvec3::operator++(int n) const
    {
		return _bvec3(
			!this->x, 
			!this->y, 
			!this->z);
    }
*/
	//inline _bvec3 _bvec3::operator!() const 
	//{
	//	return _bvec3(
	//		!this->x, 
	//		!this->y, 
	//		!this->z);
	//}

} //namespace detail
} //namespace glm

#endif//__bvec3_inl__
