///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-27
// Updated : 2007-03-01
// Licence : This source is under GNU LGPL licence
// File    : _xmat4.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __mat4_inl__
#define __mat4_inl__

#include "./_xmat4.h"
#include "./_func.h"

namespace glm{
namespace detail{

	template <typename T> const typename _xmat4<T>::size_type _xmat4<T>::value_size = 4;
	template <typename T> const typename _xmat4<T>::size_type _xmat4<T>::col_size = 4;
	template <typename T> const typename _xmat4<T>::size_type _xmat4<T>::row_size = 4;

    //////////////////////////////////////////////////////////////
    // mat4 constructors

    template <typename T> 
    inline _xmat4<T>::_xmat4()
    {
        this->value[0] = _xvec4<T>(1, 0, 0, 0);
        this->value[1] = _xvec4<T>(0, 1, 0, 0);
        this->value[2] = _xvec4<T>(0, 0, 1, 0);
        this->value[3] = _xvec4<T>(0, 0, 0, 1);
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4(const T f)
    {
        this->value[0] = _xvec4<T>(f, 0, 0, 0);
        this->value[1] = _xvec4<T>(0, f, 0, 0);
        this->value[2] = _xvec4<T>(0, 0, f, 0);
        this->value[3] = _xvec4<T>(0, 0, 0, f);
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4
    (
        const T x0, const T y0, const T z0, const T w0,
        const T x1, const T y1, const T z1, const T w1,
        const T x2, const T y2, const T z2, const T w2,
        const T x3, const T y3, const T z3, const T w3
    )
    {
        this->value[0] = _xvec4<T>(x0, y0, z0, w0);
        this->value[1] = _xvec4<T>(x1, y1, z1, w1);
        this->value[2] = _xvec4<T>(x2, y2, z2, w2);
        this->value[3] = _xvec4<T>(x3, y3, z3, w3);
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4
    (
        const _xvec4<T>& v0, 
        const _xvec4<T>& v1, 
        const _xvec4<T>& v2,
        const _xvec4<T>& v3
    )
    {
        this->value[0] = v0;
        this->value[1] = v1;
        this->value[2] = v2;
        this->value[3] = v3;
    }

    template <typename T> 
    template <typename U> 
    inline _xmat4<T>::_xmat4(const _xmat4<U>& m)
    {
        this->value[0] = _xvec4<T>(m[0]);
        this->value[1] = _xvec4<T>(m[1]);
        this->value[2] = _xvec4<T>(m[2]);
        this->value[3] = _xvec4<T>(m[3]);
	}

    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xmat2<T>& m)
    {
        this->value[0] = _xvec4<T>(m[0], _xvec2<T>(0));
        this->value[1] = _xvec4<T>(m[1], _xvec2<T>(0));
        this->value[2] = _xvec4<T>(_xvec3<T>(0), T(0));
        this->value[3] = _xvec4<T>(_xvec3<T>(0), T(1));
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xmat3<T>& m)
    {
        this->value[0] = _xvec4<T>(m[0], T(0));
        this->value[1] = _xvec4<T>(m[1], T(0));
        this->value[2] = _xvec4<T>(m[2], T(0));
        this->value[3] = _xvec4<T>(_xvec3<T>(0), T(1));
    }

	template <typename T> 
    inline _xmat4<T>::_xmat4(const _xmat2x3<T>& m)
    {
        this->value[0] = _xvec4<T>(m[0], T(0));
        this->value[1] = _xvec4<T>(m[1], T(0));
        this->value[2] = _xvec4<T>(T(0));
        this->value[3] = _xvec4<T>(_xvec3<T>(0), T(1));
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xmat3x2<T>& m)
    {
        this->value[0] = _xvec4<T>(m[0], _xvec2<T>(0));
        this->value[1] = _xvec4<T>(m[1], _xvec2<T>(0));
        this->value[2] = _xvec4<T>(m[2], _xvec2<T>(0));
        this->value[3] = _xvec4<T>(_xvec3<T>(0), T(1));
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xmat2x4<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
        this->value[2] = _xvec4<T>(T(0));
        this->value[3] = _xvec4<T>(_xvec3<T>(0), T(1));
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xmat4x2<T>& m)
    {
        this->value[0] = _xvec4<T>(m[0], _xvec2<T>(0));
        this->value[1] = _xvec4<T>(m[1], _xvec2<T>(0));
        this->value[2] = _xvec4<T>(T(0));
        this->value[3] = _xvec4<T>(_xvec3<T>(0), T(1));
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xmat3x4<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
        this->value[2] = m[2];
        this->value[3] = _xvec4<T>(_xvec3<T>(0), T(1));
    }

    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xmat4x3<T>& m)
    {
        this->value[0] = _xvec4<T>(m[0], T(0));
        this->value[1] = _xvec4<T>(m[1], T(0));
        this->value[2] = _xvec4<T>(m[2], T(0));
        this->value[3] = _xvec4<T>(m[3], T(1));
    }

/*
    template <typename T> 
    inline _xmat4<T>::_xmat4(const T* a)
    {
        this->value[0] = _xvec4<T>(a[0], a[1], a[2], a[3]);
        this->value[1] = _xvec4<T>(a[4], a[5], a[6], a[7]);
        this->value[2] = _xvec4<T>(a[8], a[9], a[10], a[11]);
        this->value[4] = _xvec4<T>(a[12], a[13], a[14], a[15]);
    }
*/
    /*
    // GL_GTX_euler_angles
    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xvec3<T> & angles)
    {
        T ch = cos(angles.x);
        T sh = sin(angles.x);
        T cp = cos(angles.y);
        T sp = sin(angles.y);
        T cb = cos(angles.z);
        T sb = sin(angles.z);

        value[0][0] = ch * cb + sh * sp * sb;
        value[0][1] = sb * cp;
        value[0][2] = -sh * cb + ch * sp * sb;
        value[0][3] = 0.0f;
        value[1][0] = -ch * sb + sh * sp * cb;
        value[1][1] = cb * cp;
        value[1][2] = sb * sh + ch * sp * cb;
        value[1][3] = 0.0f;
        value[2][0] = sh * cp;
        value[2][1] = -sp;
        value[2][2] = ch * cp;
        value[2][3] = 0.0f;
        value[3][0] = 0.0f;
        value[3][1] = 0.0f;
        value[3][2] = 0.0f;
        value[3][3] = 1.0f;
    }
    */
    //////////////////////////////////////////////////////////////
    // mat4 conversion
    /*
    template <typename T> 
    inline _xmat4<T>::_xmat4(const _xquat<T> & q)
    {
        *this = _xmat4<T>(1);
        this->value[0][0] = 1 - 2 * q.y * q.y - 2 * q.z * q.z;
        this->value[0][1] = 2 * q.x * q.y + 2 * q.w * q.z;
        this->value[0][2] = 2 * q.x * q.z - 2 * q.w * q.y;

        this->value[1][0] = 2 * q.x * q.y - 2 * q.w * q.z;
        this->value[1][1] = 1 - 2 * q.x * q.x - 2 * q.z * q.z;
        this->value[1][2] = 2 * q.y * q.z + 2 * q.w * q.x;

        this->value[2][0] = 2 * q.x * q.z + 2 * q.w * q.y;
        this->value[2][1] = 2 * q.y * q.z - 2 * q.w * q.x;
        this->value[2][2] = 1 - 2 * q.x * q.x - 2 * q.y * q.y;
    }
    */
    //////////////////////////////////////////////////////////////
    // mat4 operators

    // This function shouldn't required but it seems that VC7.1 have an optimisation bug if this operator wasn't declared
    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator= (const _xmat4<T>& m)
    {
        //memcpy could be faster
        //memcpy(&this->value, &m.value, 16 * sizeof(T));
        this->value[0] = m[0];
        this->value[1] = m[1];
        this->value[2] = m[2];
        this->value[3] = m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator+= (const T s)
    {
        this->value[0] += s;
        this->value[1] += s;
        this->value[2] += s;
        this->value[3] += s;
        return *this;
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator+= (const _xmat4<T>& m)
    {
        this->value[0] += m[0];
        this->value[1] += m[1];
        this->value[2] += m[2];
        this->value[3] += m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator-= (const T s)
    {
        this->value[0] -= s;
        this->value[1] -= s;
        this->value[2] -= s;
        this->value[3] -= s;
        return *this;
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator-= (const _xmat4<T>& m)
    {
        this->value[0] -= m[0];
        this->value[1] -= m[1];
        this->value[2] -= m[2];
        this->value[3] -= m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator*= (const T s)
    {
        this->value[0] *= s;
        this->value[1] *= s;
        this->value[2] *= s;
        this->value[3] *= s;
        return *this;
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator*= (const _xmat4<T>& m)
    {
        return (*this = *this * m);
    }

    template <typename T> 
    inline _xmat4<T> & _xmat4<T>::operator/= (const T s)
    {
        this->value[0] /= s;
        this->value[1] /= s;
        this->value[2] /= s;
        this->value[3] /= s;
        return *this;
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator/= (const _xmat4<T>& m)
    {
        return (*this = *this / m);
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator-- ()
    {
        --this->value[0];
        --this->value[1];
        --this->value[2];
        --this->value[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4<T>& _xmat4<T>::operator++ ()
    {
        ++this->value[0];
        ++this->value[1];
        ++this->value[2];
        ++this->value[3];
        return *this;
    }

    // Private functions
    template <typename T> 
    inline _xmat4<T> _xmat4<T>::_inverse() const
    {
        // Calculate all mat2 determinants
        T SubFactor00 = this->value[2][2] * this->value[3][3] - this->value[3][2] * this->value[2][3];
        T SubFactor01 = this->value[2][1] * this->value[3][3] - this->value[3][1] * this->value[2][3];
        T SubFactor02 = this->value[2][1] * this->value[3][2] - this->value[3][1] * this->value[2][2];
        T SubFactor03 = this->value[2][0] * this->value[3][3] - this->value[3][0] * this->value[2][3];
        T SubFactor04 = this->value[2][0] * this->value[3][2] - this->value[3][0] * this->value[2][2];
        T SubFactor05 = this->value[2][0] * this->value[3][1] - this->value[3][0] * this->value[2][1];
        T SubFactor06 = this->value[1][2] * this->value[3][3] - this->value[3][2] * this->value[1][3];
        T SubFactor07 = this->value[1][1] * this->value[3][3] - this->value[3][1] * this->value[1][3];
        T SubFactor08 = this->value[1][1] * this->value[3][2] - this->value[3][1] * this->value[1][2];
        T SubFactor09 = this->value[1][0] * this->value[3][3] - this->value[3][0] * this->value[1][3];
        T SubFactor10 = this->value[1][0] * this->value[3][2] - this->value[3][0] * this->value[1][2];
        T SubFactor11 = this->value[1][1] * this->value[3][3] - this->value[3][1] * this->value[1][3];
        T SubFactor12 = this->value[1][0] * this->value[3][1] - this->value[3][0] * this->value[1][1];
        T SubFactor13 = this->value[1][2] * this->value[2][3] - this->value[2][2] * this->value[1][3];
        T SubFactor14 = this->value[1][1] * this->value[2][3] - this->value[2][1] * this->value[1][3];
        T SubFactor15 = this->value[1][1] * this->value[2][2] - this->value[2][1] * this->value[1][2];
        T SubFactor16 = this->value[1][0] * this->value[2][3] - this->value[2][0] * this->value[1][3];
        T SubFactor17 = this->value[1][0] * this->value[2][2] - this->value[2][0] * this->value[1][2];
        T SubFactor18 = this->value[1][0] * this->value[2][1] - this->value[2][0] * this->value[1][1];

        _xmat4<T> Inverse(
            + (this->value[1][1] * SubFactor00 - this->value[1][2] * SubFactor01 + this->value[1][3] * SubFactor02),
            - (this->value[1][0] * SubFactor00 - this->value[1][2] * SubFactor03 + this->value[1][3] * SubFactor04),
            + (this->value[1][0] * SubFactor01 - this->value[1][1] * SubFactor03 + this->value[1][3] * SubFactor05),
            - (this->value[1][0] * SubFactor02 - this->value[1][1] * SubFactor04 + this->value[1][2] * SubFactor05),

            - (this->value[0][1] * SubFactor00 - this->value[0][2] * SubFactor01 + this->value[0][3] * SubFactor02),
            + (this->value[0][0] * SubFactor00 - this->value[0][2] * SubFactor03 + this->value[0][3] * SubFactor04),
            - (this->value[0][0] * SubFactor01 - this->value[0][1] * SubFactor03 + this->value[0][3] * SubFactor05),
            + (this->value[0][0] * SubFactor02 - this->value[0][1] * SubFactor04 + this->value[0][2] * SubFactor05),

            + (this->value[0][1] * SubFactor06 - this->value[0][2] * SubFactor07 + this->value[0][3] * SubFactor08),
            - (this->value[0][0] * SubFactor06 - this->value[0][2] * SubFactor09 + this->value[0][3] * SubFactor10),
            + (this->value[0][0] * SubFactor11 - this->value[0][1] * SubFactor09 + this->value[0][3] * SubFactor12),
            - (this->value[0][0] * SubFactor08 - this->value[0][1] * SubFactor10 + this->value[0][2] * SubFactor12),

            - (this->value[0][1] * SubFactor13 - this->value[0][2] * SubFactor14 + this->value[0][3] * SubFactor15),
            + (this->value[0][0] * SubFactor13 - this->value[0][2] * SubFactor16 + this->value[0][3] * SubFactor17),
            - (this->value[0][0] * SubFactor14 - this->value[0][1] * SubFactor16 + this->value[0][3] * SubFactor18),
            + (this->value[0][0] * SubFactor15 - this->value[0][1] * SubFactor17 + this->value[0][2] * SubFactor18));

        T Determinant = this->value[0][0] * Inverse[0][0] 
                      + this->value[0][1] * Inverse[1][0] 
                      + this->value[0][2] * Inverse[2][0] 
                      + this->value[0][3] * Inverse[3][0];

        Inverse /= Determinant;
        return Inverse;
    }

	// Binary operators
    template <typename T> 
    inline _xmat4<T> operator+ (const _xmat4<T>& m, const T s)
    {
        return _xmat4<T>(
            m[0] + s,
            m[1] + s,
            m[2] + s,
            m[3] + s);
    }

    template <typename T> 
    inline _xmat4<T> operator+ (const T s, const _xmat4<T>& m)
    {
        return _xmat4<T>(
            m[0] + s,
            m[1] + s,
            m[2] + s,
            m[3] + s);
    }

    template <typename T> 
    inline _xvec4<T> operator+ (const _xmat4<T>& m, const _xvec4<T>& v)
    {

    }

    template <typename T> 
    inline _xvec4<T> operator+ (const _xvec4<T>& v, const _xmat4<T>& m)
    {

    }

    template <typename T> 
    inline _xmat4<T> operator+ (const _xmat4<T>& m1, const _xmat4<T>& m2)
    {
        return _xmat4<T>(
            m1[0] + m2[0],
            m1[1] + m2[1],
            m1[2] + m2[2],
            m1[3] + m2[3]);
    }
    
    template <typename T> 
    inline _xmat4<T> operator- (const _xmat4<T>& m, const T s)
    {
        return _xmat4<T>(
            m[0] - s,
            m[1] - s,
            m[2] - s,
            m[3] - s);
    }

    template <typename T> 
    inline _xmat4<T> operator- (const T s, const _xmat4<T>& m)
    {
        return _xmat4<T>(
            s - m[0],
            s - m[1],
            s - m[2],
            s - m[3]);
    }

    template <typename T> 
    inline _xvec4<T> operator- (const _xmat4<T>& m, const _xvec4<T>& v)
    {

    }

    template <typename T> 
    inline _xvec4<T> operator- (const _xvec4<T>& v, const _xmat4<T>& m)
    {

    }

    template <typename T> 
    inline _xmat4<T> operator- (const _xmat4<T>& m1, const _xmat4<T>& m2)
    {
        return _xmat4<T>(
            m1[0] - m2[0],
            m1[1] - m2[1],
            m1[2] - m2[2],
            m1[3] - m2[3]);
    }

    template <typename T> 
    inline _xmat4<T> operator* (const _xmat4<T>& m, const T s)
    {
        return _xmat4<T>(
            m[0] * s,
            m[1] * s,
            m[2] * s,
            m[3] * s);
    }

    template <typename T> 
    inline _xmat4<T> operator* (const T s, const _xmat4<T>& m)
    {
        return _xmat4<T>(
            m[0] * s,
            m[1] * s,
            m[2] * s,
            m[3] * s);
    }

    template <typename T> 
    inline _xvec4<T> operator* (const _xmat4<T>& m, const _xvec4<T>& v)
    {
        return _xvec4<T>(
            m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z + m[3][0] * v.w,
            m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z + m[3][1] * v.w,
            m[0][2] * v.x + m[1][2] * v.y + m[2][2] * v.z + m[3][2] * v.w,
            m[0][3] * v.x + m[1][3] * v.y + m[2][3] * v.z + m[3][3] * v.w);
    }

    template <typename T> 
    inline _xvec4<T> operator* (const _xvec4<T>& v, const _xmat4<T>& m)
    {
        return _xvec4<T>(
            m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z + m[0][3] * v.w,
            m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z + m[1][3] * v.w,
            m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z + m[2][3] * v.w,
            m[3][0] * v.x + m[3][1] * v.y + m[3][2] * v.z + m[3][3] * v.w);
    }

    template <typename T> 
    inline _xmat4<T> operator* (const _xmat4<T>& m1, const _xmat4<T>& m2)
    {
        const T SrcA00 = m1[0][0];
        const T SrcA01 = m1[0][1];
        const T SrcA02 = m1[0][2];
        const T SrcA03 = m1[0][3];
        const T SrcA10 = m1[1][0];
        const T SrcA11 = m1[1][1];
        const T SrcA12 = m1[1][2];
        const T SrcA13 = m1[1][3];
        const T SrcA20 = m1[2][0];
        const T SrcA21 = m1[2][1];
        const T SrcA22 = m1[2][2];
        const T SrcA23 = m1[2][3];
        const T SrcA30 = m1[3][0];
        const T SrcA31 = m1[3][1];
        const T SrcA32 = m1[3][2];
        const T SrcA33 = m1[3][3];

        const T SrcB00 = m2[0][0];
        const T SrcB01 = m2[0][1];
        const T SrcB02 = m2[0][2];
        const T SrcB03 = m2[0][3];
        const T SrcB10 = m2[1][0];
        const T SrcB11 = m2[1][1];
        const T SrcB12 = m2[1][2];
        const T SrcB13 = m2[1][3];
        const T SrcB20 = m2[2][0];
        const T SrcB21 = m2[2][1];
        const T SrcB22 = m2[2][2];
        const T SrcB23 = m2[2][3];
        const T SrcB30 = m2[3][0];
        const T SrcB31 = m2[3][1];
        const T SrcB32 = m2[3][2];
        const T SrcB33 = m2[3][3];

        _xmat4<T> Result;
        Result[0][0] = SrcA00 * SrcB00 + SrcA10 * SrcB01 + SrcA20 * SrcB02 + SrcA30 * SrcB03;
        Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01 + SrcA21 * SrcB02 + SrcA31 * SrcB03;
        Result[0][2] = SrcA02 * SrcB00 + SrcA12 * SrcB01 + SrcA22 * SrcB02 + SrcA32 * SrcB03;
        Result[0][3] = SrcA03 * SrcB00 + SrcA13 * SrcB01 + SrcA23 * SrcB02 + SrcA33 * SrcB03;
        Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11 + SrcA20 * SrcB12 + SrcA30 * SrcB13;
        Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11 + SrcA21 * SrcB12 + SrcA31 * SrcB13;
        Result[1][2] = SrcA02 * SrcB10 + SrcA12 * SrcB11 + SrcA22 * SrcB12 + SrcA32 * SrcB13;
        Result[1][3] = SrcA03 * SrcB10 + SrcA13 * SrcB11 + SrcA23 * SrcB12 + SrcA33 * SrcB13;
        Result[2][0] = SrcA00 * SrcB20 + SrcA10 * SrcB21 + SrcA20 * SrcB22 + SrcA30 * SrcB23;
        Result[2][1] = SrcA01 * SrcB20 + SrcA11 * SrcB21 + SrcA21 * SrcB22 + SrcA31 * SrcB23;
        Result[2][2] = SrcA02 * SrcB20 + SrcA12 * SrcB21 + SrcA22 * SrcB22 + SrcA32 * SrcB23;
        Result[2][3] = SrcA03 * SrcB20 + SrcA13 * SrcB21 + SrcA23 * SrcB22 + SrcA33 * SrcB23;
        Result[3][0] = SrcA00 * SrcB30 + SrcA10 * SrcB31 + SrcA20 * SrcB32 + SrcA30 * SrcB33;
        Result[3][1] = SrcA01 * SrcB30 + SrcA11 * SrcB31 + SrcA21 * SrcB32 + SrcA31 * SrcB33;
        Result[3][2] = SrcA02 * SrcB30 + SrcA12 * SrcB31 + SrcA22 * SrcB32 + SrcA32 * SrcB33;
        Result[3][3] = SrcA03 * SrcB30 + SrcA13 * SrcB31 + SrcA23 * SrcB32 + SrcA33 * SrcB33;
        return Result;
    }

    template <typename T> 
    inline _xmat4<T> operator/ (const _xmat4<T>& m, const T s)
    {
        return _xmat4<T>(
            m[0] / s,
            m[1] / s,
            m[2] / s,
            m[3] / s);
    }

    template <typename T> 
    inline _xmat4<T> operator/ (const T s, const _xmat4<T>& m)
    {
        return _xmat4<T>(
            s / m[0],
            s / m[1],
            s / m[2],
            s / m[3]);
    }

    template <typename T> 
    inline _xvec4<T> operator/ (const _xmat4<T>& m, const _xvec4<T>& v)
    {
        return m._inverse() * v;
    }

    template <typename T> 
    inline _xvec4<T> operator/ (const _xvec4<T>& v, const _xmat4<T>& m)
    {
        return v * m._inverse();
    }
 
    template <typename T> 
    inline _xmat4<T> operator/ (const _xmat4<T>& m1, const _xmat4<T>& m2)
    {
        return m1 * m2._inverse();
    }

	// Unary constant operators
    template <typename T> 
    inline const _xmat4<T> operator- (const _xmat4<T>& m)
    {
        return _xmat4<T>(
            -m.value[0], 
            -m.value[1],
            -m.value[2],
            -m.value[3]);
    }

    template <typename T> 
    inline const _xmat4<T> operator++ (const _xmat4<T>& m, int) 
    {
        return _xmat4<T>(
            m.value[0] + 1,
            m.value[1] + 1,
            m.value[2] + 1,
            m.value[3] + 1);
    }

    template <typename T> 
    inline const _xmat4<T> operator-- (const _xmat4<T>& m, int) 
    {
        return _xmat4<T>(
            m.value[0] - 1,
            m.value[1] - 1,
            m.value[2] - 1,
            m.value[3] - 1);
    }

} //namespace detail
} //namespace glm

#endif //__mat4_inl__
