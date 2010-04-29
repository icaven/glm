///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/transpose.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T>
    inline detail::_xmat2<T> transposeGTX(const detail::_xmat2<T>& m)
    {
        detail::_xmat2<T> Transpose;
        Transpose[0][0] = m[0][0];
        Transpose[0][1] = m[1][0];
        Transpose[1][0] = m[0][1];
        Transpose[1][1] = m[1][1];
        return Transpose;
    }

    template <typename T>
    inline detail::_xmat3<T> transposeGTX(const detail::_xmat3<T>& m)
    {
        detail::_xmat3<T> Transpose;
        Transpose[0][0] = m[0][0];
        Transpose[0][1] = m[1][0];
        Transpose[0][2] = m[2][0];

        Transpose[1][0] = m[0][1];
        Transpose[1][1] = m[1][1];
        Transpose[1][2] = m[2][1];

        Transpose[2][0] = m[0][2];
        Transpose[2][1] = m[1][2];
        Transpose[2][2] = m[2][2];
        return Transpose;
    }

    template <typename T>
    inline detail::_xmat4<T> transposeGTX(const detail::_xmat4<T>& m)
    {
        detail::_xmat4<T> Transpose;
        Transpose[0][0] = m[0][0];
        Transpose[0][1] = m[1][0];
        Transpose[0][2] = m[2][0];
        Transpose[0][3] = m[3][0];

        Transpose[1][0] = m[0][1];
        Transpose[1][1] = m[1][1];
        Transpose[1][2] = m[2][1];
        Transpose[1][3] = m[3][1];

        Transpose[2][0] = m[0][2];
        Transpose[2][1] = m[1][2];
        Transpose[2][2] = m[2][2];
        Transpose[2][3] = m[3][2];

        Transpose[3][0] = m[0][3];
        Transpose[3][1] = m[1][3];
        Transpose[3][2] = m[2][3];
        Transpose[3][3] = m[3][3];
        return Transpose;
    }
}
