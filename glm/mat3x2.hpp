/// @ref core
/// @file glm/mat3x2.hpp

#pragma once
#include "./ext/matrix_dmat3x2.hpp"
#include "./ext/matrix_dmat3x2_precision.hpp"
#include "./ext/matrix_mat3x2.hpp"
#include "./ext/matrix_mat3x2_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat3x2 = mat<3, 2, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
