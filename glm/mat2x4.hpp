/// @ref core
/// @file glm/mat2x4.hpp

#pragma once
#include "matrix_dmat2x4.hpp"
#include "matrix_dmat2x4_precision.hpp"
#include "matrix_mat2x4.hpp"
#include "matrix_mat2x4_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat2x4 = mat<2, 4, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
