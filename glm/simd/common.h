/// @ref simd
/// @file glm/simd/common.h

#pragma once

static const __m128 GLM_VAR_USED glm_zero = _mm_setzero_ps();
static const __m128 GLM_VAR_USED glm_one = _mm_set_ps1(1.0f);
static const __m128 GLM_VAR_USED glm_half = _mm_set_ps1(0.5f);
static const __m128 GLM_VAR_USED glm_minus_one = _mm_set_ps1(-1.0f);
static const __m128 GLM_VAR_USED glm_two = _mm_set_ps1(2.0f);
static const __m128 GLM_VAR_USED glm_three = _mm_set_ps1(3.0f);

static const __m128 GLM_VAR_USED glm_ps_2pow23 = _mm_set_ps1(8388608.0f);

//abs
GLM_FUNC_QUALIFIER __m128 glm_f32v4_abs(__m128 x)
{
	return _mm_and_ps(x, _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF)));
}

GLM_FUNC_QUALIFIER __m128i glm_i32v4_abs(__m128i x)
{
#	if GLM_ARCH & GLM_ARCH_SSSE3
		return _mm_sign_epi32(x, x);
#	else
		__m128i const sgn0 = _mm_srai_epi32(x, 31);
		__m128i const inv0 = _mm_xor_si128(x, sgn0);
		__m128i const sub0 = _mm_sub_epi32(inv0, sgn0);
		return sub0;
#	endif
}

//sign
GLM_FUNC_QUALIFIER __m128 glm_f32v4_sgn(__m128 x)
{
	__m128 const Cmp0 = _mm_cmplt_ps(x, glm_zero);
	__m128 const Cmp1 = _mm_cmpgt_ps(x, glm_zero);
	__m128 const And0 = _mm_and_ps(Cmp0, glm_minus_one);
	__m128 const And1 = _mm_and_ps(Cmp1, glm_one);
	return _mm_or_ps(And0, And1);
}

//round
GLM_FUNC_QUALIFIER __m128 glm_f32v4_rnd(__m128 x)
{
	__m128 const sgn0 = _mm_castsi128_ps(_mm_set1_epi32(static_cast<int>(0x80000000)));
	__m128 const and0 = _mm_and_ps(sgn0, x);
	__m128 const or0 = _mm_or_ps(and0, glm_ps_2pow23);
	__m128 const add0 = _mm_add_ps(x, or0);
	__m128 const sub0 = _mm_sub_ps(add0, or0);
	return sub0;
}

//floor
GLM_FUNC_QUALIFIER __m128 glm_f32v4_flr(__m128 x)
{
	__m128 const rnd0 = glm_f32v4_rnd(x);
	__m128 const cmp0 = _mm_cmplt_ps(x, rnd0);
	__m128 const and0 = _mm_and_ps(cmp0, _mm_set1_ps(1.0f));
	__m128 const sub0 = _mm_sub_ps(rnd0, and0);
	return sub0;
}

//trunc
//GLM_FUNC_QUALIFIER __m128 _mm_trc_ps(__m128 v)
//{
//	return __m128();
//}

//roundEven
GLM_FUNC_QUALIFIER __m128 glm_f32v4_rde(__m128 x)
{
	__m128 const sgn0 = _mm_castsi128_ps(_mm_set1_epi32(static_cast<int>(0x80000000)));
	__m128 const and0 = _mm_and_ps(sgn0, x);
	__m128 const or0 = _mm_or_ps(and0, glm_ps_2pow23);
	__m128 const add0 = _mm_add_ps(x, or0);
	__m128 const sub0 = _mm_sub_ps(add0, or0);
	return sub0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_ceil(__m128 x)
{
	__m128 const rnd0 = glm_f32v4_rnd(x);
	__m128 const cmp0 = _mm_cmpgt_ps(x, rnd0);
	__m128 const and0 = _mm_and_ps(cmp0, _mm_set1_ps(1.0f));
	__m128 const add0 = _mm_add_ps(rnd0, and0);
	return add0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_frc(__m128 x)
{
	__m128 const flr0 = glm_f32v4_flr(x);
	__m128 const sub0 = _mm_sub_ps(x, flr0);
	return sub0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_mod(__m128 x, __m128 y)
{
	__m128 const div0 = _mm_div_ps(x, y);
	__m128 const flr0 = glm_f32v4_flr(div0);
	__m128 const mul0 = _mm_mul_ps(y, flr0);
	__m128 const sub0 = _mm_sub_ps(x, mul0);
	return sub0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_clp(__m128 v, __m128 minVal, __m128 maxVal)
{
	__m128 const min0 = _mm_min_ps(v, maxVal);
	__m128 const max0 = _mm_max_ps(min0, minVal);
	return max0;
}

GLM_FUNC_QUALIFIER __m128 glm_f32v4_mix(__m128 v1, __m128 v2, __m128 a)
{
	__m128 const sub0 = _mm_sub_ps(_mm_set1_ps(1.0f), a);
	__m128 const mul0 = _mm_mul_ps(v1, sub0);
	__m128 const mul1 = _mm_mul_ps(v2, a);
	__m128 const add0 = _mm_add_ps(mul0, mul1);
	return add0;
}

//step
GLM_FUNC_QUALIFIER __m128 glm_f32v4_stp(__m128 edge, __m128 x)
{
	__m128 const cmp = _mm_cmple_ps(x, edge);
	return _mm_movemask_ps(cmp) == 0 ? _mm_set1_ps(1.0f) : _mm_set1_ps(0.0f);
}

// smoothstep
GLM_FUNC_QUALIFIER __m128 glm_f32v4_ssp(__m128 edge0, __m128 edge1, __m128 x)
{
	__m128 const sub0 = _mm_sub_ps(x, edge0);
	__m128 const sub1 = _mm_sub_ps(edge1, edge0);
	__m128 const div0 = _mm_sub_ps(sub0, sub1);
	__m128 const clp0 = glm_f32v4_clp(div0, _mm_set1_ps(0.0f), _mm_set1_ps(1.0f));
	__m128 const mul0 = _mm_mul_ps(glm_two, clp0);
	__m128 const sub2 = _mm_sub_ps(glm_three, mul0);
	__m128 const mul1 = _mm_mul_ps(clp0, clp0);
	__m128 const mul2 = _mm_mul_ps(mul1, sub2);
	return mul2;
}

// Agner Fog method
GLM_FUNC_QUALIFIER __m128 glm_f32v4_nan(__m128 x)
{
	__m128i const t1 = _mm_castps_si128(x);						// reinterpret as 32-bit integer
	__m128i const t2 = _mm_sll_epi32(t1, _mm_cvtsi32_si128(1));	// shift out sign bit
	__m128i const t3 = _mm_set1_epi32(0xFF000000);				// exponent mask
	__m128i const t4 = _mm_and_si128(t2, t3);					// exponent
	__m128i const t5 = _mm_andnot_si128(t3, t2);				// fraction
	__m128i const Equal = _mm_cmpeq_epi32(t3, t4);
	__m128i const Nequal = _mm_cmpeq_epi32(t5, _mm_set1_epi32(0));
	__m128i const And = _mm_and_si128(Equal, Nequal);
	return _mm_castsi128_ps(And);								// exponent = all 1s and fraction != 0
}

// Agner Fog method
GLM_FUNC_QUALIFIER __m128 glm_f32v4_inf(__m128 x)
{
	__m128i const t1 = _mm_castps_si128(x);											// reinterpret as 32-bit integer
	__m128i const t2 = _mm_sll_epi32(t1, _mm_cvtsi32_si128(1));						// shift out sign bit
	return _mm_castsi128_ps(_mm_cmpeq_epi32(t2, _mm_set1_epi32(0xFF000000)));		// exponent is all 1s, fraction is 0
}

// SSE scalar reciprocal sqrt using rsqrt op, plus one Newton-Rhaphson iteration
// By Elan Ruskin, http://assemblyrequired.crashworks.org/
GLM_FUNC_QUALIFIER __m128 glm_f32v1_sqrt_wip(__m128 x)
{
	__m128 const Rcp0 = _mm_rsqrt_ss(x);  // "estimate" opcode
	__m128 const Mul0 = _mm_mul_ss(_mm_set1_ps(0.5f), Rcp0);
	__m128 const Mul1 = _mm_mul_ss(Rcp0, Rcp0);
	__m128 const Mul2 = _mm_mul_ss(x, Mul1);
	__m128 const Sub0 = _mm_sub_ss(_mm_set1_ps(3.0f), Mul2);
	__m128 const Mul3 = _mm_mul_ss(Mul0, Sub0);
	return Mul3;
}

// SSE scalar reciprocal sqrt using rsqrt op, plus one Newton-Rhaphson iteration
// By Elan Ruskin, http://assemblyrequired.crashworks.org/
GLM_FUNC_QUALIFIER __m128 glm_f32v4_sqrt_wip(__m128 x)
{
	__m128 const Rcp0 = _mm_rsqrt_ps(x);  // "estimate" opcode
	__m128 const Mul0 = _mm_mul_ps(_mm_set1_ps(0.5f), Rcp0);
	__m128 const Mul1 = _mm_mul_ps(Mul0, Mul0);
	__m128 const Mul2 = _mm_mul_ps(x, Mul1);
	__m128 const Sub0 = _mm_sub_ps(_mm_set1_ps(3.0f), Mul2);
	__m128 const Mul3 = _mm_mul_ps(Mul0, Sub0);
	return Mul3;
}

