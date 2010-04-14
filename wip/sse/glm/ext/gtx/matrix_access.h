///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-27
// Updated : 2006-12-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_access.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_matrix_access__
#define __glm_gtx_matrix_access__

// Dependency:
#include "../../glm.h"

namespace glm
{
	template <typename genType> genType rowGTX(const genType& m, int index, const GLMrowType& x); //!< Set a specific row to a matrix (From GLM_GTX_matrix_access extension)
	template <typename genType> genType columnGTX(const genType& m, int index, const GLMcolType& x); //!< Set a specific column to a matrix (From GLM_GTX_matrix_access extension)

    namespace gtx
    {
		//! GLM_GTX_matrix_access extension: Set a column or a row of a matrix
        namespace matrix_access
        {
	        template <typename genType> inline genType row(const genType& m, int index, const GLMrowType& x){return rowGTX(m, index, x);} //!< Set a specific row to a matrix (From GLM_GTX_matrix_access extension)
	        template <typename genType> inline genType column(const genType& m, int index, const GLMcolType& x){return columnGTX(m, index, x);} //!< Set a specific column to a matrix (From GLM_GTX_matrix_access extension)
        }
    }    
}

#define GLM_GTX_matrix_access namespace gtx::matrix_access

#include "matrix_access.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_matrix_access;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_matrix_access__
