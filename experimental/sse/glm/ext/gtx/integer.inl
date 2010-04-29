///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-24
// Updated : 2006-12-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/integer.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    // absGTX
    inline int absGTX(int x)
    {
        return ((x >> 31) ^ x) - (x >> 31);
    }

    template <typename T> 
	inline T absGTX(T x)
    {
        return x >= T(0) ? x : -x;
    }

    template <typename T> 
	inline detail::_xvec2<T> absGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            absGTX(x.x),
            absGTX(x.y));
    }

    template <typename T> 
	inline detail::_xvec3<T> absGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            absGTX(x.x),
            absGTX(x.y),
            absGTX(x.z));
    }

    template <typename T> 
	inline detail::_xvec4<T> absGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            absGTX(x.x),
            absGTX(x.y),
            absGTX(x.z),
            absGTX(x.w));
    }

    // signGTX
	template <typename genType> inline genType signGTX(const genType& x){return sign(x);}

    // minGTX
    // test: 
    /*
    inline int minGTX(int x, int y)
    {
        return (x + y - absGTX(x - y)) >> 1;
    }
    */
	template <typename T> inline T minGTX(T x, T y) {return min(x, y);}
	template <typename T> inline detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, T y) {return min(x, y);}
	template <typename T> inline detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, T y) {return min(x, y);}
	template <typename T> inline detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, T y) {return min(x, y);}
	template <typename T> inline detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y) {return min(x, y);}
	template <typename T> inline detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y) {return min(x, y);}
	template <typename T> inline detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y) {return min(x, y);}

	// maxGTX
	template <typename T> inline T maxGTX(T x, T y) {return max(x, y);}
	template <typename T> inline detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, T y) {return max(x, y);}
	template <typename T> inline detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, T y) {return max(x, y);}
	template <typename T> inline detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, T y) {return max(x, y);}
	template <typename T> inline detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y) {return max(x, y);}
	template <typename T> inline detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y) {return max(x, y);}
	template <typename T> inline detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y) {return max(x, y);}

    // clampGTX
    template <typename T> inline T clampGTX(T x, T minVal, T maxVal) {return min(max(x, minVal), maxVal);}
    template <typename T> inline detail::_xvec2<T> clampGTX(const detail::_xvec2<T>& x, T minVal, T maxVal) {return min(max(x, minVal), maxVal);}
    template <typename T> inline detail::_xvec3<T> clampGTX(const detail::_xvec3<T>& x, T minVal, T maxVal) {return min(max(x, minVal), maxVal);}
    template <typename T> inline detail::_xvec4<T> clampGTX(const detail::_xvec4<T>& x, T minVal, T maxVal) {return min(max(x, minVal), maxVal);}
    template <typename T> inline detail::_xvec2<T> clampGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& minVal, const detail::_xvec2<T>& maxVal) {return min(max(x, minVal), maxVal);}
    template <typename T> inline detail::_xvec3<T> clampGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& minVal, const detail::_xvec3<T>& maxVal) {return min(max(x, minVal), maxVal);}
    template <typename T> inline detail::_xvec4<T> clampGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& minVal, const detail::_xvec4<T>& maxVal) {return min(max(x, minVal), maxVal);}

    // powGTX
    inline int powGTX(int x, int y)
    {
		if(y == 0)
			return 1;
        int result = x;
        for(int i = 1; i < y; ++i)
            result *= x;
        return result;
    }

	template <typename T> 
    inline T powGTX(T x, T y)
    {
        return std::pow(x, y);
    }

	template <typename T> 
    inline detail::_xvec2<T> powGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_xvec2<T>(
            powGTX(x.x, y.x),
            powGTX(x.y, y.y));
    }

	template <typename T> 
    inline detail::_xvec3<T> powGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_xvec3<T>(
            powGTX(x.x, y.x),
            powGTX(x.y, y.y),
            powGTX(x.z, y.z));
    }

	template <typename T> 
    inline detail::_xvec4<T> powGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_xvec4<T>(
            powGTX(x.x, y.x),
            powGTX(x.y, y.y),
            powGTX(x.z, y.z),
            powGTX(x.w, y.w));
    }

    // sqrtGTX: From Christopher J. Musial, An integer square root, Graphics Gems, 1990, page 387
    inline int sqrtGTX(int x)
    {
        if(x <= 1) return x;

        int NextTrial = x >> 1;
        int CurrentAnswer;

        do
        {
            CurrentAnswer = NextTrial;
            NextTrial = (NextTrial + x / NextTrial) >> 1;
        } while(NextTrial < CurrentAnswer);

        return CurrentAnswer;
    }

    template <typename T> 
    inline T sqrtGTX(T x)
    {
        return std::sqrt(x);
    }

    template <typename T> 
	inline detail::_xvec2<T> sqrtGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            sqrtGTX(x.x),
            sqrtGTX(x.y));
    }

    template <typename T> 
	inline detail::_xvec3<T> sqrtGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            sqrtGTX(x.x),
            sqrtGTX(x.y),
            sqrtGTX(x.z));
    }

    template <typename T> 
	inline detail::_xvec4<T> sqrtGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            sqrtGTX(x.x),
            sqrtGTX(x.y),
            sqrtGTX(x.z),
            sqrtGTX(x.w));
    }

    // modGTX
	inline int modGTX(int x, int y)
	{
		return x - y * (x / y);
	}
/*
	template <typename T> 
    inline T modGTX(T x, T y)
    {
        return x - y * (x / y);
    }
*/
	template <typename T> 
    inline detail::_xvec2<T> modGTX(const detail::_xvec2<T>& x, T y)
    {
        return detail::_xvec2<T>(
            modGTX(x.x, y),
            modGTX(x.y, y));
    }

	template <typename T> 
    inline detail::_xvec3<T> modGTX(const detail::_xvec3<T>& x, T y)
    {
        return detail::_xvec3<T>(
            modGTX(x.x, y),
            modGTX(x.y, y),
            modGTX(x.z, y));
    }

	template <typename T> 
    inline detail::_xvec4<T> modGTX(const detail::_xvec4<T>& x, T y)
    {
        return detail::_xvec4<T>(
            modGTX(x.x, y),
            modGTX(x.y, y),
            modGTX(x.z, y),
            modGTX(x.w, y));
    }

	template <typename T> 
    inline detail::_xvec2<T> modGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_xvec2<T>(
            modGTX(x.x, y.x),
            modGTX(x.y, y.y));
    }

	template <typename T> 
    inline detail::_xvec3<T> modGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_xvec3<T>(
            modGTX(x.x, y.x),
            modGTX(x.y, y.y),
            modGTX(x.z, y.z));
    }

	template <typename T> 
    inline detail::_xvec4<T> modGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_xvec4<T>(
            modGTX(x.x, y.x),
            modGTX(x.y, y.y),
            modGTX(x.z, y.z),
            modGTX(x.w, y.w));
    }

    // factorial (!12 max, integer only)
	template <typename T> 
    inline T factorialGTX(T x)
    {
        T Result;
        for(Result = 1; x > 1; --x)
            Result *= x;
        return Result;
    }

	template <typename T> 
    inline detail::_xvec2<T> factorialGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            factorialGTX(x.x),
            factorialGTX(x.y));
    }

	template <typename T> 
    inline detail::_xvec3<T> factorialGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            factorialGTX(x.x),
            factorialGTX(x.y),
            factorialGTX(x.z));
    }

	template <typename T> 
    inline detail::_xvec4<T> factorialGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            factorialGTX(x.x),
            factorialGTX(x.y),
            factorialGTX(x.z),
            factorialGTX(x.w));
    }
}
