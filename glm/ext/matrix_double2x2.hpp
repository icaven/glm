/// @ref core
/// @file glm/ext/matrix_double2x2.hpp

#pragma once
#include "../detail/type_mat2x2.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#if(defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef mat<2, 2, double, lowp>			dmat2x2;
	typedef mat<2, 2, double, lowp>			dmat2;
#elif(defined(GLM_PRECISION_MEDIUMP_DOUBLE))
	typedef mat<2, 2, double, mediump>		dmat2x2;
	typedef mat<2, 2, double, mediump>		dmat2;
#else //defined(GLM_PRECISION_HIGHP_DOUBLE)
	/// 2 columns of 2 components matrix of double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<2, 2, double, highp>		dmat2x2;

	/// 2 columns of 2 components matrix of double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<2, 2, double, highp>		dmat2;
#endif

	/// @}
}//namespace glm
