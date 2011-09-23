//////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
//////////////////////////////////////////////////////////////////////////////////
// Created : 2011-09-19
// Updated : 2011-09-19
// Licence : This source is under MIT License
// File    : glm/gtc/random.inl
//////////////////////////////////////////////////////////////////////////////////

#include <ctime>
#include <cassert>

namespace glm{

template <> 
GLM_FUNC_QUALIFIER glm::half linearRand
(
	glm::half const & Min, 
	glm::half const & Max
)
{
	return glm::half(float(std::rand()) / float(RAND_MAX) * (float(Max) - float(Min)) + float(Min));
}
	
template <> 
GLM_FUNC_QUALIFIER float linearRand
(
	float const & Min, 
	float const & Max
)
{
	return float(std::rand()) / float(RAND_MAX) * (Max - Min) + Min;
}
	
template <> 
GLM_FUNC_QUALIFIER double linearRand
(
	double const & Min, 
	double const & Max
)
{
	return double(std::rand()) / double(RAND_MAX) * (Max - Min) + Min;
}
	
template <typename T>
GLM_FUNC_QUALIFIER detail::tvec2<T> linearRand
(
	detail::tvec2<T> const & Min, 
	detail::tvec2<T> const & Max
)
{
	return detail::tvec2<T>(
		linearRand(Min.x, Max.x),
		linearRand(Min.y, Max.y));
}
	
template <typename T>
GLM_FUNC_QUALIFIER detail::tvec3<T> linearRand
(
	detail::tvec3<T> const & Min, 
	detail::tvec3<T> const & Max
)
{
	return detail::tvec3<T>(
		linearRand(Min.x, Max.x),
		linearRand(Min.y, Max.y),
		linearRand(Min.z, Max.z));
}

template <typename T>
GLM_FUNC_QUALIFIER detail::tvec4<T> linearRand
(
	detail::tvec4<T> const & Min, 
	detail::tvec4<T> const & Max
)
{
	return detail::tvec4<T>(
		linearRand(Min.x, Max.x),
		linearRand(Min.y, Max.y),
		linearRand(Min.z, Max.z),
		linearRand(Min.w, Max.w));
}

template <>
half gaussRand
(
	half const & Mean,	
	half const & Deviation
)
{

template <typename T> 
detail::tvec2<T> circularRand
(
	T const & Radius
)
{
	T a = compRand1<T>(T(0), T(6.283185307179586476925286766559f));
	return detail::tvec2<T>(cos(a), sin(a)) * Radius;		
}
	
template <typename T> 
detail::tvec3<T> sphericalRand
(
	T const & Radius
)
{
	T z = compRand1(T(-1), T(1));
	T a = compRand1(T(0), T(6.283185307179586476925286766559f));
	
	T r = sqrt(T(1) - z * z);
	
	T x = r * cos(a);
	T y = r * sin(a);
	
	return detail::tvec3<T>(x, y, z) * Radius;	
}

}//namespace glm
