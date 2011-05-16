///////////////////////////////////////////////////////////////////////////////////
//! OpenGL Mathematics (glm.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////
//! Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
//! Permission is hereby granted, free of charge, to any person obtaining a copy
//! of this software and associated documentation files (the "Software"), to deal
//! in the Software without restriction, including without limitation the rights
//! to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//! copies of the Software, and to permit persons to whom the Software is
//! furnished to do so, subject to the following conditions:
//! 
//! The above copyright notice and this permission notice shall be included in
//! all copies or substantial portions of the Software.
//! 
//! THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//! IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//! FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//! AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//! LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//! OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//! THE SOFTWARE.
///////////////////////////////////////////////////////////////////////////////////
//! \ref gtc_matrix_transform
//! \file glm/gtc/matrix_transform.hpp
//! \date 2009-04-29 / 2011-05-16
//! \author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////
//! \sa core (dependence)
//! \sa gtc_matrix_transform
//! \sa gtx_transform
//! \sa gtx_transform2
///////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtc_matrix_transform
#define glm_gtc_matrix_transform

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTC_matrix_transform extension included")
#endif

namespace glm
{
	namespace test{
		bool main_gtc_matrix_transform();
	}//namespace test

	namespace gtc{
	//! GLM_GTC_matrix_transform extension: Add transformation matrices
	namespace matrix_transform
	{
		/// \addtogroup gtc_matrix_transform
		///@{

		//! Builds a translation 4 * 4 matrix created from a vector of 3 components.
		//! \sa - gtc_matrix_transform
		//! \sa - gtx_transform:
		//! - glm::gtx::transform::translate(T x, T y, T z)
		//! - glm::gtx::transform::translate(detail::tmat4x4<T> const & m, T x, T y, T z)
		template <typename T> 
		detail::tmat4x4<T> translate(
			detail::tmat4x4<T> const & m,
			detail::tvec3<T> const & v);
		
		//! Builds a rotation 4 * 4 matrix created from an axis vector and an angle expressed in degrees. 
		//! \sa - gtc_matrix_transform
		//! \sa - gtx_transform:
		//! - \link glm::gtx::transform::rotate(T angle, T x, T y, T z) rotate(T const & angle, T const & x, T const & y, T const & z) \endlink
		//! - \link glm::gtx::transform::rotate(detail::tmat4x4<T> const & m, T angle, T x, T y, T z) rotate(mat4x4<T> const & m, T const & angle, T const & x, T const & y, T const & z) \endlink
		template <typename T> 
		detail::tmat4x4<T> rotate(
			detail::tmat4x4<T> const & m,
			T const & angle, 
			detail::tvec3<T> const & v);

		//! Builds a scale 4 * 4 matrix created from 3 scalars. 
		//! \sa - gtc_matrix_transform
		//! \sa - gtx_transform:
		//! - \link glm::gtx::transform::scale(T x, T y, T z) rotate(T const & angle, T const & x, T const & y, T const & z) \endlink
		//! - \link glm::gtx::transform::scale(detail::tmat4x4<T> const & m, T x, T y, T z) rotate(mat4x4<T> const & m, T const & angle, T const & x, T const & y, T const & z) \endlink
		template <typename T> 
		detail::tmat4x4<T> scale(
			detail::tmat4x4<T> const & m,
			detail::tvec3<T> const & v);

		//! Creates a matrix for an orthographic parallel viewing volume.
		//! \sa - gtc_matrix_transform:
		//! - \link glm::gtc::matrix_transform::ortho(T const & left, T const & right, T const & bottom, T const & top) ortho(T const & left, T const & right, T const & bottom, T const & top) \endlink
		template <typename T> 
		detail::tmat4x4<T> ortho(
			T const & left, 
			T const & right, 
			T const & bottom, 
			T const & top, 
			T const & zNear, 
			T const & zFar);

		//! Creates a matrix for projecting two-dimensional coordinates onto the screen.
		//! \sa - gtc_matrix_transform:
        //! - \link glm::gtc::matrix_transform::ortho(T const & left, T const & right, T const & bottom, T const & top, T const & zNear, T const & zFar) ortho(T const & left, T const & right, T const & bottom, T const & top, T const & zNear, T const & zFar) \endlink
		template <typename T> 
		detail::tmat4x4<T> ortho(
			T const & left, 
			T const & right, 
			T const & bottom, 
			T const & top);

		//! Creates a frustum matrix.
		//! \sa - gtc_matrix_transform
		template <typename T> 
		detail::tmat4x4<T> frustum(
			T const & left, 
			T const & right, 
			T const & bottom, 
			T const & top, 
			T const & nearVal, 
			T const & farVal);

		//! Creates a matrix for a symetric perspective-view frustum.
		//! \sa - gtc_matrix_transform
		template <typename T> 
		detail::tmat4x4<T> perspective(
			T const & fovy, 
			T const & aspect, 
			T const & zNear, 
			T const & zFar);

		//! Builds a perspective projection matrix based on a field of view
		//! \sa - gtc_matrix_transform
		template <typename valType> 
		detail::tmat4x4<valType> perspectiveFov(
			valType const & fov, 
			valType const & width, 
			valType const & height, 
			valType const & zNear, 
			valType const & zFar);

		//! Creates a matrix for a symmetric perspective-view frustum with far plane at infinite .
		//! \sa - gtc_matrix_transform
        template <typename T> 
		detail::tmat4x4<T> infinitePerspective(
			T fovy, T aspect, T zNear);

		//! Creates a matrix for a symmetric perspective-view frustum with far plane at infinite for graphics hardware that doesn't support depth clamping.
		//! \sa - gtc_matrix_transform
        template <typename T> 
		detail::tmat4x4<T> tweakedInfinitePerspective(
			T fovy, T aspect, T zNear);

		//! Map the specified object coordinates (obj.x, obj.y, obj.z) into window coordinates.
		//! \sa - gtc_matrix_transform
		template <typename T, typename U> 
		detail::tvec3<T> project(
			detail::tvec3<T> const & obj, 
			detail::tmat4x4<T> const & model, 
			detail::tmat4x4<T> const & proj, 
			detail::tvec4<U> const & viewport);

		//! Map the specified window coordinates (win.x, win.y, win.z) into object coordinates.
		//! \sa - gtc_matrix_transform
		template <typename T, typename U> 
		detail::tvec3<T> unProject(
			detail::tvec3<T> const & win, 
			detail::tmat4x4<T> const & model, 
			detail::tmat4x4<T> const & proj, 
			detail::tvec4<U> const & viewport);

		//! Define a picking region
		//! \sa - gtc_matrix_transform
		template <typename T, typename U> 
		detail::tmat4x4<T> pickMatrix(
			detail::tvec2<T> const & center, 
			detail::tvec2<T> const & delta, 
			detail::tvec4<U> const & viewport);

		//! Build a look at view matrix.
		//! \sa - gtc_matrix_transform:
		//! - \link frustum(T const & left, T const & right, T const & bottom, T const & top, T const & nearVal, T const & farVal) frustum(T const & left, T const & right, T const & bottom, T const & top, T const & nearVal, T const & farVal)\endlink 
		//! \param eye Position of the camera
		//! \param center Position where the camera is looking at
		//! \param up Normalized up vector, how the camera is oriented. Typically (0, 0, 1)
		template <typename T> 
		detail::tmat4x4<T> lookAt(
			detail::tvec3<T> const & eye, 
			detail::tvec3<T> const & center, 
			detail::tvec3<T> const & up);

		///@}
	}//namespace matrix_transform
	}//namespace gtc
}//namespace glm

#include "matrix_transform.inl"

namespace glm{using namespace gtc::matrix_transform;}

#endif//glm_gtc_matrix_transform
