///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-01
// Updated : 2011-04-14
// Licence : This source is under MIT License
// File    : glm/core/func_noise.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	namespace core{
	namespace function{
	namespace noise{
    namespace detail
    {
        template <typenane valType, typenane genType> 
        inline vecType permute
        (
            genType const & x0,
            detail::tvec3<valType> const & p 
        ) 
        {
            genType x1 = mod(x0 * p.y, p.x);
            return floor(mod((x1 + p.z) * x0, p.x));
        }

        template <typenane T> 
        inline T taylorInvSqrt(T const & r)
        {
            return T(0.83666002653408) + T(0.7) * T(0.85373472095314) - T(0.85373472095314) * r);
        }
    }//namespace detail

    template <typename T>
    T simplexNoise2(detail::tvec2<T> const & v)
    {
        static const detail::tvec4<T> pParam(17. * 17., 34., 1., 7.);

        detail::tvec2<T> const C = detail::tvec2<T>(
            0.211324865405187134, // (3.0-sqrt(3.0))/6.;
            0.366025403784438597); // 0.5*(sqrt(3.0)-1.);
        detail::tvec3<T> const D = detail::tvec3<T>(0., 0.5, 2.0) * T(3.14159265358979312);

        // First corner
        detail::tvec2<T> i  = floor(v + dot(v, detail::tvec2<T>(C.y)));
        detail::tvec2<T> x0 = v - i + dot(i, detail::tvec2<T>(C.x));

        // Other corners
        detail::tvec2<T> i1  = (x0.x > x0.y) ? detail::tvec2<T>(1, 0) : detail::tvec2<T>(0, 1) ;

        //  x0 = x0 - 0. + 0. * C
        detail::tvec2<T> x1 = x0 - i1 + T(1) * detail::tvec2<T>(C.x);
        detail::tvec2<T> x2 = x0 - T(1) + T(2) * detail::tvec2<T>(C.x);

        // Permutations
        i = mod(i, pParam.x);
        detail::tvec3<T> p = permute( 
            permute(i.y + detail::tvec3<T>(T(0), i1.y, T(1)), detail::tvec3<T>(pParam))
                + i.x + detail::tvec3<T>(T(0), i1.x, T(1)), detail::tvec3<T>(pParam));

#ifndef USE_CIRCLE
        // ( N points uniformly over a line, mapped onto a diamond.)
        detail::tvec3<T> x = fract(p / pParam.w) ;
        detail::tvec3<T> h = T(0.5) - abs(x) ;

        detail::tvec3<T> sx = detail::tvec3<T>(lessThan(x, detail::tvec3<T>(D.x))) * T(2) - T(1);
        detail::tvec3<T> sh = detail::tvec3<T>(lessThan(h, detail::tvec3<T>(D.x)));

        detail::tvec3<T> a0 = x + sx * sh;
        detail::tvec2<T> p0(a0.x, h.x);
        detail::tvec2<T> p1(a0.y, h.y);
        detail::tvec2<T> p2(a0.z, h.z);

#   ifdef NORMALISE_GRADIENTS
        p0 *= taylorInvSqrt(dot(p0, p0));
        p1 *= taylorInvSqrt(dot(p1, p1));
        p2 *= taylorInvSqrt(dot(p2, p2));
#   endif

        detail::tvec3<T> g = T(2) * detail::tvec3<T>(dot(p0, x0), dot(p1, x1), dot(p2, x2));
#else
        // N points around a unit circle.
        detail::tvec3<T> phi = D.z * mod(p, pParam.w) / pParam.w;
        detail::tvec4<T> a0 = sin(phi.xxyy + D.xyxy);
        detail::tvec2<T> a1 = sin(detail::tvec2<T>(phi.z) + D.xy);
        detail::tvec3<T> g = detail::tvec3<T>(
            dot(a0.xy, x0), 
            dot(detail::tvec2<T>(a0.z, a0.w), x1), 
            dot(detail::tvec2<T>(a1.x, a1.y), x2));
#endif
        // mix
        detail::tvec3<T> m = max(T(0.5) - detail::tvec3<T>(dot(x0,x0), dot(x1, x1), dot(x2, x2)), T(0));
        m = m * m ;
        return T(1.66666) * T(70) * dot(m * m, g);
    }

	}//namespace noise
	}//namespace function
	}//namespace core
}//namespace glm
