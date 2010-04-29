///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/projection.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline detail::_xvec2<T> projGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& Normal)
    {
        return dot(x, Normal) / dot(Normal, Normal) * Normal;
    }

    template <typename T> 
    inline detail::_xvec3<T> projGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& Normal)
    {
        return dot(x, Normal) / dot(Normal, Normal) * Normal;
    }

    template <typename T> 
    inline detail::_xvec4<T> projGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& Normal)
    {
        return dot(x, Normal) / dot(Normal, Normal) * Normal;
    }
}
