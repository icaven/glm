///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/transform2.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_transform2__
#define __glm_gtx_transform2__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat3<T> shearX2DGTX(const detail::_xmat3<T> & m, T y);		//!< /brief Transforms a matrix with a shearing on X axis (from GLM_GTX_transform2 extension)
    template <typename T> detail::_xmat3<T> shearY2DGTX(const detail::_xmat3<T> & m, T x);		//!< /brief Transforms a matrix with a shearing on Y axis (from GLM_GTX_transform2 extension)
    template <typename T> detail::_xmat4<T> shearX3DGTX(const detail::_xmat4<T> & m, T y, T z);	//!< /brief Transforms a matrix with a shearing on X axis (from GLM_GTX_transform2 extension)
    template <typename T> detail::_xmat4<T> shearY3DGTX(const detail::_xmat4<T> & m, T x, T z);	//!< /brief Transforms a matrix with a shearing on Y axis (from GLM_GTX_transform2 extension)
    template <typename T> detail::_xmat4<T> shearZ3DGTX(const detail::_xmat4<T> & m, T x, T y);	//!< /brief Transforms a matrix with a shearing on Z axis (from GLM_GTX_transform2 extension)
    //template <typename T> detail::_xmat4<T> shearGTX(const detail::_xmat4<T> & m, shearPlane, planePoint, angle)
    // Identity + tan(angle) * cross(Normal, OnPlaneVector)     0
    // - dot(PointOnPlane, normal) * OnPlaneVector              1

    // Reflect functions seem to don't work
    template <typename T> detail::_xmat3<T> reflect2DGTX(const detail::_xmat3<T> & m, const detail::_xvec3<T>& normal);
    template <typename T> detail::_xmat4<T> reflect3DGTX(const detail::_xmat4<T> & m, const detail::_xvec3<T>& normal);
    template <typename T> detail::_xmat3<T> proj2DGTX(const detail::_xmat3<T> & m, const detail::_xvec3<T>& normal);								//!< /brief Build planar projection matrix along normal axis (from GLM_GTX_transform2 extension)
    template <typename T> detail::_xmat4<T> proj3DGTX(const detail::_xmat4<T> & m, const detail::_xvec3<T>& normal);								//!< /brief Build planar projection matrix along normal axis (from GLM_GTX_transform2 extension)
    template <typename T> detail::_xmat4<T> lookAtGTX(const detail::_xvec3<T>& eye, const detail::_xvec3<T>& center, const detail::_xvec3<T>& up);	//!< /brief Build a look at view matrix (from GLM_GTX_transform2 extension)

    namespace gtx
    {
		//! GLM_GTX_transform2 extension: Add extra transformation matrices
        namespace transform2
        {
            template <typename T> inline detail::_xmat3<T> shearX2D(const detail::_xmat3<T> & m, T y){return shearX2DGTX(m, y);}			//!< /brief Transforms a matrix with a shearing on X axis (from GLM_GTX_transform2 extension)
            template <typename T> inline detail::_xmat3<T> shearY2D(const detail::_xmat3<T> & m, T x){return shearY2DGTX(m, x);}			//!< /brief Transforms a matrix with a shearing on Y axis (from GLM_GTX_transform2 extension)
            template <typename T> inline detail::_xmat4<T> shearX3D(const detail::_xmat4<T> & m, T y, T z){return shearX3DGTX(m, y, z);}	//!< /brief Transforms a matrix with a shearing on X axis (from GLM_GTX_transform2 extension)
            template <typename T> inline detail::_xmat4<T> shearY3D(const detail::_xmat4<T> & m, T x, T z){return shearY3DGTX(m, x, z);}	//!< /brief Transforms a matrix with a shearing on Y axis (from GLM_GTX_transform2 extension)
            template <typename T> inline detail::_xmat4<T> shearZ3D(const detail::_xmat4<T> & m, T x, T y){return shearZ3DGTX(m, x, y);}	//!< /brief Transforms a matrix with a shearing on Z axis (from GLM_GTX_transform2 extension)
            //template <typename T> inline detail::_xmat4<T> shear(const detail::_xmat4<T> & m, shearPlane, planePoint, angle)
            // Identity + tan(angle) * cross(Normal, OnPlaneVector)     0
            // - dot(PointOnPlane, normal) * OnPlaneVector              1

            // Reflect functions seem to don't work
            template <typename T> inline detail::_xmat3<T> reflect2D(const detail::_xmat3<T> & m, const detail::_xvec3<T>& normal){return reflect2DGTX(m, normal);}
            template <typename T> inline detail::_xmat4<T> reflect3D(const detail::_xmat4<T> & m, const detail::_xvec3<T>& normal){return reflect3DGTX(m, normal);}
            template <typename T> inline detail::_xmat3<T> proj2D(const detail::_xmat3<T> & m, const detail::_xvec3<T>& normal){return proj2DGTX(m, normal);}										//!< /brief Build planar projection matrix along normal axis (from GLM_GTX_transform2 extension)
            template <typename T> inline detail::_xmat4<T> proj3D(const detail::_xmat4<T> & m, const detail::_xvec3<T>& normal){return proj3DGTX(m, normal);}										//!< /brief Build planar projection matrix along normal axis (from GLM_GTX_transform2 extension)
            template <typename T> inline detail::_xmat4<T> lookAt(const detail::_xvec3<T>& eye, const detail::_xvec3<T>& center, const detail::_xvec3<T>& up){return lookAtGTX(eye, center, up);}	//!< /brief Build a look at view matrix (from GLM_GTX_transform2 extension)
        }
    }
}

#define GLM_GTX_transform2 namespace gtx::transform2

#include "transform2.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_transform2;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_transform2__
