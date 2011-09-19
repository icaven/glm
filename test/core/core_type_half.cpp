///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2010-08-25
// Licence : This source is under MIT licence
// File    : test/core/type_half.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/half_float.hpp>

int main()
{
	int Result = 0;

	glm::half A(1.0f);
	glm::half B(2.0f);
	glm::half C = A + B;
	glm::half D(C);
	float E = D.toFloat();
	int F = C.toFloat();
	Result += float(F) == E ? 0 : 1;
	glm::half G = B * C;
	glm::half H = G / C;
	H += glm::half(1.0f);
	double J = H.toFloat();
	int I = H.toFloat();
	Result += J == 3.0 ? 0 : 1;
	Result += I == 3 ? 0 : 1;
	
	return Result;
}
