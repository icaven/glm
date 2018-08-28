/// @ref ext_scalar_float_sized
/// @file glm/ext/scalar_float_sized.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_scalar_float_sized GLM_EXT_scalar_float_sized
/// @ingroup ext
///
/// Include <glm/ext/scalar_float_sized.hpp> to use the features of this extension.
///
/// Exposes float scalar type.

#pragma once

#include "../detail/setup.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_scalar_float_sized extension included")
#endif

namespace glm
{
	/// @addtogroup ext_scalar_float_sized
	/// @{

	/// Low qualifier floating-point numbers.
	/// There is no guarantee on the actual qualifier.
	///
	/// @see ext_scalar_float_sized
	typedef float			float32;


#	ifndef GLM_FORCE_SINGLE_ONLY

	/// Low qualifier floating-point numbers.
	/// There is no guarantee on the actual qualifier.
	///
	/// @see ext_scalar_float_sized
	typedef double			float64;

#	endif//GLM_FORCE_SINGLE_ONLY

	/// @}

}//namespace glm
