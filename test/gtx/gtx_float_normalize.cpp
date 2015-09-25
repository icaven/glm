//////////////////////////////////////////////////////////////////////////////////
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
/// @file test/gtx/gtx_float_normalize.cpp
/// @date 2015-09-25 / 2015-09-25
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#include <glm/gtx/float_normalize.hpp>
#include <glm/gtc/type_precision.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/gtc/constants.hpp>
#include <limits>

namespace integer_8bit_test
{
	int run()
	{
		int Error(0);

		{
			glm::vec4 const A = glm::floatNormalize(glm::u8vec4(0, 127, 128, 255));

			Error += glm::epsilonEqual(A.x, 0.0f, glm::epsilon<float>()) ? 0 : 1;
			Error += A.y < 0.5f ? 0 : 1;
			Error += A.z > 0.5f ? 0 : 1;
			Error += glm::epsilonEqual(A.w, 1.0f, glm::epsilon<float>()) ? 0 : 1;
		}

		{
			glm::vec4 const A = glm::floatNormalize(glm::i8vec4(-128, -1, 0, 127));

			Error += glm::epsilonEqual(A.x,-1.0f, glm::epsilon<float>()) ? 0 : 1;
			Error += A.y < 0.0f ? 0 : 1;
			Error += A.z > 0.0f ? 0 : 1;
			Error += glm::epsilonEqual(A.w, 1.0f, glm::epsilon<float>()) ? 0 : 1;
		}

		return Error;
	}
}//namespace integer_8bit_test

namespace integer_16bit_test
{
	int run()
	{
		int Error(0);

		{
			glm::vec4 const A = glm::floatNormalize(glm::u16vec4(
				std::numeric_limits<glm::u16>::min(),
				(std::numeric_limits<glm::u16>::max() >> 1) + 0,
				(std::numeric_limits<glm::u16>::max() >> 1) + 1,
				std::numeric_limits<glm::u16>::max()));

			Error += glm::epsilonEqual(A.x, 0.0f, glm::epsilon<float>()) ? 0 : 1;
			Error += A.y < 0.5f ? 0 : 1;
			Error += A.z > 0.5f ? 0 : 1;
			Error += glm::epsilonEqual(A.w, 1.0f, glm::epsilon<float>()) ? 0 : 1;
		}

		{
			glm::vec4 const A = glm::floatNormalize(glm::i16vec4(
				std::numeric_limits<glm::i16>::min(),
				static_cast<glm::i16>(-1),
				static_cast<glm::i16>(0),
				std::numeric_limits<glm::i16>::max()));

			Error += glm::epsilonEqual(A.x,-1.0f, glm::epsilon<float>()) ? 0 : 1;
			Error += A.y < 0.0f ? 0 : 1;
			Error += A.z > 0.0f ? 0 : 1;
			Error += glm::epsilonEqual(A.w, 1.0f, glm::epsilon<float>()) ? 0 : 1;
		}

		return Error;
	}
}//namespace integer_16bit_test

int main()
{
	int Error(0);

	Error += integer_8bit_test::run();
	Error += integer_16bit_test::run();

	return Error;
}
