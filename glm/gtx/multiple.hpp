///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2009-10-26
// Updated : 2009-10-26
// Licence : This source is under MIT License
// File    : glm/gtx/multiple.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtx_multiple
#define glm_gtx_multiple

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTX_multiple extension included")
#endif

namespace glm{
namespace gtx
{
	/// @addtogroup gtx_multiple
	/// @{

	//! Higher Multiple number of Source.
	//! From GLM_GTX_multiple extension.
	template <typename genType> 
	genType higherMultiple(
		genType const & Source, 
		genType const & Multiple);

	//! Lower Multiple number of Source.
	//! From GLM_GTX_multiple extension.
	template <typename genType> 
	genType lowerMultiple(
		genType const & Source, 
		genType const & Multiple);

	/// @}
}//namespace gtx
}//namespace glm

#include "multiple.inl"

#endif//glm_gtx_multiple
