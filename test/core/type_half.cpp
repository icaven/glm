///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT licence
// File    : test/core/type_half.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../precompiled.hpp"
#include <glm/core/type_half.hpp>

namespace glm{
namespace test
{
	typedef detail::thalf thalf;

	bool main_type_half()
	{
		bool Result = true;

		{
			thalf A(1.0f);
			thalf B(2.0f);
			thalf C = A + B;
			thalf D(C);
			float E = D;
			int F = C;
			thalf G = B * C;
			thalf H = G / C;
			H += thalf(1.0f);
			double J = H;
			int I = H;

			Result = Result && J == 3.0;
		}
		
		return Result;
	}

}//namespace test
}//namespace glm
