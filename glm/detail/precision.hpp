/// @ref core
/// @file glm/detail/precision.hpp

#pragma once

namespace glm
{
	enum precision
	{
		aligned_highp,
		aligned_mediump,
		aligned_lowp,
		packed_highp,
		packed_mediump,
		packed_lowp,
		aligned = aligned_highp,
		packed = packed_highp,
		highp = packed_highp,
		mediump = packed_mediump,
		lowp = packed_lowp,
#		ifdef GLM_FORCE_ALIGNED
			defaultp = aligned_highp
#		else
			defaultp = highp
#		endif
	};

namespace detail
{
	template <glm::precision P>
	struct is_aligned
	{
		static const bool value = false;
	};

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
}//namespace detail
}//namespace glm
