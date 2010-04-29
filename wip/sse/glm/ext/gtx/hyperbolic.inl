///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-25
// Updated : 2007-01-26
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/hyperbolic.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    // sinh
    template <typename T> 
    inline T sinh(const T angle)
    {
        return std::sinh(angle);
    }

    template <typename T> 
    inline detail::_xvec2<T> sinh(const detail::_xvec2<T>& angle)
    {
        return detail::_xvec2<T>(
            sinh(angle.x),
            sinh(angle.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> sinh(const detail::_xvec3<T>& angle)
    {
        return detail::_xvec3<T>(
            sinh(angle.x),
            sinh(angle.y),
            sinh(angle.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> sinh(const detail::_xvec4<T>& angle)
    {
        return detail::_xvec4<T>(
            sinh(angle.x),
            sinh(angle.y),
            sinh(angle.z),
            sinh(angle.w));
    }

    // cosh
    template <typename T> 
    inline T cosh(const T angle)
    {
        return std::cosh(angle);
    }

    template <typename T> 
    inline detail::_xvec2<T> cosh(const detail::_xvec2<T>& angle)
    {
        return detail::_xvec2<T>(
            cosh(angle.x),
            cosh(angle.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> cosh(const detail::_xvec3<T>& angle)
    {
        return detail::_xvec3<T>(
            cosh(angle.x),
            cosh(angle.y),
            cosh(angle.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> cosh(const detail::_xvec4<T>& angle)
    {
        return detail::_xvec4<T>(
            cosh(angle.x),
            cosh(angle.y),
            cosh(angle.z),
            cosh(angle.w));
    }

    // tanh
    template <typename T>
    inline T tanh(const T angle)
    {
        return std::tanh(angle);
    }

    template <typename T> 
    inline detail::_xvec2<T> tanh(const detail::_xvec2<T>& angle)
    {
        return detail::_xvec2<T>(
            tanh(angle.x),
            tanh(angle.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> tanh(const detail::_xvec3<T>& angle)
    {
        return detail::_xvec3<T>(
            tanh(angle.x),
            tanh(angle.y),
            tanh(angle.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> tanh(const detail::_xvec4<T>& angle)
    {
        return detail::_xvec4<T>(
            tanh(angle.x),
            tanh(angle.y),
            tanh(angle.z),
            tanh(angle.w));
    }

    // asinh
    template <typename T> 
    inline T asinh(const T x)
    {
		return (x < T(0) ? T(-1) : (x > T(0) ? T(1) : T(0))) * log(abs(x) + sqrt(T(1) + x * x));
    }

    template <typename T> 
    inline detail::_xvec2<T> asinh(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            asinh(x.x),
            asinh(x.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> asinh(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            asinh(x.x),
            asinh(x.y),
            asinh(x.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> asinh(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            asinh(x.x),
            asinh(x.y),
            asinh(x.z),
            asinh(x.w));
    }

    // acosh
    template <typename T> 
    inline T acosh(const T x)
    {
		if(x < T(1))
			return T(0);
		return log(x + sqrt(x * x - T(1)));
    }

    template <typename T> 
    inline detail::_xvec2<T> acosh(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            acosh(x.x),
            acosh(x.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> acosh(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            acosh(x.x),
            acosh(x.y),
            acosh(x.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> acosh(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            acosh(x.x),
            acosh(x.y),
            acosh(x.z),
            acosh(x.w));
    }

    // atanh
    template <typename T>
    inline T atanh(const T x)
    {
		if(abs(x) >= T(1))
			return 0;
		return T(0.5) * log((T(1) + x) / (T(1) - x));
    }

    template <typename T> 
    inline detail::_xvec2<T> atanh(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            atanh(x.x),
            atanh(x.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> atanh(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            atanh(x.x),
            atanh(x.y),
            atanh(x.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> atanh(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            atanh(x.x),
            atanh(x.y),
            atanh(x.z),
            atanh(x.w));
    }
}
