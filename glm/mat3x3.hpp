/// @ref core
/// @file glm/mat3x3.hpp

#pragma once
#include "matrix_dmat3x3.hpp"
#include "matrix_dmat3x3_precision.hpp"
#include "matrix_mat3x3.hpp"
#include "matrix_mat3x3_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat3x3 = mat<3, 3, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
