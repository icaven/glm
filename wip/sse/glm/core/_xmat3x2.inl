///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-08-05
// Updated : 2006-10-01
// Licence : This source is under GNU LGPL licence
// File    : _mat3x2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __mat3x2_inl__
#define __mat3x2_inl__

#include "./_xmat3x2.h"

namespace glm{
namespace detail{

	template <typename T> const typename _xmat3x2<T>::size_type _xmat3x2<T>::col_size = 3;
	template <typename T> const typename _xmat3x2<T>::size_type _xmat3x2<T>::row_size = 2;

    //////////////////////////////////////////////////////////////
    // Constructors

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2()
    {
        this->value[0] = _xvec2<T>(1, 0);
        this->value[1] = _xvec2<T>(0, 1);
        this->value[2] = _xvec2<T>(0, 0);
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const T f)
    {
        this->value[0] = _xvec2<T>(f, 0);
        this->value[1] = _xvec2<T>(0, f);
        this->value[2] = _xvec2<T>(0, 0);
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2
    (
        const T x0, const T y0,
        const T x1, const T y1,
        const T x2, const T y2
    )
    {
        this->value[0] = _xvec2<T>(x0, y0);
        this->value[1] = _xvec2<T>(x1, y1);
        this->value[2] = _xvec2<T>(x2, y2);
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2
    (
        const _xvec2<T> & v0, 
        const _xvec2<T> & v1, 
        const _xvec2<T> & v2
    )
    {
        this->value[0] = v0;
        this->value[1] = v1;
        this->value[2] = v2;
    }

    // Conversion
    template <typename T> 
    template <typename U> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat3x2<U>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
	}

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat2<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
        this->value[2] = _xvec2<T>(T(0));
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat2x3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(T(0));
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat2x4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(T(0));
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat3x4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat4x2<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
        this->value[2] = m[2];
    }

    template <typename T> 
    inline _xmat3x2<T>::_xmat3x2(const _xmat4x3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
        this->value[2] = _xvec2<T>(m[2]);
    }

    //////////////////////////////////////////////////////////////
    // Unary updatable operators

    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator= (const _xmat3x2<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
        this->value[2] = m[2];
        return *this;
    }

    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator+= (const T s)
    {
        this->value[0] += s;
        this->value[1] += s;
        this->value[2] += s;
        return *this;
    }

    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator+= (const _xmat3x2<T>& m)
    {
        this->value[0] += m[0];
        this->value[1] += m[1];
        this->value[2] += m[2];
        return *this;
    }

    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator-= (const T s)
    {
        this->value[0] -= s;
        this->value[1] -= s;
        this->value[2] -= s;
        return *this;
    }

    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator-= (const _xmat3x2<T>& m)
    {
        this->value[0] -= m[0];
        this->value[1] -= m[1];
        this->value[2] -= m[2];
        return *this;
    }

    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator*= (const T s)
    {
        this->value[0] *= s;
        this->value[1] *= s;
        this->value[2] *= s;
        return *this;
    }

    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator*= (const _xmat2x3<T>& m)
    {
        return (*this = _xmat3x2<T>(*this * m));
    }

    template <typename T> 
    inline _xmat3x2<T> & _xmat3x2<T>::operator/= (const T s)
    {
        this->value[0] /= s;
        this->value[1] /= s;
        this->value[2] /= s;
        return *this;
    }
/* ToDo
    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator/= (const _xmat3x2<T>& m)
    {
        return (*this = _xmat3x2<T>(*this / m));
    }
*/
    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator++ ()
    {
        ++this->value[0];
        ++this->value[1];
        ++this->value[2];
        return *this;
    }

    template <typename T> 
    inline _xmat3x2<T>& _xmat3x2<T>::operator-- ()
    {
        --this->value[0];
        --this->value[1];
        --this->value[2];
        return *this;
    }
/*
    template <typename T> 
    inline _xmat3x2<T> _xmat3x2<T>::_inverse() const
    {
        T S00 = value[0][0];
        T S01 = value[0][1];

        T S10 = value[1][0];
        T S11 = value[1][1];

        T S20 = value[2][0];
        T S21 = value[2][1];

        _xmat3x2<T> Inverse(
            + (S11 * S22 - S21 * S12),
            - (S10 * S22 - S20 * S12),
            + (S10 * S21 - S20 * S11),
            - (S01 * S22 - S21 * S02),
            + (S00 * S22 - S20 * S02),
            - (S00 * S21 - S20 * S01),
            + (S01 * S12 - S11 * S02),
            - (S00 * S12 - S10 * S02),
            + (S00 * S11 - S10 * S01));

        T Determinant = S00 * (S11 * S22 - S21 * S12)
                      - S10 * (S01 * S22 - S21 * S02)
                      + S20 * (S01 * S12 - S11 * S02);

        Inverse /= Determinant;
        return Inverse;
    }

    template <typename T> 
    inline _xmat2<T> _xmat2<T>::_inverse() const
    {
        T Determinant = value[0][0] * value[1][1] - value[1][0] * value[0][1];

        _xmat2<T> Inverse(
            + value[1][1] / Determinant,
            - value[1][0] / Determinant,
            - value[0][1] / Determinant, 
            + value[0][0] / Determinant);
        return Inverse;
    }
*/
    //////////////////////////////////////////////////////////////
    // Unary constant operators
    template <typename T> 
    inline const _xmat3x2<T> _xmat3x2<T>::operator- () const
    {
        return _xmat3x2<T>(
            -this->value[0], 
            -this->value[1],
            -this->value[2]);
    }

    template <typename T> 
    inline const _xmat3x2<T> _xmat3x2<T>::operator-- (int n) const 
    {
        _xmat3x2<T> m = *this;
        --m.value[0];
        --m.value[1];
        --m.value[2];
        return m;
    }

    template <typename T> 
    inline const _xmat3x2<T> _xmat3x2<T>::operator++ (int n) const
    {
        _xmat3x2<T> m = *this;
        ++m.value[0];
        ++m.value[1];
        ++m.value[2];
        return m;
    }

    //////////////////////////////////////////////////////////////
    // Binary operators

    template <typename T> 
    inline _xmat3x2<T> operator+ (const _xmat3x2<T>& m, const T s)
    {
        return _xmat3x2<T>(
            m[0] + s,
            m[1] + s,
            m[2] + s);
    }

    template <typename T> 
    inline _xmat3x2<T> operator+ (const _xmat3x2<T>& m1, const _xmat3x2<T>& m2)
    {
        return _xmat3x2<T>(
            m1[0] + m2[0],
            m1[1] + m2[1],
            m1[2] + m2[2]);
    }

    template <typename T> 
    inline _xmat3x2<T> operator- (const _xmat3x2<T>& m, const T s)
    {
        return _xmat3x4<T>(
            m[0] - s,
            m[1] - s,
            m[2] - s);
    }

    template <typename T> 
    inline _xmat3x2<T> operator- (const _xmat3x2<T>& m1, const _xmat3x2<T>& m2)
    {
        return _xmat3x2<T>(
            m1[0] - m2[0],
            m1[1] - m2[1],
            m1[2] - m2[2]);
    }

    template <typename T> 
    inline _xmat3x2<T> operator* (const _xmat3x2<T>& m, const T s)
    {
        return _xmat3x2<T>(
            m[0] * s,
            m[1] * s,
            m[2] * s);
    }

    template <typename T> 
    inline _xmat3x2<T> operator* (const T s, const _xmat3x2<T> & m)
    {
        return _xmat3x2<T>(
            m[0] * s,
            m[1] * s,
            m[2] * s);
    }
   
    template <typename T>
    inline _xvec2<T> operator* (const _xmat3x2<T>& m, const _xvec3<T>& v)
    {
        return _xvec2<T>(
            m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z,
            m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z);
    }

    template <typename T> 
    inline _xvec3<T> operator* (const _xvec2<T>& v, const _xmat3x2<T>& m) 
    {
        return _xvec3<T>(
            m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z + m[3][0] * v.w,
            m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z + m[3][1] * v.w);
    }

    template <typename T> 
    inline _xmat2<T> operator* (const _xmat3x2<T>& m1, const _xmat2x3<T>& m2)
    {
        const T SrcA00 = m1[0][0];
        const T SrcA01 = m1[0][1];
        const T SrcA10 = m1[1][0];
        const T SrcA11 = m1[1][1];
        const T SrcA20 = m1[2][0];
        const T SrcA21 = m1[2][1];

        const T SrcB00 = m2[0][0];
        const T SrcB01 = m2[0][1];
        const T SrcB02 = m2[0][2];
        const T SrcB10 = m2[1][0];
        const T SrcB11 = m2[1][1];
        const T SrcB12 = m2[1][2];

        _xmat2<T> Result;
        Result[0][0] = SrcA00 * SrcB00 + SrcA01 * SrcB01 + SrcA20 * SrcB02;
        Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01 + SrcA21 * SrcB02;
        Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11 + SrcA20 * SrcB12;
        Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11 + SrcA21 * SrcB12;
        return Result;
    }

    template <typename T> 
    inline _xmat3x2<T> operator/ (const _xmat3x2<T>& m, const T s)
    {
        return _xmat3x2<T>(
            m.value[0] / s,
            m.value[1] / s,
            m.value[2] / s,
            m.value[3] / s);        
    }

    template <typename T> 
    inline _xmat3x2<T> operator/ (const T s, const _xmat3x2<T>& m)
    {
        return _xmat3x2<T>(
            s / m.value[0],
            s / m.value[1],
            s / m.value[2],
            s / m.value[3]);        
    }
/* ToDo
    template <typename T> 
    inline _xvec3<T> operator/ (const _xmat3x2<T>& m, const _xvec2<T>& v)
    {
      
    }

    template <typename T> 
    inline _xvec3<T> operator/ (const _xvec2<T>& v, const _xmat3x2<T>& m)
    {
      
    }

    template <typename T> 
    inline _xmat2<T> operator/ (const _xmat3x2<T>& m1, const _xmat3x2<T>& m2)
    {

    }
*/

} //namespace detail
} //namespace glm

#endif //__mat3x2_inl__
