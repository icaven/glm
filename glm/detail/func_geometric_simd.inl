#include "../simd/geometric.h"

namespace glm{
namespace detail
{
	template <precision P>
	struct compute_dot<tvec4, float, P>
	{
		GLM_FUNC_QUALIFIER static float call(tvec4<float, P> const& x, tvec4<float, P> const& y)
		{
			__m128 const dot0 = glm_dot_ss(x.data, y.data);
			return _mm_cvtss_f32(dot0);
		}
	};
}//namespace detail
}//namespace glm

