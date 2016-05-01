namespace glm{
namespace detail
{
	GLM_FUNC_QUALIFIER __m128 dot_ps(__m128 v1, __m128 v2)
	{
		__m128 mul0 = _mm_mul_ps(v1, v2);
		__m128 swp0 = _mm_shuffle_ps(mul0, mul0, _MM_SHUFFLE(2, 3, 0, 1));
		__m128 add0 = _mm_add_ps(mul0, swp0);
		__m128 swp1 = _mm_shuffle_ps(add0, add0, _MM_SHUFFLE(0, 1, 2, 3));
		__m128 add1 = _mm_add_ps(add0, swp1);
		return add1;
	}

	GLM_FUNC_QUALIFIER __m128 dot_ss(__m128 v1, __m128 v2)
	{
		__m128 mul0 = _mm_mul_ps(v1, v2);
		__m128 mov0 = _mm_movehl_ps(mul0, mul0);
		__m128 add0 = _mm_add_ps(mov0, mul0);
		__m128 swp1 = _mm_shuffle_ps(add0, add0, 1);
		__m128 add1 = _mm_add_ss(add0, swp1);
		return add1;
	}

	template <>
	struct compute_dot<tvec4, float, simd>
	{
		GLM_FUNC_QUALIFIER static float call(tvec4<float, simd> const& x, tvec4<float, simd> const& y)
		{
			__m128 const dot0 = dot_ss(x.data, y.data);

			float Result = 0;
			_mm_store_ss(&Result, dot0);
			return Result;
		}
	};
}//namespace detail
}//namespace glm

