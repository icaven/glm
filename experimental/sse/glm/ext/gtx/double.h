///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-03-20
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/double.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_quaternion
///////////////////////////////////////////////////////////////////////////////////////////////////
// ToDo:
// - Finish to declare extension functions
// - Nothing define
// - Study extension dependencies
///////////////////////////////////////////////////////////////////////////////////////////////////
// Note:
// - This implementation doesn't need to redefine all build-in functions to
// support double based type.
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_double__
#define __glm_gtx_double__

// Dependency:
#include "../../glm.h"
#include "../gtx/quaternion.h"

namespace glm
{
    typedef detail::_xvec2<float> __fvec2GTX;	//!< \brief Vector of 2 single-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xvec3<float> __fvec3GTX;	//!< \brief Vector of 3 single-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xvec4<float> __fvec4GTX;	//!< \brief Vector of 4 single-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xmat2<float> __fmat2GTX;	//!< \brief 2 * 2 matrix of single-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xmat3<float> __fmat3GTX;	//!< \brief 3 * 3 matrix of single-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xmat4<float> __fmat4GTX;	//!< \brief 4 * 4 matrix of single-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xquat<float> __fquatGTX;	//!< \brief quaternion of single-precision floating-point numbers. (from GLM_GTX_double extension)

    typedef detail::_xvec2<double> __dvec2GTX;	//!< \brief Vector of 2 double-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xvec3<double> __dvec3GTX;	//!< \brief Vector of 3 double-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xvec4<double> __dvec4GTX;	//!< \brief Vector of 4 double-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xmat2<double> __dmat2GTX;	//!< \brief 2 * 2 matrix of double-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xmat3<double> __dmat3GTX;	//!< \brief 3 * 3 matrix of double-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xmat4<double> __dmat4GTX;	//!< \brief 4 * 4 matrix of double-precision floating-point numbers. (from GLM_GTX_double extension)
    typedef detail::_xquat<double> __dquatGTX;	//!< \brief quaternion of double-precision floating-point numbers. (from GLM_GTX_double extension)

	namespace gtx
	{
		//! GLM_GTX_double_float extension: Add support for double precision flotting-point types
		namespace double_float
		{
			typedef detail::_xvec2<float> fvec2;	//!< \brief Vector of 2 single-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xvec3<float> fvec3;	//!< \brief Vector of 3 single-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xvec4<float> fvec4;	//!< \brief Vector of 4 single-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xmat2<float> fmat2;	//!< \brief 2 * 2 matrix of single-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xmat3<float> fmat3;	//!< \brief 3 * 3 matrix of single-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xmat4<float> fmat4;	//!< \brief 4 * 4 matrix of single-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xquat<float> fquat;	//!< \brief quaternion of single-precision floating-point numbers. (from GLM_GTX_double extension)

			typedef detail::_xvec2<double> dvec2;	//!< \brief Vector of 2 double-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xvec3<double> dvec3;	//!< \brief Vector of 3 double-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xvec4<double> dvec4;	//!< \brief Vector of 4 double-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xmat2<double> dmat2;	//!< \brief 2 * 2 matrix of double-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xmat3<double> dmat3;	//!< \brief 3 * 3 matrix of double-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xmat4<double> dmat4;	//!< \brief 4 * 4 matrix of double-precision floating-point numbers. (from GLM_GTX_double extension)
			typedef detail::_xquat<double> dquat;	//!< \brief quaternion of double-precision floating-point numbers. (from GLM_GTX_double extension)
		}
	}
}

#define GLM_GTX_double namespace gtx::double_float

#include "double.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_double;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_double__
