///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-30
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vector_angle.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_quaternion
// - GLM_GTX_epsilon
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_vector_angle__
#define __glm_gtx_vector_angle__

// Dependency:
#include "../../glm.h"
#include "../gtx/quaternion.h"
#include "../gtx/epsilon.h"

namespace glm
{
    template <typename T> T angleGTX(const T x, const T y);												//!< Returns the absolute angle between x and y (From GLM_GTX_vector_angle extension)
    template <typename T> T angleGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);           //!< Returns the absolute angle between x and y (From GLM_GTX_vector_angle extension)
    template <typename T> T angleGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);           //!< Returns the absolute angle between x and y (From GLM_GTX_vector_angle extension)
    template <typename T> T angleGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);           //!< Returns the absolute angle between x and y (From GLM_GTX_vector_angle extension)
    template <typename T> T orientedAngleGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);   //!< Returns the oriented angle between x and y (From GLM_GTX_vector_angle extension)
    template <typename T> T orientedAngleGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);   //!< Returns the oriented angle between x and y (From GLM_GTX_vector_angle extension)
    template <typename T> T orientedAngleGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);   //!< Returns the oriented angle between x and y (From GLM_GTX_vector_angle extension)

    namespace gtx
    {
		//! GLM_GTX_vector_angle extension: Compute angle between vectors
        namespace vector_angle
        {
            template <typename T> inline T angle(const T x, const T y){return angleGTX(x, y);}													//!< Returns the absolute angle between x and y (From GLM_GTX_vector_angle extension)
            template <typename T> inline T angle(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y){return angleGTX(x, y);}				//!< Returns the absolute angle between x and y (From GLM_GTX_vector_angle extension)
            template <typename T> inline T angle(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y){return angleGTX(x, y);}				//!< Returns the absolute angle between x and y (From GLM_GTX_vector_angle extension)
            template <typename T> inline T angle(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y){return angleGTX(x, y);}				//!< Returns the absolute angle between x and y (From GLM_GTX_vector_angle extension)

	        template <typename genType> inline GLMvalType orientedAngle(const genType& x, const genType& y){return orientedAngleGTX(x, y);}		//!< Returns the oriented angle between x and y (From GLM_GTX_vector_angle extension)
        }
    }
}

#define GLM_GTX_vector_angle namespace gtx::vector_angle

#include "vector_angle.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_vector_angle;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_vector_angle__
