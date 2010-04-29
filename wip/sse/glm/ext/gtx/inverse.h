///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2007-09-09
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/inverse.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_transpose
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_inverse__
#define __glm_gtx_inverse__

// Dependency:
#include "../../glm.h"
#include "../gtx/transpose.h"

namespace glm
{
    template <typename T> detail::_xmat2<T> inverseGTX(const detail::_xmat2<T>& m);             //!< Compute the inverse of a generic 2x2 matrix (From GLM_GTX_inverse extension)
    template <typename T> detail::_xmat3<T> inverseGTX(const detail::_xmat3<T>& m);             //!< Compute the inverse of a generic 3x3 matrix (From GLM_GTX_inverse extension)
    template <typename T> detail::_xmat4<T> inverseGTX(const detail::_xmat4<T>& m);             //!< Compute the inverse of a generic 4x4 matrix (From GLM_GTX_inverse extension)

    template <typename T> detail::_xmat3<T> inverseTransformGTX(const detail::_xmat3<T>& m);    //!< Compute the inverse of a transformation 4x4 matrix (From GLM_GTX_inverse extension)
    template <typename T> detail::_xmat4<T> inverseTransformGTX(const detail::_xmat4<T>& m);    //!< Compute the inverse of a transformation 4x4 matrix (From GLM_GTX_inverse extension)

//    template <typename T> detail::_xmat2<T> affineInverseGTX(const detail::_xmat2<T>& m);
//    template <typename T> detail::_xmat3<T> affineInverseGTX(const detail::_xmat3<T>& m);
//    template <typename T> detail::_xmat4<T> affineInverseGTX(const detail::_xmat4<T>& m);

	namespace gtx
	{
		//! GLM_GTX_inverse extension: Inverse matrix functions
		namespace inverse
		{
			template <typename T> detail::_xmat2<T> inverse(const detail::_xmat2<T>& m){return inverseGTX(m);}                  //!< Compute the inverse of a generic 2x2 matrix (From GLM_GTX_inverse extension)
			template <typename T> detail::_xmat3<T> inverse(const detail::_xmat3<T>& m){return inverseGTX(m);}                  //!< Compute the inverse of a generic 3x3 matrix (From GLM_GTX_inverse extension)
			template <typename T> detail::_xmat4<T> inverse(const detail::_xmat4<T>& m){return inverseGTX(m);}                  //!< Compute the inverse of a generic 4x4 matrix (From GLM_GTX_inverse extension)

            template <typename T> detail::_xmat3<T> inverseTransform(const detail::_xmat3<T>& m){return inverseTransformGTX(m);}  //!< Compute the inverse of a transformation 3x3 matrix (From GLM_GTX_inverse extension)
			template <typename T> detail::_xmat4<T> inverseTransform(const detail::_xmat4<T>& m){return inverseTransformGTX(m);}  //!< Compute the inverse of a transformation 4x4 matrix (From GLM_GTX_inverse extension)

//			template <typename T> detail::_xmat2<T> affineInverse(const detail::_xmat2<T>& m){return affineInverseGTX(m);}
//			template <typename T> detail::_xmat3<T> affineInverse(const detail::_xmat3<T>& m){return affineInverseGTX(m);}
//			template <typename T> detail::_xmat4<T> affineInverse(const detail::_xmat4<T>& m){return affineInverseGTX(m);}
        }
	}
}

#define GLM_GTX_inverse namespace gtx::inverse

#include "inverse.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_inverse;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_inverse__
