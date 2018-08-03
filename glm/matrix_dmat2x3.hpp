/// @ref core
/// @file glm/dmat2x3.hpp

#pragma once
#include "detail/type_mat2x3.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef mat<2, 3, double, lowp>			dmat2x3;
#elif(defined(GLM_PRECISION_MEDIUMP_DOUBLE))
	typedef mat<2, 3, double, mediump>		dmat2x3;
#else //defined(GLM_PRECISION_HIGHP_DOUBLE)
	/// 2 columns of 3 components matrix of double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<2, 3, double, highp>		dmat2x3;
#endif

	/// @}
}//namespace glm
