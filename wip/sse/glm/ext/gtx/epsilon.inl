///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-01-16
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/epsilon.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T>
    inline bool equalEpsilonGTX(T x, T y, T epsilon)
    {
        return abs(x - y) < epsilon;
    }

    template <typename T>
    inline bool notEqualEpsilonGTX(T x, T y, T epsilon)
    {
        return abs(x - y) >= epsilon;
    }

    template <typename T>
    inline detail::_bvec2 equalEpsilonGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const T epsilon)
    {
        return detail::_bvec2(
            abs(x.x - y.x) < epsilon,
            abs(y.y - y.y) < epsilon);
    }

    template <typename T>
    inline detail::_bvec3 equalEpsilonGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const T epsilon)
    {
        return detail::_bvec3(
            abs(x.x - y.x) < epsilon,
            abs(y.y - y.y) < epsilon,
            abs(y.z - y.z) < epsilon);
    }

    template <typename T>
    inline detail::_bvec4 equalEpsilonGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const T epsilon)
    {
        return detail::_bvec4(
            abs(x.x - y.x) < epsilon,
            abs(y.y - y.y) < epsilon,
            abs(y.z - y.z) < epsilon,
            abs(y.w - y.w) < epsilon);
    }

    template <typename T>
    inline detail::_bvec2 notEqualEpsilonGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const T epsilon)
    {
        return detail::_bvec2(
            abs(x.x - y.x) >= epsilon,
            abs(y.y - y.y) >= epsilon);
    }

    template <typename T>
    inline detail::_bvec3 notEqualEpsilonGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const T epsilon)
    {
        return detail::_bvec3(
            abs(x.x - y.x) >= epsilon,
            abs(y.y - y.y) >= epsilon,
            abs(y.z - y.z) >= epsilon);
    }

    template <typename T>
    inline detail::_bvec4 notEqualEpsilonGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const T epsilon)
    {
        return detail::_bvec4(
            abs(x.x - y.x) >= epsilon,
            abs(y.y - y.y) >= epsilon,
            abs(y.z - y.z) >= epsilon,
            abs(y.w - y.w) >= epsilon);
    }

    template <typename T>
    inline detail::_bvec2 equalEpsilonGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& epsilon)
    {
        return detail::_bvec2(
            abs(x.x - y.x) < epsilon.x,
            abs(y.y - y.y) < epsilon.y);
    }

    template <typename T>
    inline detail::_bvec3 equalEpsilonGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& epsilon)
    {
        return detail::_bvec3(
            abs(x.x - y.x) < epsilon.x,
            abs(y.y - y.y) < epsilon.y,
            abs(y.z - y.z) < epsilon.z);
    }

    template <typename T>
    inline detail::_bvec4 equalEpsilonGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& epsilon)
    {
        return detail::_bvec4(
            abs(x.x - y.x) < epsilon.x,
            abs(y.y - y.y) < epsilon.y,
            abs(y.z - y.z) < epsilon.z,
            abs(y.w - y.w) < epsilon.w);
    }

    template <typename T>
    inline detail::_bvec2 notEqualEpsilonGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& epsilon)
    {
        return detail::_bvec2(
            abs(x.x - y.x) >= epsilon.x,
            abs(y.y - y.y) >= epsilon.y);
    }

    template <typename T>
    inline detail::_bvec3 notEqualEpsilonGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& epsilon)
    {
        return detail::_bvec3(
            abs(x.x - y.x) >= epsilon.x,
            abs(y.y - y.y) >= epsilon.y,
            abs(y.z - y.z) >= epsilon.z);
    }

    template <typename T>
    inline detail::_bvec4 notEqualEpsilonGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& epsilon)
    {
        return detail::_bvec4(
            abs(x.x - y.x) >= epsilon.x,
            abs(y.y - y.y) >= epsilon.y,
            abs(y.z - y.z) >= epsilon.z,
            abs(y.w - y.w) >= epsilon.w);
    }
}
