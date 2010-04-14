///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-16
// Updated : 2007-03-01
// Licence : This source is under GNU LGPL licence
// File    : _xmat2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xmat2x2_inl__
#define __xmat2x2_inl__

#include "./_xmat2.h"

namespace glm{
namespace detail{

	template <typename T> const typename _xmat2<T>::size_type _xmat2<T>::value_size = 2;
	template <typename T> const typename _xmat2<T>::size_type _xmat2<T>::col_size = 2;
	template <typename T> const typename _xmat2<T>::size_type _xmat2<T>::row_size = 2;

    //////////////////////////////////////////////////////////////
    // mat2 constructors

    template <typename T> 
    inline _xmat2<T>::_xmat2()
    {
        this->value[0] = _xvec2<T>(1, 0);
        this->value[1] = _xvec2<T>(0, 1);
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat2<T> & m)
    {
        this->value[0] = m.value[0];
        this->value[1] = m.value[1];
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const T f)
    {
        this->value[0] = _xvec2<T>(f, 0);
        this->value[1] = _xvec2<T>(0, f);
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const T x0, const T y0, const T x1, const T y1)
    {
        this->value[0] = _xvec2<T>(x0, y0);
        this->value[1] = _xvec2<T>(x1, y1);
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xvec2<T>& v0, const _xvec2<T>& v1)
    {
        this->value[0] = v0;
        this->value[1] = v1;
    }

    //////////////////////////////////////////////////////////////
    // mat2 conversions

    template <typename T> 
    template <typename U> 
    inline _xmat2<T>::_xmat2(const _xmat2<U>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
	}

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
    }

	template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat2x3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat3x2<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat2x4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat4x2<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat3x4<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
    }

    template <typename T> 
    inline _xmat2<T>::_xmat2(const _xmat4x3<T>& m)
    {
        this->value[0] = _xvec2<T>(m[0]);
        this->value[1] = _xvec2<T>(m[1]);
    }

/*
    template <typename T> 
    inline _xmat2<T>::_xmat2(const T* a)
    {
        this->value[0] = _xvec2<T>(a[0], a[1]);
        this->value[1] = _xvec2<T>(a[2], a[3]);
    }
*/

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

    //////////////////////////////////////////////////////////////
    // mat3 operators

    // This function shouldn't required but it seems that VC7.1 have an optimisation bug if this operator wasn't declared
    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator=(const _xmat2<T>& m)
    {
	    this->value[0] = m[0];
	    this->value[1] = m[1];
	    return *this;
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator+= (const T s)
    {
	    this->value[0] += s;
	    this->value[1] += s;
	    return *this;
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator+= (const _xmat2<T>& m)
    {
	    this->value[0] += m[0];
	    this->value[1] += m[1];
	    return *this;
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator-= (const T s)
    {
	    this->value[0] -= s;
	    this->value[1] -= s;
	    return *this;
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator-= (const _xmat2<T>& m)
    {
	    this->value[0] -= m[0];
	    this->value[1] -= m[1];
	    return *this;
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator*= (const T s)
    {
	    this->value[0] *= s;
	    this->value[1] *= s;
	    return *this;
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator*= (const _xmat2<T>& m)
    {
        return (*this = *this * m);
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator/= (const T s)
    {
	    this->value[0] /= s;
	    this->value[1] /= s;
	    return *this;
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator/= (const _xmat2<T>& m)
    {
        return (*this = *this / m);
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator++ ()
    {
	    ++this->value[0];
	    ++this->value[1];
	    return *this;
    }

    template <typename T> 
    inline _xmat2<T>& _xmat2<T>::operator-- ()
    {
	    --this->value[0];
	    --this->value[1];
	    return *this;
    }

    //////////////////////////////////////////////////////////////
	// Binary operators

    template <typename T> 
    inline _xmat2<T> operator+ (const _xmat2<T>& m, const T s)
    {
        return _xmat2<T>(
            m[0] + s,
            m[1] + s);
    }

    template <typename T> 
    inline _xmat2<T> operator+ (const T s, const _xmat2<T>& m)
    {
        return _xmat2<T>(
            m[0] + s,
            m[1] + s);
    }

    template <typename T> 
    inline _xvec2<T> operator+ (const _xmat2<T>& m, const _xvec2<T>& v)
    {

    }

    template <typename T> 
    inline _xvec2<T> operator+ (const _xvec2<T>& v, const _xmat2<T>& m)
    {

    }

    template <typename T> 
    inline _xmat2<T> operator+ (const _xmat2<T>& m1, const _xmat2<T>& m2)
    {
        return _xmat2<T>(
            m1[0] + m2[0],
            m1[1] + m2[1]);
    }

    template <typename T> 
    inline _xmat2<T> operator- (const _xmat2<T>& m, const T s)
    {
        return _xmat2<T>(
            m[0] - s,
            m[1] - s);
    }

    template <typename T> 
    inline _xmat2<T> operator- (const T s, const _xmat2<T>& m)
    {
        return _xmat2<T>(
            s - m[0],
            s - m[1]);
    }

    template <typename T> 
    inline _xmat2<T> operator- (const _xmat2<T>& m, const _xvec2<T>& v)
    {

    }

    template <typename T> 
    inline _xmat2<T> operator- (const _xvec2<T>& v, const _xmat2<T>& m)
    {

    }

    template <typename T> 
    inline _xmat2<T> operator- (const _xmat2<T>& m1, const _xmat2<T>& m2)
    {
        return _xmat2<T>(
            m1[0] - m2[0],
            m1[1] - m2[1]);
    }

    template <typename T> 
    inline _xmat2<T> operator* (const _xmat2<T>& m, const T s)
    {
        return _xmat2<T>(
            m[0] * s,
            m[1] * s);
    }

    template <typename T> 
    inline _xmat2<T> operator* (const T s, const _xmat2<T>& m)
    {
        return _xmat2<T>(
            m[0] * s,
            m[1] * s);
    }

    template <typename T> 
    inline _xvec2<T> operator* (const _xmat2<T>& m, const _xvec2<T>& v)
    {
        return _xvec2<T>(
            m[0][0] * v.x + m[1][0] * v.y,
            m[0][1] * v.x + m[1][1] * v.y);
    }

    template <typename T> 
    inline _xvec2<T> operator* (const _xvec2<T>& v, const _xmat2<T>& m)
    {
        return _xvec2<T>(
            m[0][0] * v.x + m[0][1] * v.y,
            m[1][0] * v.x + m[1][1] * v.y);
    }

    template <typename T> 
    inline _xmat2<T> operator* (const _xmat2<T>& m1, const _xmat2<T>& m2)
    {
        return _xmat2<T>(
            m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
            m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1],
            m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1],
            m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1]);
    }

    template <typename T> 
    inline _xmat2<T> operator/ (const _xmat2<T>& m, const T s)
    {
        return _xmat2<T>(
            m[0] / s,
            m[1] / s);
    }

    template <typename T> 
    inline _xmat2<T> operator/ (const T s, const _xmat2<T>& m)
    {
        return _xmat2<T>(
            s / m[0],
            s / m[1]);
    }

    template <typename T> 
    inline _xvec2<T> operator/ (const _xmat2<T>& m, const _xvec2<T>& v)
    {
        return m._inverse() * v;
    }

    template <typename T> 
    inline _xvec2<T> operator/ (const _xvec2<T>& v, const _xmat2<T>& m)
    {
        return v * m._inverse();
    }

    template <typename T> 
    inline _xmat2<T> operator/ (const _xmat2<T>& m1, const _xmat2<T>& m2)
    {
        return m1 * m2._inverse();
    }

	// Unary constant operators
    template <typename T> 
    inline const _xmat2<T> operator- (const _xmat2<T>& m)
    {
        return _xmat2<T>(
            -m.value[0], 
            -m.value[1]);
    }

    template <typename T> 
    inline const _xmat2<T> operator-- (const _xmat2<T>& m, int) 
    {
        return _xmat2<T>(
            m.value[0] - T(1),
            m.value[1] - T(1));
    }

    template <typename T> 
    inline const _xmat2<T> operator++ (const _xmat2<T>& m, int) 
    {
        return _xmat2<T>(
            m.value[0] + T(1),
            m.value[1] + T(1));
    }

} //namespace detail
} //namespace glm

#endif //__xmat2x2_inl__
