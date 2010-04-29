///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-16
// Updated : 2006-01-16
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vector_access.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
/*
    inline void setGTX(float& v, float x)
    {
        v = x;
    }

    inline void setGTX(int& v, int x)
    {
        v = x;
    }

    inline void setGTX(bool& v, bool x)
    {
        v = x;
    }

    inline void setGTX(double& v, double x)
    {
        v = x;
    }

    inline void setGTX(__halfGTX& v, __halfGTX x)
    {
        v = x;
    }
*/
    template <typename T> 
    inline void setGTX(detail::_xvec2<T>& v, T x, T y)
    {
        v.x = x;
        v.y = y;
    }

    template <typename T> 
    inline void setGTX(detail::_xvec3<T>& v, T x, T y, T z)
    {
        v.x = x;
        v.y = y;
        v.z = z;
    }

    template <typename T>
    inline void setGTX(detail::_xvec4<T>& v, T x, T y, T z, T w)
    {
        v.x = x;
        v.y = y;
        v.z = z;
        v.w = w;
    }

    inline void setGTX(detail::_bvec2& v, bool x, bool y)
    {
        v.x = x;
        v.y = y;
    }

    inline void setGTX(detail::_bvec3& v, bool x, bool y, bool z)
    {
        v.x = x;
        v.y = y;
        v.z = z;
    }

    inline void setGTX(detail::_bvec4& v, bool x, bool y, bool z, bool w)
    {
        v.x = x;
        v.y = y;
        v.z = z;
        v.w = w;
    }
}
