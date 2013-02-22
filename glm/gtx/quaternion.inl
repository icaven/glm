///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2008-11-27
// Licence : This source is under MIT License
// File    : glm/gtx/quaternion.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <limits>

namespace glm
{
	template <typename valType> 
	GLM_FUNC_QUALIFIER detail::tvec3<valType> cross
	(
		detail::tvec3<valType> const & v, 
		detail::tquat<valType> const & q
	)
	{
		return inverse(q) * v;
	}

	template <typename valType> 
	GLM_FUNC_QUALIFIER detail::tvec3<valType> cross
	(
		detail::tquat<valType> const & q, 
		detail::tvec3<valType> const & v
	)
	{
		return q * v;
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER detail::tquat<T> squad
	(
		detail::tquat<T> const & q1, 
		detail::tquat<T> const & q2, 
		detail::tquat<T> const & s1, 
		detail::tquat<T> const & s2, 
		T const & h)
	{
		return mix(mix(q1, q2, h), mix(s1, s2, h), T(2) * (T(1) - h) * h);
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER detail::tquat<T> intermediate
	(
		detail::tquat<T> const & prev, 
		detail::tquat<T> const & curr, 
		detail::tquat<T> const & next
	)
	{
		detail::tquat<T> invQuat = inverse(curr);
		return exp((log(next + invQuat) + log(prev + invQuat)) / T(-4)) * curr;
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER detail::tquat<T> exp
	(
		detail::tquat<T> const & q
	)
	{
		detail::tvec3<T> u(q.x, q.y, q.z);
		float Angle = glm::length(u);
		detail::tvec3<T> v(u / Angle);
		return detail::tquat<T>(cos(Angle), sin(Angle) * v);
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER detail::tquat<T> log
	(
		detail::tquat<T> const & q
	)
	{
		if((q.x == T(0)) && (q.y == T(0)) && (q.z == T(0)))
		{
			if(q.w > T(0))
				return detail::tquat<T>(log(q.w), T(0), T(0), T(0));
			else if(q.w < T(0))
				return detail::tquat<T>(log(-q.w), T(3.1415926535897932384626433832795), T(0),T(0));
			else
				return detail::tquat<T>(std::numeric_limits<T>::infinity(), std::numeric_limits<T>::infinity(), std::numeric_limits<T>::infinity(), std::numeric_limits<T>::infinity());
		} 
		else 
		{
			T Vec3Len = sqrt(q.x * q.x + q.y * q.y + q.z * q.z);
			T QuatLen = sqrt(Vec3Len * Vec3Len + q.w * q.w);
			T t = atan(Vec3Len, T(q.w)) / Vec3Len;
			return detail::tquat<T>(t * q.x, t * q.y, t * q.z, log(QuatLen));
		}
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER detail::tquat<T> pow
	(
		detail::tquat<T> const & x, 
		T const & y
	)
	{
		if(abs(x.w) > T(0.9999))
			return x;
		float Angle = acos(y);
		float NewAngle = Angle * y;
		float Div = sin(NewAngle) / sin(Angle);
		return detail::tquat<T>(
			cos(NewAngle),
			x.x * Div,
			x.y * Div,
			x.z * Div);
	}

	//template <typename T> 
	//GLM_FUNC_QUALIFIER detail::tquat<T> sqrt
	//(
	//	detail::tquat<T> const & q
	//)
	//{
	//	T q0 = T(1) - dot(q, q);
	//	return T(2) * (T(1) + q0) * q;
	//}

	template <typename T> 
	GLM_FUNC_QUALIFIER detail::tvec3<T> rotate
	(
		detail::tquat<T> const & q, 
		detail::tvec3<T> const & v
	)
	{
		return q * v;
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER detail::tvec4<T> rotate
	(
		detail::tquat<T> const & q, 
		detail::tvec4<T> const & v
	)
	{
		return q * v;
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER T extractRealComponent
	(
		detail::tquat<T> const & q
	)
	{
		T w = T(1.0) - q.x * q.x - q.y * q.y - q.z * q.z;
		if(w < T(0))
			return T(0);
		else
			return -sqrt(w);
	}

	template <typename T> 
	GLM_FUNC_QUALIFIER T length2
	(
		detail::tquat<T> const & q
	)
	{
		return q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w;
	}

	template <typename T>
	GLM_FUNC_QUALIFIER detail::tquat<T> shortMix
	(
		detail::tquat<T> const & x, 
		detail::tquat<T> const & y, 
		T const & a
	)
	{
		if(a <= typename detail::tquat<T>::value_type(0)) return x;
		if(a >= typename detail::tquat<T>::value_type(1)) return y;

		T fCos = dot(x, y);
		detail::tquat<T> y2(y); //BUG!!! tquat<T> y2;
		if(fCos < T(0))
		{
			y2 = -y;
			fCos = -fCos;
		}

		//if(fCos > 1.0f) // problem
		T k0, k1;
		if(fCos > T(0.9999))
		{
			k0 = T(1) - a;
			k1 = T(0) + a; //BUG!!! 1.0f + a;
		}
		else
		{
			T fSin = sqrt(T(1) - fCos * fCos);
			T fAngle = atan(fSin, fCos);
			T fOneOverSin = T(1) / fSin;
			k0 = sin((T(1) - a) * fAngle) * fOneOverSin;
			k1 = sin((T(0) + a) * fAngle) * fOneOverSin;
		}

		return detail::tquat<T>(
			k0 * x.w + k1 * y2.w,
			k0 * x.x + k1 * y2.x,
			k0 * x.y + k1 * y2.y,
			k0 * x.z + k1 * y2.z);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER detail::tquat<T> fastMix
	(
		detail::tquat<T> const & x, 
		detail::tquat<T> const & y, 
		T const & a
	)
	{
		return glm::normalize(x * (T(1) - a) + (y * a));
	}

	template <typename T>
	GLM_FUNC_QUALIFIER detail::tquat<T> rotation
	(
		detail::tvec3<T> const & orig, 
		detail::tvec3<T> const & dest
	)
	{
		T cosTheta = dot(orig, dest);
		detail::tvec3<T> rotationAxis;

		if(cosTheta < T(-1) + epsilon<T>())
		{
			// special case when vectors in opposite directions :
			// there is no "ideal" rotation axis
			// So guess one; any will do as long as it's perpendicular to start
			// This implementation favors a rotation around the Up axis (Y),
			// since it's often what you want to do.
			rotationAxis = cross(detail::tvec3<T>(0, 0, 1), orig);
			if(length2(rotationAxis) < epsilon<T>()) // bad luck, they were parallel, try again!
				rotationAxis = cross(detail::tvec3<T>(1, 0, 0), orig);

			rotationAxis = normalize(rotationAxis);
			return angleAxis(pi<T>(), rotationAxis);
		}

		// Implementation from Stan Melax's Game Programming Gems 1 article
		rotationAxis = cross(orig, dest);

		T s = sqrt((T(1) + cosTheta) * T(2));
		T invs = T(1) / s;

		return detail::tquat<T>(
			s * T(0.5f), 
			rotationAxis.x * invs,
			rotationAxis.y * invs,
			rotationAxis.z * invs);
	}

}//namespace glm
