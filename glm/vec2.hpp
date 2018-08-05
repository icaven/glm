/// @ref core
/// @file glm/vec2.hpp

#pragma once
#include "vector_bvec2.hpp"
#include "vector_bvec2_precision.hpp"
#include "vector_vec2.hpp"
#include "vector_vec2_precision.hpp"
#include "vector_dvec2.hpp"
#include "vector_dvec2_precision.hpp"
#include "vector_ivec2.hpp"
#include "vector_ivec2_precision.hpp"
#include "vector_uvec2.hpp"
#include "vector_uvec2_precision.hpp"

namespace glm
{
#	if GLM_HAS_TEMPLATE_ALIASES
		template <typename T, qualifier Q = defaultp> using tvec2 = vec<2, T, Q>;
#	endif
}//namespace glm
