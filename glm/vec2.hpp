/// @ref core
/// @file glm/vec2.hpp

#pragma once
#include "./ext/vector_bvec2.hpp"
#include "./ext/vector_bvec2_precision.hpp"
#include "./ext/vector_vec2.hpp"
#include "./ext/vector_vec2_precision.hpp"
#include "./ext/vector_dvec2.hpp"
#include "./ext/vector_dvec2_precision.hpp"
#include "./ext/vector_ivec2.hpp"
#include "./ext/vector_ivec2_precision.hpp"
#include "./ext/vector_uvec2.hpp"
#include "./ext/vector_uvec2_precision.hpp"

namespace glm
{
#	if GLM_HAS_TEMPLATE_ALIASES
		template <typename T, qualifier Q = defaultp> using tvec2 = vec<2, T, Q>;
#	endif
}//namespace glm
