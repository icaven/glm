/// @ref core
/// @file glm/matrix_mat2x2.hpp

#pragma once
#include "../detail/type_mat2x2.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mat<2, 2, float, lowp>		mat2x2;
	typedef mat<2, 2, float, lowp>		mat2;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef mat<2, 2, float, mediump>	mat2x2;
	typedef mat<2, 2, float, mediump>	mat2;
#else //defined(GLM_PRECISION_HIGHP_FLOAT)
	/// 2 columns of 2 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<2, 2, float, highp>		mat2x2;

	/// 2 columns of 2 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<2, 2, float, highp>		mat2;
#endif

	/// @}
}//namespace glm
