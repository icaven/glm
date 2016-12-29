/// @ref gtx_component_wise
/// @file glm/gtx/component_wise.inl

#include <limits>

namespace glm{
namespace detail
{
	template <int D, typename T, typename floatType, precision P, template <int, typename, precision> class vecType, bool isInteger, bool signedType>
	struct compute_compNormalize
	{};

	template <int D, typename T, typename floatType, precision P, template <int, typename, precision> class vecType>
	struct compute_compNormalize<D, T, floatType, P, vecType, true, true>
	{
		GLM_FUNC_QUALIFIER static vecType<D, floatType, P> call(vecType<D, T, P> const & v)
		{
			floatType const Min = static_cast<floatType>(std::numeric_limits<T>::min());
			floatType const Max = static_cast<floatType>(std::numeric_limits<T>::max());
			return (vecType<D, floatType, P>(v) - Min) / (Max - Min) * static_cast<floatType>(2) - static_cast<floatType>(1);
		}
	};

	template <int D, typename T, typename floatType, precision P, template <int, typename, precision> class vecType>
	struct compute_compNormalize<D, T, floatType, P, vecType, true, false>
	{
		GLM_FUNC_QUALIFIER static vecType<D, floatType, P> call(vecType<D, T, P> const & v)
		{
			return vecType<D, floatType, P>(v) / static_cast<floatType>(std::numeric_limits<T>::max());
		}
	};

	template <int D, typename T, typename floatType, precision P, template <int, typename, precision> class vecType>
	struct compute_compNormalize<D, T, floatType, P, vecType, false, true>
	{
		GLM_FUNC_QUALIFIER static vecType<D, floatType, P> call(vecType<D, T, P> const & v)
		{
			return v;
		}
	};

	template <int D, typename T, typename floatType, precision P, template <int, typename, precision> class vecType, bool isInteger, bool signedType>
	struct compute_compScale
	{};

	template <int D, typename T, typename floatType, precision P, template <int, typename, precision> class vecType>
	struct compute_compScale<D, T, floatType, P, vecType, true, true>
	{
		GLM_FUNC_QUALIFIER static vecType<D, T, P> call(vecType<D, floatType, P> const & v)
		{
			floatType const Max = static_cast<floatType>(std::numeric_limits<T>::max()) + static_cast<floatType>(0.5);
			vecType<D, floatType, P> const Scaled(v * Max);
			vecType<D, T, P> const Result(Scaled - static_cast<floatType>(0.5));
			return Result;
		}
	};

	template <int D, typename T, typename floatType, precision P, template <int, typename, precision> class vecType>
	struct compute_compScale<D, T, floatType, P, vecType, true, false>
	{
		GLM_FUNC_QUALIFIER static vecType<D, T, P> call(vecType<D, floatType, P> const & v)
		{
			return vecType<D, T, P>(vecType<D, floatType, P>(v) * static_cast<floatType>(std::numeric_limits<T>::max()));
		}
	};

	template <int D, typename T, typename floatType, precision P, template <int, typename, precision> class vecType>
	struct compute_compScale<D, T, floatType, P, vecType, false, true>
	{
		GLM_FUNC_QUALIFIER static vecType<D, T, P> call(vecType<D, floatType, P> const & v)
		{
			return v;
		}
	};
}//namespace detail

	template <typename floatType, int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, floatType, P> compNormalize(vecType<D, T, P> const & v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<floatType>::is_iec559, "'compNormalize' accepts only floating-point types for 'floatType' template parameter");

		return detail::compute_compNormalize<D, T, floatType, P, vecType, std::numeric_limits<T>::is_integer, std::numeric_limits<T>::is_signed>::call(v);
	}

	template <typename T, int D, typename floatType, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> compScale(vecType<D, floatType, P> const & v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<floatType>::is_iec559, "'compScale' accepts only floating-point types for 'floatType' template parameter");

		return detail::compute_compScale<D, T, floatType, P, vecType, std::numeric_limits<T>::is_integer, std::numeric_limits<T>::is_signed>::call(v);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T compAdd(vecType<D, T, P> const & v)
	{
		T Result(0);
		for(length_t i = 0, n = v.length(); i < n; ++i)
			Result += v[i];
		return Result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T compMul(vecType<D, T, P> const & v)
	{
		T Result(1);
		for(length_t i = 0, n = v.length(); i < n; ++i)
			Result *= v[i];
		return Result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T compMin(vecType<D, T, P> const & v)
	{
		T Result(v[0]);
		for(length_t i = 1, n = v.length(); i < n; ++i)
			Result = min(Result, v[i]);
		return Result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T compMax(vecType<D, T, P> const & v)
	{
		T Result(v[0]);
		for(length_t i = 1, n = v.length(); i < n; ++i)
			Result = max(Result, v[i]);
		return Result;
	}
}//namespace glm
