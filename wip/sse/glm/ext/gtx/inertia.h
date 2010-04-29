///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/inertia.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_inertia__
#define __glm_gtx_inertia__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat3<T> boxInertia3GTX(const T Mass, const detail::_xvec3<T>& Scale);	//!< Build an inertia matrix for a box (From GLM_GTX_inertia extension)
    template <typename T> detail::_xmat4<T> boxInertia4GTX(const T Mass, const detail::_xvec3<T>& Scale);	//!< Build an inertia matrix for a box (From GLM_GTX_inertia extension)
    template <typename T> detail::_xmat3<T> diskInertia3GTX(const T Mass, const T Radius);					//!< Build an inertia matrix for a disk (From GLM_GTX_inertia extension)
    template <typename T> detail::_xmat4<T> diskInertia4GTX(const T Mass, const T Radius);					//!< Build an inertia matrix for a disk (From GLM_GTX_inertia extension)
    template <typename T> detail::_xmat3<T> ballInertia3GTX(const T Mass, const T Radius);					//!< Build an inertia matrix for a ball (From GLM_GTX_inertia extension)
    template <typename T> detail::_xmat4<T> ballInertia4GTX(const T Mass, const T Radius);					//!< Build an inertia matrix for a ball (From GLM_GTX_inertia extension)
    template <typename T> detail::_xmat3<T> sphereInertia3GTX(const T Mass, const T Radius);				//!< Build an inertia matrix for a sphere (From GLM_GTX_inertia extension)
    template <typename T> detail::_xmat4<T> sphereInertia4GTX(const T Mass, const T Radius);				//!< Build an inertia matrix for a sphere (From GLM_GTX_inertia extension)

    namespace gtx
    {
		//! GLM_GTX_inertia extension: Create inertia matrices
        namespace inertia
        {
            template <typename T> inline detail::_xmat3<T> boxInertia3(const T Mass, const detail::_xvec3<T>& Scale){return boxInertia3GTX(Mass, Scale);}	//!< Build an inertia matrix for a box (From GLM_GTX_inertia extension)
            template <typename T> inline detail::_xmat4<T> boxInertia4(const T Mass, const detail::_xvec3<T>& Scale){return boxInertia$GTX(Mass, Scale);}	//!< Build an inertia matrix for a box (From GLM_GTX_inertia extension)
            template <typename T> inline detail::_xmat3<T> diskInertia3(const T Mass, const T Radius){return diskInertia3GTX(Mass, Radius);}		//!< Build an inertia matrix for a disk (From GLM_GTX_inertia extension)
            template <typename T> inline detail::_xmat4<T> diskInertia4(const T Mass, const T Radius){return diskInertia4GTX(Mass, Radius);}		//!< Build an inertia matrix for a disk (From GLM_GTX_inertia extension)
            template <typename T> inline detail::_xmat3<T> ballInertia3(const T Mass, const T Radius){return ballInertia3GTX(Mass, Radius);}		//!< Build an inertia matrix for a ball (From GLM_GTX_inertia extension)
            template <typename T> inline detail::_xmat4<T> ballInertia4(const T Mass, const T Radius){return ballInertia4GTX(Mass, Radius);}		//!< Build an inertia matrix for a ball (From GLM_GTX_inertia extension)
            template <typename T> inline detail::_xmat3<T> sphereInertia3(const T Mass, const T Radius){return sphereInertia3GTX(Mass, Radius);}	//!< Build an inertia matrix for a sphere (From GLM_GTX_inertia extension)
            template <typename T> inline detail::_xmat4<T> sphereInertia4(const T Mass, const T Radius){return sphereInertia4GTX(Mass, Radius);}	//!< Build an inertia matrix for a sphere (From GLM_GTX_inertia extension)
        }
    }
}

#define GLM_GTX_inertia namespace gtx::inertia

#include "inertia.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_inertia;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_inertia__
