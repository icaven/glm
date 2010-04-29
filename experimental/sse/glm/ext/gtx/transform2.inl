///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-02-28
// Updated : 2005-04-23
// Licence : This source is under GNU LGPL licence
// File : glm/gtx/transform2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline detail::_xmat3<T> shearX2DGTX(const detail::_xmat3<T>& m, T s)
    {
        detail::_xmat3<T> r(1);
        r[0][1] = s;
        return m * r;
    }

    template <typename T> 
    inline detail::_xmat3<T> shearY2DGTX(const detail::_xmat3<T>& m, T s)
    {
        detail::_xmat3<T> r(1);
        r[1][0] = s;
        return m * r;
    }

    template <typename T> 
    inline detail::_xmat4<T> shearX3DGTX(const detail::_xmat4<T>& m, T s, T t)
    {
        detail::_xmat4<T> r(1);
        r[1][0] = s;
        r[2][0] = t;
        return m * r;
    }

    template <typename T> 
    inline detail::_xmat4<T> shearY3DGTX(const detail::_xmat4<T>& m, T s, T t)
    {
        detail::_xmat4<T> r(1);
        r[0][1] = s;
        r[2][1] = t;
        return m * r;
    }

    template <typename T>     
	inline detail::_xmat4<T> shearZ3DGTX(const detail::_xmat4<T>& m, T s, T t)
    {
        detail::_xmat4<T> r(1);
        r[0][2] = s;
        r[1][2] = t;
        return m * r;
    }

    template <typename T> 
    inline detail::_xmat3<T> reflect2DGTX(const detail::_xmat3<T>& m, const detail::_xvec3<T>& normal)
    {
        detail::_xmat3<T> r(1);
        r[0][0] = 1 - 2 * normal.x * normal.x;
        r[0][1] = -2 * normal.x * normal.y;
        r[1][0] = -2 * normal.x * normal.y;
        r[1][1] = 1 - 2 * normal.y * normal.y;
        return m * r;
    }

    template <typename T> 
    inline detail::_xmat4<T> reflect3DGTX(const detail::_xmat4<T>& m, const detail::_xvec3<T>& normal)
    {
        detail::_xmat4<T> r(1);
        r[0][0] = 1 - 2 * normal.x * normal.x;
        r[0][1] = -2 * normal.x * normal.y;
        r[0][2] = -2 * normal.x * normal.z;

        r[1][0] = -2 * normal.x * normal.y;
        r[1][1] = 1 - 2 * normal.y * normal.y;
        r[1][2] = -2 * normal.y * normal.z;

        r[2][0] = -2 * normal.x * normal.z;
        r[2][1] = -2 * normal.y * normal.z;
        r[2][2] = 1 - 2 * normal.z * normal.z;
        return m * r;
    }

    template <typename T> 
    inline detail::_xmat3<T> proj2DGTX(const detail::_xmat3<T>& m, const detail::_xvec3<T>& normal)
    {
        detail::_xmat3<T> r(1);
        r[0][0] = 1 - normal.x * normal.x;
        r[0][1] = - normal.x * normal.y;
        r[1][0] = - normal.x * normal.y;
        r[1][1] = 1 - normal.y * normal.y;
        return m * r;
    }

    template <typename T> 
    inline detail::_xmat4<T> proj3DGTX(const detail::_xmat4<T>& m, const detail::_xvec3<T>& normal)
    {
        detail::_xmat4<T> r(1);
        r[0][0] = 1 - normal.x * normal.x;
        r[0][1] = - normal.x * normal.y;
        r[0][2] = - normal.x * normal.z;
        r[1][0] = - normal.x * normal.y;
        r[1][1] = 1 - normal.y * normal.y;
        r[1][2] = - normal.y * normal.z;
        r[2][0] = - normal.x * normal.z;
        r[2][1] = - normal.y * normal.z;
        r[2][2] = 1 - normal.z * normal.z;
        return m * r;
    }

    template <typename T> 
    inline detail::_xmat4<T> lookAtGTX(const detail::_xvec3<T>& eye, const detail::_xvec3<T>& center, const detail::_xvec3<T>& up)
    {
        detail::_xvec3<T> f = normalize(center - eye);
        detail::_xvec3<T> u = normalize(up);
        detail::_xvec3<T> s = normalize(cross(f, u));
        u = cross(s, f);

        detail::_xmat4<T> Result(1);
        Result[0][0] = s.x;
        Result[1][0] = s.y;
        Result[2][0] = s.z;
        Result[0][1] = u.x;
        Result[1][1] = u.y;
        Result[2][1] = u.z;
        Result[0][2] =-f.x;
        Result[1][2] =-f.y;
        Result[2][2] =-f.z;
    /*  Test this instead of translate3DGTX
        Result[3][0] =-dot(s, eye);
        Result[3][1] =-dot(y, eye);
        Result[3][2] = dot(f, eye);
    */  
        return translate3DGTX(Result, -eye);
    }
}
