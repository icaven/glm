#include "../integer.hpp"

namespace glm{
namespace detail
{
	template<length_t L, typename T, qualifier Q, bool compute = false>
	struct compute_ceilShift
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& v, T)
		{
			return v;
		}
	};

	template<length_t L, typename T, qualifier Q>
	struct compute_ceilShift<L, T, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& v, T Shift)
		{
			return v | (v >> Shift);
		}
	};

	template<length_t L, typename T, qualifier Q, bool isSigned = true>
	struct compute_ceilPowerOfTwo
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			GLM_STATIC_ASSERT(!std::numeric_limits<T>::is_iec559, "'ceilPowerOfTwo' only accept integer scalar or vector inputs");

			vec<L, T, Q> const Sign(sign(x));

			vec<L, T, Q> v(abs(x));

			v = v - static_cast<T>(1);
			v = v | (v >> static_cast<T>(1));
			v = v | (v >> static_cast<T>(2));
			v = v | (v >> static_cast<T>(4));
			v = compute_ceilShift<L, T, Q, sizeof(T) >= 2>::call(v, 8);
			v = compute_ceilShift<L, T, Q, sizeof(T) >= 4>::call(v, 16);
			v = compute_ceilShift<L, T, Q, sizeof(T) >= 8>::call(v, 32);
			return (v + static_cast<T>(1)) * Sign;
		}
	};

	template<length_t L, typename T, qualifier Q>
	struct compute_ceilPowerOfTwo<L, T, Q, false>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			GLM_STATIC_ASSERT(!std::numeric_limits<T>::is_iec559, "'ceilPowerOfTwo' only accept integer scalar or vector inputs");

			vec<L, T, Q> v(x);

			v = v - static_cast<T>(1);
			v = v | (v >> static_cast<T>(1));
			v = v | (v >> static_cast<T>(2));
			v = v | (v >> static_cast<T>(4));
			v = compute_ceilShift<L, T, Q, sizeof(T) >= 2>::call(v, 8);
			v = compute_ceilShift<L, T, Q, sizeof(T) >= 4>::call(v, 16);
			v = compute_ceilShift<L, T, Q, sizeof(T) >= 8>::call(v, 32);
			return v + static_cast<T>(1);
		}
	};

	template<bool is_float, bool is_signed>
	struct compute_ceilMultiple{};

	template<>
	struct compute_ceilMultiple<true, true>
	{
		template<typename genType>
		GLM_FUNC_QUALIFIER static genType call(genType Source, genType Multiple)
		{
			if(Source > genType(0))
				return Source + (Multiple - std::fmod(Source, Multiple));
			else
				return Source + std::fmod(-Source, Multiple);
		}
	};

	template<>
	struct compute_ceilMultiple<false, false>
	{
		template<typename genType>
		GLM_FUNC_QUALIFIER static genType call(genType Source, genType Multiple)
		{
			genType Tmp = Source - genType(1);
			return Tmp + (Multiple - (Tmp % Multiple));
		}
	};

	template<>
	struct compute_ceilMultiple<false, true>
	{
		template<typename genType>
		GLM_FUNC_QUALIFIER static genType call(genType Source, genType Multiple)
		{
			assert(Multiple > genType(0));
			if(Source > genType(0))
			{
				genType Tmp = Source - genType(1);
				return Tmp + (Multiple - (Tmp % Multiple));
			}
			else
				return Source + (-Source % Multiple);
		}
	};

	template<bool is_float, bool is_signed>
	struct compute_floorMultiple{};

	template<>
	struct compute_floorMultiple<true, true>
	{
		template<typename genType>
		GLM_FUNC_QUALIFIER static genType call(genType Source, genType Multiple)
		{
			if(Source >= genType(0))
				return Source - std::fmod(Source, Multiple);
			else
				return Source - std::fmod(Source, Multiple) - Multiple;
		}
	};

	template<>
	struct compute_floorMultiple<false, false>
	{
		template<typename genType>
		GLM_FUNC_QUALIFIER static genType call(genType Source, genType Multiple)
		{
			if(Source >= genType(0))
				return Source - Source % Multiple;
			else
			{
				genType Tmp = Source + genType(1);
				return Tmp - Tmp % Multiple - Multiple;
			}
		}
	};

	template<>
	struct compute_floorMultiple<false, true>
	{
		template<typename genType>
		GLM_FUNC_QUALIFIER static genType call(genType Source, genType Multiple)
		{
			if(Source >= genType(0))
				return Source - Source % Multiple;
			else
			{
				genType Tmp = Source + genType(1);
				return Tmp - Tmp % Multiple - Multiple;
			}
		}
	};
}//namespace detail

	template<typename genIUType>
	GLM_FUNC_QUALIFIER bool isPowerOfTwo(genIUType Value)
	{
		genIUType const Result = glm::abs(Value);
		return !(Result & (Result - 1));
	}

	template<typename genIUType>
	GLM_FUNC_QUALIFIER genIUType nextPowerOfTwo(genIUType value)
	{
		return detail::compute_ceilPowerOfTwo<1, genIUType, defaultp, std::numeric_limits<genIUType>::is_signed>::call(vec<1, genIUType, defaultp>(value)).x;
	}

	template<typename genIUType>
	GLM_FUNC_QUALIFIER genIUType prevPowerOfTwo(genIUType value)
	{
		return isPowerOfTwo(value) ? value : static_cast<genIUType>(1) << findMSB(value);
	}

	template<typename genIUType>
	GLM_FUNC_QUALIFIER bool isMultiple(genIUType Value, genIUType Multiple)
	{
		return isMultiple(vec<1, genIUType>(Value), vec<1, genIUType>(Multiple)).x;
	}

	template<typename genIUType>
	GLM_FUNC_QUALIFIER genIUType nextMultiple(genIUType Source, genIUType Multiple)
	{
		return detail::compute_ceilMultiple<std::numeric_limits<genIUType>::is_iec559, std::numeric_limits<genIUType>::is_signed>::call(Source, Multiple);
	}

	template<typename genIUType>
	GLM_FUNC_QUALIFIER genIUType prevMultiple(genIUType Source, genIUType Multiple)
	{
		return detail::compute_floorMultiple<std::numeric_limits<genIUType>::is_iec559, std::numeric_limits<genIUType>::is_signed>::call(Source, Multiple);
	}
}//namespace glm
