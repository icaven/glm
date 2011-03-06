///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-03-07
// Updated : 2011-03-07
// Licence : This source is under MIT License
// File    : glm/gtx/ulp.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <cmath>

namespace glm{
namespace gtx{
namespace ulp
{
	inline std::size_t ulp
	(
		double const & a,
		double const & b
	)
	{
		std::size_t Count = 0;
		double Temp = a;
		while((Temp = nextafterf(Temp, b)) != b)
			++Count;
		return Count;
	}

	inline std::size_t ulp
	(
		float const & a,
		float const & b
	)
	{
		std::size_t Count = 0;
		float Temp = a;
		while((Temp = nextafterf(Temp, b)) != b)
			++Count;
		return Count;
	}
}//namespace ulp
}//namespace gtx
}//namespace glm
