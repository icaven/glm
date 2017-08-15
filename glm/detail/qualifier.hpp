/// @ref core
/// @file glm/detail/qualifier.hpp

#pragma once

#include "setup.hpp"

namespace glm
{
	/// Qualify GLM types in term of alignment (packed, aligned) and precision in term of ULPs (lowp, mediump, highp)
	enum qualifier
	{
		packed_highp,
		packed_mediump,
		packed_lowp,

#		if GLM_HAS_ALIGNED_TYPE
			aligned_highp,
			aligned_mediump,
			aligned_lowp,
			aligned = aligned_highp,
#		endif

		highp = packed_highp,
		mediump = packed_mediump,
		lowp = packed_lowp,
		packed = packed_highp,

#		if GLM_HAS_ALIGNED_TYPE && defined(GLM_FORCE_ALIGNED)
			defaultp = aligned_highp
#		else
			defaultp = highp
#		endif
	};

	template<length_t L, typename T, qualifier P = defaultp> struct vec;
	template<length_t C, length_t R, typename T, qualifier P = defaultp> struct mat;

namespace detail
{
	template<glm::qualifier P>
	struct is_aligned
	{
		static const bool value = false;
	};

#	if GLM_HAS_ALIGNED_TYPE
		template<>
		struct is_aligned<glm::aligned_lowp>
		{
			static const bool value = true;
		};

		template<>
		struct is_aligned<glm::aligned_mediump>
		{
			static const bool value = true;
		};

		template<>
		struct is_aligned<glm::aligned_highp>
		{
			static const bool value = true;
		};
#	endif
}//namespace detail
}//namespace glm
