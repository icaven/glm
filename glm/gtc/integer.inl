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
/// @date 2014-11-17 / 2014-11-17
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace detail
{
	template <typename T, precision P, template <class, precision> class vecType>
	struct compute_log2<T, P, vecType, false>
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & vec)
		{
			//Equivalent to return findMSB(vec); but save one function call in ASM with VC
			//return findMSB(vec);
			return detail::compute_findMSB_vec<T, P, vecType, sizeof(T) * 8>::call(vec);
		}
	};

#	if(GLM_ARCH != GLM_ARCH_PURE) && (GLM_COMPILER & (GLM_COMPILER_VC | GLM_COMPILER_APPLE_CLANG | GLM_COMPILER_LLVM))

	template <precision P>
	struct compute_log2<int, P, tvec4, false>
	{
		GLM_FUNC_QUALIFIER static tvec4<int, P> call(tvec4<int, P> const & vec)
		{
			tvec4<int, P> Result(glm::uninitialize);

			_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.x), vec.x);
			_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.y), vec.y);
			_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.z), vec.z);
			_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.w), vec.w);

			return Result;
		}
	};

#	endif//GLM_ARCH != GLM_ARCH_PURE
}//namespace detail
}//namespace glm
