///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-15
// Updated : 2007-01-15
// Licence : This source is under GNU LGPL licence
// File    : _cvec4.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __cvec4_inl__
#define __cvec4_inl__

#include "_cvec4.h"

namespace glm{
namespace detail{

	template <CVEC4_LIST>
	const int _cvec4<CVEC4_TYPE>::value_size = 4;
	
	//////////////////////////////////////////////////////////////
    // _cvec4 constructor

	template <CVEC4_LIST>  
	inline _cvec4<CVEC4_TYPE>::_cvec4(const T x, const T y, const T z, const T w) :
		x(x), y(y), z(z), w(w)
	{}

    //////////////////////////////////////////////////////////////
	// vec4 and ivec4 accesses

    template <CVEC4_LIST> 
    inline T& _cvec4<CVEC4_TYPE>::operator[](int i)
    {
        return (&x)[i];
    }

    template <CVEC4_LIST> 
    inline const T _cvec4<CVEC4_TYPE>::operator[](int i) const
    {
        return (&x)[i];
    }

    template <CVEC4_LIST> 
    inline _cvec4<CVEC4_TYPE>::operator T*()
    {
        return &x;
    }

    template <CVEC4_LIST> 
    inline _cvec4<CVEC4_TYPE>::operator const T*() const 
    {
        return &x;
    }

#if defined(GLM_SWIZZLE)
    //////////////////////////////////////////////////////////////
    // Left hand side 2 components common swizzle operators

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_yx()
    {
        return REF2(this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_zx()
    {
        return REF2(this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_wx()
    {
        return REF2(this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_xy()
    {
        return REF2(this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_zy()
    {
        return REF2(this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_wy()
    {
        return REF2(this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_xz()
    {
        return REF2(this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_yz()
    {
        return REF2(this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_wz()
    {
        return REF2(this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_xw()
    {
        return REF2(this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_yw()
    {
        return REF2(this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline REF2 _cvec4<CVEC4_TYPE>::_zw()
    {
        return REF2(this->z, this->w);
    }

    // Right hand side 2 components swizzles operators

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_xx() const
    {
        return VEC2(this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_yx() const
    {
        return VEC2(this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_zx() const
    {
        return VEC2(this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_wx() const
    {
        return VEC2(this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_xy() const
    {
        return VEC2(this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_yy() const
    {
        return VEC2(this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_zy() const
    {
        return VEC2(this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_wy() const
    {
        return VEC2(this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_xz() const
    {
        return VEC2(this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_yz() const
    {
        return VEC2(this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_zz() const
    {
        return VEC2(this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_wz() const
    {
        return VEC2(this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_xw() const
    {
        return VEC2(this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_yw() const
    {
        return VEC2(this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_zw() const
    {
        return VEC2(this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC2 _cvec4<CVEC4_TYPE>::_ww() const
    {
        return VEC2(this->w, this->w);
    }

    //////////////////////////////////////////////////////////////
    // Left hand side 3 components swizzles operators

    template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_zyx()
	{
		return REF3(this->z, this->y, this->x);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_wyx()
	{
		return REF3(this->w, this->y, this->x);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_yzx()
	{
		return REF3(this->y, this->z, this->x);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_wzx()
	{
		return REF3(this->w, this->z, this->x);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_ywx()
	{
		return REF3(this->y, this->w, this->x);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_zwx()
	{
		return REF3(this->z, this->w, this->x);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_zxy()
	{
		return REF3(this->z, this->x, this->y);
	}

    template <CVEC4_LIST> 
	inline REF3 _cvec4<CVEC4_TYPE>::_wxy()
	{
		return REF3(this->w, this->x, this->y);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_xzy()
	{
		return REF3(this->x, this->z, this->y);
	}

    template <CVEC4_LIST> 
	inline REF3 _cvec4<CVEC4_TYPE>::_wzy()
	{
		return REF3(this->w, this->z, this->y);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_xwy()
	{
		return REF3(this->x, this->w, this->y);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_zwy()
	{
		return REF3(this->z, this->w, this->y);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_yxz()
	{
		return REF3(this->y, this->x, this->z);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_wxz()
	{
		return REF3(this->w, this->x, this->z);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_xyz()
	{
		return REF3(this->x, this->y, this->z);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_wyz()
	{
		return REF3(this->w, this->y, this->z);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_xwz()
	{
		return REF3(this->x, this->w, this->z);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_ywz()
	{
		return REF3(this->y, this->w, this->z);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_yxw()
	{
		return REF3(this->y, this->x, this->w);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_zxw()
	{
		return REF3(this->z, this->x, this->w);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_xyw()
	{
		return REF3(this->x, this->y, this->w);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_zyw()
	{
		return REF3(this->z, this->y, this->w);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_xzw()
	{
		return REF3(this->x, this->z, this->w);
	}

	template <CVEC4_LIST> 
    inline REF3 _cvec4<CVEC4_TYPE>::_yzw()
	{
		return REF3(this->y, this->z, this->w);
	}

    //////////////////////////////////////////////////////////////
    // Right hand side 3 components swizzles operators

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xxx() const
    {
        return VEC3(this->x, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yxx() const
    {
        return VEC3(this->y, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zxx() const
    {
        return VEC3(this->z, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wxx() const
    {
        return VEC3(this->w, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xyx() const
    {
        return VEC3(this->x, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yyx() const
    {
        return VEC3(this->y, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zyx() const
    {
        return VEC3(this->z, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wyx() const
    {
        return VEC3(this->w, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xzx() const
    {
        return VEC3(this->x, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yzx() const
    {
        return VEC3(this->y, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zzx() const
    {
        return VEC3(this->z, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wzx() const
    {
        return VEC3(this->w, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xwx() const
    {
        return VEC3(this->x, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_ywx() const
    {
        return VEC3(this->y, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zwx() const
    {
        return VEC3(this->z, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wwx() const
    {
        return VEC3(this->w, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xxy() const
    {
        return VEC3(this->x, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yxy() const
    {
        return VEC3(this->y, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zxy() const
    {
        return VEC3(this->z, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wxy() const
    {
        return VEC3(this->w, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xyy() const
    {
        return VEC3(this->x, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yyy() const
    {
        return VEC3(this->y, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zyy() const
    {
        return VEC3(this->z, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wyy() const
    {
        return VEC3(this->w, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xzy() const
    {
        return VEC3(this->x, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yzy() const
    {
        return VEC3(this->y, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zzy() const
    {
        return VEC3(this->z, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wzy() const
    {
        return VEC3(this->w, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xwy() const
    {
        return VEC3(this->x, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_ywy() const
    {
        return VEC3(this->y, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zwy() const
    {
        return VEC3(this->z, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wwy() const
    {
        return VEC3(this->w, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xxz() const
    {
        return VEC3(this->x, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yxz() const
    {
        return VEC3(this->y, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zxz() const
    {
        return VEC3(this->z, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wxz() const
    {
        return VEC3(this->w, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xyz() const
    {
        return VEC3(this->x, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yyz() const
    {
        return VEC3(this->y, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zyz() const
    {
        return VEC3(this->z, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wyz() const
    {
        return VEC3(this->w, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xzz() const
    {
        return VEC3(this->x, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yzz() const
    {
        return VEC3(this->y, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zzz() const
    {
        return VEC3(this->z, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wzz() const
    {
        return VEC3(this->w, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xwz() const
    {
        return VEC3(this->x, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_ywz() const
    {
        return VEC3(this->y, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zwz() const
    {
        return VEC3(this->z, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wwz() const
    {
        return VEC3(this->w, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xxw() const
    {
        return VEC3(this->x, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yxw() const
    {
        return VEC3(this->y, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zxw() const
    {
        return VEC3(this->z, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wxw() const
    {
        return VEC3(this->w, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xyw() const
    {
        return VEC3(this->x, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yyw() const
    {
        return VEC3(this->y, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zyw() const
    {
        return VEC3(this->z, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wyw() const
    {
        return VEC3(this->w, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xzw() const
    {
        return VEC3(this->x, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yzw() const
    {
        return VEC3(this->y, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zzw() const
    {
        return VEC3(this->z, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_wzw() const
    {
        return VEC3(this->w, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_xww() const
    {
        return VEC3(this->x, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_yww() const
    {
        return VEC3(this->y, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_zww() const
    {
        return VEC3(this->z, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC3 _cvec4<CVEC4_TYPE>::_www() const
    {
        return VEC3(this->w, this->w, this->w);
    }

    // Left hand side 4 components swizzles operators
    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_wzyx()
    {
        return REF4(this->w, this->z, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_zwyx()
    {
        return REF4(this->z, this->w, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_wyzx()
    {
        return REF4(this->w, this->y, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_ywzx()
    {
        return REF4(this->y, this->w, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_zywx()
    {
        return REF4(this->z, this->y, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_yzwx()
    {
        return REF4(this->y, this->z, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_wzxy()
    {
        return REF4(this->w, this->z, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_zwxy()
    {
        return REF4(this->z, this->w, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_wxzy()
    {
        return REF4(this->w, this->x, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_xwzy()
    {
        return REF4(this->x, this->w, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_zxwy()
    {
        return REF4(this->z, this->x, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_xzwy()
    {
        return REF4(this->x, this->z, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_wyxz()
    {
        return REF4(this->w, this->y, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_ywxz()
    {
        return REF4(this->y, this->w, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_wxyz()
    {
        return REF4(this->w, this->x, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_xwyz()
    {
        return REF4(this->x, this->w, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_yxwz()
    {
        return REF4(this->y, this->x, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_xywz()
    {
        return REF4(this->x, this->y, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_zyxw()
    {
        return REF4(this->z, this->y, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_yzxw()
    {
        return REF4(this->y, this->z, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_zxyw()
    {
        return REF4(this->z, this->x, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_xzyw()
    {
        return REF4(this->x, this->z, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_yxzw()
    {
        return REF4(this->y, this->x, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline REF4 _cvec4<CVEC4_TYPE>::_xyzw()
    {
        return REF4(this->x, this->y, this->z, this->w);
    }

    // Right hand side 4 components swizzles operators
    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwxx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwyx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->y, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwzx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->z, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xywx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yywx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zywx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wywx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwwx() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->w, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwxy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->x, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwyy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->y, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwzy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->z, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->x, this->x);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xywy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yywy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zywy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wywy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwwy() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->w, this->y);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwxz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->x, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwyz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->y, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwzz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->z, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xywz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yywz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zywz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wywz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwwz() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->w, this->z);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwxw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->x, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwyw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->y, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwzw() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->z, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xxww() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->x, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yxww() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->x, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zxww() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->x, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wxww() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->x, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xyww() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->y, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yyww() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->y, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zyww() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->y, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wyww() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->y, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xzww() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->z, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_yzww() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->z, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zzww() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->z, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wzww() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->z, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_xwww() const
    {
        return _cvec4<CVEC4_TYPE>(this->x, this->w, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_ywww() const
    {
        return _cvec4<CVEC4_TYPE>(this->y, this->w, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_zwww() const
    {
        return _cvec4<CVEC4_TYPE>(this->z, this->w, this->w, this->w);
    }

    template <CVEC4_LIST> 
    inline const VEC4 _cvec4<CVEC4_TYPE>::_wwww() const
    {
        return _cvec4<CVEC4_TYPE>(this->w, this->w, this->w, this->w);
    }
#endif //defined(GLM_SWIZZLE)

} //namespace detail
} //namespace glm

#endif//__cvec4_inl__
