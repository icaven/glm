///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-15
// Updated : 2007-03-14
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_cvec3.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_cvec3__
#define __glm_core_cvec3__

#include "_cvecx.h"

namespace glm{
namespace detail{

    template <CVEC3_LIST> 
    class _cvec3
    {
	public:
		typedef T value_type;
		typedef int size_type;
		static const size_type value_size;

        // Data
        /* ISO C++ version unavailable with VC7.1 ...
            union{T x, r, s;};
            union{T y, g, t;};
            union{T z, b, p;};
        */
        // Solution away from ISO C++ but available with VC7.1 and GCC without -pedantic
/*
        union 
        {
            struct{T x, y, z;};
            struct{T r, g, b;};
            struct{T s, t, p;};
        };
*/

#ifndef GLM_SINGLE_COMP_NAME
#ifdef GLM_COMPILER_GCC
        union{T x, r, s;};
        union{T y, g, t;};
        union{T z, b, p;};
#endif//GLM_COMPILER_GCC

#ifdef GLM_COMPILER_VC
        union 
        {
            struct{T x, y, z;};
            struct{T r, g, b;};
            struct{T s, t, p;};
        };
#endif//GLM_COMPILER_VC

#else
        T x, y, z;
#endif//GLM_SINGLE_COMP_NAME

		// Constructor
		_cvec3(){}
		_cvec3(const T x, const T y, const T z);

        // Accesses
        T& operator [] (size_type i);
        const T operator [] (size_type i) const;
        operator T* ();
	    operator const T* () const;

#if defined(GLM_SWIZZLE)
        // Left hand side 2 components common swizzle operators
        REF2 _yx();
        REF2 _zx();
        REF2 _xy();
        REF2 _zy();
        REF2 _xz();
        REF2 _yz();

        // Right hand side 2 components common swizzle operators
        const VEC2 _xx() const;
        const VEC2 _yx() const;
        const VEC2 _zx() const;
        const VEC2 _xy() const;
        const VEC2 _yy() const;
        const VEC2 _zy() const;
        const VEC2 _xz() const;
        const VEC2 _yz() const;
        const VEC2 _zz() const;

        // Left hand side 3 components common swizzle operators
        REF3 _zyx();
        REF3 _yzx();
        REF3 _zxy();
        REF3 _xzy();
        REF3 _yxz();
        REF3 _xyz();

        // Right hand side 3 components common swizzle operators
        const VEC3 _xxx() const;
        const VEC3 _yxx() const;
        const VEC3 _zxx() const;
        const VEC3 _xyx() const;
        const VEC3 _yyx() const;
        const VEC3 _zyx() const;
        const VEC3 _xzx() const;
        const VEC3 _yzx() const;
        const VEC3 _zzx() const;
        const VEC3 _xxy() const;
        const VEC3 _yxy() const;
        const VEC3 _zxy() const;
        const VEC3 _xyy() const;
        const VEC3 _yyy() const;
        const VEC3 _zyy() const;
        const VEC3 _xzy() const;
        const VEC3 _yzy() const;
        const VEC3 _zzy() const;
        const VEC3 _xxz() const;
        const VEC3 _yxz() const;
        const VEC3 _zxz() const;
        const VEC3 _xyz() const;
        const VEC3 _yyz() const;
        const VEC3 _zyz() const;
        const VEC3 _xzz() const;
        const VEC3 _yzz() const;
        const VEC3 _zzz() const;

        // 4 components common swizzle operators
        const VEC4 _xxxx() const;
        const VEC4 _yxxx() const;
        const VEC4 _zxxx() const;
        const VEC4 _xyxx() const;
        const VEC4 _yyxx() const;
        const VEC4 _zyxx() const;
        const VEC4 _xzxx() const;
        const VEC4 _yzxx() const;
        const VEC4 _zzxx() const;
        const VEC4 _xxyx() const;
        const VEC4 _yxyx() const;
        const VEC4 _zxyx() const;
        const VEC4 _xyyx() const;
        const VEC4 _yyyx() const;
        const VEC4 _zyyx() const;
        const VEC4 _xzyx() const;
        const VEC4 _yzyx() const;
        const VEC4 _zzyx() const;
        const VEC4 _xxzx() const;
        const VEC4 _yxzx() const;
        const VEC4 _zxzx() const;
        const VEC4 _xyzx() const;
        const VEC4 _yyzx() const;
        const VEC4 _zyzx() const;
        const VEC4 _xzzx() const;
        const VEC4 _yzzx() const;
        const VEC4 _zzzx() const;
        const VEC4 _xxxy() const;
        const VEC4 _yxxy() const;
        const VEC4 _zxxy() const;
        const VEC4 _xyxy() const;
        const VEC4 _yyxy() const;
        const VEC4 _zyxy() const;
        const VEC4 _xzxy() const;
        const VEC4 _yzxy() const;
        const VEC4 _zzxy() const;
        const VEC4 _xxyy() const;
        const VEC4 _yxyy() const;
        const VEC4 _zxyy() const;
        const VEC4 _xyyy() const;
        const VEC4 _yyyy() const;
        const VEC4 _zyyy() const;
        const VEC4 _xzyy() const;
        const VEC4 _yzyy() const;
        const VEC4 _zzyy() const;
        const VEC4 _xxzy() const;
        const VEC4 _yxzy() const;
        const VEC4 _zxzy() const;
        const VEC4 _xyzy() const;
        const VEC4 _yyzy() const;
        const VEC4 _zyzy() const;
        const VEC4 _xzzy() const;
        const VEC4 _yzzy() const;
        const VEC4 _zzzy() const;
        const VEC4 _xxxz() const;
        const VEC4 _yxxz() const;
        const VEC4 _zxxz() const;
        const VEC4 _xyxz() const;
        const VEC4 _yyxz() const;
        const VEC4 _zyxz() const;
        const VEC4 _xzxz() const;
        const VEC4 _yzxz() const;
        const VEC4 _zzxz() const;
        const VEC4 _xxyz() const;
        const VEC4 _yxyz() const;
        const VEC4 _zxyz() const;
        const VEC4 _xyyz() const;
        const VEC4 _yyyz() const;
        const VEC4 _zyyz() const;
        const VEC4 _xzyz() const;
        const VEC4 _yzyz() const;
        const VEC4 _zzyz() const;
        const VEC4 _xxzz() const;
        const VEC4 _yxzz() const;
        const VEC4 _zxzz() const;
        const VEC4 _xyzz() const;
        const VEC4 _yyzz() const;
        const VEC4 _zyzz() const;
        const VEC4 _xzzz() const;
        const VEC4 _yzzz() const;
        const VEC4 _zzzz() const;
#endif// defined(GLM_SWIZZLE)
	};

} //namespace detail
} //namespace glm

#endif//__cvec3_h__
