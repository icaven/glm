/// @ref core
/// @file glm/mat4x4.hpp

#pragma once
#include "matrix_dmat4x4.hpp"
#include "matrix_dmat4x4_precision.hpp"
#include "matrix_mat4x4.hpp"
#include "matrix_mat4x4_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat4x4 = mat<4, 4, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
