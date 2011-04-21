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
	template <typename T>
	inline detail::tvec3<T> permute(detail::tvec3<T> const & x)
	{
		return mod(((x * T(34)) + T(1)) * x, T(289));
	}

namespace gtx{
namespace noise
{
	template <typename T>
	inline T snoise(glm::detail::tvec2<T> const & v)
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
/*
		detail::tvec3<T> m = max(T(0.5) - detail::tvec3<T>(
			dot(x0, x0), 
			dot(detail::tvec2<T>(x12.x, x12.y), detail::tvec2<T>(x12.x, x12.y)), 
			dot(detail::tvec2<T>(x12.z, x12.w), detail::tvec2<T>(x12.z, x12.w)), T(0.0));
		m = m * m ;
		m = m * m ;

		// Gradients: 41 points uniformly over a line, mapped onto a diamond.
		// The ring size 17*17 = 289 is close to a multiple of 41 (41*7 = 287)

		detail::tvec3<T> x = 2.0 * fract(p * C.w) - 1.0;
		detail::tvec3<T> h = abs(x) - 0.5;
		detail::tvec3<T> ox = floor(x + 0.5);
		detail::tvec3<T> a0 = x - ox;

		// Normalise gradients implicitly by scaling m
		// Inlined for speed: m *= taylorInvSqrt( a0*a0 + h*h );
		m *= 1.79284291400159 - 0.85373472095314 * (a0 * a0 + h * h);

		// Compute final noise value at P
		detail::tvec3<T> g;
		g.x  = a0.x  * x0.x  + h.x  * x0.y;
		g.yz = a0.yz * x12.xz + h.yz * x12.yw;
		return 130.0 * dot(m, g);
*/
	}

}//namespace noise
}//namespace gtx
}//namespace glm
