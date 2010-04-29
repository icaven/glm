///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-19
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_major_storage.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_matrix_major_storage__
#define __glm_gtx_matrix_major_storage__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat2<T> rowMajor2GTX(const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2);																//!< Build a row major matrix from row vectors (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat2<T> rowMajor2GTX(const detail::_xmat2<T>& m);																							//!< Build a row major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat3<T> rowMajor3GTX(const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2, const detail::_xvec3<T>& v3);								//!< Build a row major matrix from row vectors (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat3<T> rowMajor3GTX(const detail::_xmat3<T>& m);																							//!< Build a row major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat4<T> rowMajor4GTX(const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2, const detail::_xvec4<T>& v3, const detail::_xvec4<T>& v4);   //!< Build a row major matrix from row vectors (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat4<T> rowMajor4GTX(const detail::_xmat4<T>& m);																							//!< Build a row major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)

    template <typename T> detail::_xmat2<T> colMajor2GTX(const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2);																//!< Build a column major matrix from column vectors (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat2<T> colMajor2GTX(const detail::_xmat2<T>& m);																							//!< Build a column major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat3<T> colMajor3GTX(const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2, const detail::_xvec3<T>& v3);								//!< Build a column major matrix from column vectors (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat3<T> colMajor3GTX(const detail::_xmat3<T>& m);																							//!< Build a column major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat4<T> colMajor4GTX(const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2, const detail::_xvec4<T>& v3, const detail::_xvec4<T>& v4);   //!< Build a column major matrix from column vectors (From GLM_GTX_matrix_major_storage extension)
    template <typename T> detail::_xmat4<T> colMajor4GTX(const detail::_xmat4<T>& m);																							//!< Build a column major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)

    namespace gtx
    {
		//! GLM_GTX_matrix_cross_product: Build matrices with specific matrix order, row or column
        namespace matrix_major_storage
        {
            template <typename T> inline detail::_xmat2<T> rowMajor2(const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2){return rowMajor2GTX(v1, v2);}																	//!< Build a row major matrix from row vectors (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat2<T> rowMajor2(const detail::_xmat2<T>& m){return rowMajor2GTX(m);}																										//!< Build a row major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat3<T> rowMajor3(const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2, const detail::_xvec3<T>& v3){return rowMajor3GTX(v1, v2, v3);}									//!< Build a row major matrix from row vectors (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat3<T> rowMajor3(const detail::_xmat3<T>& m){return rowMajor3GTX(m);}																										//!< Build a row major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat4<T> rowMajor4(const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2, const detail::_xvec4<T>& v3, const detail::_xvec4<T>& v4){return rowMajor4GTX(v1, v2, v3, v4);}  //!< Build a row major matrix from row vectors (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat4<T> rowMajor4(const detail::_xmat4<T>& m){return rowMajor4GTX(m);}																										//!< Build a row major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)

            template <typename T> inline detail::_xmat2<T> colMajor2(const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2){return colMajor2GTX(v1, v2);}																	//!< Build a column major matrix from column vectors (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat2<T> colMajor2(const detail::_xmat2<T>& m){return colMajor2GTX(m);}																										//!< Build a column major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat3<T> colMajor3(const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2, const detail::_xvec3<T>& v3){return colMajor2GTX(v1, v2, v3);}									//!< Build a column major matrix from column vectors (From GLM_GTX_matrix_major_storage extension)                   
            template <typename T> inline detail::_xmat3<T> colMajor3(const detail::_xmat3<T>& m){return colMajor3GTX(m);}																										//!< Build a column major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat4<T> colMajor4(const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2, const detail::_xvec4<T>& v3, const detail::_xvec4<T>& v4){return colMajor2GTX(v1, v2, v3, v4);}  //!< Build a column major matrix from column vectors (From GLM_GTX_matrix_major_storage extension)
            template <typename T> inline detail::_xmat4<T> colMajor4(const detail::_xmat4<T>& m){return colMajor4GTX(m);}																										//!< Build a column major matrix from other matrix (From GLM_GTX_matrix_major_storage extension)
        }
    }
}

#define GLM_GTX_matrix_major_storage namespace gtx::matrix_major_storage

#include "matrix_major_storage.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_matrix_major_storage;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_matrix_major_storage__
