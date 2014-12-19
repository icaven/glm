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
/// @file test/gtx/gtx_fast_trigonometry.cpp
/// @date 2013-10-25 / 2014-11-25
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#include <glm/gtc/type_precision.hpp>
#include <glm/gtx/fast_trigonometry.hpp>
#include <glm/gtc/constants.hpp>
#include <glm/gtc/ulp.hpp>
#include <ctime>
#include <cstdio>

namespace fastCos
{
	int perf()
	{
		const float begin = -glm::pi<float>();
		const float end = glm::pi<float>();
		float result = 0.f;
		const std::clock_t timestamp1 = std::clock();
		for(float i=begin; i<end; i = glm::next_float(i, end))
			result = glm::fastCos(i);
		const std::clock_t timestamp2 = std::clock();
		for(float i=begin; i<end; i = glm::next_float(i, end))
			result = glm::cos(i);
		const std::clock_t timestamp3 = std::clock();
		const std::clock_t time_fast = timestamp2 - timestamp1;
		const std::clock_t time_default = timestamp3 - timestamp2;
		std::printf("fastCos Time %d clocks\n", static_cast<unsigned int>(time_fast));
		std::printf("cos Time %d clocks\n", static_cast<unsigned int>(time_default));

		return time_fast < time_default ? 0 : 1;
	}
}//namespace fastCos

namespace fastSin
{
	int perf()
	{
		const float begin = -glm::pi<float>();
		const float end = glm::pi<float>();
		float result = 0.f;
		const std::clock_t timestamp1 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::fastSin(i);
		const std::clock_t timestamp2 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::sin(i);
		const std::clock_t timestamp3 = std::clock();
		const std::clock_t time_fast = timestamp2 - timestamp1;
		const std::clock_t time_default = timestamp3 - timestamp2;
		std::printf("fastSin Time %d clocks\n", static_cast<unsigned int>(time_fast));
		std::printf("sin Time %d clocks\n", static_cast<unsigned int>(time_default));

		return time_fast < time_default ? 0 : 1;
	}
}//namespace fastSin

namespace fastTan
{
	int perf()
	{
		const float begin = -glm::pi<float>();
		const float end = glm::pi<float>();
		float result = 0.f;
		const std::clock_t timestamp1 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::fastTan(i);
		const std::clock_t timestamp2 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::tan(i);
		const std::clock_t timestamp3 = std::clock();
		const std::clock_t time_fast = timestamp2 - timestamp1;
		const std::clock_t time_default = timestamp3 - timestamp2;
		std::printf("fastTan Time %d clocks\n", static_cast<unsigned int>(time_fast));
		std::printf("tan Time %d clocks\n", static_cast<unsigned int>(time_default));

		return time_fast < time_default ? 0 : 1;
	}
}//namespace fastTan

namespace fastAcos
{
	int perf()
	{
		const float begin = -glm::pi<float>();
		const float end = glm::pi<float>();
		float result = 0.f;
		const std::clock_t timestamp1 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::fastAcos(i);
		const std::clock_t timestamp2 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::acos(i);
		const std::clock_t timestamp3 = std::clock();
		const std::clock_t time_fast = timestamp2 - timestamp1;
		const std::clock_t time_default = timestamp3 - timestamp2;
		std::printf("fastAcos Time %d clocks\n", static_cast<unsigned int>(time_fast));
		std::printf("acos Time %d clocks\n", static_cast<unsigned int>(time_default));

		return time_fast < time_default ? 0 : 1;
	}
}//namespace fastAcos

namespace fastAsin
{
	int perf()
	{
		const float begin = -glm::pi<float>();
		const float end = glm::pi<float>();
		float result = 0.f;
		const std::clock_t timestamp1 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::fastAsin(i);
		const std::clock_t timestamp2 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::asin(i);
		const std::clock_t timestamp3 = std::clock();
		const std::clock_t time_fast = timestamp2 - timestamp1;
		const std::clock_t time_default = timestamp3 - timestamp2;
		std::printf("fastAsin Time %d clocks\n", static_cast<unsigned int>(time_fast));
		std::printf("asin Time %d clocks\n", static_cast<unsigned int>(time_default));

		return time_fast < time_default ? 0 : 1;
	}
}//namespace fastAsin

namespace fastAtan
{
	int perf()
	{
		const float begin = -glm::pi<float>();
		const float end = glm::pi<float>();
		float result = 0.f;
		const std::clock_t timestamp1 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::fastAtan(i);
		const std::clock_t timestamp2 = std::clock();
		for (float i = begin; i<end; i = glm::next_float(i, end))
			result = glm::atan(i);
		const std::clock_t timestamp3 = std::clock();
		const std::clock_t time_fast = timestamp2 - timestamp1;
		const std::clock_t time_default = timestamp3 - timestamp2;
		std::printf("fastAtan Time %d clocks\n", static_cast<unsigned int>(time_fast));
		std::printf("atan Time %d clocks\n", static_cast<unsigned int>(time_default));

		return time_fast < time_default ? 0 : 1;
	}
}//namespace fastAtan

int main()
{
	int Error(0);

#	ifdef NDEBUG
		Error += ::fastCos::perf();
		Error += ::fastSin::perf();
		Error += ::fastTan::perf();
		Error += ::fastAcos::perf();
		Error += ::fastAsin::perf();
		Error += ::fastAtan::perf();
#	endif//NDEBUG

	return Error;
}
