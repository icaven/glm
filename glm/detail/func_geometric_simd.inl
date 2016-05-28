#include "../simd/geometric.h"

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

namespace glm{
namespace detail
{
	template <precision P>
	struct compute_dot<tvec4, float, P>
	{
		GLM_FUNC_QUALIFIER static float call(tvec4<float, P> const& x, tvec4<float, P> const& y)
		{
			__m128 const dot0 = glm_f32v1_dot(x.data, y.data);
			return _mm_cvtss_f32(dot0);
		}
	};

	template <precision P>
	struct compute_cross<float, P>
	{
		GLM_FUNC_QUALIFIER static tvec3<float, P> call(tvec3<float, P> const & a, tvec3<float, P> const & b)
		{
			__m128 const set0 = _mm_set_ps(0.0f, a.z, a.y, a.x);
			__m128 const set1 = _mm_set_ps(0.0f, b.z, b.y, b.x);
			__m128 const xpd0 = glm_f32v4_xpd(set0, set1);

			tvec4<float, P> result(uninitialize);
			result.data = xpd0;

			return tvec3<float, P>(result);
		}
	};

	template <precision P>
	struct compute_normalize<float, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			__m128 const nrm0 = glm_f32v4_nrm(v.data);
			tvec4<float, P> result(uninitialize);
			result.data = nrm0;
			return result;
		}
	};
}//namespace detail
}//namespace glm

#endif//GLM_ARCH & GLM_ARCH_SSE2_BIT
