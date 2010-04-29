///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-15
// Updated : 2007-01-15
// Licence : This source is under GNU LGPL licence
// File    : _cvec3.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __cvec3_inl__
#define __cvec3_inl__

#include "_cvec3.h"

namespace glm{
namespace detail{

	template <CVEC3_LIST>
	const int _cvec3<CVEC3_TYPE>::value_size = 3;

    //////////////////////////////////////////////////////////////
    // _cvec3 constructor

	template <CVEC3_LIST>  
	inline _cvec3<CVEC3_TYPE>::_cvec3(const T x, const T y, const T z) :
		x(x), y(y), z(z)
	{}

    //////////////////////////////////////////////////////////////
    // vec3 and ivec3 accesses

    template <CVEC3_LIST>  
    inline T& _cvec3<CVEC3_TYPE>::operator [] (int i)
    {
        return (&x)[i];
    }

    template <CVEC3_LIST>  
    inline const T _cvec3<CVEC3_TYPE>::operator [] (int i) const
    {
        return (&x)[i];
    }

    template <CVEC3_LIST>  
    inline _cvec3<CVEC3_TYPE>::operator T* ()
    {
        return &x;
    }

    template <CVEC3_LIST>  
    inline _cvec3<CVEC3_TYPE>::operator const T* () const 
    {
        return &x;
    }

#if defined(GLM_SWIZZLE)
    //////////////////////////////////////////////////////////////
	// Left hand side 2 components common swizzle operators

    template <CVEC3_LIST> 
	inline REF2 _cvec3<CVEC3_TYPE>::_yx()
	{
		return REF2(this->y, this->x);
	}

    template <CVEC3_LIST> 
	inline REF2 _cvec3<CVEC3_TYPE>::_zx()
	{
		return REF2(this->z, this->x);
	}

    template <CVEC3_LIST> 
	inline REF2 _cvec3<CVEC3_TYPE>::_xy()
	{
		return REF2(this->x, this->y);
	}

    template <CVEC3_LIST> 
	inline REF2 _cvec3<CVEC3_TYPE>::_zy()
	{
		return REF2(this->x, this->y);
	}

    template <CVEC3_LIST> 
	inline REF2 _cvec3<CVEC3_TYPE>::_xz()
	{
		return REF2(this->x, this->z);
	}

    template <CVEC3_LIST> 
	inline REF2 _cvec3<CVEC3_TYPE>::_yz()
	{
		return REF2(this->y, this->z);
	}

    //////////////////////////////////////////////////////////////
    // Right hand side 2 components swizzles operators

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_xx() const
    {
        return VEC2(this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_yx() const
    {
        return VEC2(this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_zx() const
    {
        return VEC2(this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_xy() const
    {
        return VEC2(this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_yy() const
    {
        return VEC2(this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_zy() const
    {
        return VEC2(this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_xz() const
    {
        return VEC2(this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_yz() const
    {
        return VEC2(this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC2 _cvec3<CVEC3_TYPE>::_zz() const
    {
        return VEC2(this->z, this->z);
    }

    //////////////////////////////////////////////////////////////
    // Left hand side 3 components common swizzle operator

    template <CVEC3_LIST> 
    inline REF3 _cvec3<CVEC3_TYPE>::_zyx()
    {
        return REF3(this->z, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline REF3 _cvec3<CVEC3_TYPE>::_yzx()
    {
        return REF3(this->y, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline REF3 _cvec3<CVEC3_TYPE>::_zxy()
    {
        return REF3(this->z, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline REF3 _cvec3<CVEC3_TYPE>::_xzy()
    {
        return REF3(this->x, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline REF3 _cvec3<CVEC3_TYPE>::_yxz()
    {
        return REF3(this->y, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline REF3 _cvec3<CVEC3_TYPE>::_xyz()
    {
        return REF3(this->x, this->y, this->z);
    }

    //////////////////////////////////////////////////////////////
    // Right hand side 3 components common swizzle operators

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xxx() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yxx() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zxx() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xyx() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yyx() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zyx() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xzx() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yzx() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zzx() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xxy() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yxy() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zxy() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xyy() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yyy() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zyy() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xzy() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yzy() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zzy() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xxz() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yxz() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zxz() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xyz() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yyz() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zyz() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_xzz() const
    {
        return _cvec3<CVEC3_TYPE>(this->x, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_yzz() const
    {
        return _cvec3<CVEC3_TYPE>(this->y, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC3 _cvec3<CVEC3_TYPE>::_zzz() const
    {
        return _cvec3<CVEC3_TYPE>(this->z, this->z, this->z);
    }

    // Right hand side4 components swizzles operators
    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxxx() const
    {
        return VEC4(this->x, this->x, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxxx() const
    {
        return VEC4(this->y, this->x, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxxx() const
    {
        return VEC4(this->z, this->x, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyxx() const
    {
        return VEC4(this->x, this->y, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyxx() const
    {
        return VEC4(this->y, this->y, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyxx() const
    {
        return VEC4(this->z, this->y, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzxx() const
    {
        return VEC4(this->x, this->z, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzxx() const
    {
        return VEC4(this->y, this->z, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzxx() const
    {
        return VEC4(this->z, this->z, this->x, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxyx() const
    {
        return VEC4(this->x, this->x, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxyx() const
    {
        return VEC4(this->y, this->x, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxyx() const
    {
        return VEC4(this->z, this->x, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyyx() const
    {
        return VEC4(this->x, this->y, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyyx() const
    {
        return VEC4(this->y, this->y, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyyx() const
    {
        return VEC4(this->z, this->y, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzyx() const
    {
        return VEC4(this->x, this->z, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzyx() const
    {
        return VEC4(this->y, this->z, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzyx() const
    {
        return VEC4(this->z, this->z, this->y, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxzx() const
    {
        return VEC4(this->x, this->x, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxzx() const
    {
        return VEC4(this->y, this->x, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxzx() const
    {
        return VEC4(this->z, this->x, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyzx() const
    {
        return VEC4(this->x, this->y, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyzx() const
    {
        return VEC4(this->y, this->y, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyzx() const
    {
        return VEC4(this->z, this->y, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzzx() const
    {
        return VEC4(this->x, this->z, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzzx() const
    {
        return VEC4(this->y, this->z, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzzx() const
    {
        return VEC4(this->z, this->z, this->z, this->x);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxxy() const
    {
        return VEC4(this->x, this->x, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxxy() const
    {
        return VEC4(this->y, this->x, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxxy() const
    {
        return VEC4(this->z, this->x, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyxy() const
    {
        return VEC4(this->x, this->y, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyxy() const
    {
        return VEC4(this->y, this->y, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyxy() const
    {
        return VEC4(this->z, this->y, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzxy() const
    {
        return VEC4(this->x, this->z, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzxy() const
    {
        return VEC4(this->y, this->z, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzxy() const
    {
        return VEC4(this->z, this->z, this->x, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxyy() const
    {
        return VEC4(this->x, this->x, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxyy() const
    {
        return VEC4(this->y, this->x, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxyy() const
    {
        return VEC4(this->z, this->x, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyyy() const
    {
        return VEC4(this->x, this->y, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyyy() const
    {
        return VEC4(this->y, this->y, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyyy() const
    {
        return VEC4(this->z, this->y, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzyy() const
    {
        return VEC4(this->x, this->z, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzyy() const
    {
        return VEC4(this->y, this->z, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzyy() const
    {
        return VEC4(this->z, this->z, this->y, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxzy() const
    {
        return VEC4(this->x, this->x, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxzy() const
    {
        return VEC4(this->y, this->x, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxzy() const
    {
        return VEC4(this->z, this->x, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyzy() const
    {
        return VEC4(this->x, this->y, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyzy() const
    {
        return VEC4(this->y, this->y, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyzy() const
    {
        return VEC4(this->z, this->y, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzzy() const
    {
        return VEC4(this->x, this->z, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzzy() const
    {
        return VEC4(this->y, this->z, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzzy() const
    {
        return VEC4(this->z, this->z, this->z, this->y);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxxz() const
    {
        return VEC4(this->x, this->x, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxxz() const
    {
        return VEC4(this->y, this->x, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxxz() const
    {
        return VEC4(this->z, this->x, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyxz() const
    {
        return VEC4(this->x, this->y, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyxz() const
    {
        return VEC4(this->y, this->y, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyxz() const
    {
        return VEC4(this->z, this->y, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzxz() const
    {
        return VEC4(this->x, this->z, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzxz() const
    {
        return VEC4(this->y, this->z, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzxz() const
    {
        return VEC4(this->z, this->z, this->x, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxyz() const
    {
        return VEC4(this->x, this->x, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxyz() const
    {
        return VEC4(this->y, this->x, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxyz() const
    {
        return VEC4(this->z, this->x, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyyz() const
    {
        return VEC4(this->x, this->y, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyyz() const
    {
        return VEC4(this->y, this->y, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyyz() const
    {
        return VEC4(this->z, this->y, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzyz() const
    {
        return VEC4(this->x, this->z, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzyz() const
    {
        return VEC4(this->y, this->z, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzyz() const
    {
        return VEC4(this->z, this->z, this->y, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xxzz() const
    {
        return VEC4(this->x, this->x, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yxzz() const
    {
        return VEC4(this->y, this->x, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zxzz() const
    {
        return VEC4(this->z, this->x, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xyzz() const
    {
        return VEC4(this->x, this->y, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yyzz() const
    {
        return VEC4(this->y, this->y, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zyzz() const
    {
        return VEC4(this->z, this->y, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_xzzz() const
    {
        return VEC4(this->x, this->z, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_yzzz() const
    {
        return VEC4(this->y, this->z, this->z, this->z);
    }

    template <CVEC3_LIST> 
    inline const VEC4 _cvec3<CVEC3_TYPE>::_zzzz() const
    {
        return VEC4(this->z, this->z, this->z, this->z);
    }
#endif //defined(GLM_SWIZZLE)

} //namespace detail
} //namespace glm

#endif//__cvec3_inl__

