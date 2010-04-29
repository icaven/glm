///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_selection.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_matrix_selection__
#define __glm_gtx_matrix_selection__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xvec2<T> rowGTX(const detail::_xmat2<T>& m, int index);		//!< \brief Returns a 2 components vector that contains the row of the matrix m witch values is the ones of the row index (from GLM_GTX_matrix_selection extension)
    template <typename T> detail::_xvec3<T> rowGTX(const detail::_xmat3<T>& m, int index);		//!< \brief Returns a 3 components vector that contains the row of the matrix m witch values is the ones of the row index (from GLM_GTX_matrix_selection extension)
    template <typename T> detail::_xvec4<T> rowGTX(const detail::_xmat4<T>& m, int index);		//!< \brief Returns a 4 components vector that contains the row of the matrix m witch values is the ones of the row index (from GLM_GTX_matrix_selection extension)
    template <typename T> detail::_xvec2<T> columnGTX(const detail::_xmat2<T>& m, int index);	//!< \brief Returns a 2 components vector that contains the row of the matrix m witch values is the ones of the column index (from GLM_GTX_matrix_selection extension)
    template <typename T> detail::_xvec3<T> columnGTX(const detail::_xmat3<T>& m, int index);	//!< \brief Returns a 3 components vector that contains the row of the matrix m witch values is the ones of the column index (from GLM_GTX_matrix_selection extension)
    template <typename T> detail::_xvec4<T> columnGTX(const detail::_xmat4<T>& m, int index);	//!< \brief Returns a 4 components vector that contains the row of the matrix m witch values is the ones of the column index (from GLM_GTX_matrix_selection extension)

    namespace gtx
    {
		//! GLM_GTX_matrix_selection extension: Access to matrix columns or rows.
        namespace matrix_selection
        {
            template <typename T> detail::_xvec2<T> row(const detail::_xmat2<T>& m, int index){return rowGTX(m, index);}		//!< \brief Returns a 2 components vector that contains the row of the matrix m witch values is the ones of the row index (from GLM_GTX_matrix_selection extension)
            template <typename T> detail::_xvec3<T> row(const detail::_xmat3<T>& m, int index){return rowGTX(m, index);}		//!< \brief Returns a 3 components vector that contains the row of the matrix m witch values is the ones of the row index (from GLM_GTX_matrix_selection extension)
            template <typename T> detail::_xvec4<T> row(const detail::_xmat4<T>& m, int index){return rowGTX(m, index);}		//!< \brief Returns a 4 components vector that contains the row of the matrix m witch values is the ones of the row index (from GLM_GTX_matrix_selection extension)
            template <typename T> detail::_xvec2<T> column(const detail::_xmat2<T>& m, int index){return columnGTX(m, index);}	//!< \brief Returns a 2 components vector that contains the row of the matrix m witch values is the ones of the column index (from GLM_GTX_matrix_selection extension)
            template <typename T> detail::_xvec3<T> column(const detail::_xmat3<T>& m, int index){return columnGTX(m, index);}	//!< \brief Returns a 3 components vector that contains the row of the matrix m witch values is the ones of the column index (from GLM_GTX_matrix_selection extension)
            template <typename T> detail::_xvec4<T> column(const detail::_xmat4<T>& m, int index){return columnGTX(m, index);}	//!< \brief Returns a 4 components vector that contains the row of the matrix m witch values is the ones of the column index (from GLM_GTX_matrix_selection extension)
        }
    }
}

#define GLM_GTX_matrix_selection namespace gtx::matrix_selection

#include "matrix_selection.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_matrix_selection;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_matrix_selection__
