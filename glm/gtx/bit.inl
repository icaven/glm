/// @ref gtx_bit
/// @file glm/gtx/bit.inl

namespace glm
{
	///////////////////
	// highestBitValue

	template <typename genIUType>
	GLM_FUNC_QUALIFIER genIUType highestBitValue(genIUType Value)
	{
		genIUType tmp = Value;
		genIUType result = genIUType(0);
		while(tmp)
		{
			result = (tmp & (~tmp + 1)); // grab lowest bit
			tmp &= ~result; // clear lowest bit
		}
		return result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> highestBitValue(vecType<D, T, P> const & v)
	{
		return detail::functor1<D, T, T, P>::call(highestBitValue, v);
	}

	///////////////////
	// lowestBitValue

	template <typename genIUType>
	GLM_FUNC_QUALIFIER genIUType lowestBitValue(genIUType Value)
	{
		return (Value & (~Value + 1));
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> lowestBitValue(vecType<D, T, P> const & v)
	{
		return detail::functor1<D, T, T, P>::call(lowestBitValue, v);
	}

	///////////////////
	// powerOfTwoAbove

	template <typename genType>
	GLM_FUNC_QUALIFIER genType powerOfTwoAbove(genType value)
	{
		return isPowerOfTwo(value) ? value : highestBitValue(value) << 1;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> powerOfTwoAbove(vecType<D, T, P> const & v)
	{
		return detail::functor1<D, T, T, P>::call(powerOfTwoAbove, v);
	}

	///////////////////
	// powerOfTwoBelow

	template <typename genType>
	GLM_FUNC_QUALIFIER genType powerOfTwoBelow(genType value)
	{
		return isPowerOfTwo(value) ? value : highestBitValue(value);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> powerOfTwoBelow(vecType<D, T, P> const & v)
	{
		return detail::functor1<D, T, T, P>::call(powerOfTwoBelow, v);
	}

	/////////////////////
	// powerOfTwoNearest

	template <typename genType>
	GLM_FUNC_QUALIFIER genType powerOfTwoNearest(genType value)
	{
		if(isPowerOfTwo(value))
			return value;

		genType const prev = highestBitValue(value);
		genType const next = prev << 1;
		return (next - value) < (value - prev) ? next : prev;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> powerOfTwoNearest(vecType<D, T, P> const & v)
	{
		return detail::functor1<D, T, T, P>::call(powerOfTwoNearest, v);
	}

}//namespace glm
