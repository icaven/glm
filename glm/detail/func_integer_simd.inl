/// @ref core
/// @file glm/detail/func_integer_simd.inl

#include "../simd/integer.h"

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

namespace glm{
namespace detail
{

}//namespace detail

#	if GLM_ARCH & GLM_ARCH_AVX_BIT
	template <>
	GLM_FUNC_QUALIFIER int bitCount(uint32 x)
	{
		return _mm_popcnt_u32(x);
	}

	template <>
	GLM_FUNC_QUALIFIER int bitCount(uint64 x)
	{
		return _mm_popcnt_u64(x);
	}
#	endif

}//namespace glm

#endif//GLM_ARCH & GLM_ARCH_SSE2_BIT
