///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-03-07
// Updated : 2011-04-26
// Licence : This source is under MIT License
// File    : glm/gtx/ulp.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#if(GLM_COMPILER & GLM_COMPILER_VC)
#	include <cfloat>
#   define GLM_NEXT_AFTER _nextafterf
#else
#	include <cmath>
#   define GLM_NEXT_AFTER nextafterf
#endif

namespace glm{
namespace gtx{
namespace ulp
{
    GLM_FUNC_QUALIFIER float next_float(float const & x)
    {
        return GLM_NEXT_AFTER(x, std::numeric_limits<float>::max());
    }

    GLM_FUNC_QUALIFIER double next_float(double const & x)
    {
        return GLM_NEXT_AFTER(x, std::numeric_limits<double>::max());
    }

    template<typename T, template<typename> class vecType>
    GLM_FUNC_QUALIFIER vecType<T> next_float(vecType<T> const & x)
    {
        vecType<T> Result;
        for(std::size_t i = 0; i < Result.length(); ++i)
            Result[i] = next_float(x[i]);
        return Result;
    }

    GLM_FUNC_QUALIFIER float prev_float(float const & x)
    {
        return GLM_NEXT_AFTER(x, std::numeric_limits<float>::min());
    }

    GLM_FUNC_QUALIFIER double prev_float(double const & x)
    {
        return GLM_NEXT_AFTER(x, std::numeric_limits<double>::min());
    }

    template<typename T, template<typename> class vecType>
    GLM_FUNC_QUALIFIER vecType<T> prev_float(vecType<T> const & x)
    {
        vecType<T> Result;
        for(std::size_t i = 0; i < Result.length(); ++i)
            Result[i] = prev_float(x[i]);
        return Result;
    }

    template <typename T>
    GLM_FUNC_QUALIFIER T next_float(T const & x, std::size_t const & ulps)
    {
        T temp = x;
        for(std::size_t i = 0; i < ulps; ++i)
            temp = next_float(temp);
        return temp;
    }

    template <typename T>
    GLM_FUNC_QUALIFIER T prev_float(T const & x, std::size_t const & ulps)
    {
        T temp = x;
        for(std::size_t i = 0; i < ulps; ++i)
            temp = prev_float(temp);
        return temp;
    }

    template <typename T>
    GLM_FUNC_QUALIFIER std::size_t float_distance(T const & x, T const & y)
    {
        std::size_t ulp = 0;

        if(x < y)
        {
            T temp = x;
            while(temp != y && ulp < std::numeric_limits<std::size_t>::max())
            {
                ++ulp;
                temp = next_float(temp);
            }
        }
        else if(y < x)
        {
            T temp = y;
            while(temp != x && ulp < std::numeric_limits<std::size_t>::max())
            {
                ++ulp;
                temp = next_float(temp);
            }
        }
        else // ==
        {

        }

        return ulp;
    }

	inline std::size_t ulp
	(
		detail::thalf const & a,
		detail::thalf const & b
	)
	{
		std::size_t Count = 0;
		float TempA(a);
		float TempB(b);
		//while((TempA = _nextafterf(TempA, TempB)) != TempB)
			++Count;
		return Count;
	}

	inline std::size_t ulp
	(
		float const & a,
		float const & b
	)
	{
		std::size_t Count = 0;
		float Temp = a;
		//while((Temp = _nextafterf(Temp, b)) != b)
        {
            std::cout << Temp << " " << b << std::endl;
			++Count;
        }
		return Count;
	}

	inline std::size_t ulp
	(
		double const & a,
		double const & b
	)
	{
		std::size_t Count = 0;
		double Temp = a;
		//while((Temp = _nextafter(Temp, b)) != b)
        {
            std::cout << Temp << " " << b << std::endl;
			++Count;
        }
		return Count;
	}

	template <typename T>
	inline std::size_t ulp
	(
		detail::tvec2<T> const & a,
		detail::tvec2<T> const & b
	)
	{
        std::size_t ulps[] = 
        {
            ulp(a[0], b[0]),
            ulp(a[1], b[1])
        };

        return glm::max(ulps[0], ulps[1]);
	}

	template <typename T>
	inline std::size_t ulp
	(
		detail::tvec3<T> const & a,
		detail::tvec3<T> const & b
	)
	{
        std::size_t ulps[] = 
        {
            ulp(a[0], b[0]),
            ulp(a[1], b[1]),
            ulp(a[2], b[2])
        };

        return glm::max(glm::max(ulps[0], ulps[1]), ulps[2]);
	}

	template <typename T>
	inline std::size_t ulp
	(
		detail::tvec4<T> const & a,
		detail::tvec4<T> const & b
	)
	{
        std::size_t ulps[] = 
        {
            ulp(a[0], b[0]),
            ulp(a[1], b[1]),
            ulp(a[2], b[2]),
            ulp(a[3], b[3])
        };

        return glm::max(glm::max(ulps[0], ulps[1]), glm::max(ulps[2], ulps[3]));
	}

}//namespace ulp
}//namespace gtx
}//namespace glm
