/// @ref core
/// @file glm/ext/matrix_double4x4.hpp

#pragma once
#include "../detail/type_mat4x4.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef mat<4, 4, double, lowp>			dmat4x4;
	typedef mat<4, 4, double, lowp>			dmat4;
#elif(defined(GLM_PRECISION_MEDIUMP_DOUBLE))
	typedef mat<4, 4, double, mediump>		dmat4x4;
	typedef mat<4, 4, double, mediump>		dmat4;
#else //defined(GLM_PRECISION_HIGHP_DOUBLE)
	/// 4 columns of 4 components matrix of double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<4, 4, double, highp>		dmat4x4;

	/// 4 columns of 4 components matrix of double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<4, 4, double, highp>		dmat4;
#endif

	/// @}
}//namespace glm
