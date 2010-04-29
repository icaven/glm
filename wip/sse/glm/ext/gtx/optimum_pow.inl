///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-27
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/optimum_pow.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename genType> 
    inline genType pow2GTX(const genType& x)
    {
        return x * x;
    }

    template <typename genType> 
    inline genType pow3GTX(const genType& x)
    {
        return x * x * x;
    }

    template <typename genType> 
    inline genType pow4GTX(const genType& x)
    {
        return x * x * x * x;
    }

    inline bool powOfTwoGTX(int x)
    {
        return !(x & (x - 1));
    }

    inline detail::_bvec2 powOfTwoGTX(const detail::_xvec2<int>& x)
    {
        return detail::_bvec2(
            powOfTwoGTX(x.x),
            powOfTwoGTX(x.y));
    }

    inline detail::_bvec3 powOfTwoGTX(const detail::_xvec3<int>& x)
    {
        return detail::_bvec3(
            powOfTwoGTX(x.x),
            powOfTwoGTX(x.y),
            powOfTwoGTX(x.z));
    }

    inline detail::_bvec4 powOfTwoGTX(const detail::_xvec4<int>& x)
    {
        return detail::_bvec4(
            powOfTwoGTX(x.x),
            powOfTwoGTX(x.y),
            powOfTwoGTX(x.z),
            powOfTwoGTX(x.w));
    }
}
