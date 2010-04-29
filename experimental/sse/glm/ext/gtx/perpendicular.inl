///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/perpendicular.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline detail::_xvec2<T> perpGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& Normal)
    {
	    return x - projGTX(x, Normal);
    }

    template <typename T> 
    inline detail::_xvec3<T> perpGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& Normal)
    {
	    return x - projGTX(x, Normal);
    }

    template <typename T> 
    inline detail::_xvec4<T> perpGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& Normal)
    {
	    return x - projGTX(x, Normal);
    }
}
