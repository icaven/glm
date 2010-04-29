///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-30
// Updated : 2006-01-04
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/closest_point.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_closest_point_inl__
#define __glm_gtx_closest_point_inl__

namespace glm
{
    template <typename T> 
    inline detail::_xvec3<T> closestPointOnLineGTX(const detail::_xvec3<T>& point, const detail::_xvec3<T>& a, const detail::_xvec3<T>& b)
    {
        T LineLength = distance(a, b);
        detail::_xvec3<T> Vector = point - a;
        detail::_xvec3<T> LineDirection = (b - a) / LineLength;

        // Project Vector to LineDirection to get the distance of point from a
        T Distance = dot(Vector, LineDirection);

        if(Distance <= 0) return a;
        if(Distance >= LineLength) return b;
        return a + LineDirection * Distance;
    }
}

#endif//__glm_gtx_closest_point_inl__
