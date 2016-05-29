/// @ref core
/// @file glm/detail/func_common_simd.inl

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

#include "../simd/common.h"

#include <immintrin.h>

namespace glm{
namespace detail
{
	template <precision P>
	struct compute_abs_vector<float, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
			result.data = glm_f32v4_abs(v.data);
			return result;
		}
	};

	template <precision P>
	struct compute_abs_vector<int, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<int, P> call(tvec4<int, P> const & v)
		{
			tvec4<int, P> result(uninitialize);
			result.data = glm_i32v4_abs(v.data);
			return result;
		}
	};

	template <precision P>
	struct compute_mix_vector<float, bool, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & x, tvec4<float, P> const & y, tvec4<bool, P> const & a)
		{
			__m128i const Load = _mm_set_epi32(-(int)a.w, -(int)a.z, -(int)a.y, -(int)a.x);
			__m128 const Mask = _mm_castsi128_ps(Load);

			tvec4<float, P> Result(uninitialize);
#			if 0 && GLM_ARCH & GLM_ARCH_AVX
				Result.data = _mm_blendv_ps(x.data, y.data, Mask);
#			else
				Result.data = _mm_or_ps(_mm_and_ps(Mask, y.data), _mm_andnot_ps(Mask, x.data));
#			endif
			return Result;
		}
	};

	template <precision P>
	struct compute_floor<float, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
			result.data = glm_f32v4_flr(v.data);
			return result;
		}
	};

	template <precision P>
	struct compute_ceil<float, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
			result.data = glm_f32v4_ceil(v.data);
			return result;
		}
	};

	template <precision P>
	struct compute_fract<float, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
			result.data = glm_f32v4_frc(v.data);
			return result;
		}
	};

	template <precision P>
	struct compute_round<float, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
			result.data = glm_f32v4_rnd(v.data);
			return result;
		}
	};

	template <precision P>
	struct compute_mod<float, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & x, tvec4<float, P> const & y)
		{
			tvec4<float, P> result(uninitialize);
			result.data = glm_f32v4_mod(x.data, y.data);
			return result;
		}
	};

}//namespace detail
}//namespace glm

#endif//GLM_ARCH & GLM_ARCH_SSE2_BIT
