//////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
//////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-16
// Updated : 2006-01-16
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/random.inl
//////////////////////////////////////////////////////////////////////////////////

#include <ctime>

namespace glm
{
    template <>
	inline __halfGTX signedRand1GTX()
	{
		return __halfGTX(signedRand1GTX<float>());
	}

    template <>
	inline float signedRand1GTX()
	{
		#define GLM_COMPILER GLM_COMPILER_VC80
		#if(GLM_COMPILER == GLM_COMPILER_VC80)  
		#define RAND_SHIFT_NUM 5
		#else
		#define RAND_SHIFT_NUM 0
		#endif
		return float((std::rand() - (RAND_MAX >> 1) - 1) << 1) / float(RAND_MAX - RAND_SHIFT_NUM);
	}

    template <>
	inline double signedRand1GTX()
	{
		return double(signedRand1GTX<float>());
	}

	template <typename T> 
	inline detail::_xvec2<T> signedRand2GTX()
	{
		return detail::_xvec2<T>(
			signedRand1GTX<float>(),
			signedRand1GTX<float>());
	}

	template <typename T> 
	inline detail::_xvec3<T> signedRand3GTX()
	{
		return detail::_xvec3<T>(
			signedRand1GTX<float>(),
			signedRand1GTX<float>(),
			signedRand1GTX<float>());
	}

	template <typename T> 
	inline detail::_xvec4<T> signedRand4GTX()
	{
		return detail::_xvec4<T>(
			signedRand1GTX<float>(),
			signedRand1GTX<float>(),
			signedRand1GTX<float>(),
			signedRand1GTX<float>());
	}

	template <int N, typename T> 
	inline detail::_xvecxGTX<N, T> signedRandGTX()
	{
		detail::_xvecxGTX<N, T> Result;
		for(int i = 0; i < N; ++i)
			Result[i] = signedRand1GTX(T());
	}

    template <typename T> 
    inline detail::_xvec2<T> normalizedRand2GTX()
    {
        T a = compRand1GTX<T>(T(0), T(6.283185307179586476925286766559f));
        return detail::_xvec2<T>(cos(a), sin(a));
    }
/*
#ifdef GLM_COMPILER_VC
    template <> 
    inline detail::_xvec2<__halfGTX> normalizedRand2GTX()
    {
        return detail::_xvec2<__halfGTX>(normalizedRand2GTX<float>());
    }
#endif//GLM_COMPILER_VC

    template <> 
    inline detail::_xvec2<float> normalizedRand2GTX()
    {
        float a = compRand1GTX<float>(float(0), float(6.283185307179586476925286766559f));
        return detail::_xvec2<float>(cos(a), sin(a));
    }

    template <> 
    inline detail::_xvec2<double> normalizedRand2GTX()
    {
        double a = compRand1GTX<double>(double(0), double(6.283185307179586476925286766559));
        return detail::_xvec2<double>(cos(a), sin(a));
    }

    template <typename T>
    inline detail::_xvec2<T> normalizedRand2GTX(T Min, T Max)
    {
        return normalizedRand2GTX<T>() * compRand1GTX(Min, Max);
    }
*/
    template <typename T>
    inline detail::_xvec3<T> normalizedRand3GTX()
    {
	    T z = compRand1GTX(T(-1), T(1));
	    T a = compRand1GTX(T(0), T(6.283185307179586476925286766559f));

        T r = sqrt(T(1) - z * z);

	    T x = r * cos(a);
	    T y = r * sin(a);

        return detail::_xvec3<T>(x, y, z);
    }

    template <typename T>
    inline detail::_xvec3<T> normalizedRand3GTX(T Min, T Max)
    {
        return normalizedRand3GTX<T>() * compRand1GTX(Min, Max);
    }

	template <>
	inline __halfGTX compRand1GTX()
	{
		return __halfGTX(float(std::rand()) / float(RAND_MAX));
	}

	template <>
	inline float compRand1GTX()
	{
		return float(std::rand()) / float(RAND_MAX);
	}

	template <>
	inline double compRand1GTX()
	{
		return double(std::rand()) / double(RAND_MAX);
	}

	template <typename T>
	inline T compRand1GTX(T Min, T Max)
	{
		return compRand1GTX<T>() * (Max - Min) + Min;
	}

	template <typename T>
	inline detail::_xvec2<T> compRand2GTX(T Min, T Max)
	{
		return detail::_xvec2<T>(
			compRand1GTX(Min, Max),
			compRand1GTX(Min, Max));
	}

	template <typename T>
	inline detail::_xvec3<T> compRand3GTX(T Min, T Max)
	{
		return detail::_xvec3<T>(
			compRand1GTX(Min, Max),
			compRand1GTX(Min, Max),
			compRand1GTX(Min, Max));
	}

	template <typename T>
	inline detail::_xvec4<T> compRand4GTX(T Min, T Max)
	{
		return detail::_xvec4<T>(
			compRand1GTX(Min, Max),
			compRand1GTX(Min, Max),
			compRand1GTX(Min, Max),
			compRand1GTX(Min, Max));
	}

	template <int N, typename T>
	inline detail::_xvecxGTX<N, T> compRandGTX(T Min, T Max)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i < N; ++i)
			result[i] = compRand1GTX(Min, Max);
		return result;
	}

	template <typename T>
	inline detail::_xvec2<T> compRand2GTX(T Min, const detail::_xvec2<T>& Max)
	{
		return detail::_xvec2<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y));
	}

	template <typename T>
	inline detail::_xvec3<T> compRand3GTX(T Min, const detail::_xvec3<T>& Max)
	{
		return detail::_xvec3<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y),
			compRand1GTX(Min.z, Max.z));
	}

	template <typename T>
	inline detail::_xvec4<T> compRand4GTX(T Min, const detail::_xvec4<T>& Max)
	{
		return detail::_xvec4<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y),
			compRand1GTX(Min.z, Max.z),
			compRand1GTX(Min.w, Max.w));
	}

	template <int N, typename T>
	inline detail::_xvecxGTX<N, T> compRandGTX(T Min, const detail::_xvecxGTX<N, T>& Max)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i < N; ++i)
			result[i] = compRand1GTX(Min[i], Max[i]);
		return result;
	}

	template <typename T>
	inline detail::_xvec2<T> compRand2GTX(const detail::_xvec2<T>& Min, T Max)
	{
		return detail::_xvec2<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y));
	}

	template <typename T>
	inline detail::_xvec3<T> compRand3GTX(const detail::_xvec3<T>& Min, T Max)
	{
		return detail::_xvec3<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y),
			compRand1GTX(Min.z, Max.z));
	}

	template <typename T>
	inline detail::_xvec4<T> compRand4GTX(const detail::_xvec4<T>& Min, T Max)
	{
		return detail::_xvec4<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y),
			compRand1GTX(Min.z, Max.z),
			compRand1GTX(Min.w, Max.w));
	}

	template <int N, typename T>
	inline detail::_xvecxGTX<N, T> compRandGTX(const detail::_xvecxGTX<N, T>& Min, T Max)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i < N; ++i)
			result[i] = compRand1GTX(Min[i], Max[i]);
		return result;
	}

	template <typename T>
	inline detail::_xvec2<T> compRand2GTX(const detail::_xvec2<T>& Min, const detail::_xvec2<T>& Max)
	{
		return detail::_xvec2<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y));
	}

	template <typename T>
	inline detail::_xvec3<T> compRand3GTX(const detail::_xvec3<T>& Min, const detail::_xvec3<T>& Max)
	{
		return detail::_xvec3<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y),
			compRand1GTX(Min.z, Max.z));
	}

	template <typename T>
	inline detail::_xvec4<T> compRand4GTX(const detail::_xvec4<T>& Min, const detail::_xvec4<T>& Max)
	{
		return detail::_xvec4<T>(
			compRand1GTX(Min.x, Max.x),
			compRand1GTX(Min.y, Max.y),
			compRand1GTX(Min.z, Max.z),
			compRand1GTX(Min.w, Max.w));
	}

	template <int N, typename T>
	inline detail::_xvecxGTX<N, T> compRandGTX(const detail::_xvecxGTX<N, T>& Min, const detail::_xvecxGTX<N, T>& Max)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i < N; ++i)
			result[i] = compRand1GTX(Min[i], Max[i]);
		return result;
	}
/*
	template <typename T>
    inline detail::_xvec2<T> vecRand2GTX()
    {
		detail::_xvec2<T> result(0);
		do
		{
			result = compRand2GTX(T(-1), T(1));
		} while (length(result) > T(1));

        return result;
    }
*/

#ifdef GLM_COMPILER_VC
	template <>
    inline detail::_xvec2<__halfGTX> vecRand2GTX()
    {
		detail::_xvec2<float> result(float(0));
		do
		{
			result = compRand2GTX(float(-1), float(1));
		} while (length(result) > float(1));

        return detail::_xvec2<__halfGTX>(result);
    }
#endif//GLM_COMPILER_VC

	template <typename T>
    inline detail::_xvec2<float> vecRand2GTX()
    {
		detail::_xvec2<float> result(float(0));
		do
		{
			result = compRand2GTX(float(-1), float(1));
		} while (length(result) > float(1));

        return result;
    }

	template <typename T>
    inline detail::_xvec2<double> vecRand2GTX()
    {
		detail::_xvec2<double> result(double(0));
		do
		{
			result = compRand2GTX(double(-1), double(1));
		} while (length(result) > double(1));

        return result;
    }

	template <typename T>
    inline detail::_xvec2<T> vecRand2GTX(T MinRadius, T MaxRadius)
    {
		assert(MinRadius < MaxRadius);

		detail::_xvec2<T> Result(T(0));
		T LenRadius(0);

		do
		{
			Result = compRand2GTX(-MaxRadius, MaxRadius);
			LenRadius = length(Result);
		} 
		while(LenRadius > MaxRadius || LenRadius < MinRadius);

        return Result;
    }

	template <typename T>
    inline detail::_xvec3<T> vecRand3GTX()
    {
		detail::_xvec3<T> Result(T(0));
		do
		{
			Result = compRand3GTX(T(-1), T(1));
		} 
		while(length(Result) > T(1));

        return Result;
    }

/*
#ifdef GLM_COMPILER_VC
	template <>
    inline detail::_xvec3<__halfGTX> vecRand3GTX<__halfGTX>()
    {
		detail::_xvec3<float> result(float(0));
		do
		{
			result = compRand3GTX(float(-1), float(1));
		} while (length(result) > float(1));

        return detail::_xvec3<__halfGTX>(result);
    }
#endif//GLM_COMPILER_VC

	template <typename T>
    inline detail::_xvec3<float> vecRand3GTX<float>()
    {
		detail::_xvec3<float> result(float(0));
		do
		{
			result = compRand3GTX(float(-1), float(1));
		} while (length(result) > float(1));

        return result;
    }

	template <typename T>
    inline detail::_xvec3<double> vecRand3GTX<double>()
    {
		detail::_xvec3<double> result(double(0));
		do
		{
			result = compRand3GTX(double(-1), double(1));
		} while (length(result) > double(1));

        return result;
    }
*/
	template <typename T>
    inline detail::_xvec3<T> vecRand3GTX(T MinRadius, T MaxRadius)
    {
		assert(MinRadius < MaxRadius);

		detail::_xvec3<T> Result(0);
		T LenRadius(0);

		do
		{
			Result = compRand3GTX(-MaxRadius, MaxRadius);
			LenRadius = length(Result);
		} 
		while(LenRadius > MaxRadius || LenRadius < MinRadius);

        return Result;
    }
/*
	template <typename T>
    inline detail::_xvec4<T> vecRand4GTX()
    {
		detail::_xvec4<T> Result(T(0));
		do
		{
			Result = compRand4GTX(T(-1), T(1));
		} 
		while(length(Result) > T(1));

        return Result;
    }
*/
#ifdef GLM_COMPILER_VC
	template <>
    inline detail::_xvec4<__halfGTX> vecRand4GTX()
    {
		detail::_xvec4<float> result(float(0));
		do
		{
			result = compRand4GTX(float(-1), float(1));
		} while (length(result) > float(1));

        return detail::_xvec4<__halfGTX>(result);
    }
#endif//GLM_COMPILER_VC

	template <typename T>
    inline detail::_xvec4<float> vecRand4GTX()
    {
		detail::_xvec4<float> result(float(0));
		do
		{
			result = compRand4GTX(float(-1), float(1));
		} while (length(result) > float(1));

        return result;
    }

	template <typename T>
    inline detail::_xvec4<double> vecRand4GTX()
    {
		detail::_xvec4<double> result(double(0));
		do
		{
			result = compRand4GTX(double(-1), double(1));
		} while (length(result) > double(1));

        return result;
    }

	template <typename T>
    inline detail::_xvec4<T> vecRand4GTX(T MinRadius, T MaxRadius)
    {
		assert(MinRadius < MaxRadius);

		detail::_xvec4<T> Result(T(0));
		T LenRadius(T(0));

		do
		{
			Result = compRand4GTX(-MaxRadius, MaxRadius);
			LenRadius = length(Result);
		} 
		while(LenRadius > MaxRadius || LenRadius < MinRadius);

        return Result;
    }

    template <typename T>
    inline T gaussRand1GTX(T mean, T std_deviation)
    {
        T w, x1, x2;

        do 
        {
            x1 = rand1GTX(T(-1), T(1));
            x2 = rand1GTX(T(-1), T(1));

            w = x1 * x1 + x2 * x2;
        } while(w > T(1));

        return x2 * std_deviation * std_deviation * sqrt((T(-2) * ln(w)) / w) + mean; 
    }

    template <typename T> 
    inline detail::_xvec2<T> gaussRand2GTX(T mean, T std_deviation)
    {
        return detail::_xvec2<T>(
            gaussRand1GTX(mean, std_deviation),
            gaussRand1GTX(mean, std_deviation));
    }

    template <typename T> 
    inline detail::_xvec3<T> gaussRand3GTX(T mean, T std_deviation)
    {
        return detail::_xvec3<T>(
            gaussRand1GTX(mean, std_deviation),
            gaussRand1GTX(mean, std_deviation),
            gaussRand1GTX(mean, std_deviation));
    }

    template <typename T> 
    inline detail::_xvec4<T> gaussRand4GTX(T mean, T std_deviation)
    {
        return detail::_xvec4<T>(
            gaussRand1GTX(mean, std_deviation),
            gaussRand1GTX(mean, std_deviation),
            gaussRand1GTX(mean, std_deviation),
            gaussRand1GTX(mean, std_deviation));
    }

    template <typename T> 
    inline detail::_xvec2<T> gaussRand2GTX(T mean, const detail::_xvec2<T>& std_deviation)
    {
        return detail::_xvec2<T>(
            gaussRand1GTX(mean, std_deviation.x),
            gaussRand1GTX(mean, std_deviation.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> gaussRand3GTX(T mean, const detail::_xvec3<T>& std_deviation)
    {
        return detail::_xvec3<T>(
            gaussRand1GTX(mean, std_deviation.x),
            gaussRand1GTX(mean, std_deviation.y),
            gaussRand1GTX(mean, std_deviation.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> gaussRand4GTX(T mean, const detail::_xvec4<T>& std_deviation)
    {
        return detail::_xvec4<T>(
            gaussRand1GTX(mean, std_deviation.x),
            gaussRand1GTX(mean, std_deviation.y),
            gaussRand1GTX(mean, std_deviation.z),
            gaussRand1GTX(mean, std_deviation.w));
    }

    template <typename T> 
    inline detail::_xvec2<T> gaussRand2GTX(const detail::_xvec2<T>& mean, T std_deviation)
    {
        return detail::_xvec2<T>(
            gaussRand1GTX(mean.x, std_deviation),
            gaussRand1GTX(mean.y, std_deviation));
    }

    template <typename T> 
    inline detail::_xvec3<T> gaussRand3GTX(const detail::_xvec3<T>& mean, T std_deviation)
    {
        return detail::_xvec3<T>(
            gaussRand1GTX(mean.x, std_deviation),
            gaussRand1GTX(mean.y, std_deviation),
            gaussRand1GTX(mean.z, std_deviation));
    }

    template <typename T> 
    inline detail::_xvec4<T> gaussRand4GTX(const detail::_xvec4<T>& mean, T std_deviation)
    {
        return detail::_xvec4<T>(
            gaussRand1GTX(mean.x, std_deviation),
            gaussRand1GTX(mean.y, std_deviation),
            gaussRand1GTX(mean.z, std_deviation),
            gaussRand1GTX(mean.w, std_deviation));
    }

    template <typename T> 
    inline detail::_xvec2<T> gaussRand2GTX(const detail::_xvec2<T>& mean, const detail::_xvec2<T>& std_deviation)
    {
        return detail::_xvec2<T>(
            gaussRand1GTX(mean.x, std_deviation.x),
            gaussRand1GTX(mean.y, std_deviation.y));
    }

    template <typename T> 
    inline detail::_xvec3<T> gaussRand3GTX(const detail::_xvec3<T>& mean, const detail::_xvec3<T>& std_deviation)
    {
        return detail::_xvec3<T>(
            gaussRand1GTX(mean.x, std_deviation.x),
            gaussRand1GTX(mean.y, std_deviation.y),
            gaussRand1GTX(mean.z, std_deviation.z));
    }

    template <typename T> 
    inline detail::_xvec4<T> gaussRand4GTX(const detail::_xvec4<T>& mean, const detail::_xvec4<T>& std_deviation)
    {
        return detail::_xvec4<T>(
            gaussRand1GTX(mean.x, std_deviation.x),
            gaussRand1GTX(mean.y, std_deviation.y),
            gaussRand1GTX(mean.z, std_deviation.z),
            gaussRand1GTX(mean.w, std_deviation.w));
    }
}
