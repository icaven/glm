///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-12
// Updated : 2007-03-14
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_cvec2.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_cvec2__
#define __glm_core_cvec2__

#include "_cvecx.h"

namespace glm{
namespace detail{

    template <CVEC2_LIST> 
    class _cvec2
    {
	public:
		typedef T value_type;
		typedef int size_type;
		static const size_type value_size;

        // Data
        /* ISO C++ version unavailable with VC7.1 ...
            union{T x, r, s;};
            union{T y, g, t;};
        */
        // Solution away from ISO C++ but available with VC7.1 and GCC without -pedantic
/*
        union 
        {
            struct{T x, y;};
            struct{T r, g;};
            struct{T s, t;};
        };
*/
#ifndef GLM_SINGLE_COMP_NAME
#ifdef GLM_COMPILER_GCC
        union {T x, r, s;};
        union {T y, g, t;};
#endif//GLM_COMPILER_GCC

#ifdef GLM_COMPILER_VC
        union 
        {
            struct{T x, y;};
            struct{T r, g;};
            struct{T s, t;};
        };
#endif//GLM_COMPILER_VC

#else
        T x, y;
#endif//GLM_SINGLE_COMP_NAME

		// Conclassor
		_cvec2(){}
		_cvec2(const T x, const T y);

        // Accesses
        T& operator[](size_type i);
        const T operator[](size_type i) const;
        operator T*();
	    operator const T*() const;

#if defined(GLM_SWIZZLE)
        // Left hand side 2 components common swizzle operators
        REF2 _xy();
        REF2 _yx();

        // Right hand side 2 components common swizzle operators
        const VEC2 _xx() const;
        const VEC2 _yx() const;
        VEC2 _xy() const;
        const VEC2 _yy() const;

        // Right hand side 3 components common swizzle operators
        const VEC3 _xxx() const;
        const VEC3 _yxx() const;
        const VEC3 _xyx() const;
        const VEC3 _yyx() const;
        const VEC3 _xxy() const;
        const VEC3 _yxy() const;
        const VEC3 _xyy() const;
        const VEC3 _yyy() const;

        // Right hand side 4 components common swizzle operators
        const VEC4 _xxxx() const;
        const VEC4 _yxxx() const;
        const VEC4 _xyxx() const;
        const VEC4 _yyxx() const;
        const VEC4 _xxyx() const;
        const VEC4 _yxyx() const;
        const VEC4 _xyyx() const;
        const VEC4 _yyyx() const;
        const VEC4 _xxxy() const;
        const VEC4 _yxxy() const;
        const VEC4 _xyxy() const;
        const VEC4 _yyxy() const;
        const VEC4 _xxyy() const;
        const VEC4 _yxyy() const;
        const VEC4 _xyyy() const;
        const VEC4 _yyyy() const;
#endif// defined(GLM_SWIZZLE)
    };

} //namespace detail
} //namespace glm

#endif //__glm_core_cvec2__
