///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-15
// Updated : 2007-03-14
// Licence : This source is under GNU LGPL licence
// File    : _cvec4.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __cvec4_h__
#define __cvec4_h__

#include "_cvecx.h"

namespace glm{
namespace detail{

    template <CVEC4_LIST> 
    class _cvec4
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
            union{T w, a, q;};
        */
/*
        // Solution away from ISO C++ but available with VC7.1 and GCC without -pedantic
        union 
        {
            struct{T x, y, z, w;};
            struct{T r, g, b, a;};
            struct{T s, t, p, q;};
            //__m128 data;
        };
*/

#ifndef GLM_SINGLE_COMP_NAME
#ifdef GLM_COMPILER_GCC
        union{T x, r, s;};
        union{T y, g, t;};
        union{T z, b, p;};
        union{T w, a, q;};
#endif//GLM_COMPILER_GCC

#ifdef GLM_COMPILER_VC
        union 
        {
            struct{T x, y, z, w;};
            struct{T r, g, b, a;};
            struct{T s, t, p, q;};
        };
#endif//GLM_COMPILER_VC

#else
        T x, y, z, w;
#endif//GLM_SINGLE_COMP_NAME

		// Constructor
		_cvec4(){}
		_cvec4(const T x, const T y, const T z, const T w);

        // Accesses
        T& operator[](size_type i);
        const T operator[](size_type i) const;
        operator T*();
	    operator const T*() const;

#if defined(GLM_SWIZZLE)
        // Left hand side 2 components common swizzle operators
        REF2 _yx();
        REF2 _zx();
        REF2 _wx();
        REF2 _xy();
        REF2 _zy();
        REF2 _wy();
        REF2 _xz();
        REF2 _yz();
        REF2 _wz();
        REF2 _xw();
        REF2 _yw();
        REF2 _zw();

        // Right hand side 2 components common swizzle operators
        const VEC2 _xx() const;
        const VEC2 _yx() const;
        const VEC2 _zx() const;
        const VEC2 _wx() const;
        const VEC2 _xy() const;
        const VEC2 _yy() const;
        const VEC2 _zy() const;
        const VEC2 _wy() const;
        const VEC2 _xz() const;
        const VEC2 _yz() const;
        const VEC2 _zz() const;
        const VEC2 _wz() const;
        const VEC2 _xw() const;
        const VEC2 _yw() const;
        const VEC2 _zw() const;
        const VEC2 _ww() const;

        // Left hand side 3 components common swizzle operators
        REF3 _zyx();
        REF3 _wyx();
        REF3 _yzx();
        REF3 _wzx();
        REF3 _ywx();
        REF3 _zwx();
        REF3 _zxy();
        REF3 _wxy();
        REF3 _xzy();
        REF3 _wzy();
        REF3 _xwy();
        REF3 _zwy();
        REF3 _yxz();
        REF3 _wxz();
        REF3 _xyz();
        REF3 _wyz();
        REF3 _xwz();
        REF3 _ywz();
        REF3 _yxw();
        REF3 _zxw();
        REF3 _xyw();
        REF3 _zyw();
        REF3 _xzw();
        REF3 _yzw();

        // Right hand side 3 components common swizzle operators
        const VEC3 _xxx() const;
        const VEC3 _yxx() const;
        const VEC3 _zxx() const;
        const VEC3 _wxx() const;
        const VEC3 _xyx() const;
        const VEC3 _yyx() const;
        const VEC3 _zyx() const;
        const VEC3 _wyx() const;
        const VEC3 _xzx() const;
        const VEC3 _yzx() const;
        const VEC3 _zzx() const;
        const VEC3 _wzx() const;
        const VEC3 _xwx() const;
        const VEC3 _ywx() const;
        const VEC3 _zwx() const;
        const VEC3 _wwx() const;
        const VEC3 _xxy() const;
        const VEC3 _yxy() const;
        const VEC3 _zxy() const;
        const VEC3 _wxy() const;
        const VEC3 _xyy() const;
        const VEC3 _yyy() const;
        const VEC3 _zyy() const;
        const VEC3 _wyy() const;
        const VEC3 _xzy() const;
        const VEC3 _yzy() const;
        const VEC3 _zzy() const;
        const VEC3 _wzy() const;
        const VEC3 _xwy() const;
        const VEC3 _ywy() const;
        const VEC3 _zwy() const;
        const VEC3 _wwy() const;
        const VEC3 _xxz() const;
        const VEC3 _yxz() const;
        const VEC3 _zxz() const;
        const VEC3 _wxz() const;
        const VEC3 _xyz() const;
        const VEC3 _yyz() const;
        const VEC3 _zyz() const;
        const VEC3 _wyz() const;
        const VEC3 _xzz() const;
        const VEC3 _yzz() const;
        const VEC3 _zzz() const;
        const VEC3 _wzz() const;
        const VEC3 _xwz() const;
        const VEC3 _ywz() const;
        const VEC3 _zwz() const;
        const VEC3 _wwz() const;
        const VEC3 _xxw() const;
        const VEC3 _yxw() const;
        const VEC3 _zxw() const;
        const VEC3 _wxw() const;
        const VEC3 _xyw() const;
        const VEC3 _yyw() const;
        const VEC3 _zyw() const;
        const VEC3 _wyw() const;
        const VEC3 _xzw() const;
        const VEC3 _yzw() const;
        const VEC3 _zzw() const;
        const VEC3 _wzw() const;
        const VEC3 _xww() const;
        const VEC3 _yww() const;
        const VEC3 _zww() const;
        const VEC3 _www() const;

        // Left hand side 4 components common swizzle operators
        REF4 _wzyx();
        REF4 _zwyx();
        REF4 _wyzx();
        REF4 _ywzx();
        REF4 _zywx();
        REF4 _yzwx();
        REF4 _wzxy();
        REF4 _zwxy();
        REF4 _wxzy();
        REF4 _xwzy();
        REF4 _zxwy();
        REF4 _xzwy();
        REF4 _wyxz();
        REF4 _ywxz();
        REF4 _wxyz();
        REF4 _xwyz();
        REF4 _yxwz();
        REF4 _xywz();
        REF4 _zyxw();
        REF4 _yzxw();
        REF4 _zxyw();
        REF4 _xzyw();
        REF4 _yxzw();
        REF4 _xyzw();

        // Right hand side 4 components common swizzle operators
        const VEC4 _xxxx() const;
        const VEC4 _yxxx() const;
        const VEC4 _zxxx() const;
        const VEC4 _wxxx() const;
        const VEC4 _xyxx() const;
        const VEC4 _yyxx() const;
        const VEC4 _zyxx() const;
        const VEC4 _wyxx() const;
        const VEC4 _xzxx() const;
        const VEC4 _yzxx() const;
        const VEC4 _zzxx() const;
        const VEC4 _wzxx() const;
        const VEC4 _xwxx() const;
        const VEC4 _ywxx() const;
        const VEC4 _zwxx() const;
        const VEC4 _wwxx() const;
        const VEC4 _xxyx() const;
        const VEC4 _yxyx() const;
        const VEC4 _zxyx() const;
        const VEC4 _wxyx() const;
        const VEC4 _xyyx() const;
        const VEC4 _yyyx() const;
        const VEC4 _zyyx() const;
        const VEC4 _wyyx() const;
        const VEC4 _xzyx() const;
        const VEC4 _yzyx() const;
        const VEC4 _zzyx() const;
        const VEC4 _wzyx() const;
        const VEC4 _xwyx() const;
        const VEC4 _ywyx() const;
        const VEC4 _zwyx() const;
        const VEC4 _wwyx() const;
        const VEC4 _xxzx() const;
        const VEC4 _yxzx() const;
        const VEC4 _zxzx() const;
        const VEC4 _wxzx() const;
        const VEC4 _xyzx() const;
        const VEC4 _yyzx() const;
        const VEC4 _zyzx() const;
        const VEC4 _wyzx() const;
        const VEC4 _xzzx() const;
        const VEC4 _yzzx() const;
        const VEC4 _zzzx() const;
        const VEC4 _wzzx() const;
        const VEC4 _xwzx() const;
        const VEC4 _ywzx() const;
        const VEC4 _zwzx() const;
        const VEC4 _wwzx() const;
        const VEC4 _xxwx() const;
        const VEC4 _yxwx() const;
        const VEC4 _zxwx() const;
        const VEC4 _wxwx() const;
        const VEC4 _xywx() const;
        const VEC4 _yywx() const;
        const VEC4 _zywx() const;
        const VEC4 _wywx() const;
        const VEC4 _xzwx() const;
        const VEC4 _yzwx() const;
        const VEC4 _zzwx() const;
        const VEC4 _wzwx() const;
        const VEC4 _xwwx() const;
        const VEC4 _ywwx() const;
        const VEC4 _zwwx() const;
        const VEC4 _wwwx() const;
        const VEC4 _xxxy() const;
        const VEC4 _yxxy() const;
        const VEC4 _zxxy() const;
        const VEC4 _wxxy() const;
        const VEC4 _xyxy() const;
        const VEC4 _yyxy() const;
        const VEC4 _zyxy() const;
        const VEC4 _wyxy() const;
        const VEC4 _xzxy() const;
        const VEC4 _yzxy() const;
        const VEC4 _zzxy() const;
        const VEC4 _wzxy() const;
        const VEC4 _xwxy() const;
        const VEC4 _ywxy() const;
        const VEC4 _zwxy() const;
        const VEC4 _wwxy() const;
        const VEC4 _xxyy() const;
        const VEC4 _yxyy() const;
        const VEC4 _zxyy() const;
        const VEC4 _wxyy() const;
        const VEC4 _xyyy() const;
        const VEC4 _yyyy() const;
        const VEC4 _zyyy() const;
        const VEC4 _wyyy() const;
        const VEC4 _xzyy() const;
        const VEC4 _yzyy() const;
        const VEC4 _zzyy() const;
        const VEC4 _wzyy() const;
        const VEC4 _xwyy() const;
        const VEC4 _ywyy() const;
        const VEC4 _zwyy() const;
        const VEC4 _wwyy() const;
        const VEC4 _xxzy() const;
        const VEC4 _yxzy() const;
        const VEC4 _zxzy() const;
        const VEC4 _wxzy() const;
        const VEC4 _xyzy() const;
        const VEC4 _yyzy() const;
        const VEC4 _zyzy() const;
        const VEC4 _wyzy() const;
        const VEC4 _xzzy() const;
        const VEC4 _yzzy() const;
        const VEC4 _zzzy() const;
        const VEC4 _wzzy() const;
        const VEC4 _xwzy() const;
        const VEC4 _ywzy() const;
        const VEC4 _zwzy() const;
        const VEC4 _wwzy() const;
        const VEC4 _xxwy() const;
        const VEC4 _yxwy() const;
        const VEC4 _zxwy() const;
        const VEC4 _wxwy() const;
        const VEC4 _xywy() const;
        const VEC4 _yywy() const;
        const VEC4 _zywy() const;
        const VEC4 _wywy() const;
        const VEC4 _xzwy() const;
        const VEC4 _yzwy() const;
        const VEC4 _zzwy() const;
        const VEC4 _wzwy() const;
        const VEC4 _xwwy() const;
        const VEC4 _ywwy() const;
        const VEC4 _zwwy() const;
        const VEC4 _wwwy() const;
        const VEC4 _xxxz() const;
        const VEC4 _yxxz() const;
        const VEC4 _zxxz() const;
        const VEC4 _wxxz() const;
        const VEC4 _xyxz() const;
        const VEC4 _yyxz() const;
        const VEC4 _zyxz() const;
        const VEC4 _wyxz() const;
        const VEC4 _xzxz() const;
        const VEC4 _yzxz() const;
        const VEC4 _zzxz() const;
        const VEC4 _wzxz() const;
        const VEC4 _xwxz() const;
        const VEC4 _ywxz() const;
        const VEC4 _zwxz() const;
        const VEC4 _wwxz() const;
        const VEC4 _xxyz() const;
        const VEC4 _yxyz() const;
        const VEC4 _zxyz() const;
        const VEC4 _wxyz() const;
        const VEC4 _xyyz() const;
        const VEC4 _yyyz() const;
        const VEC4 _zyyz() const;
        const VEC4 _wyyz() const;
        const VEC4 _xzyz() const;
        const VEC4 _yzyz() const;
        const VEC4 _zzyz() const;
        const VEC4 _wzyz() const;
        const VEC4 _xwyz() const;
        const VEC4 _ywyz() const;
        const VEC4 _zwyz() const;
        const VEC4 _wwyz() const;
        const VEC4 _xxzz() const;
        const VEC4 _yxzz() const;
        const VEC4 _zxzz() const;
        const VEC4 _wxzz() const;
        const VEC4 _xyzz() const;
        const VEC4 _yyzz() const;
        const VEC4 _zyzz() const;
        const VEC4 _wyzz() const;
        const VEC4 _xzzz() const;
        const VEC4 _yzzz() const;
        const VEC4 _zzzz() const;
        const VEC4 _wzzz() const;
        const VEC4 _xwzz() const;
        const VEC4 _ywzz() const;
        const VEC4 _zwzz() const;
        const VEC4 _wwzz() const;
        const VEC4 _xxwz() const;
        const VEC4 _yxwz() const;
        const VEC4 _zxwz() const;
        const VEC4 _wxwz() const;
        const VEC4 _xywz() const;
        const VEC4 _yywz() const;
        const VEC4 _zywz() const;
        const VEC4 _wywz() const;
        const VEC4 _xzwz() const;
        const VEC4 _yzwz() const;
        const VEC4 _zzwz() const;
        const VEC4 _wzwz() const;
        const VEC4 _xwwz() const;
        const VEC4 _ywwz() const;
        const VEC4 _zwwz() const;
        const VEC4 _wwwz() const;
        const VEC4 _xxxw() const;
        const VEC4 _yxxw() const;
        const VEC4 _zxxw() const;
        const VEC4 _wxxw() const;
        const VEC4 _xyxw() const;
        const VEC4 _yyxw() const;
        const VEC4 _zyxw() const;
        const VEC4 _wyxw() const;
        const VEC4 _xzxw() const;
        const VEC4 _yzxw() const;
        const VEC4 _zzxw() const;
        const VEC4 _wzxw() const;
        const VEC4 _xwxw() const;
        const VEC4 _ywxw() const;
        const VEC4 _zwxw() const;
        const VEC4 _wwxw() const;
        const VEC4 _xxyw() const;
        const VEC4 _yxyw() const;
        const VEC4 _zxyw() const;
        const VEC4 _wxyw() const;
        const VEC4 _xyyw() const;
        const VEC4 _yyyw() const;
        const VEC4 _zyyw() const;
        const VEC4 _wyyw() const;
        const VEC4 _xzyw() const;
        const VEC4 _yzyw() const;
        const VEC4 _zzyw() const;
        const VEC4 _wzyw() const;
        const VEC4 _xwyw() const;
        const VEC4 _ywyw() const;
        const VEC4 _zwyw() const;
        const VEC4 _wwyw() const;
        const VEC4 _xxzw() const;
        const VEC4 _yxzw() const;
        const VEC4 _zxzw() const;
        const VEC4 _wxzw() const;
        const VEC4 _xyzw() const;
        const VEC4 _yyzw() const;
        const VEC4 _zyzw() const;
        const VEC4 _wyzw() const;
        const VEC4 _xzzw() const;
        const VEC4 _yzzw() const;
        const VEC4 _zzzw() const;
        const VEC4 _wzzw() const;
        const VEC4 _xwzw() const;
        const VEC4 _ywzw() const;
        const VEC4 _zwzw() const;
        const VEC4 _wwzw() const;
        const VEC4 _xxww() const;
        const VEC4 _yxww() const;
        const VEC4 _zxww() const;
        const VEC4 _wxww() const;
        const VEC4 _xyww() const;
        const VEC4 _yyww() const;
        const VEC4 _zyww() const;
        const VEC4 _wyww() const;
        const VEC4 _xzww() const;
        const VEC4 _yzww() const;
        const VEC4 _zzww() const;
        const VEC4 _wzww() const;
        const VEC4 _xwww() const;
        const VEC4 _ywww() const;
        const VEC4 _zwww() const;
        const VEC4 _wwww() const;
#endif// defined(GLM_SWIZZLE)
	};

} //namespace detail
} //namespace glm

#endif//__cvec4_h__
