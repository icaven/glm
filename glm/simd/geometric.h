/// @ref simd
/// @file glm/simd/geometric.h

#pragma once

#include "common.h"

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

GLM_FUNC_QUALIFIER __m128 glm_f32v4_dot(__m128 v1, __m128 v2)
{
#	if GLM_ARCH & GLM_ARCH_AVX_BIT
		return _mm_dp_ps(v1, v2, 0xff);
#	elif GLM_ARCH & GLM_ARCH_SSE3_BIT
		__m128 const mul0 = _mm_mul_ps(v1, v2);
		__m128 const hadd0 = _mm_hadd_ps(mul0, mul0);
		__m128 const hadd1 = _mm_hadd_ps(hadd0, hadd0);
		return hadd1;
#	else
		__m128 const mul0 = _mm_mul_ps(v1, v2);
		__m128 const swp0 = _mm_shuffle_ps(mul0, mul0, _MM_SHUFFLE(2, 3, 0, 1));
		__m128 const add0 = _mm_add_ps(mul0, swp0);
		__m128 const swp1 = _mm_shuffle_ps(add0, add0, _MM_SHUFFLE(0, 1, 2, 3));
		__m128 const add1 = _mm_add_ps(add0, swp1);
		return add1;
#	endif
}

GLM_FUNC_QUALIFIER __m128 glm_f32v1_dot(__m128 v1, __m128 v2)
{
#	if GLM_ARCH & GLM_ARCH_AVX_BIT
		return _mm_dp_ps(v1, v2, 0xff);
#	elif GLM_ARCH & GLM_ARCH_SSE3_BIT
		__m128 const mul0 = _mm_mul_ps(v1, v2);
		__m128 const had0 = _mm_hadd_ps(mul0, mul0);
		__m128 const had1 = _mm_hadd_ps(had0, had0);
		return Hadd1;
#	else
		__m128 const mul0 = _mm_mul_ps(v1, v2);
		__m128 const mov0 = _mm_movehl_ps(mul0, mul0);
		__m128 const add0 = _mm_add_ps(mov0, mul0);
		__m128 const swp1 = _mm_shuffle_ps(add0, add0, 1);
		__m128 const add1 = _mm_add_ss(add0, swp1);
		return add1;
#	endif
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_len(__m128 x)
{
	__m128 const dot0 = glm_f32v4_dot(x, x);
	__m128 const sqt0 = _mm_sqrt_ps(dot0);
	return sqt0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_dst(__m128 p0, __m128 p1)
{
	__m128 const sub0 = _mm_sub_ps(p0, p1);
	__m128 const len0 = glm_f32v4_len(sub0);
	return len0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_xpd(__m128 v1, __m128 v2)
{
	__m128 const swp0 = _mm_shuffle_ps(v1, v1, _MM_SHUFFLE(3, 0, 2, 1));
	__m128 const swp1 = _mm_shuffle_ps(v1, v1, _MM_SHUFFLE(3, 1, 0, 2));
	__m128 const swp2 = _mm_shuffle_ps(v2, v2, _MM_SHUFFLE(3, 0, 2, 1));
	__m128 const swp3 = _mm_shuffle_ps(v2, v2, _MM_SHUFFLE(3, 1, 0, 2));
	__m128 const mul0 = _mm_mul_ps(swp0, swp3);
	__m128 const mul1 = _mm_mul_ps(swp1, swp2);
	__m128 const sub0 = _mm_sub_ps(mul0, mul1);
	return sub0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_nrm(__m128 v)
{
	__m128 const dot0 = glm_f32v4_dot(v, v);
	__m128 const isr0 = _mm_rsqrt_ps(dot0);
	__m128 const mul0 = _mm_mul_ps(v, isr0);
	return mul0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_ffd(__m128 N, __m128 I, __m128 Nref)
{
	__m128 const dot0 = glm_f32v4_dot(Nref, I);
	__m128 const sgn0 = glm_f32v4_sgn(dot0);
	__m128 const mul0 = _mm_mul_ps(sgn0, _mm_set1_ps(-1.0f));
	__m128 const mul1 = _mm_mul_ps(N, mul0);
	return mul1;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_rfe(__m128 I, __m128 N)
{
	__m128 const dot0 = glm_f32v4_dot(N, I);
	__m128 const mul0 = _mm_mul_ps(N, dot0);
	__m128 const mul1 = _mm_mul_ps(mul0, _mm_set1_ps(2.0f));
	__m128 const sub0 = _mm_sub_ps(I, mul1);
	return sub0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_rfa(__m128 I, __m128 N, __m128 eta)
{
	__m128 const dot0 = glm_f32v4_dot(N, I);
	__m128 const mul0 = _mm_mul_ps(eta, eta);
	__m128 const mul1 = _mm_mul_ps(dot0, dot0);
	__m128 const sub0 = _mm_sub_ps(_mm_set1_ps(1.0f), mul0);
	__m128 const sub1 = _mm_sub_ps(_mm_set1_ps(1.0f), mul1);
	__m128 const mul2 = _mm_mul_ps(sub0, sub1);
	
	if(_mm_movemask_ps(_mm_cmplt_ss(mul2, _mm_set1_ps(0.0f))) == 0)
		return _mm_set1_ps(0.0f);

	__m128 const sqt0 = _mm_sqrt_ps(mul2);
	__m128 const mad0 = glm_f32v4_mad(eta, dot0, sqt0);
	__m128 const mul4 = _mm_mul_ps(mad0, N);
	__m128 const mul5 = _mm_mul_ps(eta, I);
	__m128 const sub2 = _mm_sub_ps(mul5, mul4);

	return sub2;
}

#endif//GLM_ARCH & GLM_ARCH_SSE2_BIT
