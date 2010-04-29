///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_cross_product.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline detail::_xmat3<T> matrixCross3GTX(const detail::_xvec3<T>& x)
    {
        detail::_xmat3<T> Result(T(0));
        Result[0][1] = x.z;
        Result[1][0] = -x.z;
        Result[0][2] = -x.y;
        Result[2][0] = x.y;
        Result[1][2] = x.x;
        Result[2][1] = -x.x;
        return Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> matrixCross4GTX(const detail::_xvec3<T>& x)
    {
        detail::_xmat4<T> Result(T(0));
        Result[0][1] = x.z;
        Result[1][0] = -x.z;
        Result[0][2] = -x.y;
        Result[2][0] = x.y;
        Result[1][2] = x.x;
        Result[2][1] = -x.x;
        return Result;
    }
}
