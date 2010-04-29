///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-21
// Updated : 2006-12-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/inertia.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T>
    inline detail::_xmat3<T> boxInertia3GTX(const T Mass, const detail::_xvec3<T>& Scale)
    {
	    detail::_xmat3<T> Result(T(1));
	    Result[0][0] = (Scale.y * Scale.y + Scale.z * Scale.z) * Mass / T(12);
	    Result[1][1] = (Scale.x * Scale.x + Scale.z * Scale.z) * Mass / T(12);
	    Result[2][2] = (Scale.x * Scale.x + Scale.y * Scale.y) * Mass / T(12);
        return Result;
    }

    template <typename T>
    inline detail::_xmat4<T> boxInertia4GTX(const T Mass, const detail::_xvec3<T>& Scale)
    {
	    detail::_xmat4<T> Result(T(1));
	    Result[0][0] = (Scale.y * Scale.y + Scale.z * Scale.z) * Mass / T(12);
	    Result[1][1] = (Scale.x * Scale.x + Scale.z * Scale.z) * Mass / T(12);
	    Result[2][2] = (Scale.x * Scale.x + Scale.y * Scale.y) * Mass / T(12);
        return Result;
    }

    template <typename T>
    inline detail::_xmat3<T> diskInertia3GTX(const T Mass, const T Radius)
    {
        T a = Mass * Radius * Radius / T(2);
        detail::_xmat3<T> Result(a);
        Result[2][2] *= T(2);
        return Result;
    }

    template <typename T>
    inline detail::_xmat4<T> diskInertia4GTX(const T Mass, const T Radius)
    {
        T a = Mass * Radius * Radius / T(2);
        detail::_xmat4<T> Result(a);
        Result[2][2] *= T(2);
        Result[3][3] = T(1);
        return Result;
    }

    template <typename T>
    inline detail::_xmat3<T> ballInertia3GTX(const T Mass, const T Radius)
    {
        T a = T(2) * Mass * Radius * Radius / T(5);
        return detail::_xmat3<T>(a);
    }

    template <typename T>
    inline detail::_xmat4<T> ballInertia4GTX(const T Mass, const T Radius)
    {
        T a = T(2) * Mass * Radius * Radius / T(5);
        detail::_xmat4<T> Result(a);
        Result[3][3] = T(1);
        return Result;
    }

    template <typename T>
    inline detail::_xmat3<T> sphereInertia3GTX(const T Mass, const T Radius)
    {
        T a = T(2) * Mass * Radius * Radius / T(3);
        return detail::_xmat3<T>(a);
    }

    template <typename T>
    inline detail::_xmat4<T> sphereInertia4GTX(const T Mass, const T Radius)
    {
        T a = T(2) * Mass * Radius * Radius / T(3);
        detail::_xmat4<T> Result(a);
        Result[3][3] = T(1);
        return Result;
    }
}
