///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/norm.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_quaternion
// - GLM_GTX_double
///////////////////////////////////////////////////////////////////////////////////////////////////
// ToDo:
// - Study the validity of the notion of length2 to quaternion
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_norm__
#define __glm_gtx_norm__

// Dependency:
#include "../../glm.h"
#include "../gtx/double.h"
#include "../gtx/quaternion.h"

namespace glm
{
    template <typename T> T length2GTX(const T x);												//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
    template <typename T> T length2GTX(const detail::_xvec2<T>& x);								//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
    template <typename T> T length2GTX(const detail::_xvec3<T>& x);								//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
    template <typename T> T length2GTX(const detail::_xvec4<T>& x);								//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
    template <typename T> T length2GTX(const detail::_xquat<T>& q);								//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
    template <typename T> T l1NormGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);	//!< \brief Returns the L1 norm between x and y (from GLM_GTX_norm extension)

    namespace gtx
    {
		//! GLM_GTX_norm extension: Varius way to compute vector norms.
        namespace norm
        {
            template <typename T> inline T length2(const T x){return length2GTX(x);}												//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
            template <typename T> inline T length2(const detail::_xvec2<T>& x){return length2GTX(x);}								//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
            template <typename T> inline T length2(const detail::_xvec3<T>& x){return length2GTX(x);}								//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
            template <typename T> inline T length2(const detail::_xvec4<T>& x){return length2GTX(x);}								//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
            template <typename T> inline T length2(const detail::_xquat<T>& q){return length2GTX(q);}								//!< \brief Returns the squared length of x (from GLM_GTX_norm extension)
            template <typename T> inline T l1Norm(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y){return l1NormGTX(x, y);}  //!< \brief Returns the L1 norm between x and y (from GLM_GTX_norm extension)
        }
    }
}

#define GLM_GTX_norm namespace gtx::norm

#include "norm.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_norm;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_norm__
