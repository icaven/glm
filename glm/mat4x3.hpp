/// @ref core
/// @file glm/mat4x3.hpp

#pragma once
#include "./ext/matrix_dmat4x3.hpp"
#include "./ext/matrix_dmat4x3_precision.hpp"
#include "./ext/matrix_mat4x3.hpp"
#include "./ext/matrix_mat4x3_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat4x3 = mat<4, 3, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
