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
		half const & a,
		half const & b
	)
	{
		std::size_t Count = 0;
		float TempA = a;
		float TempB = b;
		while((TempA = nextafterf(TempA, TempB)) != TempB)
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

	inline std::size_t ulp
	(
		double const & a,
		double const & b
	)
	{
		std::size_t Count = 0;
		double Temp = a;
		while((Temp = nextafter(Temp, b)) != b)
			++Count;
		return Count;
	}

	template <typename valType>
	inline detail::xvec2<valType> ulp
	(
		detail::xvec2<valType> const & a,
		detail::xvec2<valType> const & b
	)
	{
		return detail::xvec2<valType>(
				ulp(a[0], b[0]),
				ulp(a[1], b[1]));
	}

	template <typename valType>
	inline detail::xvec3<valType> ulp
	(
		detail::xvec3<valType> const & a,
		detail::xvec3<valType> const & b
	)
	{
		return detail::xvec2<valType>(
				ulp(a[0], b[0]),
				ulp(a[1], b[1]),
				ulp(a[2], b[2]));
	}

	template <typename valType>
	inline detail::xvec4<valType> ulp
	(
		detail::xvec4<valType> const & a,
		detail::xvec4<valType> const & b
	)
	{
		return detail::xvec2<valType>(
				ulp(a[0], b[0]),
				ulp(a[1], b[1]),
				ulp(a[2], b[2]),
				ulp(a[3], b[3]));
	}

}//namespace ulp
}//namespace gtx
}//namespace glm
