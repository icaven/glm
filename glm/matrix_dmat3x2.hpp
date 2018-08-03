/// @ref core
/// @file glm/dmat3x2.hpp

#pragma once
#include "detail/type_mat3x2.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef mat<3, 2, double, lowp>			dmat3x2;
#elif(defined(GLM_PRECISION_MEDIUMP_DOUBLE))
	typedef mat<3, 2, double, mediump>		dmat3x2;
#else //defined(GLM_PRECISION_HIGHP_DOUBLE)
	/// 3 columns of 2 components matrix of double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<3, 2, double, highp>		dmat3x2;
#endif

	/// @}
}//namespace glm
