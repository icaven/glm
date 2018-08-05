/// @ref core
/// @file glm/mat4x3.hpp

#pragma once
#include "matrix_dmat4x3.hpp"
#include "matrix_dmat4x3_precision.hpp"
#include "matrix_mat4x3.hpp"
#include "matrix_mat4x3_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat4x3 = mat<4, 3, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
