///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_selection.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
/*
	template <typename genType> 
	GLMrowType rowGTX(const genType& m, int index)
	{
		GLMrowType result;
		for(typename genType::size_type i = 0; i < genType::row_size; ++i)
			result[i] = m[i][index];
		return result;
	}

	template <typename genType> 
	GLMcolType columnGTX(const genType& m, int index)
	{
		return m[index];
	}
*/
    template <typename T>
    inline detail::_xvec2<T> rowGTX(const detail::_xmat2<T>& m, int index)
    {
        return detail::_xvec2<T>(m[0][index], m[1][index]);
    }

    template <typename T>
    inline detail::_xvec3<T> rowGTX(const detail::_xmat3<T>& m, int index)
    {
        return detail::_xvec3<T>(m[0][index], m[1][index], m[2][index]);
    }

    template <typename T>
    inline detail::_xvec4<T> rowGTX(const detail::_xmat4<T>& m, int index)
    {
        return detail::_xvec4<T>(m[0][index], m[1][index], m[2][index], m[3][index]);
    }

    template <typename T>
    inline detail::_xvec2<T> columnGTX(const detail::_xmat2<T>& m, int index)
    {
        return m[index];
    }

    template <typename T>
    inline detail::_xvec3<T> columnGTX(const detail::_xmat3<T>& m, int index)
    {
        return m[index];
    }

    template <typename T>
    inline detail::_xvec4<T> columnGTX(const detail::_xmat4<T>& m, int index)
    {
        return m[index];
    }
}
