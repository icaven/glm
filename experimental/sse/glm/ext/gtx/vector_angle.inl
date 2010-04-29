///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-30
// Updated : 2005-12-30
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vector_angle.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline T angleGTX(const T x, const T y)
    {
        return degrees(acos(dot(x, y)));
    }

    template <typename T> 
    inline T angleGTX(
		const detail::_xvec2<T>& x, 
		const detail::_xvec2<T>& y)
    {
        return degrees(acos(dot(x, y)));
    }

    template <typename T> 
    inline T angleGTX(
		const detail::_xvec3<T>& x, 
		const detail::_xvec3<T>& y)
    {
        return degrees(acos(dot(x, y)));
    }

    template <typename T> 
    inline T angleGTX(
		const detail::_xvec4<T>& x, 
		const detail::_xvec4<T>& y)
    {
        return degrees(acos(dot(x, y)));
    }

    template <typename T> 
    inline T orientedAngleGTX(
		const detail::_xvec2<T>& x, 
		const detail::_xvec2<T>& y)
    {
        T Angle = acos(dot(x, y));
        T c = cos(Angle);
        T s = sin(Angle);
        detail::_xvec2<T> TransformedVector = detail::_xvec2<T>(c * y.x - s * y.y, s * y.x + c * y.y);
        if(all(equalEpsilonGTX(x, TransformedVector, T(0.01))))
            return -degrees(Angle);
        else
            return degrees(Angle);
    }

    template <typename T> 
    inline T orientedAngleGTX(
		const detail::_xvec3<T>& x, 
		const detail::_xvec3<T>& y)
    {
        T Angle = degrees(acos(dot(x, y)));
        detail::_xvec3<T> TransformedVector = rotateGTX(__quatGTX(), Angle, cross(x, y)) * y;
        if(all(equalEpsilonGTX(x, TransformedVector, T(0.01))))
            return -degrees(Angle);
        else
            return degrees(Angle);
    }

    template <typename T>
    inline T orientedAngleGTX(
		const detail::_xvec4<T>& x, 
		const detail::_xvec4<T>& y)
    {
        T Angle = degrees(acos(dot(x, y)));
        detail::_xvec4<T> TransformedVector = rotateGTX(__quatGTX(), Angle, cross(x, y)) * y;
        if(all(equalEpsilonGTX(x, TransformedVector, T(0.01))))
            return -degrees(Angle);
        else
            return degrees(Angle);
    }
}
