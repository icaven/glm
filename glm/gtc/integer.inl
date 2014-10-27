///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtc_integer
/// @file glm/gtc/integer.inl
/// @date 2014-10-25 / 2014-10-25
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace detail
{
	template <typename T, precision P, template <class, precision> class vecType, bool isSigned = true>
	struct compute_ceilPowerOfTwo{};

	template <typename T, precision P, template <class, precision> class vecType>
	struct compute_ceilPowerOfTwo<T, P, vecType, false>
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & v)
		{
			GLM_STATIC_ASSERT(
				!std::numeric_limits<genFIType>::is_iec559,
				"'ceilPowerOfTwo' only accept integer scalar or vector inputs");

			template <typename T, precision P, template <class, precision> class vecType, bool compute = false>
			struct compute_ceil_shift
			{
				GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & v, T)
				{
					return v;
				}
			};

			template <typename T, precision P, template <class, precision> class vecType, bool compute = true>
			struct compute_ceil_shift
			{
				GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & v, T Shift)
				{
					return v | (v >> Shift);
				}
			};

			v = v - static_cast<T>(1);
			v = v | (v >> static_cast<T>(1));
			v = v | (v >> static_cast<T>(2));
			v = v | (v >> static_cast<T>(4));
			v = compute_ceil_shift<T, P, vecType, sizeof(T) >= 2>::call(v, 8);
			v = compute_ceil_shift<T, P, vecType, sizeof(T) >= 4>::call(v, 16);
			v = compute_ceil_shift<T, P, vecType, sizeof(T) >= 8>::call(v, 32);
			return v + static_cast<T>(1);
		}
	};
}//namespace detail

	////////////////
	// isPowerOfTwo

	template <typename genType>
	GLM_FUNC_QUALIFIER bool isPowerOfTwo(genType Value)
	{
		genType const Result = glm::abs(Value);
		return !(Result & (Result - 1));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> isPowerOfTwo(vecType<T, P> const & Value)
	{
		vecType<T, P> const Result(abs(Value));
		return equal(Result & (Result - 1), vecType<T, P>(0));
	}

	//////////////////
	// ceilPowerOfTwo

	template <typename genType>
	GLM_FUNC_QUALIFIER genType ceilPowerOfTwo(genType value)
	{
		return isPowerOfTwo(value) ? value : highestBitValue(value) << 1;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> ceilPowerOfTwo(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(ceilPowerOfTwo, v);
	}

	///////////////////
	// floorPowerOfTwo

	template <typename genType>
	GLM_FUNC_QUALIFIER genType floorPowerOfTwo(genType value)
	{
		return isPowerOfTwo(value) ? value : highestBitValue(value);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> floorPowerOfTwo(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(floorPowerOfTwo, v);
	}

	///////////////////
	// roundPowerOfTwo

	template <typename genType>
	GLM_FUNC_QUALIFIER genType roundPowerOfTwo(genType value)
	{
		if(isPowerOfTwo(value))
			return value;

		genType const prev = highestBitValue(value);
		genType const next = prev << 1;
		return (next - value) < (value - prev) ? next : prev;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> roundPowerOfTwo(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(roundPowerOfTwo, v);
	}
}//namespace glm
