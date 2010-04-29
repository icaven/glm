///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-24
// Updated : 2006-12-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/unsigned_int.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    inline unsigned int powGTX(unsigned int x, unsigned int y)
    {
        unsigned int result = x;
        for(unsigned int i = 1; i < y; ++i)
            result *= x;
        return result;
    }

    inline unsigned int sqrtGTX(unsigned int x)
    {
        if(x <= 1) return x;

        unsigned int NextTrial = x >> 1;
        unsigned int CurrentAnswer;

        do
        {
            CurrentAnswer = NextTrial;
            NextTrial = (NextTrial + x / NextTrial) >> 1;
        } while(NextTrial < CurrentAnswer);

        return CurrentAnswer;
    }

	inline unsigned int modGTX(unsigned int x, unsigned int y)
	{
		return x - y * (x / y);
	}
}
