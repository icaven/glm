/// @ref core
/// @file glm/mat2x3.hpp

#pragma once
#include "matrix_dmat2x3.hpp"
#include "matrix_dmat2x3_precision.hpp"
#include "matrix_mat2x3.hpp"
#include "matrix_mat2x3_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat2x3 = mat<2, 3, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
