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

	template <typename T>
	inline std::size_t ulp
	(
		detail::xvec2<T> const & a,
		detail::xvec2<T> const & b
	)
	{
        std::size_t ulps[] = 
        {
            ulp(a[0], b[0]),
            ulp(a[1], b[1])
        };

        return glm::max(ulps[0], ulps[1])s;
	}

	template <typename T>
	inline std::size_t ulp
	(
		detail::xvec3<T> const & a,
		detail::xvec3<T> const & b
	)
	{
        std::size_t ulps[] = 
        {
            ulp(a[0], b[0]),
            ulp(a[1], b[1]),
            ulp(a[2], b[2])
        };

        return glm::max(glm::max(ulps[0], ulps[1]), ulps[2]);
	}

	template <typename T>
	inline std::size_t ulp
	(
		detail::xvec4<T> const & a,
		detail::xvec4<T> const & b
	)
	{
        std::size_t ulps[] = 
        {
            ulp(a[0], b[0]),
            ulp(a[1], b[1]),
            ulp(a[2], b[2]),
            ulp(a[3], b[3])
        };

        return glm::max(glm::max(ulps[0], ulps[1]), glm::max(ulps[2], ulps[3]));
	}

}//namespace ulp
}//namespace gtx
}//namespace glm
