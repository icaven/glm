///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-10-01
// Updated : 2006-10-01
// Licence : This source is under GNU LGPL licence
// File    : _mat4x2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __mat4x2_inl__
#define __mat4x2_inl__

#include "./_xmat4x2.h"

namespace glm{
namespace detail{

	template <typename T> const typename _xmat4x2<T>::size_type _xmat4x2<T>::col_size = 4;
	template <typename T> const typename _xmat4x2<T>::size_type _xmat4x2<T>::row_size = 2;

    //////////////////////////////////////////////////////////////
    // Constructors

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2()
    {
        this->value[0] = _xvec2<T>(1, 0);
        this->value[1] = _xvec2<T>(0, 1);
        this->value[2] = _xvec2<T>(0, 0);
        this->value[3] = _xvec2<T>(0, 0);
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const T f)
    {
        this->value[0] = _xvec2<T>(f, 0);
        this->value[1] = _xvec2<T>(0, f);
        this->value[2] = _xvec2<T>(0, 0);
        this->value[3] = _xvec2<T>(0, 0);
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2
    (
        const T x0, const T y0,
        const T x1, const T y1,
        const T x2, const T y2,
        const T x3, const T y3
    )
    {
        this->value[0] = _xvec2<T>(x0, y0);
        this->value[1] = _xvec2<T>(x1, y1);
        this->value[2] = _xvec2<T>(x2, y2);
        this->value[3] = _xvec2<T>(x3, y3);
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2
    (
        const _xvec2<T> & v0, 
        const _xvec2<T> & v1, 
        const _xvec2<T> & v2,
        const _xvec2<T> & v3
    )
    {
        this->value[0] = v0;
        this->value[1] = v1;
        this->value[2] = v2;
        this->value[3] = v3;
    }

    // Conversion
    template <typename T> 
    template <typename U> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat4x2<U>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
        this->value[3] = _xvec2<T>(m[3]);
	}

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat2<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
        this->value[3] = _xvec2<T>(T(0));
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
        this->value[3] = _xvec2<T>(T(0));
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
        this->value[3] = _xvec2<T>(m[3]);
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat2x3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(T(0));
        this->value[3] = _xvec2<T>(T(0));
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat3x2<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
        this->value[3] = _xvec2<T>(T(0));
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat2x4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(T(0));
        this->value[3] = _xvec2<T>(T(0));
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat4x3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
        this->value[3] = _xvec2<T>(m[3]);
    }

    template <typename T> 
    inline _xmat4x2<T>::_xmat4x2(const _xmat3x4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
        this->value[3] = _xvec2<T>(T(0));
    }

    //////////////////////////////////////////////////////////////
    // Unary updatable operators

    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator= (const _xmat4x2<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
        this->value[2] = m[2];
        this->value[3] = m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator+= (const T s)
    {
        this->value[0] += s;
        this->value[1] += s;
        this->value[2] += s;
        this->value[3] += s;
        return *this;
    }

    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator+= (const _xmat4x2<T>& m)
    {
        this->value[0] += m[0];
        this->value[1] += m[1];
        this->value[2] += m[2];
        this->value[3] += m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator-= (const T s)
    {
        this->value[0] -= s;
        this->value[1] -= s;
        this->value[2] -= s;
        this->value[3] -= s;
        return *this;
    }

    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator-= (const _xmat4x2<T>& m)
    {
        this->value[0] -= m[0];
        this->value[1] -= m[1];
        this->value[2] -= m[2];
        this->value[3] -= m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator*= (const T s)
    {
        this->value[0] *= s;
        this->value[1] *= s;
        this->value[2] *= s;
        this->value[3] *= s;
        return *this;
    }

    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator*= (const _xmat2x4<T>& m)
    {
        return (*this = _xmat4x2<T>(*this * m));
    }

    template <typename T> 
    inline _xmat4x2<T> & _xmat4x2<T>::operator/= (const T s)
    {
        this->value[0] /= s;
        this->value[1] /= s;
        this->value[2] /= s;
        this->value[3] /= s;
        return *this;
    }
/* ToDo
    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator/= (const _xmat2x4<T>& m)
    {
        return (*this = *this / m);
    }
*/
    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator++ ()
    {
        ++this->value[0];
        ++this->value[1];
        ++this->value[2];
        ++this->value[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4x2<T>& _xmat4x2<T>::operator-- ()
    {
        --this->value[0];
        --this->value[1];
        --this->value[2];
        --this->value[3];
        return *this;
    }
    
    //////////////////////////////////////////////////////////////
    // Unary constant operators
    template <typename T> 
    inline const _xmat4x2<T> _xmat4x2<T>::operator- () const
    {
        return _xmat4x2<T>(
            -this->value[0], 
            -this->value[1],
            -this->value[2],
            -this->value[3]);
    }

    template <typename T> 
    inline const _xmat4x2<T> _xmat4x2<T>::operator-- (int n) const 
    {
        _xmat4x2<T> m = *this;
        --m.value[0];
        --m.value[1];
        --m.value[2];
        --m.value[3];
        return m;
    }

    template <typename T> 
    inline const _xmat4x2<T> _xmat4x2<T>::operator++ (int n) const
    {
        _xmat4x2<T> m = *this;
        ++m.value[0];
        ++m.value[1];
        ++m.value[2];
        ++m.value[3];
        return m;
    }

    //////////////////////////////////////////////////////////////
    // Binary operators

    template <typename T> 
    inline _xmat4x2<T> operator+ (const _xmat4x2<T>& m, const T s)
    {
        return _xmat4x2<T>(
            m[0] + s,
            m[1] + s,
            m[2] + s,
            m[3] + s);
    }

    template <typename T> 
    inline _xmat4x2<T> operator+ (const _xmat4x2<T>& m1, const _xmat4x2<T>& m2)
    {
        return _xmat4x2<T>(
            m1[0] + m2[0],
            m1[1] + m2[1],
            m1[2] + m2[2],
            m1[3] + m2[3]);
    }

    template <typename T> 
    inline _xmat4x2<T> operator- (const _xmat4x2<T>& m, const T s)
    {
        return _xmat4x2<T>(
            m[0] - s,
            m[1] - s,
            m[2] - s,
            m[3] - s);
    }

    template <typename T> 
    inline _xmat4x2<T> operator- (const _xmat4x2<T>& m1, const _xmat4x2<T>& m2)
    {
        return _xmat4x2<T>(
            m1[0] - m2[0],
            m1[1] - m2[1],
            m1[2] - m2[2],
            m1[3] - m2[3]);
    }

    template <typename T> 
    inline _xmat4x2<T> operator* (const _xmat4x2<T>& m, const T s)
    {
        return _xmat4x2<T>(
            m[0] * s,
            m[1] * s,
            m[2] * s,
            m[3] * s);
    }

    template <typename T> 
    inline _xmat4x2<T> operator* (const T s, const _xmat4x2<T> & m)
    {
        return _xmat4x2<T>(
            m[0] * s,
            m[1] * s,
            m[2] * s,
            m[3] * s);
    }
   
    template <typename T>
    inline _xvec2<T> operator* (const _xmat4x2<T>& m, const _xvec4<T>& v)
    {
        return _xvec2<T>(
            m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z + m[3][0] * v.w,
            m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z + m[3][1] * v.w);
    }

    template <typename T> 
    inline _xvec4<T> operator* (const _xvec2<T>& v, const _xmat4x2<T>& m) 
    {
        return _xvec4<T>(
            v.x * m[0][0] + v.y * m[0][1],
            v.x * m[1][0] + v.y * m[1][1],
            v.x * m[2][0] + v.y * m[2][1],
            v.x * m[3][0] + v.y * m[3][1]);
    }

    template <typename T> 
    inline _xmat2<T> operator* (const _xmat4x2<T>& m1, const _xmat2x4<T>& m2)
    {
        const T SrcA00 = m1[0][0];
        const T SrcA01 = m1[0][1];
        const T SrcA10 = m1[1][0];
        const T SrcA11 = m1[1][1];
        const T SrcA20 = m1[2][0];
        const T SrcA21 = m1[2][1];
        const T SrcA30 = m1[3][0];
        const T SrcA31 = m1[3][1];

        const T SrcB00 = m2[0][0];
        const T SrcB01 = m2[0][1];
        const T SrcB02 = m2[0][2];
        const T SrcB03 = m2[0][3];
        const T SrcB10 = m2[1][0];
        const T SrcB11 = m2[1][1];
        const T SrcB12 = m2[1][2];
        const T SrcB13 = m2[1][3];

        _xmat2<T> Result;
        Result[0][0] = SrcA00 * SrcB00 + SrcA01 * SrcB01 + SrcA20 * SrcB02 + SrcA30 * SrcB03;
        Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01 + SrcA21 * SrcB02 + SrcA31 * SrcB03;
        Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11 + SrcA20 * SrcB12 + SrcA30 * SrcB13;
        Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11 + SrcA21 * SrcB12 + SrcA31 * SrcB13;
        return Result;
    }

    template <typename T> 
    inline _xmat4x2<T> operator/ (const _xmat4x2<T>& m, const T s)
    {
        return _xmat4x2<T>(
            m.value[0] / s,
            m.value[1] / s,
            m.value[2] / s,
            m.value[3] / s);        
    }

    template <typename T> 
    inline _xmat4x2<T> operator/ (const T s, const _xmat4x2<T>& m)
    {
        return _xmat4x2<T>(
            s / m.value[0],
            s / m.value[1],
            s / m.value[2],
            s / m.value[3]);        
    }
/* ToDo
    template <typename T> 
    inline _xmat4x2<T> operator/ (const _xmat4x2<T>& m1, const _xmat2x4<T>& m2)
    {

    }

    template <typename T> 
    inline _xmat4x2<T> operator/ (const _xmat2x4<T>& m1, const _xmat4x2<T>& m2)
    {

    }
*/

} //namespace detail
} //namespace glm

#endif //__mat4x2_inl__
