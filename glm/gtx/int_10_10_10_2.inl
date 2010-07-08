///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-07-07
// Updated : 2010-07-07
// Licence : This source is under MIT License
// File    : glm/gtx/int_10_10_10_2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace gtx{
namespace int_10_10_10_2
{
	//! From GLM_GTX_int_10_10_10_2 extension.
	int int10_10_10_2_cast(glm::vec4 const & v)
	{
		return int(v.x * 2047.f) << 0 | int(v.y * 2047.f) << 10 | int(v.z * 2047.f) << 20 | int(v.w * 3.f) << 30;
	}

	//! From GLM_GTX_int_10_10_10_2 extension.
	uint uint10_10_10_2_cast(glm::vec4 const & v)
	{
		return uint(v.x * 2047.f) << 0 | uint(v.y * 2047.f) << 10 | uint(v.z * 2047.f) << 20 | uint(v.w * 3.f) << 30;
	}

}//namespace int_10_10_10_2
}//namespace gtx
}//namespace glm
