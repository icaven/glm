/// @ref core
/// @file glm/vec4.hpp

#pragma once
#include "vector_bvec4.hpp"
#include "vector_bvec4_precision.hpp"
#include "vector_vec4.hpp"
#include "vector_vec4_precision.hpp"
#include "vector_dvec4.hpp"
#include "vector_dvec4_precision.hpp"
#include "vector_ivec4.hpp"
#include "vector_ivec4_precision.hpp"
#include "vector_uvec4.hpp"
#include "vector_uvec4_precision.hpp"

namespace glm
{
#	if GLM_HAS_TEMPLATE_ALIASES
		template <typename T, qualifier Q = defaultp> using tvec4 = vec<4, T, Q>;
#	endif
}//namespace glm

