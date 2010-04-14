///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-12
// Updated : 2007-03-19
// Licence : This source is under GNU LGPL licence
// File    : _func.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __func_inl__
#define __func_inl__

#include <cstdlib>
#include <cmath>
#include "./_func.h"

namespace glm
{
    ////////////////////////////////////////////////////////////////////////
    // Trigonometric Functions

    // radians
    template <typename T>
    inline T radians(T degrees)
    {
        const T pi = T(3.1415926535897932384626433832795);
        return degrees * (pi / T(180));
    }

    template <typename T>
	inline detail::_xvec2<T> radians(const detail::_xvec2<T>& degrees)
    {
        return detail::_xvec2<T>(
            radians(degrees.x),
            radians(degrees.y));
    }

    template <typename T>
    inline detail::_xvec3<T> radians(const detail::_xvec3<T>& degrees)
    {
        return detail::_xvec3<T>(
            radians(degrees.x),
            radians(degrees.y),
            radians(degrees.z));
    }

    template <typename T>
    inline detail::_xvec4<T> radians(const detail::_xvec4<T>& degrees)
    {
        return detail::_xvec4<T>(
            radians(degrees.x),
            radians(degrees.y),
            radians(degrees.z),
            radians(degrees.w));
    }

    // degrees
    template <typename T>
    inline T degrees(T radians)
    {
        const T pi = T(3.1415926535897932384626433832795);
        return radians * (T(180) / pi);
    }

    template <typename T>
    inline detail::_xvec2<T> degrees(const detail::_xvec2<T>& radians)
    {
        return detail::_xvec2<T>(
            degrees(radians.x),
            degrees(radians.y));
    }

    template <typename T>
    inline detail::_xvec3<T> degrees(const detail::_xvec3<T>& radians)
    {
        return detail::_xvec3<T>(
            degrees(radians.x),
            degrees(radians.y),
            degrees(radians.z));
    }

    template <typename T>
    inline detail::_xvec4<T> degrees(const detail::_xvec4<T>& radians)
    {
        return detail::_xvec4<T>(
            degrees(radians.x),
            degrees(radians.y),
            degrees(radians.z),
            degrees(radians.w));
    }

    // sin
    template <typename T>
    inline T sin(T angle)
    {
		return ::std::sin(angle);
    }

    template <typename T>
    inline detail::_xvec2<T> sin(const detail::_xvec2<T>& angle)
    {
        return detail::_xvec2<T>(
            sin(angle.x),
            sin(angle.y));
    }

    template <typename T>
    inline detail::_xvec3<T> sin(const detail::_xvec3<T>& angle)
    {
        return detail::_xvec3<T>(
            sin(angle.x),
            sin(angle.y),
            sin(angle.z));
    }

    template <typename T>
    inline detail::_xvec4<T> sin(const detail::_xvec4<T>& angle)
    {
        return detail::_xvec4<T>(
            sin(angle.x),
            sin(angle.y),
            sin(angle.z),
            sin(angle.w));
    }

    // cos
    template <typename T>
    inline T cos(T angle)
    {
        return ::std::cos(angle);
    }

    template <typename T>
    inline detail::_xvec2<T> cos(const detail::_xvec2<T>& angle)
    {
        return detail::_xvec2<T>(
            cos(angle.x),
            cos(angle.y));
    }

    template <typename T>
    inline detail::_xvec3<T> cos(const detail::_xvec3<T>& angle)
    {
        return detail::_xvec3<T>(
            cos(angle.x),
            cos(angle.y),
            cos(angle.z));
    }

    template <typename T>
    inline detail::_xvec4<T> cos(const detail::_xvec4<T>& angle)
    {
        return detail::_xvec4<T>(
            cos(angle.x),
            cos(angle.y),
            cos(angle.z),
            cos(angle.w));
    }

    // tan
    template <typename T>
    inline T tan(T angle)
    {
        return ::std::tan(angle);
    }

    template <typename T>
    inline detail::_xvec2<T> tan(const detail::_xvec2<T>& angle)
    {
        return detail::_xvec2<T>(
            tan(angle.x),
            tan(angle.y));
    }

    template <typename T>
    inline detail::_xvec3<T> tan(const detail::_xvec3<T>& angle)
    {
        return detail::_xvec3<T>(
            tan(angle.x),
            tan(angle.y),
            tan(angle.z));
    }

    template <typename T>
    inline detail::_xvec4<T> tan(const detail::_xvec4<T>& angle)
    {
        return detail::_xvec4<T>(
            tan(angle.x),
            tan(angle.y),
            tan(angle.z),
            tan(angle.w));
    }

    // asin
    template <typename T>
    inline T asin(T x)
    {
        return ::std::asin(x);
    }

    template <typename T>
	inline detail::_xvec2<T> asin(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            asin(x.x),
            asin(x.y));
    }

    template <typename T>
	inline detail::_xvec3<T> asin(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            asin(x.x),
            asin(x.y),
            asin(x.z));
    }

    template <typename T>
	inline detail::_xvec4<T> asin(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            asin(x.x),
            asin(x.y),
            asin(x.z),
            asin(x.w));
    }

    // acos
    template <typename T>
    inline T acos(T x)
    {
        return ::std::acos(x);
    }

    template <typename T>
	inline detail::_xvec2<T> acos(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            acos(x.x),
            acos(x.y));
    }

    template <typename T>
	inline detail::_xvec3<T> acos(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            acos(x.x),
            acos(x.y),
            acos(x.z));
    }

    template <typename T>
	inline detail::_xvec4<T> acos(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            acos(x.x),
            acos(x.y),
            acos(x.z),
            acos(x.w));
    }

    // atan
    template <typename T>
    inline T atan(T y, T x)
    {
        return ::std::atan2(y, x);
    }

    template <typename T>
    inline detail::_xvec2<T> atan(const detail::_xvec2<T>& y, const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            atan(y.x, x.x),
            atan(y.y, x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> atan(const detail::_xvec3<T>& y, const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            atan(y.x, x.x),
            atan(y.y, x.y),
            atan(y.z, x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> atan(const detail::_xvec4<T>& y, const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            atan(y.x, x.x),
            atan(y.y, x.y),
            atan(y.z, x.z),
            atan(y.w, x.w));
    }

    template <typename T>
    inline T atan(T x)
    {
        return ::std::atan(x);
    }

    template <typename T>
    inline detail::_xvec2<T> atan(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            atan(x.x),
            atan(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> atan(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            atan(x.x),
            atan(x.y),
            atan(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> atan(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            atan(x.x),
            atan(x.y),
            atan(x.z),
            atan(x.w));
    }

    ////////////////////////////////////////////////////////////////////////
    // Exponential Functions

    // pow
    template <typename T>
    inline T pow(T x, T y)
    {
        return ::std::pow(x, y);
    }

    template <typename T>
    inline detail::_xvec2<T> pow(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_xvec2<T>(
            pow(x.x, y.x),
            pow(x.y, y.y));
    }

    template <typename T>
    inline detail::_xvec3<T> pow(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_xvec3<T>(
            pow(x.x, y.x),
            pow(x.y, y.y),
            pow(x.z, y.z));
    }

    template <typename T>
    inline detail::_xvec4<T> pow(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_xvec4<T>(
            pow(x.x, y.x),
            pow(x.y, y.y),
            pow(x.z, y.z),
            pow(x.w, y.w));
    }

    // exp
    template <typename T>
    inline T exp(T x)
    {
        return ::std::exp(x);
    }

    template <typename T>
    inline detail::_xvec2<T> exp(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            exp(x.x),
            exp(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> exp(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            exp(x.x),
            exp(x.y),
            exp(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> exp(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            exp(x.x),
            exp(x.y),
            exp(x.z),
            exp(x.w));
    }

    // log
    template <typename T>
    inline T log(T x)
    {
        return ::std::log(x);
    }

    template <typename T>
    inline detail::_xvec2<T> log(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            log(x.x),
            log(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> log(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            log(x.x),
            log(x.y),
            log(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> log(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            log(x.x),
            log(x.y),
            log(x.z),
            log(x.w));
    }

    //exp2, ln2 = 0.69314718055994530941723212145818f
    template <typename T>
    inline T exp2(T x)
    {
        return ::std::exp(T(0.69314718055994530941723212145818) * x);
    }

    template <typename T>
    inline detail::_xvec2<T> exp2(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            exp2(x.x),
            exp2(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> exp2(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            exp2(x.x),
            exp2(x.y),
            exp2(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> exp2(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            exp2(x.x),
            exp2(x.y),
            exp2(x.z),
            exp2(x.w));
    }

    // log2, ln2 = 0.69314718055994530941723212145818f
    template <typename T>
    inline T log2(T x)
    {
        return ::std::log(x) / T(0.69314718055994530941723212145818);
    }

    template <typename T>
    inline detail::_xvec2<T> log2(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            log2(x.x),
            log2(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> log2(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            log2(x.x),
            log2(x.y),
            log2(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> log2(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            log2(x.x),
            log2(x.y),
            log2(x.z),
            log2(x.w));
    }

    // sqrt
    template <typename T>
    inline T sqrt(T x)
    {
        return T(::std::sqrt(double(x)));
    }

    template <typename T>
    inline detail::_xvec2<T> sqrt(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            sqrt(x.x),
            sqrt(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> sqrt(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            sqrt(x.x),
            sqrt(x.y),
            sqrt(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> sqrt(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            sqrt(x.x),
            sqrt(x.y),
            sqrt(x.z),
            sqrt(x.w));
    }

    template <typename T>
    inline T inversesqrt(T x)
    {
        return 1.0f / ::std::sqrt(x);
    }

    template <typename T>
    inline detail::_xvec2<T> inversesqrt(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            inversesqrt(x.x),
            inversesqrt(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> inversesqrt(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            inversesqrt(x.x),
            inversesqrt(x.y),
            inversesqrt(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> inversesqrt(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            inversesqrt(x.x),
            inversesqrt(x.y),
            inversesqrt(x.z),
            inversesqrt(x.w));
    }

    ////////////////////////////////////////////////////////////////////////
    // Common Functions

    // abs
    template <typename T>
    inline T abs(T x)
    {
        return x >= T(0) ? x : -x;
    }

    template <typename T>
    inline detail::_xvec2<T> abs(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            abs(x.x),
            abs(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> abs(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            abs(x.x),
            abs(x.y),
            abs(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> abs(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            abs(x.x),
            abs(x.y),
            abs(x.z),
            abs(x.w));
    }

    // sign
/*
    Try something like based on x >> 31 to get the sign bit
*/
    template <typename T>
    inline T sign(T x)
    {
        T result;
        if(x > T(0))
            result = T(1);
        else if(x < T(0))
            result = T(-1);
        else
            result = T(0);
        return result;
    }

    template <typename T>
    inline detail::_xvec2<T> sign(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            sign(x.x),
            sign(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> sign(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            sign(x.x),
            sign(x.y),
            sign(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> sign(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            sign(x.x),
            sign(x.y),
            sign(x.z),
            sign(x.w));
    }

    // floor
    template <typename T>
    inline T floor(T x)
    {
        return ::std::floor(x);
    }

    template <typename T>
    inline detail::_xvec2<T> floor(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            floor(x.x),
            floor(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> floor(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            floor(x.x),
            floor(x.y),
            floor(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> floor(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            floor(x.x),
            floor(x.y),
            floor(x.z),
            floor(x.w));
    }

    // ceil
    template <typename T>
    inline T ceil(T x)
    {
        return ::std::ceil(x);
    }

    template <typename T>
    inline detail::_xvec2<T> ceil(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            ceil(x.x),
            ceil(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> ceil(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            ceil(x.x),
            ceil(x.y),
            ceil(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> ceil(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            ceil(x.x),
            ceil(x.y),
            ceil(x.z),
            ceil(x.w));
    }

    // fract
    template <typename T>
    inline T fract(T x)
    {
        return x - ::std::floor(x);
    }

    template <typename T>
    inline detail::_xvec2<T> fract(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fract(x.x),
            fract(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> fract(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fract(x.x),
            fract(x.y),
            fract(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> fract(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fract(x.x),
            fract(x.y),
            fract(x.z),
            fract(x.w));
    }

    // mod
    template <typename T>
    inline T mod(T x, T y)
    {
        return x - y * floor(x / y);
    }

    template <typename T>
    inline detail::_xvec2<T> mod(const detail::_xvec2<T>& x, T y)
    {
        return detail::_xvec2<T>(
            mod(x.x, y),
            mod(x.y, y));
    }

    template <typename T>
    inline detail::_xvec3<T> mod(const detail::_xvec3<T>& x, T y)
    {
        return detail::_xvec3<T>(
            mod(x.x, y),
            mod(x.y, y),
            mod(x.z, y));
    }

    template <typename T>
    inline detail::_xvec4<T> mod(const detail::_xvec4<T>& x, T y)
    {
        return detail::_xvec4<T>(
            mod(x.x, y),
            mod(x.y, y),
            mod(x.z, y),
            mod(x.w, y));
    }

    template <typename T>
    inline detail::_xvec2<T> mod(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_xvec2<T>(
            mod(x.x, y.x),
            mod(x.y, y.y));
    }

    template <typename T>
    inline detail::_xvec3<T> mod(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_xvec3<T>(
            mod(x.x, y.x),
            mod(x.y, y.y),
            mod(x.z, y.z));
    }

    template <typename T>
    inline detail::_xvec4<T> mod(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_xvec4<T>(
            mod(x.x, y.x),
            mod(x.y, y.y),
            mod(x.z, y.z),
            mod(x.w, y.w));
    }

    // min
    template <typename T>
    inline T min(T x, T y)
    {
        return x < y ? x : y;
    }

    template <typename T>
    inline detail::_xvec2<T> min(const detail::_xvec2<T>& x, T y)
    {
        return detail::_xvec2<T>(
            min(x.x, y),
            min(x.y, y));
    }

    template <typename T>
    inline detail::_xvec3<T> min(const detail::_xvec3<T>& x, T y)
    {
        return detail::_xvec3<T>(
            min(x.x, y),
            min(x.y, y),
            min(x.z, y));
    }

    template <typename T>
    inline detail::_xvec4<T> min(const detail::_xvec4<T>& x, T y)
    {
        return detail::_xvec4<T>(
            min(x.x, y),
            min(x.y, y),
            min(x.z, y),
            min(x.w, y));
    }

    template <typename T>
    inline detail::_xvec2<T> min(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_xvec2<T>(
            min(x.x, y.x),
            min(x.y, y.y));
    }

    template <typename T>
    inline detail::_xvec3<T> min(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_xvec3<T>(
            min(x.x, y.x),
            min(x.y, y.y),
            min(x.z, y.z));
    }

    template <typename T>
    inline detail::_xvec4<T> min(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_xvec4<T>(
            min(x.x, y.x),
            min(x.y, y.y),
            min(x.z, y.z),
            min(x.w, y.w));
    }

    // max
    template <typename T>
    inline T max(T x, T y)
    {
        return x > y ? x : y;
    }

    template <typename T>
    inline detail::_xvec2<T> max(const detail::_xvec2<T>& x, T y)
    {
        return detail::_xvec2<T>(
            max(x.x, y),
            max(x.y, y));
    }

    template <typename T>
    inline detail::_xvec3<T> max(const detail::_xvec3<T>& x, T y)
    {
        return detail::_xvec3<T>(
            max(x.x, y),
            max(x.y, y),
            max(x.z, y));
    }

    template <typename T>
    inline detail::_xvec4<T> max(const detail::_xvec4<T>& x, T y)
    {
        return detail::_xvec4<T>(
            max(x.x, y),
            max(x.y, y),
            max(x.z, y),
            max(x.w, y));
    }

    template <typename T>
    inline detail::_xvec2<T> max(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_xvec2<T>(
            max(x.x, y.x),
            max(x.y, y.y));
    }

    template <typename T>
    inline detail::_xvec3<T> max(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_xvec3<T>(
            max(x.x, y.x),
            max(x.y, y.y),
            max(x.z, y.z));
    }

    template <typename T>
    inline detail::_xvec4<T> max(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_xvec4<T>(
            max(x.x, y.x),
            max(x.y, y.y),
            max(x.z, y.z),
            max(x.w, y.w));
    }

    // clamp
    template <typename T>
    inline T clamp(T x, T minVal, T maxVal)
    {
	    if(x >= maxVal) return maxVal;
        if(x <= minVal) return minVal;
	    return x;
    }

    template <typename T>
    inline detail::_xvec2<T> clamp(const detail::_xvec2<T>& x, T minVal, T maxVal)
    {
        return detail::_xvec2<T>(
            clamp(x.x, minVal, maxVal),
            clamp(x.y, minVal, maxVal));
    }

    template <typename T>
    inline detail::_xvec3<T> clamp(const detail::_xvec3<T>& x, T minVal, T maxVal)
    {
        return detail::_xvec3<T>(
            clamp(x.x, minVal, maxVal),
            clamp(x.y, minVal, maxVal),
            clamp(x.z, minVal, maxVal));
    }

    template <typename T>
    inline detail::_xvec4<T> clamp(const detail::_xvec4<T>& x, T minVal, T maxVal)
    {
        return detail::_xvec4<T>(
            clamp(x.x, minVal, maxVal),
            clamp(x.y, minVal, maxVal),
            clamp(x.z, minVal, maxVal),
            clamp(x.w, minVal, maxVal));
    }

    template <typename T>
    inline detail::_xvec2<T> clamp(const detail::_xvec2<T>& x, const detail::_xvec2<T>& minVal, const detail::_xvec2<T>& maxVal)
    {
        return detail::_xvec2<T>(
            clamp(x.x, minVal.x, maxVal.x),
            clamp(x.y, minVal.y, maxVal.y));
    }

    template <typename T>
    inline detail::_xvec3<T> clamp(const detail::_xvec3<T>& x, const detail::_xvec3<T>& minVal, const detail::_xvec3<T>& maxVal)
    {
        return detail::_xvec3<T>(
            clamp(x.x, minVal.x, maxVal.x),
            clamp(x.y, minVal.y, maxVal.y),
            clamp(x.z, minVal.z, maxVal.z));
    }

    template <typename T>
    inline detail::_xvec4<T> clamp(const detail::_xvec4<T>& x, const detail::_xvec4<T>& minVal, const detail::_xvec4<T>& maxVal)
    {
        return detail::_xvec4<T>(
            clamp(x.x, minVal.x, maxVal.x),
            clamp(x.y, minVal.y, maxVal.y),
            clamp(x.z, minVal.z, maxVal.z),
            clamp(x.w, minVal.w, maxVal.w));
    }

	// mix
	template <typename T, typename U>
	inline T mix(const T& x, const T& y, const U& a)
	{
		return x * (T(1) - a) + y * a;
	}
/*
    // mix
    template <typename T>
    inline T mix(T x, T y, T a)
    {
        return x * (T(1) - a) + y * a;
    }

    template <typename T>
    inline detail::_xvec2<T> mix(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, T a)
    {
        return x * (T(1) - a) + y * a;
    }

    template <typename T>
    inline detail::_xvec3<T> mix(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, T a)
    {
        return x * (T(1) - a) + y * a;
    }

    template <typename T>
    inline detail::_xvec4<T> mix(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, T a)
    {
        return x * (T(1) - a) + y * a;
    }

    template <typename T>
    inline detail::_xvec2<T> mix(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& a)
    {
        return x * (T(1) - a) + y * a;
    }

    template <typename T>
    inline detail::_xvec3<T> mix(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& a)
    {
        return x * (T(1) - a) + y * a;
    }

    template <typename T>
    inline detail::_xvec4<T> mix(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& a)
    {
        return x * (T(1) - a) + y * a;
    }
*/

	// step
    template <typename T>
    inline T step(T edge, T x)
    {
        return x <= edge ? T(0) : T(1);
    }

    template <typename T>
    inline detail::_xvec2<T> step(T edge, const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            x.x <= edge ? T(0) : T(1),
            x.y <= edge ? T(0) : T(1));
    }

    template <typename T>
    inline detail::_xvec3<T> step(T edge, const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            x.x <= edge ? T(0) : T(1),
            x.y <= edge ? T(0) : T(1),
            x.z <= edge ? T(0) : T(1));
    }

    template <typename T>
    inline detail::_xvec4<T> step(T edge, const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            x.x <= edge ? T(0) : T(1),
            x.y <= edge ? T(0) : T(1),
            x.z <= edge ? T(0) : T(1),
            x.w <= edge ? T(0) : T(1));
    }

    template <typename T>
    inline detail::_xvec2<T> step(const detail::_xvec2<T>& edge, const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            x.x <= edge.x ? T(0) : T(1),
            x.y <= edge.y ? T(0) : T(1));
    }

    template <typename T>
    inline detail::_xvec3<T> step(const detail::_xvec3<T>& edge, const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            x.x <= edge.x ? T(0) : T(1),
            x.y <= edge.y ? T(0) : T(1),
            x.z <= edge.z ? T(0) : T(1));
    }

    template <typename T>
    inline detail::_xvec4<T> step(const detail::_xvec4<T>& edge, const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            x.x <= edge.x ? T(0) : T(1),
            x.y <= edge.y ? T(0) : T(1),
            x.z <= edge.z ? T(0) : T(1),
            x.w <= edge.w ? T(0) : T(1));
    }

    // smoothstep
    template <typename T>
    inline T smoothstep(T edge0, T edge1, T x)
    {
        T tmp = clamp((x - edge0) / (edge1 - edge0), T(0), T(1));
        return tmp * tmp * (T(3) - T(2) * tmp);
    }

    template <typename T>
    inline detail::_xvec2<T> smoothstep(T edge0, T edge1, const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            smoothstep(edge0, edge1, x.x),
            smoothstep(edge0, edge1, x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> smoothstep(T edge0, T edge1, const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            smoothstep(edge0, edge1, x.x),
            smoothstep(edge0, edge1, x.y),
            smoothstep(edge0, edge1, x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> smoothstep(T edge0, T edge1, const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            smoothstep(edge0, edge1, x.x),
            smoothstep(edge0, edge1, x.y),
            smoothstep(edge0, edge1, x.z),
            smoothstep(edge0, edge1, x.w));
    }

    template <typename T>
    inline detail::_xvec2<T> smoothstep(const detail::_xvec2<T>& edge0, const detail::_xvec2<T>& edge1, const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            smoothstep(edge0.x, edge1.x, x.x),
            smoothstep(edge0.y, edge1.y, x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> smoothstep(const detail::_xvec3<T>& edge0, const detail::_xvec3<T>& edge1, const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            smoothstep(edge0.x, edge1.x, x.x),
            smoothstep(edge0.y, edge1.y, x.y),
            smoothstep(edge0.z, edge1.z, x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> smoothstep(const detail::_xvec4<T>& edge0, const detail::_xvec4<T>& edge1, const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            smoothstep(edge0.x, edge1.x, x.x),
            smoothstep(edge0.y, edge1.y, x.y),
            smoothstep(edge0.z, edge1.z, x.z),
            smoothstep(edge0.w, edge1.w, x.w));
    }

    ////////////////////////////////////////////////////////////////////////
    // Geometric Functions

    // length
    template <typename T>
    inline T length(T x)
    {
        return abs(x);
    }

    template <typename T>
    inline T length(const detail::_xvec2<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y;
        return sqrt(sqr);
    }

    template <typename T>
    inline T length(const detail::_xvec3<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y + x.z * x.z;
        return sqrt(sqr);
    }

    template <typename T>
    inline T length(const detail::_xvec4<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w;
        return sqrt(sqr);
    }

    // distance
    template <typename T>
    inline T distance(const T p0, const T p1)
    {
        return length(p1 - p0);
    }

    template <typename T>
    inline T distance(const detail::_xvec2<T>& p0, const detail::_xvec2<T>& p1)
    {
        return length(p1 - p0);
    }

    template <typename T>
    inline T distance(const detail::_xvec3<T>& p0, const detail::_xvec3<T>& p1)
    {
        return length(p1 - p0);
    }

    template <typename T>
    inline T distance(const detail::_xvec4<T>& p0, const detail::_xvec4<T>& p1)
    {
        return length(p1 - p0);
    }
/*
	template <typename genType>
	inline valType distance(const genType& p0, const genType& p1)
    {
        return length(p1 - p0);
    }
*/
    // dot
    template <typename T>
    inline T dot(T x, T y)
    {
        return x * y;
    }

    template <typename T>
    inline T dot(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return x.x * y.x + x.y * y.y;
    }

    template <typename T>
    inline T dot(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return x.x * y.x + x.y * y.y + x.z * y.z;
    }
/* // SSE3
    inline float dot(const _xvec4<float>& x, const _xvec4<float>& y)
    {
	    float Result;
	    __asm
        {
		    mov		esi, x
		    mov		edi, y
		    movaps	xmm0, [esi]
		    mulps	xmm0, [edi]
		    haddps(	_xmm0, _xmm0 )
		    haddps(	_xmm0, _xmm0 )
		    movss	Result, xmm0
	    }
	    return Result;
    }
*/
    template <typename T>
    inline T dot(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w;
    }

    // cross
    template <typename T>
    inline detail::_xvec3<T> cross(const detail::_xvec3<T> & x, const detail::_xvec3<T> & y)
    {
        return detail::_xvec3<T>(
            x.y * y.z - y.y * x.z,
            x.z * y.x - y.z * x.x,
            x.x * y.y - y.x * x.y);
    }

    // normalize
    template <typename T>
    inline T normalize(T x)
    {
        return x < T(0) ? T(-1) : T(1);
    }

    // According to issue 10, if length(x) == 0 then result is undefine and generate an error
    template <typename T>
    inline detail::_xvec2<T> normalize(const detail::_xvec2<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y;
	    return x * inversesqrt(sqr);
    }

    template <typename T>
    inline detail::_xvec3<T> normalize(const detail::_xvec3<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y + x.z * x.z;
	    return x * inversesqrt(sqr);
    }

    template <typename T>
    inline detail::_xvec4<T> normalize(const detail::_xvec4<T>& x)
    {
        T sqr = x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w;
	    return x * inversesqrt(sqr);
    }
/*
    // faceforward
	template <typename T, typename genType>
	inline genType faceforward(const genType& N, const genType& I, const genType& Nref)
	{
		return dot(Nref, I) < T(0) ? N : -N;
	}
*/
    // faceforward
    template <typename T>
    inline T faceforward(T N, T I, T Nref)
    {
        return dot(Nref, I) < T(0) ? N : -N;
    }

    template <typename T>
    inline detail::_xvec2<T> faceforward(const detail::_xvec2<T>& N, const detail::_xvec2<T>& I, const detail::_xvec2<T>& Nref)
    {
        return dot(Nref, I) < T(0) ? N : -N;
    }

    template <typename T>
    inline detail::_xvec3<T> faceforward(const detail::_xvec3<T>& N, const detail::_xvec3<T>& I, const detail::_xvec3<T>& Nref)
    {
        return dot(Nref, I) < T(0) ? N : -N;
    }

    template <typename T>
    inline detail::_xvec4<T> faceforward(const detail::_xvec4<T>& N, const detail::_xvec4<T>& I, const detail::_xvec4<T>& Nref)
    {
        return dot(Nref, I) < T(0) ? N : -N;
    }
/*
	// reflect
	template <typename T, typename genType>
	genType reflect(const genType& I, const genType& N)
	{
		return I - N * dot(N, I) * T(2);
	}
*/
    // reflect
    template <typename T>
    inline T reflect(T I, T N)
    {
        return I - N * dot(N, I) * T(2);
    }

    template <typename T>
    inline detail::_xvec2<T> reflect(const detail::_xvec2<T>& I, const detail::_xvec2<T>& N)
    {
        return I - N * dot(N, I) * T(2);
    }

    template <typename T>
    inline detail::_xvec3<T> reflect(const detail::_xvec3<T>& I, const detail::_xvec3<T>& N)
    {
        return I - N * dot(N, I) * T(2);
    }

    template <typename T>
    inline detail::_xvec4<T> reflect(const detail::_xvec4<T>& I, const detail::_xvec4<T>& N)
    {
        return I - N * dot(N, I) * T(2);
    }

    // refract
    template <typename T>
    inline T refract(T I, T N, T eta)
    {
        T dot = dot(N, I);
        T k = T(1) - eta * eta * (T(1) - dot * dot);
        if(k < T(0))
            return T(0);
        else
            return eta * I - (eta * dot + sqrt(k)) * N;
    }

    template <typename T>
    inline detail::_xvec2<T> refract(const detail::_xvec2<T>& I, const detail::_xvec2<T>& N, T eta)
    {
        T dotValue = dot(N, I);
        T k = T(1) - eta * eta * (T(1) - dotValue * dotValue);
        if(k < T(0))
            return detail::_xvec2<T>(T(0));
        else
            return eta * I - (eta * dotValue + sqrt(k)) * N;
    }

    template <typename T>
    inline detail::_xvec3<T> refract(const detail::_xvec3<T>& I, const detail::_xvec3<T>& N, T eta)
    {
        T dotValue = dot(N, I);
        T k = T(1) - eta * eta * (T(1) - dotValue * dotValue);
        if(k < T(0))
            return detail::_xvec3<T>(T(0));
        else
            return eta * I - (eta * dotValue + sqrt(k)) * N;
    }

    template <typename T>
    inline detail::_xvec4<T> refract(const detail::_xvec4<T>& I, const detail::_xvec4<T>& N, T eta)
    {
        T dotValue = dot(N, I);
        T k = T(1) - eta * eta * (T(1) - dotValue * dotValue);
        if(k < T(0))
            return detail::_xvec4<T>(T(0));
        else
            return eta * I - (eta * dotValue + sqrt(k)) * N;
    }

    ////////////////////////////////////////////////////////////////////////
    // Matrix Functions

    // matrixCompMult
    template <typename T>
    inline detail::_xmat2<T> matrixCompMult(const detail::_xmat2<T>& x, const detail::_xmat2<T>& y)
    {
        detail::_xmat2<T> result;
        for(int j = 0; j < 2; ++j)
            for(int i = 0; i < 2; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

    template <typename T>
    inline detail::_xmat3<T> matrixCompMult(const detail::_xmat3<T>& x, const detail::_xmat3<T>& y)
    {
        detail::_xmat3<T> result;
        for(int j = 0; j < 3; ++j)
            for(int i = 0; i < 3; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

    template <typename T>
    inline detail::_xmat4<T> matrixCompMult(const detail::_xmat4<T>& x, const detail::_xmat4<T>& y)
    {
        detail::_xmat4<T> result;
        for(int j = 0; j < 4; ++j)
            for(int i = 0; i < 4; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

    template <typename T>
    inline detail::_xmat2x3<T> matrixCompMult(const detail::_xmat2x3<T>& x, const detail::_xmat2x3<T>& y)
    {
        detail::_xmat2x3<T> result;
        for(int j = 0; j < 2; ++j)
            for(int i = 0; i < 3; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

    template <typename T>
    inline detail::_xmat3x2<T> matrixCompMult(const detail::_xmat3x2<T>& x, const detail::_xmat3x2<T>& y)
    {
        detail::_xmat3x2<T> result;
        for(int j = 0; j < 3; ++j)
            for(int i = 0; i < 2; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

    template <typename T>
    inline detail::_xmat2x4<T> matrixCompMult(const detail::_xmat2x4<T>& x, const detail::_xmat2x4<T>& y)
    {
        detail::_xmat2x4<T> result;
        for(int j = 0; j < 2; ++j)
            for(int i = 0; i < 4; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

    template <typename T>
    inline detail::_xmat4x2<T> matrixCompMult(const detail::_xmat4x2<T>& x, const detail::_xmat4x2<T>& y)
    {
        detail::_xmat4x2<T> result;
        for(int j = 0; j < 4; ++j)
            for(int i = 0; i < 2; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

    template <typename T>
    inline detail::_xmat3x4<T> matrixCompMult(const detail::_xmat3x4<T>& x, const detail::_xmat3x4<T>& y)
    {
        detail::_xmat3x4<T> result;
        for(int j = 0; j < 3; ++j)
            for(int i = 0; i < 4; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

    template <typename T>
    inline detail::_xmat4x3<T> matrixCompMult(const detail::_xmat4x3<T>& x, const detail::_xmat4x3<T>& y)
    {
        detail::_xmat4x3<T> result;
        for(int j = 0; j < 4; ++j)
            for(int i = 0; i < 3; ++i)
                result[j][i] = x[j][i] * y[j][i];
        return result;
    }

	// outerProduct
    template <typename T>
    inline detail::_xmat2<T> outerProduct(const detail::_xvec2<T>& c, const detail::_xvec2<T>& r)
    {
		detail::_xmat2<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
        return m;
    }

    template <typename T>
    inline detail::_xmat3<T> outerProduct(const detail::_xvec3<T>& c, const detail::_xvec3<T>& r)
    {
		detail::_xmat3<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[0][2] = c.z * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
		m[1][2] = c.z * r.y;
		m[2][0] = c.x * r.z;
		m[2][1] = c.y * r.z;
		m[2][2] = c.z * r.z;
        return m;
    }

    template <typename T>
    inline detail::_xmat4<T> outerProduct(const detail::_xvec4<T>& c, const detail::_xvec4<T>& r)
    {
		detail::_xmat4<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[0][2] = c.z * r.x;
		m[0][3] = c.w * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
		m[1][2] = c.z * r.y;
		m[1][3] = c.w * r.y;
		m[2][0] = c.x * r.z;
		m[2][1] = c.y * r.z;
		m[2][2] = c.z * r.z;
		m[2][3] = c.w * r.z;
		m[3][0] = c.x * r.w;
		m[3][1] = c.y * r.w;
		m[3][2] = c.z * r.w;
		m[3][3] = c.w * r.w;
        return m;
    }

    template <typename T>
	inline detail::_xmat2x3<T> outerProduct(const detail::_xvec3<T>& c, const detail::_xvec2<T>& r)
	{
		detail::_xmat2x3<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[0][2] = c.z * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
		m[1][2] = c.z * r.y;
		return m;
	}

    template <typename T>
	inline detail::_xmat3x2<T> outerProduct(const detail::_xvec2<T>& c, const detail::_xvec3<T>& r)
	{
		detail::_xmat3x2<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
		m[2][0] = c.x * r.z;
		m[2][1] = c.y * r.z;
		return m;
	}

	template <typename T>
	inline detail::_xmat2x4<T> outerProduct(const detail::_xvec2<T>& c, const detail::_xvec4<T>& r)
	{
		detail::_xmat2x4<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[0][2] = c.z * r.x;
		m[0][3] = c.w * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
		m[1][2] = c.z * r.y;
		m[1][3] = c.w * r.y;
		return m;
	}

	template <typename T>
	inline detail::_xmat4x2<T> outerProduct(const detail::_xvec4<T>& c, const detail::_xvec2<T>& r)
	{
		detail::_xmat4x2<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
		m[2][0] = c.x * r.z;
		m[2][1] = c.y * r.z;
		m[3][0] = c.x * r.w;
		m[3][1] = c.y * r.w;
		return m;
	}

	template <typename T>
	inline detail::_xmat3x4<T> outerProduct(const detail::_xvec4<T>& c, const detail::_xvec3<T>& r)
	{
		detail::_xmat3x4<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[0][2] = c.z * r.x;
		m[0][3] = c.w * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
		m[1][2] = c.z * r.y;
		m[1][3] = c.w * r.y;
		m[2][0] = c.x * r.z;
		m[2][1] = c.y * r.z;
		m[2][2] = c.z * r.z;
		m[2][3] = c.w * r.z;
		return m;
	}

	template <typename T>
	inline detail::_xmat4x3<T> outerProduct(const detail::_xvec3<T>& c, const detail::_xvec4<T>& r)
	{
		detail::_xmat4x3<T> m;
		m[0][0] = c.x * r.x;
		m[0][1] = c.y * r.x;
		m[0][2] = c.z * r.x;
		m[1][0] = c.x * r.y;
		m[1][1] = c.y * r.y;
		m[1][2] = c.z * r.y;
		m[2][0] = c.x * r.z;
		m[2][1] = c.y * r.z;
		m[2][2] = c.z * r.z;
		m[3][0] = c.x * r.w;
		m[3][1] = c.y * r.w;
		m[3][2] = c.z * r.w;
		return m;
	}

    template <typename T>
    inline detail::_xmat2<T> transpose(const detail::_xmat2<T>& m)
    {
        detail::_xmat2<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
        return result;
    }

    template <typename T>
    inline detail::_xmat3<T> transpose(const detail::_xmat3<T> & m)
    {
        detail::_xmat3<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
        result[0][2] = m[2][0];

        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
        result[1][2] = m[2][1];

        result[2][0] = m[0][2];
        result[2][1] = m[1][2];
        result[2][2] = m[2][2];
        return result;
    }

    template <typename T>
    inline detail::_xmat4<T> transpose(const detail::_xmat4<T> & m)
    {
        detail::_xmat4<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
        result[0][2] = m[2][0];
        result[0][3] = m[3][0];

        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
        result[1][2] = m[2][1];
        result[1][3] = m[3][1];

        result[2][0] = m[0][2];
        result[2][1] = m[1][2];
        result[2][2] = m[2][2];
        result[2][3] = m[3][2];

        result[3][0] = m[0][3];
        result[3][1] = m[1][3];
        result[3][2] = m[2][3];
        result[3][3] = m[3][3];
        return result;
    }

    template <typename T>
    inline detail::_xmat2x3<T> transpose(const detail::_xmat3x2<T>& m)
    {
        detail::_xmat2x3<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
		result[0][2] = m[2][0];
        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
		result[1][2] = m[2][1];
        return result;
    }

    template <typename T>
    inline detail::_xmat3x2<T> transpose(const detail::_xmat2x3<T>& m)
    {
        detail::_xmat3x2<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
        result[2][0] = m[0][2];
        result[2][1] = m[1][2];
        return result;
    }

    template <typename T>
	inline detail::_xmat2x4<T> transpose(const detail::_xmat4x2<T>& m)
	{
		detail::_xmat2x4<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
		result[0][2] = m[2][0];
		result[0][3] = m[3][0];
        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
		result[1][2] = m[2][1];
		result[1][3] = m[3][1];
		return result;
	}

    template <typename T>
	inline detail::_xmat4x2<T> transpose(const detail::_xmat2x4<T>& m)
	{
        detail::_xmat4x2<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
        result[2][0] = m[0][2];
        result[2][1] = m[1][2];
        result[3][0] = m[0][3];
        result[3][1] = m[1][3];
        return result;
	}

    template <typename T>
	inline detail::_xmat3x4<T> transpose(const detail::_xmat4x3<T>& m)
	{
		detail::_xmat3x4<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
		result[0][2] = m[2][0];
		result[0][3] = m[3][0];
        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
		result[1][2] = m[2][1];
		result[1][3] = m[3][1];
        result[2][0] = m[0][2];
        result[2][1] = m[1][2];
		result[2][2] = m[2][2];
		result[2][3] = m[3][2];
		return result;
	}

    template <typename T>
	inline detail::_xmat4x3<T> transpose(const detail::_xmat3x4<T>& m)
	{
        detail::_xmat4x3<T> result;
        result[0][0] = m[0][0];
        result[0][1] = m[1][0];
		result[0][2] = m[2][0];
        result[1][0] = m[0][1];
        result[1][1] = m[1][1];
		result[1][2] = m[2][1];
        result[2][0] = m[0][2];
        result[2][1] = m[1][2];
		result[2][2] = m[2][2];
        result[3][0] = m[0][3];
        result[3][1] = m[1][3];
		result[3][2] = m[2][3];
        result[4][0] = m[0][4];
        result[4][1] = m[1][4];
		result[4][2] = m[2][4];
        return result;
	}

    ////////////////////////////////////////////////////////////////////////
    // Vector Relational Functions

    // lessThan
    template <typename T>
    inline detail::_bvec2 lessThan(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_bvec2(x.x < y.x, x.y < y.y);
    }

    template <typename T>
    inline detail::_bvec3 lessThan(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_bvec3(x.x < y.x, x.y < y.y, x.z < y.z);
    }

    template <typename T>
    inline detail::_bvec4 lessThan(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_bvec4(x.x < y.x, x.y < y.y, x.z < y.z, x.w < y.w);
    }

    // lessThanEqual
    template <typename T>
    inline detail::_bvec2 lessThanEqual(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_bvec2(x.x <= y.x, x.y <= y.y);
    }

    template <typename T>
    inline detail::_bvec3 lessThanEqual(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_bvec3(x.x <= y.x, x.y <= y.y, x.z <= y.z);
    }

    template <typename T>
    inline detail::_bvec4 lessThanEqual(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_bvec4(x.x <= y.x, x.y <= y.y, x.z <= y.z, x.w <= y.w);
    }

    // greaterThan
    template <typename T>
    inline detail::_bvec2 greaterThan(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_bvec2(x.x > y.x, x.y > y.y);
    }

    template <typename T>
    inline detail::_bvec3 greaterThan(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_bvec3(x.x > y.x, x.y > y.y, x.z > y.z);
    }

    template <typename T>
    inline detail::_bvec4 greaterThan(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_bvec4(x.x > y.x, x.y > y.y, x.z > y.z, x.w > y.w);
    }

    // greaterThanEqual
    template <typename T>
    inline detail::_bvec2 greaterThanEqual(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_bvec2(x.x >= y.x, x.y >= y.y);
    }

    template <typename T>
    inline detail::_bvec3 greaterThanEqual(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_bvec3(x.x >= y.x, x.y >= y.y, x.z >= y.z);
    }

    template <typename T>
    inline detail::_bvec4 greaterThanEqual(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_bvec4(x.x >= y.x, x.y >= y.y, x.z >= y.z, x.w >= y.w);
    }

    // equal
    inline detail::_bvec2 equal(const detail::_bvec2& x, const detail::_bvec2& y)
    {
        return detail::_bvec2(x.x == y.x, x.y == y.y);
    }

    inline detail::_bvec3 equal(const detail::_bvec3& x, const detail::_bvec3& y)
    {
        return detail::_bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
    }

    inline detail::_bvec4 equal(const detail::_bvec4& x, const detail::_bvec4& y)
    {
        return detail::_bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
    }

    template <typename T>
    inline detail::_bvec2 equal(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_bvec2(x.x == y.x, x.y == y.y);
    }

    template <typename T>
    inline detail::_bvec3 equal(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
    }

    template <typename T>
    inline detail::_bvec4 equal(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
    }

    // notEqual
    inline detail::_bvec2 notEqual(const detail::_bvec2& x, const detail::_bvec2& y)
    {
        return detail::_bvec2(x.x != y.x, x.y != y.y);
    }

    inline detail::_bvec3 notEqual(const detail::_bvec3 & x, const detail::_bvec3& y)
    {
        return detail::_bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
    }

    inline detail::_bvec4 notEqual(const detail::_bvec4 & x, const detail::_bvec4& y)
    {
        return detail::_bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
    }

    template <typename T>
    inline detail::_bvec2 notEqual(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_bvec2(x.x != y.x, x.y != y.y);
    }

    template <typename T>
    inline detail::_bvec3 notEqual(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
    }

    template <typename T>
    inline detail::_bvec4 notEqual(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
    }

    // any
    inline bool any(const detail::_bvec2& x)
    {
        return x.x || x.y;
    }

    inline bool any(const detail::_bvec3& x)
    {
        return x.x || x.y || x.z;
    }

    inline bool any(const detail::_bvec4& x)
    {
        return x.x || x.y || x.z || x.w;
    }

    // all
    inline bool all(const detail::_bvec2& x)
    {
        return x.x && x.y;
    }

    inline bool all(const detail::_bvec3& x)
    {
        return x.x && x.y && x.z;
    }

    inline bool all(const detail::_bvec4& x)
    {
        return x.x && x.y && x.z && x.w;
    }

#ifdef GLM_COMPILER_VC
    inline bool not(bool x)
    {
        return !x;
    }

    inline detail::_bvec2 not(const detail::_bvec2& v)
    {
        return detail::_bvec2(!v.x, !v.y);
    }

    inline detail::_bvec3 not(const detail::_bvec3& v)
    {
        return detail::_bvec3(!v.x, !v.y, !v.z);
    }

    inline detail::_bvec4 not(const detail::_bvec4& v)
    {
        return detail::_bvec4(!v.x, !v.y, !v.z, !v.w);
    }

#elif GLM_COMPILER_GCC
    inline detail::_bvec2 operator not(const detail::_bvec2& v)
    {
        return detail::_bvec2(!v.x, !v.y);
    }

    inline detail::_bvec3 operator not(const detail::_bvec3& v)
    {
        return detail::_bvec3(!v.x, !v.y, !v.z);
    }

    inline detail::_bvec4 operator not(const detail::_bvec4& v)
    {
        return detail::_bvec4(!v.x, !v.y, !v.z, !v.w);
    }
#endif

    ////////////////////////////////////////////////////////////////////////
    // Noise Functions

    // noise1
    template <typename T>
    inline T noise1(T x)
    {
        int iNbr = int(x + T(3) / T(2)) * 1103515245 + 12345;
        return T(int(iNbr / T(65536)) % 32768) / T(32767);
    }

    template <typename T>
    inline T noise1(const detail::_xvec2<T>& x)
    {
        T fNbr(0);
        for(int i = 0; i < 2; ++i)
            fNbr += x[i];
        int iNbr = int(fNbr + T(3) / T(2)) * 1103515245 + 12345;
        return T(int(iNbr / T(65536)) % 32768) / T(32767);
    }

    template <typename T>
    inline T noise1(const detail::_xvec3<T>& x)
    {
        T fNbr(0);
        for(int i = 0; i < 3; ++i)
            fNbr += x[i];
        int iNbr = int(fNbr + T(3) / T(2)) * 1103515245 + 12345;
        return T(int(iNbr / T(65536)) % 32768) / T(32767);
    }

    template <typename T>
    inline T noise1(const detail::_xvec4<T>& x)
    {
        T fNbr(0);
        for(int i = 0; i < 4; i++)
            fNbr += x[i];
        int iNbr = int(fNbr + T(3) / T(2)) * 1103515245 + 12345;
        return T(int(iNbr / T(65536)) % 32768) / T(32767);
    }

    // noise2
    template <typename T>
    inline detail::_xvec2<T> noise2(T x)
    {
        T f1 = x * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        return detail::_xvec2<T>(
            noise1(f1),
            noise1(f2));
    }

    template <typename T>
    inline detail::_xvec2<T> noise2(const detail::_xvec2<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 2; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        return detail::_xvec2<T>(
            noise1(f1),
            noise1(f2));
    }

    template <typename T>
    inline detail::_xvec2<T> noise2(const detail::_xvec3<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 3; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        return detail::_xvec2<T>(
            noise1(f1),
            noise1(f2));
    }

    template <typename T>
    inline detail::_xvec2<T> noise2(const detail::_xvec4<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 4; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        return detail::_xvec2<T>(
            noise1(f1),
            noise1(f2));
    }

    // noise3
    template <typename T>
    inline detail::_xvec3<T> noise3(T x)
    {
        T f1 = x * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        T f3 = f2 * T(1103515245) + T(12345);
        return detail::_xvec3<T>(
            noise1(f1),
            noise1(f2),
            noise1(f3));
    }

    template <typename T>
    inline detail::_xvec3<T> noise3(const detail::_xvec2<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 2; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        T f3 = f2 * T(1103515245) + T(12345);
        return detail::_xvec3<T>(
            noise1(f1),
            noise1(f2),
            noise1(f3));
    }

    template <typename T>
    inline detail::_xvec3<T> noise3(const detail::_xvec3<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 3; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        T f3 = f2 * T(1103515245) + T(12345);
        return detail::_xvec3<T>(
            noise1(f1),
            noise1(f2),
            noise1(f3));
    }

    template <typename T>
    inline detail::_xvec3<T> noise3(const detail::_xvec4<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 4; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        T f3 = f2 * T(1103515245) + T(12345);
        return detail::_xvec3<T>(
            noise1(f1),
            noise1(f2),
            noise1(f3));
    }

    // noise4
    template <typename T>
    inline detail::_xvec4<T> noise4(T x)
    {
        T f1 = x * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        T f3 = f2 * T(1103515245) + T(12345);
        T f4 = f3 * T(1103515245) + T(12345);
        return detail::_xvec4<T>(
            noise1(f1),
            noise1(f2),
            noise1(f3),
            noise1(f4));
    }

    template <typename T>
    inline detail::_xvec4<T> noise4(const detail::_xvec2<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 2; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        T f3 = f2 * T(1103515245) + T(12345);
        T f4 = f3 * T(1103515245) + T(12345);
        return detail::_xvec4<T>(
            noise1(f1),
            noise1(f2),
            noise1(f3),
            noise1(f4));
    }

    template <typename T>
    inline detail::_xvec4<T> noise4(const detail::_xvec3<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 3; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        T f3 = f2 * T(1103515245) + T(12345);
        T f4 = f3 * T(1103515245) + T(12345);
        return detail::_xvec4<T>(
            noise1(f1),
            noise1(f2),
            noise1(f3),
            noise1(f4));
    }

    template <typename T>
    inline detail::_xvec4<T> noise4(const detail::_xvec4<T>& x)
    {
        T f0(0);
        for(int i = 0; i < 4; ++i)
            f0 += x[i];
        T f1 = f0 * T(1103515245) + T(12345);
        T f2 = f1 * T(1103515245) + T(12345);
        T f3 = f2 * T(1103515245) + T(12345);
        T f4 = f3 * T(1103515245) + T(12345);
        return detail::_xvec4<T>(
            noise1(f1),
            noise1(f2),
            noise1(f3),
            noise1(f4));
    }
} //namespace glm

#endif //__func_inl__
