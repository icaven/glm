/// @ref core
/// @file glm/vec1.hpp

#pragma once
#include "vector_bvec1.hpp"
#include "vector_bvec1_precision.hpp"
#include "vector_vec1.hpp"
#include "vector_vec1_precision.hpp"
#include "vector_dvec1.hpp"
#include "vector_dvec1_precision.hpp"
#include "vector_ivec1.hpp"
#include "vector_ivec1_precision.hpp"
#include "vector_uvec1.hpp"
#include "vector_uvec1_precision.hpp"

namespace glm
{
#	if GLM_HAS_TEMPLATE_ALIASES
	template <typename T, qualifier Q = defaultp> using tvec1 = vec<1, T, Q>;
#	endif
}//namespace glm
