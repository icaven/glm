///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-02-21
// Updated : 2009-02-21
// Licence : This source is under MIT License
// File    : glm/gtx/ulp.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtx_ulp
#define glm_gtx_ulp

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTX_ulp extension included")
#endif

namespace glm
{
	namespace gtx{
	//! GLM_GTX_ulp extension: Precision calculation functions
	namespace ulp
	{
		/// \addtogroup gtx_ulp
		///@{

		//! Return the number of ULP between 2 variables.
		//! From GLM_GTX_ulp extension.
		template <typename genType>
        std::size_t ulp(
			genType const & a,
			genType const & b);

		///@}

	}//namespace ulp
	}//namespace gtx
}//namespace glm

#include "ulp.inl"

namespace glm{using namespace gtx::ulp;}

#endif//glm_gtx_ulp

