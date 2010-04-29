///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-11-02
// Updated : 2006-12-15
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/rotate_vector.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_rotate_vector__
#define __glm_gtx_rotate_vector__

// Dependency:
#include "../../glm.h"
#include "../gtx/transform.h"

namespace glm
{
    template <typename T> detail::_xvec2<T> rotateGTX(const detail::_xvec2<T>& v, T angle);										//!< \brief Rotate a two dimentionnals vector (from GLM_GTX_rotate_vector extension)
    template <typename T> detail::_xvec3<T> rotateGTX(const detail::_xvec3<T>& v, T angle, const detail::_xvec3<T>& normal);    //!< \brief Rotate a three dimentionnals vector around an axis (from GLM_GTX_rotate_vector extension)
    template <typename T> detail::_xvec4<T> rotateGTX(const detail::_xvec4<T>& v, T angle, const detail::_xvec3<T>& normal);    //!< \brief Rotate a four dimentionnals vector around an axis (from GLM_GTX_rotate_vector extension)
    template <typename T> detail::_xvec3<T> rotateXGTX(const detail::_xvec3<T>& v, T angle);									//!< \brief Rotate a three dimentionnals vector around the X axis (from GLM_GTX_rotate_vector extension)
    template <typename T> detail::_xvec3<T> rotateYGTX(const detail::_xvec3<T>& v, T angle);									//!< \brief Rotate a three dimentionnals vector around the Y axis (from GLM_GTX_rotate_vector extension)
    template <typename T> detail::_xvec3<T> rotateZGTX(const detail::_xvec3<T>& v, T angle);									//!< \brief Rotate a three dimentionnals vector around the Z axis (from GLM_GTX_rotate_vector extension)
    template <typename T> detail::_xvec4<T> rotateXGTX(const detail::_xvec4<T>& v, T angle);									//!< \brief Rotate a four dimentionnals vector around the X axis (from GLM_GTX_rotate_vector extension)
    template <typename T> detail::_xvec4<T> rotateYGTX(const detail::_xvec4<T>& v, T angle);									//!< \brief Rotate a four dimentionnals vector around the X axis (from GLM_GTX_rotate_vector extension)
    template <typename T> detail::_xvec4<T> rotateZGTX(const detail::_xvec4<T>& v, T angle);									//!< \brief Rotate a four dimentionnals vector around the X axis (from GLM_GTX_rotate_vector extension)
	template <typename T> detail::_xmat4<T> orientationGTX(const detail::_xvec3<T>& Normal, const detail::_xvec3<T>& Up);       //!< \brief Build a rotation matrix from a normal and a up vector (from GLM_GTX_rotate_vector extension)

    namespace gtx
    {
		//! GLM_GTX_rotate_vector extension: Function to directly rotate a vector
        namespace rotate_vector
        {
            template <typename T> inline detail::_xvec2<T> rotate(const detail::_xvec2<T>& v, T angle){return rotateGTX(v, angle);}												//!< \brief Rotate a two dimentionnals vector (from GLM_GTX_rotate_vector extension)
            template <typename T> inline detail::_xvec3<T> rotate(const detail::_xvec3<T>& v, T angle, const detail::_xvec3<T>& normal){return rotateGTX(v, angle, normal);}    //!< \brief Rotate a three dimentionnals vector around an axis (from GLM_GTX_rotate_vector extension)
            template <typename T> inline detail::_xvec4<T> rotate(const detail::_xvec4<T>& v, T angle, const detail::_xvec3<T>& normal){return rotateGTX(v, angle, normal);}    //!< \brief Rotate a four dimentionnals vector around an axis (from GLM_GTX_rotate_vector extension)
            template <typename T> inline detail::_xvec3<T> rotateX(const detail::_xvec3<T>& v, T angle){return rotateXGTX(v, angle);}											//!< \brief Rotate a three dimentionnals vector around the X axis (from GLM_GTX_rotate_vector extension)
            template <typename T> inline detail::_xvec3<T> rotateY(const detail::_xvec3<T>& v, T angle){return rotateYGTX(v, angle);}											//!< \brief Rotate a three dimentionnals vector around the Y axis (from GLM_GTX_rotate_vector extension)
            template <typename T> inline detail::_xvec3<T> rotateZ(const detail::_xvec3<T>& v, T angle){return rotateZGTX(v, angle);}											//!< \brief Rotate a three dimentionnals vector around the Z axis (from GLM_GTX_rotate_vector extension)
            template <typename T> inline detail::_xvec4<T> rotateX(const detail::_xvec4<T>& v, T angle){return rotateXGTX(v, angle);}											//!< \brief Rotate a four dimentionnals vector around the X axis (from GLM_GTX_rotate_vector extension)
            template <typename T> inline detail::_xvec4<T> rotateY(const detail::_xvec4<T>& v, T angle){return rotateYGTX(v, angle);}											//!< \brief Rotate a four dimentionnals vector around the X axis (from GLM_GTX_rotate_vector extension)
            template <typename T> inline detail::_xvec4<T> rotateZ(const detail::_xvec4<T>& v, T angle){return rotateZGTX(v, angle);}											//!< \brief Rotate a four dimentionnals vector around the X axis (from GLM_GTX_rotate_vector extension)
	        template <typename T> inline detail::_xmat4<T> orientation(const detail::_xvec3<T>& Normal, const detail::_xvec3<T>& Up){return orientationGTX(Normal, Up);}        //!< \brief Build a rotation matrix from a normal and a up vector (from GLM_GTX_rotate_vector extension)
        }
    }
}

#define GLM_GTX_rotate_vector namespace gtx::rotate_vector

#include "rotate_vector.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_rotate_vector;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_rotate_vector__
