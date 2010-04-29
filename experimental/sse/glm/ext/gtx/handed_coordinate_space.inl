///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/handed_coordinate_space.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline bool rightHandedGTX(const detail::_xvec3<T>& tangent, const detail::_xvec3<T>& binormal, const detail::_xvec3<T>& normal)
    {
        return dot(cross(normal, tangent), binormal) > T(0);
    }

    template <typename T> 
    inline bool leftHandedGTX(const detail::_xvec3<T>& tangent, const detail::_xvec3<T>& binormal, const detail::_xvec3<T>& normal)
    {
        return dot(cross(normal, tangent), binormal) < T(0);
    }
}
