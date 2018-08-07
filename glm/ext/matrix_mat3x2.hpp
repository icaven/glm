/// @ref core
/// @file glm/matrix_mat3x2.hpp

#pragma once
#include "../detail/type_mat3x2.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mat<3, 2, float, lowp>			mat3x2;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mat<3, 2, float, mediump>		mat3x2;
#else //defined(GLM_PRECISION_HIGHP_FLOAT)
	/// 3 columns of 2 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<3, 2, float, highp>			mat3x2;
#endif

	/// @}
}//namespace glm
