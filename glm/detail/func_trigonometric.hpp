/// @ref core
/// @file glm/detail/func_trigonometric.hpp
///
/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
/// 
/// @defgroup core_func_trigonometric Angle and Trigonometry Functions
/// @ingroup core
/// 
/// Function parameters specified as angle are assumed to be in units of radians. 
/// In no case will any of these functions result in a divide by zero error. If 
/// the divisor of a ratio is 0, then results will be undefined.
/// 
/// These all operate component-wise. The description is per component.

#pragma once

#include "setup.hpp"
#include "precision.hpp"

namespace glm
{
	/// @addtogroup core_func_trigonometric
	/// @{

	/// Converts degrees to radians and returns the result.
	///
	/// @tparam genType Floating-point scalar or vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/radians.xml">GLSL radians man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL GLM_CONSTEXPR vecType<D, T, P> radians(vecType<D, T, P> const & degrees);

	/// Converts radians to degrees and returns the result.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/degrees.xml">GLSL degrees man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL GLM_CONSTEXPR vecType<D, T, P> degrees(vecType<D, T, P> const & radians);

	/// The standard trigonometric sine function. 
	/// The values returned by this function will range from [-1, 1].
	/// 
	/// @tparam genType Floating-point scalar or vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/sin.xml">GLSL sin man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> sin(vecType<D, T, P> const & angle);

	/// The standard trigonometric cosine function. 
	/// The values returned by this function will range from [-1, 1].
	/// 
	/// @tparam genType Floating-point scalar or vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/cos.xml">GLSL cos man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> cos(vecType<D, T, P> const & angle);

	/// The standard trigonometric tangent function.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/tan.xml">GLSL tan man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> tan(vecType<D, T, P> const & angle);

	/// Arc sine. Returns an angle whose sine is x. 
	/// The range of values returned by this function is [-PI/2, PI/2]. 
	/// Results are undefined if |x| > 1.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/asin.xml">GLSL asin man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> asin(vecType<D, T, P> const & x);

	/// Arc cosine. Returns an angle whose sine is x. 
	/// The range of values returned by this function is [0, PI]. 
	/// Results are undefined if |x| > 1.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/acos.xml">GLSL acos man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> acos(vecType<D, T, P> const & x);

	/// Arc tangent. Returns an angle whose tangent is y/x. 
	/// The signs of x and y are used to determine what 
	/// quadrant the angle is in. The range of values returned 
	/// by this function is [-PI, PI]. Results are undefined 
	/// if x and y are both 0. 
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/atan.xml">GLSL atan man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> atan(vecType<D, T, P> const & y, vecType<D, T, P> const & x);

	/// Arc tangent. Returns an angle whose tangent is y_over_x. 
	/// The range of values returned by this function is [-PI/2, PI/2].
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/atan.xml">GLSL atan man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> atan(vecType<D, T, P> const & y_over_x);

	/// Returns the hyperbolic sine function, (exp(x) - exp(-x)) / 2
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/sinh.xml">GLSL sinh man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> sinh(vecType<D, T, P> const & angle);

	/// Returns the hyperbolic cosine function, (exp(x) + exp(-x)) / 2
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/cosh.xml">GLSL cosh man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> cosh(vecType<D, T, P> const & angle);

	/// Returns the hyperbolic tangent function, sinh(angle) / cosh(angle)
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/tanh.xml">GLSL tanh man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> tanh(vecType<D, T, P> const & angle);

	/// Arc hyperbolic sine; returns the inverse of sinh.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/asinh.xml">GLSL asinh man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> asinh(vecType<D, T, P> const & x);
	
	/// Arc hyperbolic cosine; returns the non-negative inverse
	/// of cosh. Results are undefined if x < 1.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/acosh.xml">GLSL acosh man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> acosh(vecType<D, T, P> const & x);

	/// Arc hyperbolic tangent; returns the inverse of tanh.
	/// Results are undefined if abs(x) >= 1.
	///
	/// @tparam genType Floating-point scalar or vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/atanh.xml">GLSL atanh man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.1 Angle and Trigonometry Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> atanh(vecType<D, T, P> const & x);

	/// @}
}//namespace glm

#include "func_trigonometric.inl"
