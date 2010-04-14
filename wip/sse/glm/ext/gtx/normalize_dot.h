//////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
//////////////////////////////////////////////////////////////////////////////////
// Created : 2007-09-28
// Updated : 2008-01-05
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/normalize_dot.h
//////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_fast_square_root
//////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_normalize_dot__
#define __glm_gtx_normalize_dot__

// Dependency:
#include "../../glm.h"
#include "../../ext/gtx/fast_square_root.h"

namespace glm
{
    template <typename T> T normalizeDotGTX(T x, T y);													//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)
    template <typename T> T normalizeDotGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);	//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)
    template <typename T> T normalizeDotGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);	//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)
    template <typename T> T normalizeDotGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);	//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)

    template <typename T> T fastNormalizeDotGTX(T x, T y);													//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)
    template <typename T> T fastNormalizeDotGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);	//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)
    template <typename T> T fastNormalizeDotGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);	//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)
    template <typename T> T fastNormalizeDotGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);	//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)

    namespace gtx
    {
		//! GLM_GTX_normalize_dot extension: Dot product of vectors that need to be normalize with a single square root.
        namespace normalize_dot
        {
			template <typename T> T normalizeDot(T x, T y){normalizeDotGTX(x, y);}			//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)
			template <typename T> T fastNormalizeDot(T x, T y){fastNormalizeDotGTX(x, y);}	//!< \brief Normalize parameters and returns the dot product of x and y, faster that dot(normalize(x), normalize(y)) (From GLM_GTX_normalize_dot extension)
        }
    }
}

#define GLM_GTX_normalize_dot namespace gtx::normalize_dot

#include "normalize_dot.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_normalize_dot;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_normalize_dot__
