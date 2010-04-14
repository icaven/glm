///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_projection.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_matrix_projection__
#define __glm_gtx_matrix_projection__

// Dependency:
#include "../../glm.h"

namespace glm
{
	template <typename T> detail::_xmat4<T> ortho2DGTX(T left, T right, T bottom, T top);                                                                               //!< \brief Creates a matrix for projecting two-dimensional coordinates onto the screen (from GLM_GTX_matrix_projection extension)
    template <typename T> detail::_xmat4<T> ortho3DGTX(T left, T right, T bottom, T top, T zNear, T zFar);                                                              //!< \brief Creates a matrix for an orthographic parallel viewing volume (from GLM_GTX_matrix_projection extension)
    template <typename T> detail::_xmat4<T> perspectiveGTX(T fovy, T aspect, T zNear, T zFar);                                                                          //!< \brief Creates a matrix for a symmetric perspective-view frustum (from GLM_GTX_matrix_projection extension)
    template <typename T> detail::_xmat4<T> infinitePerspectiveGTX(T fovy, T aspect, T zNear);                                                                          //!< \brief Creates a matrix for a symmetric perspective-view frustum with far plane at infinite (from GLM_GTX_matrix_projection extension)
    template <typename T> detail::_xmat4<T> tweakedInfinitePerspectiveGTX(T fovy, T aspect, T zNear);                                                                   //!< \brief Creates a matrix for a symmetric perspective-view frustum with far plane at infinite for graphics hardware that doesn't support depth clamping (from GLM_GTX_matrix_projection extension)
    template <typename T, typename U> detail::_xvec3<T> projectGTX(const detail::_xvec3<T>& obj, const detail::_xmat4<T>& model, const detail::_xmat4<T>& proj, const detail::_xvec4<U>& viewport);     //!< \brief Map the specified object coordinates (obj.x, obj.y, obj.z) into window coordinates (from GLM_GTX_matrix_projection extension)
    template <typename T, typename U> detail::_xvec3<T> unProjectGTX(const detail::_xvec3<T>& win, const detail::_xmat4<T>& model, const detail::_xmat4<T>& proj, const detail::_xvec4<U>& viewport);   //!< \brief Map the specified window coordinates (win.x, win.y, win.z) into object coordinates (from GLM_GTX_matrix_projection extension)

    namespace gtx
    {
		//! GLM_GTX_matrix_projection: Varius ways to build and operate on projection matrices
        namespace matrix_projection
        {
            template <typename T> inline detail::_xmat4<T> ortho2D(T left, T right, T bottom, T top){return ortho2DGTX(left, right, bottom, top);}                                                                              //!< \brief Creates a matrix for projecting two-dimensional coordinates onto the screen (from GLM_GTX_matrix_projection extension)
            template <typename T> inline detail::_xmat4<T> ortho3D(T left, T right, T bottom, T top, T zNear, T zFar){return ortho2DGTX(left, right, bottom, top, zNear, zFar);}                                                //!< \brief Creates a matrix for an orthographic parallel viewing volume (from GLM_GTX_matrix_projection extension)
            template <typename T> inline detail::_xmat4<T> perspective(T fovy, T aspect, T zNear, T zFar){return perspectiveGTX(fovy, aspect, zNear, zFar);}                                                                    //!< \brief Creates a matrix for a symmetric perspective-view frustum (from GLM_GTX_matrix_projection extension)
            template <typename T> inline detail::_xmat4<T> infinitePerspective(T fovy, T aspect, T zNear){return infinitePerspectiveGTX(fovy, aspect, zNear);}                                                                  //!< \brief Creates a matrix for a symmetric perspective-view frustum with far plane at infinite (from GLM_GTX_matrix_projection extension)
            template <typename T> inline detail::_xmat4<T> tweakedInfinitePerspective(T fovy, T aspect, T zNear){return tweakedInfinitePerspectiveGTX(fovy, aspect, zNear);}                                                    //!< \brief Creates a matrix for a symmetric perspective-view frustum with far plane at infinite for graphics hardware that doesn't support depth clamping (from GLM_GTX_matrix_projection extension)
            template <typename T, typename U> inline detail::_xvec3<T> project(const detail::_xvec3<T>& obj, const detail::_xmat4<T>& model, const detail::_xmat4<T>& proj, const detail::_xvec4<U>& viewport){return projectGTX(obj, model, proj, viewport);}     //!< \brief Map the specified object coordinates (obj.x, obj.y, obj.z) into window coordinates (from GLM_GTX_matrix_projection extension)
            template <typename T, typename U> inline detail::_xvec3<T> unProject(const detail::_xvec3<T>& win, const detail::_xmat4<T>& model, const detail::_xmat4<T>& proj, const detail::_xvec4<U>& viewport){return unProjectGTX(win, model, proj, viewport);} //!< \brief Map the specified window coordinates (win.x, win.y, win.z) into object coordinates (from GLM_GTX_matrix_projection extension)
        }
    }
}

#define GLM_GTX_matrix_projection namespace gtx::matrix_projection

#include "matrix_projection.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_matrix_projection;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_matrix_projection__
