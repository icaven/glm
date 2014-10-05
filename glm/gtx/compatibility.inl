///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-16
// Updated : 2008-10-24
// Licence : This source is under MIT License
// File    : glm/gtx/compatibility.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <limits>

namespace glm
{
	// isfinite
	template <typename genType>
	GLM_FUNC_QUALIFIER bool isfinite(
		genType const & x)
	{
#		if(GLM_LANG & GLM_LANG_CXX11_FLAG)
			return std::isfinite(x) != 0;
#		elif(GLM_COMPILER & GLM_COMPILER_VC)
			return _finite(x);
#		elif(GLM_COMPILER & GLM_COMPILER_GCC && GLM_PLATFORM & GLM_PLATFORM_ANDROID)
			return _isfinite(x) != 0;
#		else
			return x >= std::numeric_limits<genType>::min() && x <= std::numeric_limits<genType>::max();
#		endif
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<bool, P> isfinite(
		tvec2<T, P> const & x)
	{
		return tvec2<bool, P>(
			isfinite(x.x),
			isfinite(x.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<bool, P> isfinite(
		tvec3<T, P> const & x)
	{
		return tvec3<bool, P>(
			isfinite(x.x),
			isfinite(x.y),
			isfinite(x.z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<bool, P> isfinite(
		tvec4<T, P> const & x)
	{
		return tvec4<bool, P>(
			isfinite(x.x),
			isfinite(x.y),
			isfinite(x.z),
			isfinite(x.w));
	}

}//namespace glm
