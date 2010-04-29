///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/round.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GL_GTX_double
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename genType>
    inline genType roundGTX(const genType& x)
    {
        genType result;
        int i = x._size();
        while(i--)
            result[i] = float(int(x[i] + 0.5f));
        return result;
    }

    inline __halfGTX roundGTX(__halfGTX x)
    {
        return __halfGTX(roundGTX(float(x)));
    }

    inline float roundGTX(float x)
    {
        return float(int(x + 0.5f));
    }

    inline double roundGTX(double x)
    {
        return double(int(x + 0.5));
    }
}
