/// @ref core
/// @file glm/mat3x4.hpp

#pragma once
#include "matrix_dmat3x4.hpp"
#include "matrix_dmat3x4_precision.hpp"
#include "matrix_mat3x4.hpp"
#include "matrix_mat3x4_precision.hpp"

namespace glm
{
#if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tmat3x4 = mat<3, 4, T, Q>;
#endif//GLM_HAS_TEMPLATE_ALIASES

}//namespace glm
