/// @ref core
/// @file glm/detail/type_tvec4_simd.inl

#if GLM_ARCH & GLM_ARCH_SSE2

namespace glm{
namespace detail
{
	template <precision P>
	struct compute_vec4_add<float, P>
	{
		static tvec4<float, P> call(tvec4<float, P> const & a, tvec4<float, P> const & b)
		{
			tvec4<float, P> Result(uninitialize);
			Result.data = _mm_add_ps(a.data, b.data);
			return Result;
		}
	};

	template <precision P>
	struct compute_vec4_sub<float, P>
	{
		static tvec4<float, P> call(tvec4<float, P> const & a, tvec4<float, P> const & b)
		{
			tvec4<float, P> Result(uninitialize);
			Result.data = _mm_sub_ps(a.data, b.data);
			return Result;
		}
	};

	template <precision P>
	struct compute_vec4_mul<float, P>
	{
		static tvec4<float, P> call(tvec4<float, P> const & a, tvec4<float, P> const & b)
		{
			tvec4<float, P> Result(uninitialize);
			Result.data = _mm_mul_ps(a.data, b.data);
			return Result;
		}
	};

	template <precision P>
	struct compute_vec4_div<float, P>
	{
		static tvec4<float, P> call(tvec4<float, P> const & a, tvec4<float, P> const & b)
		{
			tvec4<float, P> Result(uninitialize);
			Result.data = _mm_div_ps(a.data, b.data);
			return Result;
		}
	};

	template <>
	struct compute_vec4_div<float, lowp>
	{
		static tvec4<float, lowp> call(tvec4<float, lowp> const & a, tvec4<float, lowp> const & b)
		{
			tvec4<float, lowp> Result(uninitialize);
			Result.data = _mm_mul_ps(a.data, _mm_rcp_ps(b.data));
			return Result;
		}
	};

	template <typename T, precision P>
	struct compute_vec4_and<T, P, true, 32>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm_and_si128(a.data, b.data);
			return Result;
		}
	};

#	if GLM_ARCH & GLM_ARCH_AVX2
	template <typename T, precision P>
	struct compute_vec4_and<T, P, true, 64>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm_and_si256(a.data, b.data);
			return Result;
		}
	};
#	endif

	template <typename T, precision P>
	struct compute_vec4_or<T, P, true, 32>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm_or_si128(a.data, b.data);
			return Result;
		}
	};

#	if GLM_ARCH & GLM_ARCH_AVX2
	template <typename T, precision P>
	struct compute_vec4_or<T, P, true, 64>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm_or_si256(a.data, b.data);
			return Result;
		}
	};
#	endif

	template <typename T, precision P>
	struct compute_vec4_xor<T, P, true, 32>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm_xor_si128(a.data, b.data);
			return Result;
		}
	};

#	if GLM_ARCH & GLM_ARCH_AVX2
	template <typename T, precision P>
	struct compute_vec4_xor<T, P, true, 64>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm256_xor_si256(a.data, b.data);
			return Result;
		}
	};
#	endif

	template <typename T, precision P>
	struct compute_vec4_shift_left<T, P, true, 32>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm_sll_epi32(a.data, b.data);
			return Result;
		}
	};

#	if GLM_ARCH & GLM_ARCH_AVX2
	template <typename T, precision P>
	struct compute_vec4_shift_left<T, P, true, 64>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm256_sll_epi64(a.data, b.data);
			return Result;
		}
	};
#	endif

	template <typename T, precision P>
	struct compute_vec4_shift_right<T, P, true, 32>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm_srl_epi32(a.data, b.data);
			return Result;
		}
	};

#	if GLM_ARCH & GLM_ARCH_AVX2
	template <typename T, precision P>
	struct compute_vec4_shift_right<T, P, true, 64>
	{
		static tvec4<T, P> call(tvec4<T, P> const& a, tvec4<T, P> const& b)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm256_srl_epi64(a.data, b.data);
			return Result;
		}
	};
#	endif

	template <typename T, precision P>
	struct compute_vec4_bitwise_not<T, P, true, 32>
	{
		static tvec4<T, P> call(tvec4<T, P> const & v)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm_xor_si128(v.data, _mm_set1_epi32(-1));
			return Result;
		}
	};

#	if GLM_ARCH & GLM_ARCH_AVX2
	template <typename T, precision P>
	struct compute_vec4_bitwise_not<T, P, true, 64>
	{
		static tvec4<T, P> call(tvec4<T, P> const & v)
		{
			tvec4<T, P> Result(uninitialize);
			Result.data = _mm256_xor_si256(v.data, _mm_set1_epi32(-1));
			return Result;
		}
	};
#	endif

	template <precision P>
	struct compute_vec4_equal<float, P, false, 32>
	{
		static bool call(tvec4<float, P> const & v1, tvec4<float, P> const & v2)
		{
			return _mm_movemask_ps(_mm_cmpeq_ps(v1.data, v2.data)) != 0;
		}
	};

	template <precision P>
	struct compute_vec4_nequal<float, P, false, 32>
	{
		static bool call(tvec4<float, P> const & v1, tvec4<float, P> const & v2)
		{
			return _mm_movemask_ps(_mm_cmpneq_ps(v1.data, v2.data)) != 0;
		}
	};
}//namespace detail

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec4<float, simd>::tvec4()
#			ifndef GLM_FORCE_NO_CTOR_INIT
				: data(_mm_setzero_ps())
#			endif
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, lowp>::tvec4(float s) :
		data(_mm_set1_ps(s))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, mediump>::tvec4(float s) :
		data(_mm_set1_ps(s))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, highp>::tvec4(float s) :
		data(_mm_set1_ps(s))
	{}

#	if GLM_ARCH & GLM_ARCH_AVX
	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<double, lowp>::tvec4(double s) :
		data(_mm256_set1_pd(s))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<double, mediump>::tvec4(double s) :
		data(_mm256_set1_pd(s))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<double, highp>::tvec4(double s) :
		data(_mm256_set1_pd(s))
	{}
#	endif

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int32, lowp>::tvec4(int32 s) :
		data(_mm_set1_epi32(s))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int32, mediump>::tvec4(int32 s) :
		data(_mm_set1_epi32(s))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int32, highp>::tvec4(int32 s) :
		data(_mm_set1_epi32(s))
	{}

#	if GLM_ARCH & GLM_ARCH_AVX2
	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int64, lowp>::tvec4(int64 s) :
		data(_mm256_set1_epi64x(s))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int64, mediump>::tvec4(int64 s) :
		data(_mm256_set1_epi64x(s))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int64, highp>::tvec4(int64 s) :
		data(_mm256_set1_epi64x(s))
	{}
#	endif

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, lowp>::tvec4(float a, float b, float c, float d) :
		data(_mm_set_ps(d, c, b, a))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, mediump>::tvec4(float a, float b, float c, float d) :
		data(_mm_set_ps(d, c, b, a))
	{}

	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, highp>::tvec4(float a, float b, float c, float d) :
		data(_mm_set_ps(d, c, b, a))
	{}

	template <>
	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int32, lowp>::tvec4(int32 a, int32 b, int32 c, int32 d) :
		data(_mm_set_epi32(d, c, b, a))
	{}

	template <>
	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int32, mediump>::tvec4(int32 a, int32 b, int32 c, int32 d) :
		data(_mm_set_epi32(d, c, b, a))
	{}

	template <>
	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<int32, highp>::tvec4(int32 a, int32 b, int32 c, int32 d) :
		data(_mm_set_epi32(d, c, b, a))
	{}
/*
	template <>
	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, lowp>::tvec4(int32 a, int32 b, int32 c, int32 d) :
		data(_mm_castsi128_ps(_mm_set_epi32(d, c, b, a)))
	{}

	template <>
	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, mediump>::tvec4(int32 a, int32 b, int32 c, int32 d) :
		data(_mm_castsi128_ps(_mm_set_epi32(d, c, b, a)))
	{}

	template <>
	template <>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_SIMD tvec4<float, highp>::tvec4(int32 a, int32 b, int32 c, int32 d) :
		data(_mm_castsi128_ps(_mm_set_epi32(d, c, b, a)))
	{}
*/
}//namespace glm

#endif//GLM_ARCH & GLM_ARCH_SSE2
