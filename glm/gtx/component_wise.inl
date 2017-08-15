/// @ref gtx_component_wise
/// @file glm/gtx/component_wise.inl

#include <limits>

namespace glm{
namespace detail
{
	template<length_t L, typename T, typename floatType, qualifier P, bool isInteger, bool signedType>
	struct compute_compNormalize
	{};

	template<length_t L, typename T, typename floatType, qualifier P>
	struct compute_compNormalize<L, T, floatType, P, true, true>
	{
		GLM_FUNC_QUALIFIER static vec<L, floatType, P> call(vec<L, T, P> const& v)
		{
			floatType const Min = static_cast<floatType>(std::numeric_limits<T>::min());
			floatType const Max = static_cast<floatType>(std::numeric_limits<T>::max());
			return (vec<L, floatType, P>(v) - Min) / (Max - Min) * static_cast<floatType>(2) - static_cast<floatType>(1);
		}
	};

	template<length_t L, typename T, typename floatType, qualifier P>
	struct compute_compNormalize<L, T, floatType, P, true, false>
	{
		GLM_FUNC_QUALIFIER static vec<L, floatType, P> call(vec<L, T, P> const& v)
		{
			return vec<L, floatType, P>(v) / static_cast<floatType>(std::numeric_limits<T>::max());
		}
	};

	template<length_t L, typename T, typename floatType, qualifier P>
	struct compute_compNormalize<L, T, floatType, P, false, true>
	{
		GLM_FUNC_QUALIFIER static vec<L, floatType, P> call(vec<L, T, P> const& v)
		{
			return v;
		}
	};

	template<length_t L, typename T, typename floatType, qualifier P, bool isInteger, bool signedType>
	struct compute_compScale
	{};

	template<length_t L, typename T, typename floatType, qualifier P>
	struct compute_compScale<L, T, floatType, P, true, true>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, P> call(vec<L, floatType, P> const& v)
		{
			floatType const Max = static_cast<floatType>(std::numeric_limits<T>::max()) + static_cast<floatType>(0.5);
			vec<L, floatType, P> const Scaled(v * Max);
			vec<L, T, P> const Result(Scaled - static_cast<floatType>(0.5));
			return Result;
		}
	};

	template<length_t L, typename T, typename floatType, qualifier P>
	struct compute_compScale<L, T, floatType, P, true, false>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, P> call(vec<L, floatType, P> const& v)
		{
			return vec<L, T, P>(vec<L, floatType, P>(v) * static_cast<floatType>(std::numeric_limits<T>::max()));
		}
	};

	template<length_t L, typename T, typename floatType, qualifier P>
	struct compute_compScale<L, T, floatType, P, false, true>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, P> call(vec<L, floatType, P> const& v)
		{
			return v;
		}
	};
}//namespace detail

	template<typename floatType, length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER vec<L, floatType, P> compNormalize(vec<L, T, P> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<floatType>::is_iec559, "'compNormalize' accepts only floating-point types for 'floatType' template parameter");

		return detail::compute_compNormalize<L, T, floatType, P, std::numeric_limits<T>::is_integer, std::numeric_limits<T>::is_signed>::call(v);
	}

	template<typename T, length_t L, typename floatType, qualifier P>
	GLM_FUNC_QUALIFIER vec<L, T, P> compScale(vec<L, floatType, P> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<floatType>::is_iec559, "'compScale' accepts only floating-point types for 'floatType' template parameter");

		return detail::compute_compScale<L, T, floatType, P, std::numeric_limits<T>::is_integer, std::numeric_limits<T>::is_signed>::call(v);
	}

	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER T compAdd(vec<L, T, P> const& v)
	{
		T Result(0);
		for(length_t i = 0, n = v.length(); i < n; ++i)
			Result += v[i];
		return Result;
	}

	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER T compMul(vec<L, T, P> const& v)
	{
		T Result(1);
		for(length_t i = 0, n = v.length(); i < n; ++i)
			Result *= v[i];
		return Result;
	}

	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER T compMin(vec<L, T, P> const& v)
	{
		T Result(v[0]);
		for(length_t i = 1, n = v.length(); i < n; ++i)
			Result = min(Result, v[i]);
		return Result;
	}

	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER T compMax(vec<L, T, P> const& v)
	{
		T Result(v[0]);
		for(length_t i = 1, n = v.length(); i < n; ++i)
			Result = max(Result, v[i]);
		return Result;
	}
}//namespace glm
