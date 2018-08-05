/// @ref core
/// @file glm/mat4x2.hpp

#pragma once
#include "matrix_dmat4x2.hpp"
#include "matrix_dmat4x2_precision.hpp"
#include "matrix_mat4x2.hpp"
#include "matrix_mat4x2_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat4x2 = mat<4, 2, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
