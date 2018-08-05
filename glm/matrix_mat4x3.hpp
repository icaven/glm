/// @ref core
/// @file glm/matrix_mat4x3.hpp

#pragma once
#include "detail/type_mat4x3.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mat<4, 3, float, lowp>			mat4x3;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mat<4, 3, float, mediump>		mat4x3;
#else //defined(GLM_PRECISION_HIGHP_FLOAT)
	/// 4 columns of 3 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<4, 3, float, highp>			mat4x3;
#endif

	/// @}
}//namespace glm
