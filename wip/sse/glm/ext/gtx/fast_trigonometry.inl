///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-08
// Updated : 2006-01-08
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/fast_trigonometry.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    // sin
    template <typename T> 
    inline T fastSinGTX(const T x)
    {
        return x - ((x * x * x) / T(6)) + ((x * x * x * x * x) / T(120)) - ((x * x * x * x * x * x * x) / T(5040));
    }

    template <typename T> 
    inline detail::_xvec2<T> fastSinGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastSinGTX(x.x),
            fastSinGTX(x.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> fastSinGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastSinGTX(x.x),
            fastSinGTX(x.y),
            fastSinGTX(x.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> fastSinGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastSinGTX(x.x),
            fastSinGTX(x.y),
            fastSinGTX(x.z),
            fastSinGTX(x.w));
    }

    // cos
    template <typename T> 
    inline T fastCosGTX(const T x)
    {
        return T(1) - (x * x * T(0.5)) + (x * x * x * x * T(0.041666666666)) - (x * x * x * x * x * x * T(0.00138888888888));
    }

    template <typename T> 
    inline detail::_xvec2<T> fastCosGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastCosGTX(x.x),
            fastCosGTX(x.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> fastCosGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastCosGTX(x.x),
            fastCosGTX(x.y),
            fastCosGTX(x.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> fastCosGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastCosGTX(x.x),
            fastCosGTX(x.y),
            fastCosGTX(x.z),
            fastCosGTX(x.w));
    }

    // tan
    template <typename T> 
    inline T fastTanGTX(const T x)
    {
        return x + (x * x * x * T(0.3333333333)) + (x * x * x * x * x * T(0.1333333333333)) + (x * x * x * x * x * x * x * T(0.0539682539));
    }

    template <typename T> 
    inline detail::_xvec2<T> fastTanGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastTanGTX(x.x),
            fastTanGTX(x.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> fastTanGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastTanGTX(x.x),
            fastTanGTX(x.y),
            fastTanGTX(x.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> fastTanGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastTanGTX(x.x),
            fastTanGTX(x.y),
            fastTanGTX(x.z),
            fastTanGTX(x.w));
    }

    // asin
    template <typename T> 
    inline T fastAsinGTX(const T x)
    {
        return x + (x * x * x * T(0.166666667)) + (x * x * x * x * x * T(0.075)) + (x * x * x * x * x * x * x * T(0.0446428571)) + (x * x * x * x * x * x * x * x * x * T(0.0303819444));// + (x * x * x * x * x * x * x * x * x * x * x * T(0.022372159));
    }

    template <typename T> detail::_xvec2<T> fastAsinGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastAsinGTX(x.x),
            fastAsinGTX(x.y));
    }

    template <typename T> detail::_xvec3<T> fastAsinGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastAsinGTX(x.x),
            fastAsinGTX(x.y),
            fastAsinGTX(x.z));
    }

    template <typename T> detail::_xvec4<T> fastAsinGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastAsinGTX(x.x),
            fastAsinGTX(x.y),
            fastAsinGTX(x.z),
            fastAsinGTX(x.w));
    }

    // acos
    template <typename T> 
    inline T fastAcosGTX(const T x)
    {
        return T(1.5707963267948966192313216916398) - fastAsinGTX(x); //(PI / 2)
    }

    template <typename T> detail::_xvec2<T> fastAcosGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastAcosGTX(x.x),
            fastAcosGTX(x.y));
    }

    template <typename T> detail::_xvec3<T> fastAcosGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastAcosGTX(x.x),
            fastAcosGTX(x.y),
            fastAcosGTX(x.z));
    }

    template <typename T> detail::_xvec4<T> fastAcosGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastAcosGTX(x.x),
            fastAcosGTX(x.y),
            fastAcosGTX(x.z),
            fastAcosGTX(x.w));
    }

    // atan
    template <typename T> 
    inline T fastAtanGTX(const T y, const T x)
    {
        T sgn = sign(y) * sign(x);
        return abs(fastAtanGTX(y / x)) * sgn;
    }

    template <typename T> 
    inline detail::_xvec2<T> fastAtanGTX(const detail::_xvec2<T>& y, const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastAtanGTX(y.x, x.x),
            fastAtanGTX(y.y, x.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> fastAtanGTX(const detail::_xvec3<T>& y, const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastAtanGTX(y.x, x.x),
            fastAtanGTX(y.y, x.y),
            fastAtanGTX(y.z, x.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> fastAtanGTX(const detail::_xvec4<T>& y, const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastAtanGTX(y.x, x.x),
            fastAtanGTX(y.y, x.y),
            fastAtanGTX(y.z, x.z),
            fastAtanGTX(y.w, x.w));
    }

    template <typename T> 
    inline T fastAtanGTX(const T x)
    {
        return x - (x * x * x * T(0.333333333333)) + (x * x * x * x * x * T(0.2)) - (x * x * x * x * x * x * x * T(0.1428571429)) + (x * x * x * x * x * x * x * x * x * T(0.111111111111)) - (x * x * x * x * x * x * x * x * x * x * x * T(0.0909090909));
    }

    template <typename T> 
    inline detail::_xvec2<T> fastAtanGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastAtanGTX(x.x),
            fastAtanGTX(x.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> fastAtanGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastAtanGTX(x.x),
            fastAtanGTX(x.y),
            fastAtanGTX(x.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> fastAtanGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastAtanGTX(x.x),
            fastAtanGTX(x.y),
            fastAtanGTX(x.z),
            fastAtanGTX(x.w));
    }
}
