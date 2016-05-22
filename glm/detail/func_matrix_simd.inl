/// @ref core
/// @file glm/detail/func_matrix_simd.inl

#include "type_mat4x4.hpp"
#include "func_geometric.hpp"
#include "../simd/matrix.h"

namespace glm{
namespace detail
{
#	if GLM_ARCH & GLM_ARCH_SSE2
		template <precision P>
		struct compute_inverse<tmat4x4, float, P>
		{
			GLM_FUNC_QUALIFIER static tmat4x4<float, P> call(tmat4x4<float, P> const& m)
			{
				tmat4x4<float, P> Result(uninitialize);
				glm_inverse_ps(*reinterpret_cast<__m128 const(*)[4]>(&m[0].data), *reinterpret_cast<__m128(*)[4]>(&Result[0].data));
				return Result;
			}
		};
#	endif
}//namespace detail
}//namespace glm
