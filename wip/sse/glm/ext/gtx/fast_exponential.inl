///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-09
// Updated : 2006-01-09
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/fast_exponential.h
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    // fastPowGTX:
	template <typename T>
    inline T fastPowGTX(const T x, const T y)
    {
        return exp(y * log(x));
    }

    template <typename T>
    inline detail::_xvec2<T> fastPowGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
    {
        return detail::_xvec2<T>(
            fastPowGTX(x.x, y.x),
            fastPowGTX(x.y, y.y));
    }

    template <typename T>
    inline detail::_xvec3<T> fastPowGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
    {
        return detail::_xvec3<T>(
            fastPowGTX(x.x, y.x),
            fastPowGTX(x.y, y.y),
            fastPowGTX(x.z, y.z));
    }

    template <typename T>
    inline detail::_xvec4<T> fastPowGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
    {
        return detail::_xvec4<T>(
            fastPowGTX(x.x, y.x),
            fastPowGTX(x.y, y.y),
            fastPowGTX(x.z, y.z),
            fastPowGTX(x.w, y.w));
    }

	template <typename T>
	inline T fastPowGTX(const T x, int y)
    {
        T f = T(1);
        for(int i = 0; i < y; ++i)
            f *= x;
        return f;
    }

    template <typename T>
    inline detail::_xvec2<T> fastPowGTX(const detail::_xvec2<T>& x, const detail::_xvec2<int>& y)
    {
        return detail::_xvec2<T>(
            fastPowGTX(x.x, y.x),
            fastPowGTX(x.y, y.y));
    }

    template <typename T>
    inline detail::_xvec3<T> fastPowGTX(const detail::_xvec3<T>& x, const detail::_xvec3<int>& y)
    {
        return detail::_xvec3<T>(
            fastPowGTX(x.x, y.x),
            fastPowGTX(x.y, y.y),
            fastPowGTX(x.z, y.z));
    }

    template <typename T>
    inline detail::_xvec4<T> fastPowGTX(const detail::_xvec4<T>& x, const detail::_xvec4<int>& y)
    {
        return detail::_xvec4<T>(
            fastPowGTX(x.x, y.x),
            fastPowGTX(x.y, y.y),
            fastPowGTX(x.z, y.z),
            fastPowGTX(x.w, y.w));
    }

    // fastExpGTX
    // Note: This function provides accurate results only for value between -1 and 1, else avoid it.
	template <typename T>
    inline T fastExpGTX(const T x)
    {
        // This has a better looking and same performance in release mode than the following code. However, in debug mode it's slower.
        // return 1.0f + x * (1.0f + x * 0.5f * (1.0f + x * 0.3333333333f * (1.0f + x * 0.25 * (1.0f + x * 0.2f))));
        T x2 = x * x;
        T x3 = x2 * x;
        T x4 = x3 * x;
        T x5 = x4 * x;
        return T(1) + x + (x2 * T(0.5)) + (x3 * T(0.1666666667)) + (x4 * T(0.041666667)) + (x5 * T(0.008333333333));
    }
/*  // Try to handle all values of float... but often shower than std::exp, glm::floor and the loop kill the performance
    inline float fastExpGTX(float x)
    {
        const float e = 2.718281828f;
        const float IntegerPart = floor(x);
        const float FloatPart = x - IntegerPart;
        float z = 1.f;

        for(int i = 0; i < int(IntegerPart); ++i)
            z *= e;

        const float x2 = FloatPart * FloatPart;
        const float x3 = x2 * FloatPart;
        const float x4 = x3 * FloatPart;
        const float x5 = x4 * FloatPart;
        return z * (1.0f + FloatPart + (x2 * 0.5f) + (x3 * 0.1666666667f) + (x4 * 0.041666667f) + (x5 * 0.008333333333f));
    }

    // Increase accuracy on number bigger that 1 and smaller than -1 but it's not enough for high and negative numbers
    inline float fastExpGTX(float x)
    {
        // This has a better looking and same performance in release mode than the following code. However, in debug mode it's slower.
        // return 1.0f + x * (1.0f + x * 0.5f * (1.0f + x * 0.3333333333f * (1.0f + x * 0.25 * (1.0f + x * 0.2f))));
        float x2 = x * x;
        float x3 = x2 * x;
        float x4 = x3 * x;
        float x5 = x4 * x;
        float x6 = x5 * x;
        float x7 = x6 * x;
        float x8 = x7 * x;
        return 1.0f + x + (x2 * 0.5f) + (x3 * 0.1666666667f) + (x4 * 0.041666667f) + (x5 * 0.008333333333f)+ (x6 * 0.00138888888888f) + (x7 * 0.000198412698f) + (x8 * 0.0000248015873f);;
    }
*/
    template <typename T>
    inline detail::_xvec2<T> fastExpGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastExpGTX(x.x),
            fastExpGTX(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> fastExpGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastExpGTX(x.x),
            fastExpGTX(x.y),
            fastExpGTX(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> fastExpGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastExpGTX(x.x),
            fastExpGTX(x.y),
            fastExpGTX(x.z),
            fastExpGTX(x.w));
    }

    // fastLogGTX
	template <typename T>
    inline T fastLogGTX(const T x)
    {
        return std::log(x);
    }

    /* Slower than the VC7.1 function...
    inline float fastLogGTX(float x)
    {
        float y1 = (x - 1.0f) / (x + 1.0f);
        float y2 = y1 * y1;
        return 2.0f * y1 * (1.0f + y2 * (0.3333333333f + y2 * (0.2f + y2 * 0.1428571429f)));
    }
    */

    template <typename T>
    inline detail::_xvec2<T> fastLogGTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastLnGTX(x.x),
            fastLnGTX(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> fastLogGTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastLnGTX(x.x),
            fastLnGTX(x.y),
            fastLnGTX(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> fastLogGTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastLnGTX(x.x),
            fastLnGTX(x.y),
            fastLnGTX(x.z),
            fastLnGTX(x.w));
    }

    //fastExp2GTX, ln2 = 0.69314718055994530941723212145818f
	template <typename T>
    inline T fastExp2GTX(const T x)
    {
        return fastExpGTX(0.69314718055994530941723212145818f * x);
    }

    template <typename T>
    inline detail::_xvec2<T> fastExp2GTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastExp2GTX(x.x),
            fastExp2GTX(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> fastExp2GTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastExp2GTX(x.x),
            fastExp2GTX(x.y),
            fastExp2GTX(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> fastExp2GTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastExp2GTX(x.x),
            fastExp2GTX(x.y),
            fastExp2GTX(x.z),
            fastExp2GTX(x.w));
    }

    // fastLog2GTX, ln2 = 0.69314718055994530941723212145818f
	template <typename T>
    inline T fastLog2GTX(const T x)
    {
        return fastLogGTX(x) / 0.69314718055994530941723212145818f;
    }

    template <typename T>
    inline detail::_xvec2<T> fastLog2GTX(const detail::_xvec2<T>& x)
    {
        return detail::_xvec2<T>(
            fastLog2GTX(x.x),
            fastLog2GTX(x.y));
    }

    template <typename T>
    inline detail::_xvec3<T> fastLog2GTX(const detail::_xvec3<T>& x)
    {
        return detail::_xvec3<T>(
            fastLog2GTX(x.x),
            fastLog2GTX(x.y),
            fastLog2GTX(x.z));
    }

    template <typename T>
    inline detail::_xvec4<T> fastLog2GTX(const detail::_xvec4<T>& x)
    {
        return detail::_xvec4<T>(
            fastLog2GTX(x.x),
            fastLog2GTX(x.y),
            fastLog2GTX(x.z),
            fastLog2GTX(x.w));
    }
}
