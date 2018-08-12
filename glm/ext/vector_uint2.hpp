/// @ref core
/// @file glm/ext/vector_uint2.hpp

#pragma once
#include "../detail/type_vec2.hpp"

namespace glm
{
	/// @addtogroup core
	/// @{

#	if GLM_CONFIG_PRECISION_UINT == GLM_LOWP
		typedef vec<2, unsigned int, lowp>		uvec2;
#	elif GLM_CONFIG_PRECISION_UINT == GLM_MEDIUMP
		typedef vec<2, unsigned int, mediump>	uvec2;
#	elif GLM_CONFIG_PRECISION_UINT == GLM_HIGHP
		/// 2 components vector of unsigned integer numbers.
		///
		/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
		typedef vec<2, unsigned int, highp>		uvec2;
#	endif//GLM_PRECISION

	/// @}
}//namespace glm
