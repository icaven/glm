/// @ref core
/// @file glm/ext/matrix_float3x3.hpp

#pragma once
#include "../detail/type_mat3x3.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef mat<3, 3, float, lowp>			mat3x3;
	typedef mat<3, 3, float, lowp>			mat3;
#elif(defined(GLM_PRECISION_MEDIUMP_DOUBLE))
	typedef mat<3, 3, float, mediump>		mat3x3;
	typedef mat<3, 3, float, mediump>		mat3;
#else //defined(GLM_PRECISION_HIGHP_DOUBLE)
	/// 3 columns of 3 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<3, 3, float, highp>			mat3x3;

	/// 3 columns of 3 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<3, 3, float, highp>			mat3;
#endif

	/// @}
}//namespace glm
