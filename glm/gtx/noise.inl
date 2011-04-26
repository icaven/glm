///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Based on the work of Stefan Gustavson and Ashima Arts on "webgl-noise": 
// https://github.com/ashima/webgl-noise 
// Following Stefan Gustavson's paper "Simplex noise demystified": 
// http://www.itn.liu.se/~stegu/simplexnoise/simplexnoise.pdf
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-04-21
// Updated : 2011-04-21
// Licence : This source is under MIT License
// File    : glm/gtx/noise.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T, template<typename> class vecType>
	GLM_FUNC_QUALIFIER vecType<T> permute(vecType<T> const & x)
	{
		return mod(((x * T(34)) + T(1)) * x, T(289));
	}
  
	template <typename T, template<typename> class vecType>
	GLM_FUNC_QUALIFIER vecType<T> taylorInvSqrt(vecType<T> const & r)
	{
		return T(1.79284291400159) - T(0.85373472095314) * r;
	}

namespace gtx{
namespace noise
{
    template <typename T>
    GLM_FUNC_QUALIFIER T cnoise(glm::detail::tvec2<T> const & v)
    { 
        return T(0);
    }

    template <typename T>
    GLM_FUNC_QUALIFIER T cnoise(glm::detail::tvec3<T> const & v)
    { 
        return T(0);
    }

    template <typename T>
    GLM_FUNC_QUALIFIER T cnoise(glm::detail::tvec4<T> const & v)
    { 
        return T(0);
    }

    template <typename T> 
    GLM_FUNC_QUALIFIER T pnoise
    (
        glm::detail::tvec2<T> const & p, 
        glm::detail::tvec2<T> const & rep
    )
    {
        return T(0);
    }

    template <typename T> 
    GLM_FUNC_QUALIFIER T pnoise
    (
        glm::detail::tvec3<T> const & p, 
        glm::detail::tvec3<T> const & rep
    )
    {
        return T(0);
    }

    template <typename T> 
    GLM_FUNC_QUALIFIER T pnoise
    (
        glm::detail::tvec4<T> const & p, 
        glm::detail::tvec4<T> const & rep
    )
    {
        return T(0);
    }

	template <typename T>
	GLM_FUNC_QUALIFIER T snoise(glm::detail::tvec2<T> const & v)
	{
		detail::tvec4<T> const C = detail::tvec4<T>(
			T( 0.211324865405187),  // (3.0 -  sqrt(3.0)) / 6.0
			T( 0.366025403784439),  //  0.5 * (sqrt(3.0)  - 1.0)
			T(-0.577350269189626),	// -1.0 + 2.0 * C.x
			T( 0.024390243902439)); //  1.0 / 41.0

		// First corner
		detail::tvec2<T> i  = floor(v + dot(v, detail::tvec2<T>(C[1])));
		detail::tvec2<T> x0 = v -   i + dot(i, detail::tvec2<T>(C[0]));

		// Other corners
		//i1.x = step( x0.y, x0.x ); // x0.x > x0.y ? 1.0 : 0.0
		//i1.y = 1.0 - i1.x;
		detail::tvec2<T> i1 = (x0.x > x0.y) ? detail::tvec2<T>(1, 0) : detail::tvec2<T>(0, 1);
		// x0 = x0 - 0.0 + 0.0 * C.xx ;
		// x1 = x0 - i1 + 1.0 * C.xx ;
		// x2 = x0 - 1.0 + 2.0 * C.xx ;
		detail::tvec4<T> x12 = detail::tvec4<T>(x0.x, x0.y, x0.x, x0.y) + detail::tvec4<T>(C.x, C.x, C.z, C.z);
		x12 = detail::tvec4<T>(detail::tvec2<T>(x12) - i1, x12.z, x12.w);

		// Permutations
		i = mod(i, T(289)); // Avoid truncation effects in permutation
		detail::tvec3<T> p = permute(
			permute(i.y + detail::tvec3<T>(T(0), i1.y, T(1)))
			+ i.x + detail::tvec3<T>(T(0), i1.x, T(1)));

		detail::tvec3<T> m = max(T(0.5) - detail::tvec3<T>(
			dot(x0, x0), 
			dot(detail::tvec2<T>(x12.x, x12.y), detail::tvec2<T>(x12.x, x12.y)), 
			dot(detail::tvec2<T>(x12.z, x12.w), detail::tvec2<T>(x12.z, x12.w))), T(0));
		m = m * m ;
		m = m * m ;

		// Gradients: 41 points uniformly over a line, mapped onto a diamond.
		// The ring size 17*17 = 289 is close to a multiple of 41 (41*7 = 287)

		detail::tvec3<T> x = T(2) * fract(p * C.w) - T(1);
		detail::tvec3<T> h = abs(x) - T(0.5);
		detail::tvec3<T> ox = floor(x + T(0.5));
		detail::tvec3<T> a0 = x - ox;

		// Normalise gradients implicitly by scaling m
		// Inlined for speed: m *= taylorInvSqrt( a0*a0 + h*h );
		m *= T(1.79284291400159) - T(0.85373472095314) * (a0 * a0 + h * h);

		// Compute final noise value at P
		detail::tvec3<T> g;
		g.x  = a0.x  * x0.x  + h.x  * x0.y;
		//g.yz = a0.yz * x12.xz + h.yz * x12.yw;
		g.y = a0.y * x12.x + h.y * x12.y;
		g.z = a0.z * x12.z + h.z * x12.w;
		return T(130) * dot(m, g);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T snoise(glm::detail::tvec3<T> const & v)
	{ 
		detail::tvec2<T> const C = detail::tvec2<T>(1.0 / 6.0, 1.0 / 3.0);
		detail::tvec4<T> const D = detail::tvec4<T>(0.0, 0.5, 1.0, 2.0);

		// First corner
		detail::tvec3<T> i  = floor(v + dot(v, C.y));
		detail::tvec3<T> x0 =   v - i + dot(i, C.x);

		// Other corners
		detail::tvec3<T> g = step(x0.yzx, x0.xyz);
		detail::tvec3<T> l = 1.0 - g;
		detail::tvec3<T> i1 = min( g.xyz, l.zxy );
		detail::tvec3<T> i2 = max( g.xyz, l.zxy );

		//   x0 = x0 - 0.0 + 0.0 * C.xxx;
		//   x1 = x0 - i1  + 1.0 * C.xxx;
		//   x2 = x0 - i2  + 2.0 * C.xxx;
		//   x3 = x0 - 1.0 + 3.0 * C.xxx;
		detail::tvec3<T> x1 = x0 - i1 + C.x;
		detail::tvec3<T> x2 = x0 - i2 + C.y; // 2.0*C.x = 1/3 = C.y
		detail::tvec3<T> x3 = x0 - D.y;      // -1.0+3.0*C.x = -0.5 = -D.y

		// Permutations
		i = mod(i, T(289)); 
		detail::tvec4<T> p = permute(permute(permute( 
			i.z + detail::tvec4<T>(0.0, i1.z, i2.z, 1.0)) + 
			i.y + detail::tvec4<T>(0.0, i1.y, i2.y, 1.0)) + 
			i.x + detail::tvec4<T>(0.0, i1.x, i2.x, 1.0));

		// Gradients: 7x7 points over a square, mapped onto an octahedron.
		// The ring size 17*17 = 289 is close to a multiple of 49 (49*6 = 294)
		T n_ = T(0.142857142857); // 1.0/7.0
		detail::tvec3<T> ns = n_ * D.wyz - D.xzx;

		detail::tvec4<T> j = p - T(49) * floor(p * ns.z * ns.z);  //  mod(p,7*7)

		detail::tvec4<T> x_ = floor(j * ns.z);
		detail::tvec4<T> y_ = floor(j - T(7) * x_ );    // mod(j,N)

		detail::tvec4<T> x = x_ * ns.x + ns;
		detail::tvec4<T> y = y_ * ns.x + ns;
		detail::tvec4<T> h = T(1) - abs(x) - abs(y);

		detail::tvec4<T> b0 = detail::tvec4<T>(x.xy, y.xy);
		detail::tvec4<T> b1 = detail::tvec4<T>(x.zw, y.zw);

		//vec4 s0 = vec4(lessThan(b0,0.0))*2.0 - 1.0;
		//vec4 s1 = vec4(lessThan(b1,0.0))*2.0 - 1.0;
		detail::tvec4<T> s0 = floor(b0) * T(2) + T(1);
		detail::tvec4<T> s1 = floor(b1) * T(2) + T(1);
		detail::tvec4<T> sh = -step(h, detail::tvec4<T>(0));

		detail::tvec4<T> a0 = b0 + s0 * sh.xxyy;
		detail::tvec4<T> a1 = b1 + s1 * sh.zzww;

		detail::tvec3<T> p0 = vec3(a0.xy, h.x);
		detail::tvec3<T> p1 = vec3(a0.zw, h.y);
		detail::tvec3<T> p2 = vec3(a1.xy, h.z);
		detail::tvec3<T> p3 = vec3(a1.zw, h.w);

		//Normalise gradients
		detail::tvec4<T> norm = taylorInvSqrt(detail::tvec4<T>(
			dot(p0, p0), 
			dot(p1, p1), 
			dot(p2, p2), 
			dot(p3, p3)));
		p0 *= norm.x;
		p1 *= norm.y;
		p2 *= norm.z;
		p3 *= norm.w;

		// Mix final noise value
		vec4 m = max(T(0.6) - detail::tvec4<T>(
			dot(x0, x0), 
			dot(x1, x1), 
			dot(x2, x2), 
			dot(x3, x3)), T(0));
		m = m * m;
		return T(42) * dot(m * m, detail::tvec4<T>(
			dot(p0, x0), 
			dot(p1, x1), 
			dot(p2, x2), 
			dot(p3, x3)));
	}

    template <typename T>
    GLM_FUNC_QUALIFIER T snoise(glm::detail::tvec4<T> const & v)
    { 
        return T(0);
    }

}//namespace noise
}//namespace gtx
}//namespace glm
