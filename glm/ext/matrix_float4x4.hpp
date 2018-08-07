/// @ref core
/// @file glm/ext/matrix_float4x4.hpp

#pragma once
#include "../detail/type_mat4x4.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mat<4, 4, float, lowp>			mat4x4;
	typedef mat<4, 4, float, lowp>			mat4;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mat<4, 4, float, mediump>		mat4x4;
	typedef mat<4, 4, float, mediump>		mat4;
#else //defined(GLM_PRECISION_HIGHP_FLOAT)
	/// 4 columns of 4 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<4, 4, float, highp>			mat4x4;

	/// 4 columns of 4 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<4, 4, float, highp>			mat4;
#endif

	/// @}
}//namespace glm
