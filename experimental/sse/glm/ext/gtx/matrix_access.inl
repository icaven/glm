///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-27
// Updated : 2005-12-27
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_access.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename genType>
    inline genType rowGTX(const genType& m, int index, const GLMrowType& x)
    {
        genType Result = m;
        for(typename genType::size_type i = 0; i < genType::row_size; ++i)
			Result[i][index] = x[i];
        return Result;
    }

    template <typename genType>
    inline genType columnGTX(const genType& m, int index, const GLMcolType& x)
    {
        genType Result = m;
        Result[index] = x;
        return Result;
    }
/*
    template <typename T>
    inline _xmat2<T> rowGTX(const _xmat2<T>& m, int index, const _xvec2<T>& x)
    {
        _xmat2<T> Result = m;
        Result[0][index] = x[0];
        Result[1][index] = x[1];
        return Result;
    }

    template <typename T>
    inline _xmat3<T> rowGTX(const _xmat3<T>& m, int index, const _xvec3<T>& x)
    {
        _xmat3<T> Result = m;
        Result[0][index] = x[0];
        Result[1][index] = x[1];
        Result[2][index] = x[2];
        return Result;
    }

    template <typename T>
    inline _xmat4<T> rowGTX(const _xmat4<T>& m, int index, const _xvec4<T>& x)
    {
        _xmat4<T> Result = m;
        Result[0][index] = x[0];
        Result[1][index] = x[1];
        Result[2][index] = x[2];
        Result[3][index] = x[3];
        return Result;
    }

    template <typename T>
    inline _xmat2<T> columnGTX(const _xmat2<T> & m, int index, const _xvec2<T>& x)
    {
        _xmat2<T> Result = m;
        Result[index] = x;
        return Result;
    }

    template <typename T>
    inline _xmat3<T> columnGTX(const _xmat3<T> & m, int index, const _xvec3<T>& x)
    {
        _xmat3<T> Result = m;
        Result[index] = x;
        return Result;
    }

    template <typename T>
    inline _xmat4<T> columnGTX(const _xmat4<T> & m, int index, const _xvec4<T>& x)
    {
        _xmat4<T> Result = m;
        Result[index] = x;
        return Result;
    }
*/
}
