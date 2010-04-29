///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-27
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/mat4x3.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_mat4x3__
#define __glm_gtx_mat4x3__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> class _xvec3;
    template <typename T> class _xvec4;

	template <typename T> class _xmat4x3GTX
    {
    private:
        // Data
        _xvec3<T> value[4];

    public:
        // Constructors
        _xmat4x3GTX();
        explicit _xmat4x3GTX(const T x);
        explicit _xmat4x3GTX(
            const T x0, const T y0, const T z0,
            const T x1, const T y1, const T z1,
            const T x2, const T y2, const T z2,
            const T x3, const T y3, const T z3);
        explicit _xmat4x3GTX(
            const _xvec3<T>& v0, 
            const _xvec3<T>& v1,
            const _xvec3<T>& v2,
            const _xvec3<T>& v3);

        // Accesses
        _xvec3<T>& operator[](int i) {return value[i];}
        const _xvec3<T> & operator[](int i) const {return value[i];}
        operator T*() {return &value[0][0];}
        operator const T*() const {return &value[0][0];}

        // Unary updatable operators
        _xmat4x3GTX<T>& operator= (const _xmat4x3GTX<T>& m);
        _xmat4x3GTX<T>& operator+= (const T s);
        _xmat4x3GTX<T>& operator+= (const _xmat4x3GTX<T>& m);
        _xmat4x3GTX<T>& operator-= (const T s);
        _xmat4x3GTX<T>& operator-= (const _xmat4x3GTX<T>& m);
        _xmat4x3GTX<T>& operator*= (const T s);
        _xmat4x3GTX<T>& operator*= (const _xmat4x3GTX<T>& m);
        _xmat4x3GTX<T>& operator/= (const T s);
        // ToDo
        //_xmat4x3GTX<T>& operator/= (const _xmat4x3GTX<T>& m);
        _xmat4x3GTX<T>& operator++ ();
        _xmat4x3GTX<T>& operator-- ();

        // Unary constant operators
        const _xmat4x3GTX<T> operator- () const;
        const _xmat4x3GTX<T> operator++ (int n) const;
        const _xmat4x3GTX<T> operator-- (int n) const;
    };

    // Binary operators
    template <typename T> 
    _xmat4x3GTX<T> operator+ (const _xmat4x3GTX<T>& m, const T s);
    
    template <typename T> 
    _xmat4x3GTX<T> operator+ (const _xmat4x3GTX<T>& m1, const _xmat4x3GTX<T>& m2);
    
    template <typename T> 
    _xmat4x3GTX<T> operator- (const _xmat4x3GTX<T>& m, const T s);

    template <typename T> 
    _xmat4x3GTX<T> operator- (const _xmat4x3GTX<T>& m1, const _xmat4x3GTX<T>& m2);

    template <typename T> 
    _xmat4x3GTX<T> operator* (const _xmat4x3GTX<T>& m, const T s);

    template <typename T> 
    _xmat4x3GTX<T> operator* (const T s, const _xmat4x3GTX<T>& m);

    template <typename T>
    _xvec3<T> operator* (const _xmat4x3GTX<T>& m, const _xvec4<T>& v);

    template <typename T> 
    _xvec3<T> operator* (const _xvec4<T>& v, const _xmat4x3GTX<T>& m);

    template <typename T> 
    _xmat4x3GTX<T> operator* (const _xmat4x3GTX<T>& m1, const _xmat4x3GTX<T>& m2);

    template <typename T> 
    _xmat4x3GTX<T> operator/ (const _xmat4x3GTX<T>& m, const T s);

    template <typename T> 
    _xmat4x3GTX<T> operator/ (const T s, const _xmat4x3GTX<T>& m);
/*
    template <typename T> 
    _xvec3<T> operator/ (const _xmat4x3GTX<T>& m, const _xvec4<T>& v);

    template <typename T> 
    _xvec3<T> operator/ (const _xvec4<T>& v, const _xmat4x3GTX<T>& m);
*/
    template <typename T> 
    _xmat4x3GTX<T> operator/ (const _xmat4x3GTX<T>& m1, const _xmat4x3GTX<T>& m2);

    typedef _xmat4x3GTX<float> __mat4x3GTX;     //!< - Deprecated - 4 * 3 matrix of floating-point numbers. (From GLM_GTX_mat4x3 extension)

    namespace gtx
    {
		//! GLM_GTX_mat4x3 extension: Deprecated
        namespace mat4x3
        {
            typedef _xmat4x3GTX<float> mat4x3;  //!< - Deprecated - 4 * 3 matrix of floating-point numbers. (From GLM_GTX_mat4x3 extension)
        }
    }
} //namespace glm

#define GLM_GTX_mat4x3 namespace gtx::mat4x3

#include "mat4x3.inl"
/* Deprecated
#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_mat4x3;}
#endif//GLM_GTX_INCLUDED
*/
#endif //__glm_gtx_mat4x3__
