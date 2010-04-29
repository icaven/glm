///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-09-21
// Updated : 2007-09-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/flexible_mix.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    // mix
    template <typename T, typename U>
    inline T mixGTX(T x, T y, T a)
    {
        return T(x * (U(1) - a) + y * a);
    }

    template <typename T, typename U>
    inline detail::_xvec2<T> mixGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, U a)
    {
		return detail::_xvec2<T>(detail::_xvec2<U>(x) * (U(1) - a) + detail::_xvec2<U>(y) * a);
        //return x * (U(1) - a) + y * a;
    }

    template <typename T, typename U>
    inline detail::_xvec3<T> mixGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, U a)
    {
		return detail::_xvec3<T>(detail::_xvec3<U>(x) * (U(1) - a) + detail::_xvec3<U>(y) * a);
        //return x * (U(1) - a) + y * a;
		//return mix(x, y, _xvec3<U>(a));
    }

    template <typename T, typename U>
    inline detail::_xvec4<T> mixGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, U a)
    {
		return detail::_xvec4<T>(detail::_xvec4<U>(x) * (U(1) - a) + detail::_xvec4<U>(y) * a);
        //return x * (U(1) - a) + y * a;
    }

    template <typename T, typename U>
    inline detail::_xvec2<T> mixGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<U>& a)
    {
		return detail::_xvec2<T>(detail::_xvec2<U>(x) * (U(1) - a) + detail::_xvec2<U>(y) * a);
    }

    template <typename T, typename U>
    inline detail::_xvec3<T> mixGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<U>& a)
    {
        return detail::_xvec3<T>(detail::_xvec3<U>(x) * (U(1) - a) + detail::_xvec3<U>(y) * a);
    }

    template <typename T, typename U>
    inline detail::_xvec4<T> mixGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<U>& a)
    {
		return detail::_xvec4<T>(detail::_xvec4<U>(x) * (U(1) - a) + detail::_xvec4<U>(y) * a);
    }
}
