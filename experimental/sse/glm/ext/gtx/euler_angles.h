///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2007-08-14
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/euler_angles.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_double
// - GLM_GTX_half
///////////////////////////////////////////////////////////////////////////////////////////////////
// ToDo:
// - mat2 mat2GTX(const vec2& angles) undefined
// - mat3 mat3GTX(const vec2& angles) undefined
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_euler_angles__
#define __glm_gtx_euler_angles__

// Dependency:
#include "../../glm.h"
#include "../gtx/double.h"

namespace glm
{
    template <typename T> detail::_xmat2<T> orientate2GTX(const T angle);						//!< \brief Creates a 2 * 2 rotation matrix from angle (from GLM_GTX_euler_angles extension)
    template <typename T> detail::_xmat3<T> orientate3GTX(const T angle);						//!< \brief Creates a 3 * 3 rotation matrix from angle (from GLM_GTX_euler_angles extension)
    template <typename T> detail::_xmat3<T> orientate3GTX(const detail::_xvec3<T>& angles);     //!< \brief Creates a 3 * 3 rotation matrix from angles (from GLM_GTX_euler_angles extension)
    template <typename T> detail::_xmat4<T> orientate4GTX(const detail::_xvec3<T>& angles);     //!< \brief Creates a 4 * 4 rotation matrix from angles (from GLM_GTX_euler_angles extension)

    namespace gtx
    {
		//! GLM_GTX_euler_angles extension: Build matrices from euler angles.
		namespace euler_angles
		{
			template <typename T> inline detail::_xmat2<T> orientate2(const T angle){return orientate2GTX(angle);}						//!< \brief Creates a 2 * 2 rotation matrix from angle (from GLM_GTX_euler_angles extension)
			template <typename T> inline detail::_xmat3<T> orientate3(const T angle){return orientate3GTX(angle);}						//!< \brief Creates a 3 * 3 rotation matrix from angle (from GLM_GTX_euler_angles extension)
			template <typename T> inline detail::_xmat3<T> orientate3(const detail::_xvec3<T>& angles){return orientate3GTX(angles);}   //!< \brief Creates a 3 * 3 rotation matrix from angles (from GLM_GTX_euler_angles extension)
			template <typename T> inline detail::_xmat4<T> orientate4(const detail::_xvec3<T>& angles){return orientate4GTX(angles);}   //!< \brief Creates a 4 * 4 rotation matrix from angles (from GLM_GTX_euler_angles extension)
		}
    }
}

#define GLM_GTX_euler_angles namespace gtx::euler_angles

#include "euler_angles.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_euler_angles;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_euler_angles__
