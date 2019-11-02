#if GLM_ARCH & GLM_ARCH_SSE2_BIT

#include "type_mat4x4.hpp"
#include "../geometric.hpp"
#include "../simd/matrix.h"
#include <cstring>

namespace glm{
namespace detail
{
#	if GLM_CONFIG_ALIGNED_GENTYPES == GLM_ENABLE
	template<qualifier Q>
	struct compute_matrixCompMult<4, 4, float, Q, true>
	{
		GLM_STATIC_ASSERT(detail::is_aligned<Q>::value, "Specialization requires aligned");

		GLM_FUNC_QUALIFIER static mat<4, 4, float, Q> call(mat<4, 4, float, Q> const& x, mat<4, 4, float, Q> const& y)
		{
			mat<4, 4, float, Q> Result;
			glm_mat4_matrixCompMult(
				*static_cast<glm_vec4 const (*)[4]>(&x[0].data),
				*static_cast<glm_vec4 const (*)[4]>(&y[0].data),
				*static_cast<glm_vec4(*)[4]>(&Result[0].data));
			return Result;
		}
	};
#	endif

	template<qualifier Q>
	struct compute_transpose<4, 4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static mat<4, 4, float, Q> call(mat<4, 4, float, Q> const& m)
		{
			mat<4, 4, float, Q> Result;
			glm_mat4_transpose(&m[0].data, &Result[0].data);
			return Result;
		}
	};

	template<qualifier Q>
	struct compute_determinant<4, 4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static float call(mat<4, 4, float, Q> const& m)
		{
			return _mm_cvtss_f32(glm_mat4_determinant(&m[0].data));
		}
	};

	template<qualifier Q>
	struct compute_inverse<4, 4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static mat<4, 4, float, Q> call(mat<4, 4, float, Q> const& m)
		{
			mat<4, 4, float, Q> Result;
			glm_mat4_inverse(&m[0].data, &Result[0].data);
			return Result;
		}
	};
}//namespace detail

#	if GLM_CONFIG_ALIGNED_GENTYPES == GLM_ENABLE
	template<>
	GLM_FUNC_QUALIFIER mat<4, 4, float, aligned_lowp> outerProduct<4, 4, float, aligned_lowp>(vec<4, float, aligned_lowp> const& c, vec<4, float, aligned_lowp> const& r)
	{
		__m128 NativeResult[4];
		glm_mat4_outerProduct(c.data, r.data, NativeResult);
		mat<4, 4, float, aligned_lowp> Result;
		std::memcpy(&Result[0], &NativeResult[0], sizeof(Result));
		return Result;
	}

	template<>
	GLM_FUNC_QUALIFIER mat<4, 4, float, aligned_mediump> outerProduct<4, 4, float, aligned_mediump>(vec<4, float, aligned_mediump> const& c, vec<4, float, aligned_mediump> const& r)
	{
		__m128 NativeResult[4];
		glm_mat4_outerProduct(c.data, r.data, NativeResult);
		mat<4, 4, float, aligned_mediump> Result;
		std::memcpy(&Result[0], &NativeResult[0], sizeof(Result));
		return Result;
	}

	template<>
	GLM_FUNC_QUALIFIER mat<4, 4, float, aligned_highp> outerProduct<4, 4, float, aligned_highp>(vec<4, float, aligned_highp> const& c, vec<4, float, aligned_highp> const& r)
	{
		__m128 NativeResult[4];
		glm_mat4_outerProduct(c.data, r.data, NativeResult);
		mat<4, 4, float, aligned_highp> Result;
		std::memcpy(&Result[0], &NativeResult[0], sizeof(Result));
		return Result;
	}
#	endif
}//namespace glm

#elif GLM_ARCH & GLM_ARCH_NEON_BIT

namespace glm {
#if GLM_LANG & GLM_LANG_CXX11_FLAG
	template <qualifier Q>
	GLM_FUNC_QUALIFIER
	typename std::enable_if<detail::is_aligned<Q>::value, mat<4, 4, float, Q>>::type
	operator*(mat<4, 4, float, Q> const & m1, mat<4, 4, float, Q> const & m2)
	{
		auto MulRow = [&](int l) {
			float32x4_t const SrcA = m2[l].data;

#if GLM_ARCH & GLM_ARCH_ARMV8_BIT
			float32x4_t r=   vmulq_laneq_f32(m1[0].data, SrcA, 0);
			r = vaddq_f32(r, vmulq_laneq_f32(m1[1].data, SrcA, 1));
			r = vaddq_f32(r, vmulq_laneq_f32(m1[2].data, SrcA, 2));
			r = vaddq_f32(r, vmulq_laneq_f32(m1[3].data, SrcA, 3));
#else
			float32x4_t r=   vmulq_f32(m1[0].data, vdupq_n_f32(vgetq_lane_f32(SrcA, 0)));
			r = vaddq_f32(r, vmulq_f32(m1[1].data, vdupq_n_f32(vgetq_lane_f32(SrcA, 1))));
			r = vaddq_f32(r, vmulq_f32(m1[2].data, vdupq_n_f32(vgetq_lane_f32(SrcA, 2))));
			r = vaddq_f32(r, vmulq_f32(m1[3].data, vdupq_n_f32(vgetq_lane_f32(SrcA, 3))));
#endif

			return r;
		};

		mat<4, 4, float, aligned_highp> Result;
		Result[0].data = MulRow(0);
		Result[1].data = MulRow(1);
		Result[2].data = MulRow(2);
		Result[3].data = MulRow(3);

		return Result;
	}
#endif // CXX11
}//namespace glm
#endif
