///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-06
// Updated : 2007-03-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/polar_coordinates.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T> 
	inline _xvec3<T> polarGTX(const _xvec3<T>& euclidean)
	{
		T length = length(euclidean);
		_xvec3<T> tmp = euclidean / length;
		T xz_dist = sqrt(tmp.x * tmp.x + tmp.z * tmp.z);

		return _xvec3<T>(
			degrees(atan(xz_dist, tmp.y)),	// latitude
			degrees(atan(tmp.x, tmp.z)),		// longitude
			xz_dist);									// xz distance
	}

	template <typename T> 
	inline _xvec3<T> euclideanGTX(const _xvec3<T>& polar)
	{
		T latitude = radians(polar.x);
		T longitude = radians(polar.y);
		return _xvec3<T>(
			cos(latitude) * sin(longitude),
			sin(latitude),
			cos(latitude) * cos(longitude));
	}
}
