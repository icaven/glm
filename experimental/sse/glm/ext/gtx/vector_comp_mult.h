///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vector_comp_mult.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////
// Note:
// mat4 m;
// vec4 v;
// ...
// vec4 Result = transposeGTX(m) * v;
// Same result as the following, but it's faster by avoiding the matrix transpose: 
// vec4 Result = vectorCompMultGTX(m, v);
///////////////////////////////////////////////////////////////////////////////////////////////////
// Note:
// - This extension is deprecated, use the operator vec* * mat* instead.
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_vector_comp_mult__
#define __glm_gtx_vector_comp_mult__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xvec2<T> vectorCompMultGTX(const detail::_xmat2<T>& x, const detail::_xvec2<T>& y); //!< - Deprecated - Returns the result of the product between the transposed 2 * 2 matrix of x and the 2 component vector y. Deprecated, prefer vec2 * mat2 operator (From GLM_GTX_vector_comp_mult extension)
    template <typename T> detail::_xvec3<T> vectorCompMultGTX(const detail::_xmat3<T>& x, const detail::_xvec3<T>& y); //!< - Deprecated - Returns the result of the product between the transposed 3 * 3 matrix of x and the 3 component vector y. Deprecated, prefer vec3 * mat3 operator (From GLM_GTX_vector_comp_mult extension)
    template <typename T> detail::_xvec4<T> vectorCompMultGTX(const detail::_xmat4<T>& x, const detail::_xvec4<T>& y); //!< - Deprecated - Returns the result of the product between the transposed 4 * 4 matrix of x and the 4 component vector y. Deprecated, prefer vec4 * mat4 operator (From GLM_GTX_vector_comp_mult extension)

    namespace gtx
    {
		//! GLM_GTX_vector_comp_mult extension: - Deprecated - Revert matrix and vector product instead with core operators
        namespace vector_comp_mult
        {
            template <typename T> inline detail::_xvec2<T> vectorCompMult(const detail::_xmat2<T>& x, const detail::_xvec2<T>& y){return vectorCompMultGTX(x, y);} //!< - Deprecated - Returns the result of the product between the transposed 2 * 2 matrix of x and the 2 component vector y. Deprecated, prefer vec2 * mat2 operator (From GLM_GTX_vector_comp_mult extension)
            template <typename T> inline detail::_xvec3<T> vectorCompMult(const detail::_xmat3<T>& x, const detail::_xvec3<T>& y){return vectorCompMultGTX(x, y);} //!< - Deprecated - Returns the result of the product between the transposed 3 * 3 matrix of x and the 3 component vector y. Deprecated, prefer vec3 * mat3 operator (From GLM_GTX_vector_comp_mult extension)
            template <typename T> inline detail::_xvec4<T> vectorCompMult(const detail::_xmat4<T>& x, const detail::_xvec4<T>& y){return vectorCompMultGTX(x, y);} //!< - Deprecated - Returns the result of the product between the transposed 4 * 4 matrix of x and the 4 component vector y. Deprecated, prefer vec4 * mat4 operator (From GLM_GTX_vector_comp_mult extension)
        }
    }
}

#define GLM_GTX_vector_comp_mult namespace gtx::vector_comp_mult

#include "vector_comp_mult.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_vector_comp_mult;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_vector_comp_mult__
