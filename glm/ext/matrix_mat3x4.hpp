/// @ref core
/// @file glm/matrix_mat3x4.hpp

#pragma once
#include "../detail/type_mat3x4.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mat<3, 4, float, lowp>			mat3x4;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mat<3, 4, float, mediump>		mat3x4;
#else //defined(GLM_PRECISION_HIGHP_FLOAT)
	/// 3 columns of 4 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<3, 4, float, highp>			mat3x4;
#endif

	/// @}
}//namespace glm
