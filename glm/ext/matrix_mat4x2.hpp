/// @ref core
/// @file glm/matrix_mat4x2.hpp

#pragma once
#include "../detail/type_mat4x2.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mat<4, 2, float, lowp>			mat4x2;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mat<4, 2, float, mediump>		mat4x2;
#else //defined(GLM_PRECISION_HIGHP_FLOAT)
	/// 4 columns of 2 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<4, 2, float, highp>			mat4x2;
#endif

	/// @}
}//namespace glm
