/// @ref core
/// @file glm/mat2x2.hpp

#pragma once
#include "./ext/matrix_dmat2x2.hpp"
#include "./ext/matrix_dmat2x2_precision.hpp"
#include "./ext/matrix_mat2x2.hpp"
#include "./ext/matrix_mat2x2_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat2x2 = mat<2, 2, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
