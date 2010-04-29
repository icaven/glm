///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-05
// Updated : 2007-03-05
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vector_query.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <cassert>

namespace glm
{
	template <typename T>
	inline bool areCollinearGTX(const detail::_xvec2<T>& v0, const detail::_xvec2<T>& v1, const T epsilon)
	{
		return length(cross(detail::_xvec3<T>(v0, T(0)), detail::_xvec3<T>(v1, T(0)))) < epsilon;
	}

	template <typename T>
	inline bool areCollinearGTX(const detail::_xvec3<T>& v0, const detail::_xvec3<T>& v1, const T epsilon)
	{
		return length(cross(v0, v1)) < epsilon;
	}

	template <typename T>
	inline bool areCollinearGTX(const detail::_xvec4<T>& v0, const detail::_xvec4<T>& v1, const T epsilon)
	{
		return length(cross(detail::_xvec3<T>(v0), detail::_xvec3<T>(v1))) < epsilon;
	}

	template <typename genType>
	inline bool areOppositeGTX(const genType& v0, const genType& v1, const GLMvalType epsilon)
	{
		assert(isNormalized(v0) && isNormalized(v1));
        return((genType::value_type(1) + dot(v0, v1)) <= epsilon);
	}
/*
	template <typename T>
	inline bool areOppositeGTX(const _xvec2<T>& v0, const _xvec2<T>& v1, const T epsilon)
	{
		assert(isNormalized(v0) && isNormalized(v1));
		return((T(1) + dot(v0, v1)) <= epsilon);
	}

	template <typename T>
	inline bool areOppositeGTX(const _xvec3<T>& v0, const _xvec3<T>& v1, const T epsilon)
	{
		assert(isNormalized(v0) && isNormalized(v1));
		return((T(1) + dot(v0, v1)) <= epsilon);
	}

	template <typename T>
	inline bool areOppositeGTX(const _xvec4<T>& v0, const _xvec4<T>& v1, const T epsilon)
	{
		assert(isNormalized(v0) && isNormalized(v1));
		return((T(1) + dot(v0, v1)) <= epsilon);
	}
*/
	template <typename genType>
	inline bool areOrthogonalGTX(const genType& v0, const genType& v1, const GLMvalType epsilon)
	{
		return abs(dot(v0, v1)) <= max(GLMvalType(1), length(v0)) * max(GLMvalType(1), length(v1)) * epsilon;
	}
/*
	template <typename T>
	inline bool areOrthogonalGTX(const _xvec2<T>& v0, const _xvec2<T>& v1, const T epsilon)
	{
		return abs(dot(v0, v1)) <= max(T(1), length(v0)) * max(T(1), length(v1)) * epsilon;
	}

	template <typename T>
	inline bool areOrthogonalGTX(const _xvec3<T>& v0, const _xvec3<T>& v1, const T epsilon)
	{
		return abs(dot(v0, v1)) <= max(T(1), length(v0)) * max(T(1), length(v1)) * epsilon;
	}

	template <typename T>
	inline bool areOrthogonalGTX(const _xvec4<T>& v0, const _xvec4<T>& v1, const T epsilon)
	{
		return abs(dot(v0, v1)) <= max(T(1), length(v0)) * max(T(1), length(v1)) * epsilon;
	}
*/

	template <typename genType> 
	inline bool isNormalizedGTX(const genType& v, const GLMvalType epsilon)
	{
		return abs(length(v) - GLMvalType(1)) <= GLMvalType(2) * epsilon;
	}
/*
	template <typename T> 
	inline bool isNormalizedGTX(const _xvec2<T>& v, const T epsilon)
	{
		return abs(length(v) - T(1)) <= T(2) * epsilon;
	}

	template <typename T> 
	inline bool isNormalizedGTX(const _xvec3<T>& v, const T epsilon)
	{
		return abs(length(v) - T(1)) <= T(2) * epsilon;
	}

	template <typename T> 
	inline bool isNormalizedGTX(const _xvec4<T>& v, const T epsilon)
	{
		return abs(length(v) - T(1)) <= T(2) * epsilon;
	}
*/
	template <typename genType> 
	inline bool isNullGTX(const genType& v, const GLMvalType epsilon)
	{
		return length(v) <= epsilon;
	}
/*
	template <typename T> 
	inline bool isNullGTX(const _xvec2<T>& v, const T epsilon)
	{
		return length(v) <= epsilon;
	}

	template <typename T> 
	inline bool isNullGTX(const _xvec3<T>& v, const T epsilon)
	{
		return length(v) <= epsilon;
	}

	template <typename T> 
	inline bool isNullGTX(const _xvec4<T>& v, const T epsilon)
	{
		return length(v) <= epsilon;
	}
*/

    template <typename T> 
    inline bool isCompNullGTX(const T s, const T epsilon)
    {
        return abs(s) < epsilon;
    }

    template <typename T> 
    inline bvec2 isCompNullGTX(const detail::_xvec2<T>& v, const T epsilon)
    {
        return bvec2(
            (abs(v.x) < epsilon),
            (abs(v.y) < epsilon));
    }

    template <typename T> 
    inline bvec3 isCompNullGTX(const detail::_xvec3<T>& v, const T epsilon)
    {
        return bvec3(
            abs(v.x) < epsilon,
            abs(v.y) < epsilon,
            abs(v.z) < epsilon);
    }

    template <typename T> 
    inline bvec4 isCompNullGTX(const detail::_xvec4<T>& v, const T epsilon)
    {
        return bvec4(
            abs(v.x) < epsilon,
            abs(v.y) < epsilon,
            abs(v.z) < epsilon,
            abs(v.w) < epsilon);
    }

	template <typename genType>
	inline bool areOrthonormalGTX(const genType& v0, const genType& v1, const GLMvalType epsilon)
	{
		return isNormalizedGTX(v0) && isNormalizedGTX(v1) && (abs(dot(v0, v1)) <= epsilon);
	}

/*
	template <typename T>
	inline bool areOrthonormalGTX(const _xvec2<T>& v0, const _xvec2<T>& v1, const T epsilon)
	{
		return isNormalizedGTX(v0) && isNormalizedGTX(v1) && (abs(dot(v0, v1)) <= epsilon);
	}

	template <typename T>
	inline bool areOrthonormalGTX(const _xvec3<T>& v0, const _xvec3<T>& v1, const T epsilon)
	{
		return isNormalizedGTX(v0) && isNormalizedGTX(v1) && (abs(dot(v0, v1)) <= epsilon);
	}

	template <typename T>
	inline bool areOrthonormalGTX(const _xvec4<T>& v0, const _xvec4<T>& v1, const T epsilon)
	{
		return isNormalizedGTX(v0) && isNormalizedGTX(v1) && (abs(dot(v0, v1)) <= epsilon);
	}
*/

	template <typename genType>
	inline bool areSimilarGTX(const genType& v0, const genType& v1, const GLMvalType epsilon)
	{
		bool similar = true;
        for(typename genType::size_type i = 0; similar && i < genType::value_size; i++)
			similar = (abs(v0[i] - v1[i]) <= epsilon);
		return similar;
	}

/*
	template <typename T>
	inline bool areSimilar(const _xvec2<T>& v0, const _xvec2<T>& v1, const T epsilon)
	{
		bool similar = true;
		for(int i = 0; similar && i < 2; i++)
			similar = (abs(v0[i] - v1[i]) <= epsilon);
		return similar;
	}

	template <typename T> 
	inline bool areSimilar(const _xvec3<T>& v0, const _xvec3<T>& v1, const T epsilon)
	{
		bool similar = true;
		for(int i = 0; similar && i < 3; i++)
			similar = (abs(v0[i] - v1[i]) <= epsilon);
		return similar;
	}

	template <typename T>
	inline bool areSimilar(const _xvec4<T>& v0, const _xvec4<T>& v1, const T epsilon)
	{
		bool similar = true;
		for(int i = 0; similar && i < 4; i++)
			similar = (abs(v0[i] - v1[i]) <= epsilon);
		return similar;
	}
*/
}
