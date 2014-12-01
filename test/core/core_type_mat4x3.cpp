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
/// @file test/core/core_type_mat4x3.cpp
/// @date 2008-08-31 / 2014-11-25
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#include <glm/vector_relational.hpp>
#include <glm/mat4x3.hpp>
#include <vector>

static int test_operators()
{
	glm::mat4x3 l(1.0f);
	glm::mat4x3 m(1.0f);
	glm::vec4 u(1.0f);
	glm::vec3 v(1.0f);
	float x = 1.0f;
	glm::vec3 a = m * u;
	glm::vec4 b = v * m;
	glm::mat4x3 n = x / m;
	glm::mat4x3 o = m / x;
	glm::mat4x3 p = x * m;
	glm::mat4x3 q = m * x;
	bool R = m != q;
	bool S = m == l;

	return (S && !R) ? 0 : 1;
}

int test_ctr()
{
	int Error(0);

#if(GLM_HAS_INITIALIZER_LISTS)
	glm::mat4x3 m0(
		glm::vec3(0, 1, 2), 
		glm::vec3(3, 4, 5),
		glm::vec3(6, 7, 8),
		glm::vec3(9, 10, 11));

	glm::mat4x3 m1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	glm::mat4x3 m2{
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8},
		{9, 10, 11}};

	for(glm::length_t i = 0; i < m0.length(); ++i)
		Error += glm::all(glm::equal(m0[i], m2[i])) ? 0 : 1;

	for(glm::length_t i = 0; i < m1.length(); ++i)
		Error += glm::all(glm::equal(m1[i], m2[i])) ? 0 : 1;

	std::vector<glm::mat4x3> v1{
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}
	};

	std::vector<glm::mat4x3> v2{
		{
			{ 0, 1, 2 },
			{ 4, 5, 6 },
			{ 8, 9, 10 },
			{ 12, 13, 14 }
		},
		{
			{ 0, 1, 2 },
			{ 4, 5, 6 },
			{ 8, 9, 10 },
			{ 12, 13, 14 }
		}
	};

#endif//GLM_HAS_INITIALIZER_LISTS

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_ctr();
	Error += test_operators();

	return Error;
}


