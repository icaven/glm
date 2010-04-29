///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-09-21
// Updated : 2007-09-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/flexible_mix.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_flexible_mix__
#define __glm_gtx_flexible_mix__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T, typename U> T mixGTX(T x, T y, U a);																							//!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using a values. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_flexible_mix extension)
    template <typename T, typename U> detail::_xvec2<T> mixGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, U a);							//!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using a values. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_flexible_mix extension)
    template <typename T, typename U> detail::_xvec3<T> mixGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, U a);							//!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using a values. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_flexible_mix extension)
    template <typename T, typename U> detail::_xvec4<T> mixGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, U a);							//!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using a values. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_flexible_mix extension)
    template <typename T, typename U> detail::_xvec2<T> mixGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<U>& a);		//!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using a values. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_flexible_mix extension)
    template <typename T, typename U> detail::_xvec3<T> mixGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<U>& a);		//!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using a values. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_flexible_mix extension)
    template <typename T, typename U> detail::_xvec4<T> mixGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<U>& a);		//!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using a values. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_flexible_mix extension)

    namespace gtx
    {
		//! GLM_GTX_flexible_mix extension: More flexible functions for linear interpolations
        namespace flexible_mix
        {
            template <typename T, typename U> T mix(T x, T y, U a){return mixGTX(x, y, a);}																//!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using a values. The value for a is not restricted to the range [0, 1]. (From GLM_GTX_flexible_mix extension)
        }
    }
}

#define GLM_GTX_flexible_mix namespace gtx::flexible_mix

#include "flexible_mix.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_flexible_mix;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_flexible_mix__
