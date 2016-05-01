namespace glm{
namespace detail
{
#if(GLM_COMPILER & GLM_COMPILER_VC)
#pragma warning(push)
#pragma warning(disable : 4510 4512 4610)
#endif

	union ieee754_QNAN
	{
		const float f;
		struct i
		{
			const unsigned int mantissa:23, exp:8, sign:1;
		};

		ieee754_QNAN() : f(0.0)/*, mantissa(0x7FFFFF), exp(0xFF), sign(0x0)*/ {}
	};

#if(GLM_COMPILER & GLM_COMPILER_VC)
#pragma warning(pop)
#endif

	static const __m128 GLM_VAR_USED zero = _mm_setzero_ps();
	static const __m128 GLM_VAR_USED one = _mm_set_ps1(1.0f);
	static const __m128 GLM_VAR_USED minus_one = _mm_set_ps1(-1.0f);
	static const __m128 GLM_VAR_USED two = _mm_set_ps1(2.0f);
	static const __m128 GLM_VAR_USED three = _mm_set_ps1(3.0f);

	static const ieee754_QNAN absMask;
	static const __m128 GLM_VAR_USED abs4Mask = _mm_set_ps1(absMask.f);
	static const __m128 GLM_VAR_USED _epi32_sign_mask = _mm_castsi128_ps(_mm_set1_epi32(static_cast<int>(0x80000000)));
	static const __m128 GLM_VAR_USED _ps_2pow23 = _mm_set_ps1(8388608.0f);
	static const __m128 GLM_VAR_USED _ps_1 = _mm_set_ps1(1.0f);

	GLM_FUNC_QUALIFIER __m128 abs_ps(__m128 x)
	{
		return _mm_and_ps(abs4Mask, x);
	}

	//sign
	GLM_FUNC_QUALIFIER __m128 sgn_ps(__m128 x)
	{
		__m128 Neg = _mm_set1_ps(-1.0f);
		__m128 Pos = _mm_set1_ps(1.0f);

		__m128 Cmp0 = _mm_cmplt_ps(x, zero);
		__m128 Cmp1 = _mm_cmpgt_ps(x, zero);

		__m128 And0 = _mm_and_ps(Cmp0, Neg);
		__m128 And1 = _mm_and_ps(Cmp1, Pos);

		return _mm_or_ps(And0, And1);
	}

	//round
	GLM_FUNC_QUALIFIER __m128 rnd_ps(__m128 x)
	{
		__m128 and0 = _mm_and_ps(_epi32_sign_mask, x);
		__m128 or0 = _mm_or_ps(and0, _ps_2pow23);
		__m128 add0 = _mm_add_ps(x, or0);
		__m128 sub0 = _mm_sub_ps(add0, or0);
		return sub0;
	}

	//floor
	GLM_FUNC_QUALIFIER __m128 flr_ps(__m128 x)
	{
		__m128 rnd0 = rnd_ps(x);
		__m128 cmp0 = _mm_cmplt_ps(x, rnd0);
		__m128 and0 = _mm_and_ps(cmp0, glm::detail::_ps_1);
		__m128 sub0 = _mm_sub_ps(rnd0, and0);
		return sub0;
	}

	//trunc
	//GLM_FUNC_QUALIFIER __m128 _mm_trc_ps(__m128 v)
	//{
	//	return __m128();
	//}

	//roundEven
	GLM_FUNC_QUALIFIER __m128 rde_ps(__m128 x)
	{
		__m128 and0 = _mm_and_ps(_epi32_sign_mask, x);
		__m128 or0 = _mm_or_ps(and0, _ps_2pow23);
		__m128 add0 = _mm_add_ps(x, or0);
		__m128 sub0 = _mm_sub_ps(add0, or0);
		return sub0;
	}

	GLM_FUNC_QUALIFIER __m128 ceil_ps(__m128 x)
	{
		__m128 rnd0 = rnd_ps(x);
		__m128 cmp0 = _mm_cmpgt_ps(x, rnd0);
		__m128 and0 = _mm_and_ps(cmp0, _ps_1);
		__m128 add0 = _mm_add_ps(rnd0, and0);
		return add0;
	}

	GLM_FUNC_QUALIFIER __m128 frc_ps(__m128 x)
	{
		__m128 flr0 = flr_ps(x);
		__m128 sub0 = _mm_sub_ps(x, flr0);
		return sub0;
	}

	GLM_FUNC_QUALIFIER __m128 mod_ps(__m128 x, __m128 y)
	{
		__m128 div0 = _mm_div_ps(x, y);
		__m128 flr0 = flr_ps(div0);
		__m128 mul0 = _mm_mul_ps(y, flr0);
		__m128 sub0 = _mm_sub_ps(x, mul0);
		return sub0;
	}

	GLM_FUNC_QUALIFIER __m128 clp_ps(__m128 v, __m128 minVal, __m128 maxVal)
	{
		__m128 min0 = _mm_min_ps(v, maxVal);
		__m128 max0 = _mm_max_ps(min0, minVal);
		return max0;
	}

	GLM_FUNC_QUALIFIER __m128 mix_ps(__m128 v1, __m128 v2, __m128 a)
	{
		__m128 sub0 = _mm_sub_ps(one, a);
		__m128 mul0 = _mm_mul_ps(v1, sub0);
		__m128 mul1 = _mm_mul_ps(v2, a);
		__m128 add0 = _mm_add_ps(mul0, mul1);
		return add0;
	}

	//step
	GLM_FUNC_QUALIFIER __m128 stp_ps(__m128 edge, __m128 x)
	{
		__m128 cmp = _mm_cmple_ps(x, edge);
		if(_mm_movemask_ps(cmp) == 0)
			return one;
		else
			return zero;
	}

	// smoothstep
	GLM_FUNC_QUALIFIER __m128 ssp_ps(__m128 edge0, __m128 edge1, __m128 x)
	{
		__m128 sub0 = _mm_sub_ps(x, edge0);
		__m128 sub1 = _mm_sub_ps(edge1, edge0);
		__m128 div0 = _mm_sub_ps(sub0, sub1);
		__m128 clp0 = clp_ps(div0, zero, one);
		__m128 mul0 = _mm_mul_ps(two, clp0);
		__m128 sub2 = _mm_sub_ps(three, mul0);
		__m128 mul1 = _mm_mul_ps(clp0, clp0);
		__m128 mul2 = _mm_mul_ps(mul1, sub2);
		return mul2;
	}

	/// \todo
	//GLM_FUNC_QUALIFIER __m128 sse_nan_ps(__m128 x)
	//{
	//	__m128 empty;
	//	return empty;
	//}

	/// \todo
	//GLM_FUNC_QUALIFIER __m128 sse_inf_ps(__m128 x)
	//{
	//	__m128 empty;
	//	return empty;
	//}

	// SSE scalar reciprocal sqrt using rsqrt op, plus one Newton-Rhaphson iteration
	// By Elan Ruskin, http://assemblyrequired.crashworks.org/
	GLM_FUNC_QUALIFIER __m128 sqrt_wip_ss(__m128 x)
	{
		__m128 const recip = _mm_rsqrt_ss(x);  // "estimate" opcode
		__m128 const half = _mm_set_ps1(0.5f);
		__m128 const halfrecip = _mm_mul_ss(half, recip);
		__m128 const threeminus_xrr = _mm_sub_ss(three, _mm_mul_ss(x, _mm_mul_ss (recip, recip)));
		return _mm_mul_ss(halfrecip, threeminus_xrr);
	}

}//namespace detail
}//namespace glm
