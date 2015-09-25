///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2015 G-Truc Creation (www.g-truc.net)
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
/// Restrictions:
///		By making use of the Software for military purposes, you choose to make
///		a Bunny unhappy.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtx_float_normalize
/// @file glm/gtx/float_normalize.inl
/// @date 2015-09-25 / 2015-09-25
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#include <limits>

namespace glm{
namespace detail
{
	template <typename T, typename floatType, precision P, template <typename, precision> class vecType, bool isInteger, bool signedType>
	struct compute_floatNormalize
	{};

	template <typename T, typename floatType, precision P, template <typename, precision> class vecType>
	struct compute_floatNormalize<T, floatType, P, vecType, true, true>
	{
		GLM_FUNC_QUALIFIER static vecType<floatType, P> call(vecType<T, P> const & v)
		{
			floatType const Min = static_cast<floatType>(std::numeric_limits<T>::min());
			floatType const Max = static_cast<floatType>(std::numeric_limits<T>::max());
			return (vecType<floatType, P>(v) - Min) / (Max - Min) * static_cast<floatType>(2) - static_cast<floatType>(1);
		}
	};

	template <typename T, typename floatType, precision P, template <typename, precision> class vecType>
	struct compute_floatNormalize<T, floatType, P, vecType, true, false>
	{
		GLM_FUNC_QUALIFIER static vecType<floatType, P> call(vecType<T, P> const & v)
		{
			return vecType<floatType, P>(v) / static_cast<floatType>(std::numeric_limits<T>::max());
		}
	};

	template <typename T, typename floatType, precision P, template <typename, precision> class vecType>
	struct compute_floatNormalize<T, floatType, P, vecType, false, true>
	{
		GLM_FUNC_QUALIFIER static vecType<floatType, P> call(vecType<T, P> const & v)
		{
			return v;
		}
	};
}//namespace detail

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<float, P> floatNormalize(vecType<T, P> const & v)
	{
		return detail::compute_floatNormalize<T, float, P, vecType, std::numeric_limits<T>::is_integer, std::numeric_limits<T>::is_signed>::call(v);
	}
}//namespace glm
