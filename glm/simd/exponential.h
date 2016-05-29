/// @ref simd
/// @file glm/simd/experimental.h

#pragma once

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

// SSE scalar reciprocal sqrt using rsqrt op, plus one Newton-Rhaphson iteration
// By Elan Ruskin, http://assemblyrequired.crashworks.org/
GLM_FUNC_QUALIFIER __m128 glm_f32v1_sqrt_lowp(__m128 x)
{
	return _mm_mul_ss(_mm_rsqrt_ss(x), x);
}

// SSE scalar reciprocal sqrt using rsqrt op, plus one Newton-Rhaphson iteration
// By Elan Ruskin, http://assemblyrequired.crashworks.org/
GLM_FUNC_QUALIFIER __m128 glm_f32v4_sqrt_lowp(__m128 x)
{
	return _mm_mul_ps(_mm_rsqrt_ps(x), x);
}

#endif//GLM_ARCH & GLM_ARCH_SSE2_BIT
