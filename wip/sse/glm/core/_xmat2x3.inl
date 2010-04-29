///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-08-05
// Updated : 2006-10-01
// Licence : This source is under GNU LGPL licence
// File    : _mat2x3.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __mat2x3_inl__
#define __mat2x3_inl__

#include "./_xmat2x3.h"

namespace glm{
namespace detail{

	template <typename T> const typename _xmat2x3<T>::size_type _xmat2x3<T>::col_size = 2;
	template <typename T> const typename _xmat2x3<T>::size_type _xmat2x3<T>::row_size = 3;

    //////////////////////////////////////////////////////////////
    // Constructors

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3()
    {
        this->value[0] = _xvec3<T>(T(1), T(0), T(0));
        this->value[1] = _xvec3<T>(T(0), T(1), T(0));
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const T f)
    {
        this->value[0] = _xvec3<T>(f, T(0), T(0));
        this->value[1] = _xvec3<T>(T(0), f, T(0));
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3
    (
        const T x0, const T y0, const T z0,
        const T x1, const T y1, const T z1
    )
    {
        this->value[0] = _xvec3<T>(x0, y0, z0);
        this->value[1] = _xvec3<T>(x1, y1, z1);
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3
    (
        const _xvec3<T> & v0, 
        const _xvec3<T> & v1
    )
    {
        this->value[0] = v0;
        this->value[1] = v1;
    }

    // Conversion
    template <typename T> 
    template <typename U> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat2x3<U>& m)
    {
        this->value[0] = _xvec3<T>(m[0]);
        this->value[1] = _xvec3<T>(m[1]);
	}

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat2<T>& m)
    {
        this->value[0] = _xvec3<T>(m[0], T(0));
        this->value[1] = _xvec3<T>(m[1], T(0));
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat3<T>& m)
    {
        this->value[0] = _xvec3<T>(m[0]);
        this->value[1] = _xvec3<T>(m[1]);
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat4<T>& m)
    {
        this->value[0] = _xvec3<T>(m[0]);
        this->value[1] = _xvec3<T>(m[1]);
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat2x4<T>& m)
    {
        this->value[0] = _xvec3<T>(m[0]);
        this->value[1] = _xvec3<T>(m[1]);
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat3x2<T>& m)
    {
        this->value[0] = _xvec3<T>(m[0], T(0));
        this->value[1] = _xvec3<T>(m[1], T(0));
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat3x4<T>& m)
    {
        this->value[0] = _xvec3<T>(m[0]);
        this->value[1] = _xvec3<T>(m[1]);
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat4x2<T>& m)
    {
        this->value[0] = _xvec3<T>(m[0], T(0));
        this->value[1] = _xvec3<T>(m[1], T(0));
    }

    template <typename T> 
    inline _xmat2x3<T>::_xmat2x3(const _xmat4x3<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
    }

    //////////////////////////////////////////////////////////////
    // Unary updatable operators

    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator= (const _xmat2x3<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
        return *this;
    }

    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator+= (const T s)
    {
        this->value[0] += s;
        this->value[1] += s;
        return *this;
    }

    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator+= (const _xmat2x3<T>& m)
    {
        this->value[0] += m[0];
        this->value[1] += m[1];
        return *this;
    }

    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator-= (const T s)
    {
        this->value[0] -= s;
        this->value[1] -= s;
        return *this;
    }

    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator-= (const _xmat2x3<T>& m)
    {
        this->value[0] -= m[0];
        this->value[1] -= m[1];
        return *this;
    }

    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator*= (const T s)
    {
        this->value[0] *= s;
        this->value[1] *= s;
        return *this;
    }

    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator*= (const _xmat3x2<T>& m)
    {
        return (*this = _xmat2x3<T>(*this * m));
    }

    template <typename T> 
    inline _xmat2x3<T> & _xmat2x3<T>::operator/= (const T s)
    {
        this->value[0] /= s;
        this->value[1] /= s;
        return *this;
    }
/* ToDo
    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator/= (const _xmat3x2<T>& m)
    {
        return (*this = _xmat2x3<T>(*this / m));
    }
*/
    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator++ ()
    {
        ++this->value[0];
        ++this->value[1];
        return *this;
    }

    template <typename T> 
    inline _xmat2x3<T>& _xmat2x3<T>::operator-- ()
    {
        --this->value[0];
        --this->value[1];
        return *this;
    }
    
    //////////////////////////////////////////////////////////////
    // Unary constant operators
    template <typename T> 
    inline const _xmat2x3<T> _xmat2x3<T>::operator- () const
    {
        return _xmat2x3<T>(
            -this->value[0], 
            -this->value[1]);
    }

    template <typename T> 
    inline const _xmat2x3<T> _xmat2x3<T>::operator-- (int n) const 
    {
        _xmat2x3<T> m = *this;
        --m.value[0];
        --m.value[1];
        return m;
    }

    template <typename T> 
    inline const _xmat2x3<T> _xmat2x3<T>::operator++ (int n) const
    {
        _xmat2x3<T> m = *this;
        ++m.value[0];
        ++m.value[1];
        return m;
    }

    //////////////////////////////////////////////////////////////
    // Binary operators

    template <typename T> 
    inline _xmat2x3<T> operator+ (const _xmat2x3<T>& m, const T s)
    {
        return _xmat2x3<T>(
            m[0] + s,
            m[1] + s);
    }

    template <typename T> 
    inline _xmat2x3<T> operator+ (const _xmat2x3<T>& m1, const _xmat2x3<T>& m2)
    {
        return _xmat2x3<T>(
            m1[0] + m2[0],
            m1[1] + m2[1]);
    }

    template <typename T> 
    inline _xmat2x3<T> operator- (const _xmat2x3<T>& m, const T s)
    {
        return _xmat2x3<T>(
            m[0] - s,
            m[1] - s);
    }

    template <typename T> 
    inline _xmat2x3<T> operator- (const _xmat2x3<T>& m1, const _xmat2x3<T>& m2)
    {
        return _xmat2x3<T>(
            m1[0] - m2[0],
            m1[1] - m2[1]);
    }

    template <typename T> 
    inline _xmat2x3<T> operator* (const _xmat2x3<T>& m, const T s)
    {
        return _xmat2x3<T>(
            m[0] * s,
            m[1] * s);
    }

    template <typename T> 
    inline _xmat2x3<T> operator* (const T s, const _xmat2x3<T> & m)
    {
        return _xmat2x3<T>(
            m[0] * s,
            m[1] * s);
    }
   
    template <typename T>
    inline _xvec3<T> operator* (const _xmat2x3<T>& m, const _xvec2<T>& v)
    {
        return _xvec3<T>(
            m[0][0] * v.x + m[1][0] * v.y,
            m[0][1] * v.x + m[1][1] * v.y,
            m[0][2] * v.x + m[1][2] * v.y,
            m[0][3] * v.x + m[1][3] * v.y);
    }

    template <typename T> 
    inline _xvec2<T> operator* (const _xvec3<T>& v, const _xmat2x3<T>& m) 
    {
        return _xvec2<T>(
            m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z + m[3][0] * v.w,
            m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z + m[3][1] * v.w);
    }

    template <typename T> 
    inline _xmat3<T> operator* (const _xmat2x3<T>& m1, const _xmat3x2<T>& m2)
    {
        const T SrcA00 = m1[0][0];
        const T SrcA01 = m1[0][1];
        const T SrcA02 = m1[0][2];
        const T SrcA10 = m1[1][0];
        const T SrcA11 = m1[1][1];
        const T SrcA12 = m1[1][2];

        const T SrcB00 = m2[0][0];
        const T SrcB01 = m2[0][1];
        const T SrcB10 = m2[1][0];
        const T SrcB11 = m2[1][1];
        const T SrcB20 = m2[2][0];
        const T SrcB21 = m2[2][1];

        _xmat3<T> Result;
        Result[0][0] = SrcA00 * SrcB00 + SrcA10 * SrcB01;
        Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01;
        Result[0][2] = SrcA02 * SrcB00 + SrcA12 * SrcB01;
        Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11;
        Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11;
        Result[1][2] = SrcA02 * SrcB10 + SrcA12 * SrcB11;
        Result[2][0] = SrcA00 * SrcB20 + SrcA10 * SrcB21;
        Result[2][1] = SrcA01 * SrcB20 + SrcA11 * SrcB21;
        Result[2][2] = SrcA02 * SrcB20 + SrcA12 * SrcB21;
        return Result;
    }

    template <typename T> 
    inline _xmat2x3<T> operator/ (const _xmat2x3<T>& m, const T s)
    {
        return _xmat2x3<T>(
            m.value[0] / s,
            m.value[1] / s,
            m.value[2] / s);        
    }

    template <typename T> 
    inline _xmat2x3<T> operator/ (const T s, const _xmat2x3<T>& m)
    {
        return _xmat2x3<T>(
            s / m.value[0],
            s / m.value[1],
            s / m.value[2]);        
    }
/* ToDo
    template <typename T> 
    inline _xvec3<T> operator/ (const _xmat2x3<T>& m, const _xvec2<T>& v)
    {
      
    }

    template <typename T> 
    inline _xvec2<T> operator/ (const _xvec3<T>& v, const _xmat3x2<T>& m)
    {
      
    }

    template <typename T> 
    inline _xmat3<T> operator/ (const _xmat2x3<T>& m1, const _xmat3x2<T>& m2)
    {

    }
*/

} //namespace detail
} //namespace glm

#endif //__mat2x3_inl__
