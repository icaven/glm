/// @ref core
/// @file glm/vec3.hpp

#pragma once
#include "vector_bvec3.hpp"
#include "vector_bvec3_precision.hpp"
#include "vector_vec3.hpp"
#include "vector_vec3_precision.hpp"
#include "vector_dvec3.hpp"
#include "vector_dvec3_precision.hpp"
#include "vector_ivec3.hpp"
#include "vector_ivec3_precision.hpp"
#include "vector_uvec3.hpp"
#include "vector_uvec3_precision.hpp"

namespace glm
{
#	if GLM_HAS_TEMPLATE_ALIASES
		template <typename T, qualifier Q = defaultp> using tvec3 = vec<3, T, Q>;
#	endif
}//namespace glm

