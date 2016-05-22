/// @ref core
/// @file glm/detail/type_tvec4_sse2.inl

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
}//namespace glm

#endif//GLM_ARCH & GLM_ARCH_SSE2
