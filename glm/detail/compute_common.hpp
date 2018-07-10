#pragma once

#include "setup.hpp"
#include <cstring>
#include <limits>

namespace glm{
namespace detail
{
	template<typename genFIType, bool /*signed*/>
	struct compute_abs
	{};

	template<typename genFIType>
	struct compute_abs<genFIType, true>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CXX11 static genFIType call(genFIType x)
		{
			GLM_STATIC_ASSERT(
				std::numeric_limits<genFIType>::is_iec559 || std::numeric_limits<genFIType>::is_signed || GLM_UNRESTRICTED_GENTYPE,
				"'abs' only accept floating-point and integer scalar or vector inputs");

			return x >= genFIType(0) ? x : -x;
			// TODO, perf comp with: *(((int *) &x) + 1) &= 0x7fffffff;
		}
	};

#if GLM_COMPILER & GLM_COMPILER_CUDA
	template<>
	struct compute_abs<float, true>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CXX11 static float call(float x)
		{
			return fabsf(x);
		}
	};
#endif

	template<typename genFIType>
	struct compute_abs<genFIType, false>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CXX11 static genFIType call(genFIType x)
		{
			GLM_STATIC_ASSERT(
				(!std::numeric_limits<genFIType>::is_signed && std::numeric_limits<genFIType>::is_integer) || GLM_UNRESTRICTED_GENTYPE,
				"'abs' only accept floating-point and integer scalar or vector inputs");
			return x;
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_abs_vector
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CXX11 static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			return detail::functor1<L, T, T, Q>::call(abs, x);
		}
	};
}//namespace detail
}//namespace glm
