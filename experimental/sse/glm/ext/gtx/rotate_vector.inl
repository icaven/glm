///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-11-02
// Updated : 2006-11-02
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/rotate_vector.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T>
	inline detail::_xvec2<T> rotateGTX(const detail::_xvec2<T>& v, T angle)
	{
		detail::_xvec2<T> Result;
		const T Cos = cos(radians(angle));
        const T Sin = sin(radians(angle));
		Result.x = v.x * Cos - v.y * Sin;
		Result.y = v.x * Sin + v.y * Cos;
		return Result;
	};

	template <typename T> 
	inline detail::_xvec3<T> rotateGTX(const detail::_xvec3<T>& v, T angle, const detail::_xvec3<T>& normal)
	{
		return rotateGTX(angle, normal) * v;
	}
/*
    template <typename T> 
    inline detail::_xvec3<T> rotateGTX(const detail::_xvec3<T>& x, T angle, const detail::_xvec3<T>& normal)
    {
        const T Cos = cos(radians(angle));
        const T Sin = sin(radians(angle));
        return x * Cos + ((x * normal) * (T(1) - Cos)) * normal + cross(x, normal) * Sin;
    }
*/
	template <typename T> 
	inline detail::_xvec4<T> rotateGTX(const detail::_xvec4<T>& v, T angle, const detail::_xvec3<T>& normal)
	{
		return rotateGTX(angle, normal) * v;
	}

	template <typename T>
	inline detail::_xvec3<T> rotateXGTX(const detail::_xvec3<T>& v, T angle)
	{
		detail::_xvec3<T> Result = v;
		const T Cos = cos(radians(angle));
        const T Sin = sin(radians(angle));
		Result.y = v.y * Cos - v.z * Sin;
		Result.z = v.y * Sin + v.z * Cos;
		return Result;
	}

	template <typename T>
	inline detail::_xvec3<T> rotateYGTX(const detail::_xvec3<T>& v, T angle)
	{
		detail::_xvec3<T> Result = v;
		const T Cos = cos(radians(angle));
        const T Sin = sin(radians(angle));
		Result.x =  v.x * Cos + v.z * Sin;
		Result.z = -v.x * Sin + v.z * Cos;
		return Result;
	}

	template <typename T>
	inline detail::_xvec3<T> rotateZGTX(const detail::_xvec3<T>& v, T angle)
	{
		detail::_xvec3<T> Result = v;
		const T Cos = cos(radians(angle));
        const T Sin = sin(radians(angle));
		Result.x = v.x * Cos - v.y * Sin;
		Result.y = v.x * Sin + v.y * Cos;
		return Result;
	};

	template <typename T>
	inline detail::_xvec4<T> rotateXGTX(const detail::_xvec4<T>& v, T angle)
	{
		detail::_xvec4<T> Result = v;
		const T Cos = cos(radians(angle));
        const T Sin = sin(radians(angle));
		Result.y = v.y * Cos - v.z * Sin;
		Result.z = v.y * Sin + v.z * Cos;
		return Result;
	}

	template <typename T>
	inline detail::_xvec4<T> rotateYGTX(const detail::_xvec4<T>& v, T angle)
	{
		detail::_xvec4<T> Result = v;
		const T Cos = cos(radians(angle));
        const T Sin = sin(radians(angle));
		Result.x =  v.x * Cos + v.z * Sin;
		Result.z = -v.x * Sin + v.z * Cos;
		return Result;
	}

	template <typename T>
	inline detail::_xvec4<T> rotateZGTX(const detail::_xvec4<T>& v, T angle)
	{
		detail::_xvec4<T> Result = v;
		const T Cos = cos(radians(angle));
        const T Sin = sin(radians(angle));
		Result.x = v.x * Cos - v.y * Sin;
		Result.y = v.x * Sin + v.y * Cos;
		return Result;
	};

	template <typename T>
	inline detail::_xmat4<T> orientationGTX(const detail::_xvec3<T>& Normal, const detail::_xvec3<T>& Up)
	{
		if(all(equal(Normal, Up)))
			return detail::_xmat4<T>(T(1));

		detail::_xvec3<T> RotationAxis = cross(Up, Normal);
		T Angle = degrees(acos(dot(Normal, Up)));
		return rotateGTX(Angle, RotationAxis);
	}
}
