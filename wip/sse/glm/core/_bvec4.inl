///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : _bvec4.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __bvec4_inl__
#define __bvec4_inl__

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
    // bvec4 constructors

    inline _bvec4::_bvec4() :
		_cvec4<BVEC4_INST>(false, false, false, false)
    {}

    inline _bvec4::_bvec4(const _bvec4& v) :
		_cvec4<BVEC4_INST>(v.x, v.y, v.z, v.w)
    {}

    //////////////////////////////////////////////////////////////
    // Swizzle constructors
    inline _bvec4::_bvec4(const _xref4<bool>& r) :
		_cvec4<BVEC4_INST>(r.x, r.y, r.z, r.w)
    {}

    // Bool constructors
    inline _bvec4::_bvec4(const bool a) :
		_cvec4<BVEC4_INST>(a, a, a, a)
    {}

    inline _bvec4::_bvec4(const bool a, const bool b, const bool c, const bool d) :
		_cvec4<BVEC4_INST>(a, b, c, d)
    {}

    inline _bvec4::_bvec4(const bool a, const bool b, const bool c, const _bvec2& d) :
		_cvec4<BVEC4_INST>(a, b, c, d.x)
    {}

    inline _bvec4::_bvec4(const bool a, const bool b, const bool c, const _bvec3& d) :
		_cvec4<BVEC4_INST>(a, b, c, d.x)
    {}

    inline _bvec4::_bvec4(const bool a, const bool b, const bool c, const _bvec4& d) :
		_cvec4<BVEC4_INST>(a, b, c, d.x)
    {}

    inline _bvec4::_bvec4(const bool a, const bool b, const _bvec2& c) :
		_cvec4<BVEC4_INST>(a, b, c.x, c.y)
    {}

    inline _bvec4::_bvec4(const bool a, const bool b, const _bvec3& c) :
		_cvec4<BVEC4_INST>(a, b, c.x, c.y)
    {}

    inline _bvec4::_bvec4(const bool a, const bool b, const _bvec4& c) :
		_cvec4<BVEC4_INST>(a, b, c.x, c.y)
    {}

    inline _bvec4::_bvec4(const bool a, const _bvec2& b, const bool c) :
		_cvec4<BVEC4_INST>(a, b.x, b.y, c)
    {}

    inline _bvec4::_bvec4(const bool a, const _bvec2& b, const _bvec2& c) :
		_cvec4<BVEC4_INST>(a, b.x, b.y, c.x)
    {}

    inline _bvec4::_bvec4(const bool a, const _bvec2& b, const _bvec3& c) :
		_cvec4<BVEC4_INST>(a, b.x, b.y, c.x)
    {}

    inline _bvec4::_bvec4(const bool a, const _bvec2& b, const _bvec4& c) :
		_cvec4<BVEC4_INST>(a, b.x, b.y, c.x)
    {}

    inline _bvec4::_bvec4(const bool a, const _bvec3& b) :
		_cvec4<BVEC4_INST>(a, b.x, b.y, b.z)
    {}

    inline _bvec4::_bvec4(const bool a, const _bvec4& b) :
		_cvec4<BVEC4_INST>(a, b.x, b.y, b.z)
    {}

    inline _bvec4::_bvec4(const _bvec2& a, const bool b, const bool c) :
		_cvec4<BVEC4_INST>(a.x, a.y, b, c)
    {}

    inline _bvec4::_bvec4(const _bvec2& a, const bool b, const _bvec2& c) :
		_cvec4<BVEC4_INST>(a.x, a.y, b, c.x)
    {}

    inline _bvec4::_bvec4(const _bvec2& a, const bool b, const _bvec3& c) :
		_cvec4<BVEC4_INST>(a.x, a.y, b, c.x)
    {}

    inline _bvec4::_bvec4(const _bvec2& a, const bool b, const _bvec4& c) :
		_cvec4<BVEC4_INST>(a.x, a.y, b, c.x)
    {}

    inline _bvec4::_bvec4(const _bvec2& a, const _bvec2& b) :
		_cvec4<BVEC4_INST>(a.x, a.y, b.x, b.y)
    {}

    inline _bvec4::_bvec4(const _bvec2& a, const _bvec3& b) :
		_cvec4<BVEC4_INST>(a.x, a.y, b.x, b.y)
	{}

    inline _bvec4::_bvec4(const _bvec2& a, const _bvec4& b) :
		_cvec4<BVEC4_INST>(a.x, a.y, b.x, b.y)
    {}

    inline _bvec4::_bvec4(const _bvec3& a, const bool b) :
		_cvec4<BVEC4_INST>(a.x, a.y, a.z, b)
    {}

    inline _bvec4::_bvec4(const _bvec3& a, const _bvec2& b) :
		_cvec4<BVEC4_INST>(a.x, a.y, a.z, b.x)
    {}

    inline _bvec4::_bvec4(const _bvec3& a, const _bvec3& b) :
		_cvec4<BVEC4_INST>(a.x, a.y, a.z, b.x)
	{}

    inline _bvec4::_bvec4(const _bvec3& a, const _bvec4& b) :
        _cvec4<BVEC4_INST>(a.x, a.y, a.z, b.x)
    {}

    //////////////////////////////////////////////////////////////
    // U constructors
    template <typename U> 
    inline _bvec4::_bvec4(const U a) :
		_cvec4<BVEC4_INST>(bool(a), bool(a), bool(a), bool(a))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const U b, const U c, const U d) :
		_cvec4<BVEC4_INST>(bool(a), bool(b), bool(c), bool(d))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const U b, const U c, const _xvec2<U>& d) :
		_cvec4<BVEC4_INST>(bool(a), bool(b), bool(c), bool(d.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const U b, const U c, const _xvec3<U>& d) :
		_cvec4<BVEC4_INST>(bool(a), bool(b), bool(c), bool(d.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const U b, const U c, const _xvec4<U>& d) :
		_cvec4<BVEC4_INST>(bool(a), bool(b), bool(c), bool(d.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const U b, const _xvec2<U>& c) :
		_cvec4<BVEC4_INST>(bool(a), bool(b), bool(c.x), bool(c.y))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const U b, const _xvec3<U>& c) :
		_cvec4<BVEC4_INST>(bool(a), bool(b), bool(c.x), bool(c.y))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const U b, const _xvec4<U>& c) :
		_cvec4<BVEC4_INST>(bool(a), bool(b), bool(c.x), bool(c.y))
	{}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const _xvec2<U>& b, const U c) :
		_cvec4<BVEC4_INST>(bool(a), bool(b.x), bool(b.y), bool(c))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const _xvec2<U>& b, const _xvec2<U>& c) :
		_cvec4<BVEC4_INST>(bool(a), bool(b.x), bool(b.y), bool(c.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const _xvec2<U>& b, const _xvec3<U>& c) :
		_cvec4<BVEC4_INST>(bool(a), bool(b.x), bool(b.y), bool(c.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const _xvec2<U>& b, const _xvec4<U>& c) :
		_cvec4<BVEC4_INST>(bool(a), bool(b.x), bool(b.y), bool(c.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const _xvec3<U>& b) :
		_cvec4<BVEC4_INST>(bool(a), bool(b.x), bool(b.y), bool(b.z))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const U a, const _xvec4<U>& b) :
		_cvec4<BVEC4_INST>(bool(a), bool(b.x), bool(b.y), bool(b.z))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec2<U>& a, const U b, const U c) :
		_cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(b), bool(c))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec2<U>& a, const U b, const _xvec2<U>& c) :
		_cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(b), bool(c.x))
	{}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec2<U>& a, const U b, const _xvec3<U>& c) :
		_cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(b), bool(c.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec2<U>& a, const U b, const _xvec4<U>& c) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(b), bool(c.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec2<U>& a, const _xvec2<U>& b) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(b.x), bool(b.y))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec2<U>& a, const _xvec3<U>& b) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(b.x), bool(b.y))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec2<U>& a, const _xvec4<U>& b) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(b.x), bool(b.y))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec3<U>& a, const U b) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(a.z), bool(b))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec3<U>& a, const _xvec2<U>& b) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(a.z), bool(b.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec3<U>& a, const _xvec3<U>& b) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(a.z), bool(b.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec3<U>& a, const _xvec4<U>& b) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(a.z), bool(b.x))
    {}

    template <typename U> 
    inline _bvec4::_bvec4(const _xvec4<U>& a) :
        _cvec4<BVEC4_INST>(bool(a.x), bool(a.y), bool(a.z), bool(a.w))
    {}

	//////////////////////////////////////////////////////////////
    // bvec4 operators

    // This function shouldn't required but it seems that VC7.1 have an optimisation bug if this operator wasn't declared
    inline _bvec4& _bvec4::operator=(const _bvec4& v)
    {
        this->x = v.x;
        this->y = v.y;
        this->z = v.z;
        this->w = v.w;
        return *this;
    }
/*
    inline _bvec4 _bvec4::operator--()
    {
	    this->x = !x;
	    this->y = !y;
        this->z = !z;
        this->w = !w;
	    return *this;
    }

    inline _bvec4 _bvec4::operator++()
    {
	    this->x = !x;
	    this->y = !y;
        this->z = !z;
        this->w = !w;
	    return *this;
    }

    inline const _bvec4 _bvec4::operator--(int n) const 
    {
		return _bvec4(
			!this->x, 
			!this->y, 
			!this->z, 
			!this->w);
    }

    inline const _bvec4 _bvec4::operator++(int n) const
    {
		return _bvec4(
			!this->x, 
			!this->y, 
			!this->z, 
			!this->w);
    }
*/
	//inline _bvec4 _bvec4::operator!() const 
	//{
	//	return _bvec4(
	//		!this->x, 
	//		!this->y, 
	//		!this->z, 
	//		!this->w);
	//}

} //namespace detail
} //namespace glm

#endif//__bvec4_inl__
