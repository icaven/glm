///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-20
// Updated : 2007-04-04
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/mul.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename genType>
    inline genType mulGTX(const genType& a, const genType& b)
    {
        return a * b;
    }

    template <typename genType>
    inline GLMcolType mulGTX(const genType& m, const GLMcolType& v)
    {
        return m * v;
    }

    template <typename genType>
    inline GLMcolType mulGTX(const GLMcolType& v, const genType& m)
    {
        return v * m;
    }
}

/*
    template <typename T>
    inline _xmat2<T> mulGTX(const _xmat2<T>& a, const _xmat2<T>& b)
    {
        return a * b;
    }

    template <typename T>
    inline _xmat3<T> mulGTX(const _xmat3<T>& a, const _xmat3<T>& b)
    {
        return a * b;
    }

    template <typename T>
    inline _xmat4<T> mulGTX(const _xmat4<T>& a, const _xmat4<T>& b)
    {
        return a * b;
    }

    template <typename T>
    inline _xvec2<T> mulGTX(const _xmat2<T>& m, const _xvec2<T>& v)
    {
        return m * v;
    }

    template <typename T>
    inline _xvec3<T> mulGTX(const _xmat3<T>& m, const _xvec3<T>& v)
    {
        return m * v;
    }

    template <typename T>
    inline _xvec4<T> mulGTX(const _xmat4<T>& m, const _xvec4<T>& v)
    {
        return m * v;
    }

    template <typename T>
    inline _xvec2<T> mulGTX(const _xvec2<T>& v, const _xmat2<T>& m)
    {
        return v * m;
    }

    template <typename T>
    inline _xvec3<T> mulGTX(const _xvec3<T>& v, const _xmat3<T>& m)
    {
        return v * m;
    }

    template <typename T>
    inline _xvec4<T> mulGTX(const _xvec4<T>& v, const _xmat4<T>& m)
    {
        return v * m;
    }
*/
