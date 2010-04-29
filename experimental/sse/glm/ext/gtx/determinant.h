///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/determinant.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_determinant__
#define __glm_gtx_determinant__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> T determinantGTX(const detail::_xmat2<T>& m); //!< \brief Returns the determinant of a 2 * 2 matrix. (From GLM_GTX_determinant extension)
    template <typename T> T determinantGTX(const detail::_xmat3<T>& m); //!< \brief Returns the determinant of a 3 * 3 matrix. (From GLM_GTX_determinant extension)
    template <typename T> T determinantGTX(const detail::_xmat4<T>& m); //!< \brief Returns the determinant of a 4 * 4 matrix. (From GLM_GTX_determinant extension)

	namespace gtx
	{
		//! GLM_GTX_determinant extension: Compute the determinant of a matrix
		namespace determinant
		{
			template <typename T> inline T determinant(const detail::_xmat2<T>& m){return determinantGTX(m);} //!< \brief Returns the determinant of a 2 * 2 matrix. (From GLM_GTX_determinant extension)
			template <typename T> inline T determinant(const detail::_xmat3<T>& m){return determinantGTX(m);} //!< \brief Returns the determinant of a 3 * 3 matrix. (From GLM_GTX_determinant extension)
			template <typename T> inline T determinant(const detail::_xmat4<T>& m){return determinantGTX(m);} //!< \brief Returns the determinant of a 4 * 4 matrix. (From GLM_GTX_determinant extension)
		}
	}
}

#define GLM_GTX_determinant namespace gtx::determinant

#include "determinant.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_determinant;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_determinant__
