///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/epsilon.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_double
// - GLM_GTX_half
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_epsilon__
#define __glm_gtx_epsilon__

// Dependency:
#include "../../glm.h"
#include "../gtx/double.h"
#include "../gtx/half.h"

namespace glm
{
    template <typename T> bool equalEpsilonGTX(const T x, const T y, const T epsilon);																			//!< \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
    template <typename T> bool notEqualEpsilonGTX(const T x, const T y, const T epsilon);																		//!< \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)

    template <typename T> detail::_bvec2 equalEpsilonGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const T epsilon);								//!< \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec3 equalEpsilonGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const T epsilon);								//!< \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec4 equalEpsilonGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const T epsilon);								//!< \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec2 notEqualEpsilonGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const T epsilon);							//!< \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec3 notEqualEpsilonGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const T epsilon);							//!< \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec4 notEqualEpsilonGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const T epsilon);							//!< \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)

    template <typename T> detail::_bvec2 equalEpsilonGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& epsilon);				//!< \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec3 equalEpsilonGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& epsilon);				//!< \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec4 equalEpsilonGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& epsilon);				//!< \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec2 notEqualEpsilonGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& epsilon);			//!< \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec3 notEqualEpsilonGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& epsilon);			//!< \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
    template <typename T> detail::_bvec4 notEqualEpsilonGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& epsilon);			//!< \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
/*
	template <typename T>
	class epsilonGTX
	{
	public:
		epsilonGTX() : value(std::EPSILON){}
		epsilonGTX(const T& value) : value(value){}

	private:
		T value;
	};
*/
	namespace gtx
	{
		//! GLM_GTX_epsilon extension: Comparaison functions for a user defined epsilon values.
		namespace epsilon
		{
			//! \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline bool equalEpsilon(const T x, const T y, const T epsilon){return equalEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline bool notEqualEpsilon(const T x, const T y, const T epsilon){return notEqualEpsilonGTX(x, y, epsilon);}

			//! \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec2 equalEpsilon(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const T epsilon){return equalEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec3 equalEpsilon(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const T epsilon){return equalEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec4 equalEpsilon(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const T epsilon){return equalEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec2 notEqualEpsilon(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const T epsilon){return notEqualEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec3 notEqualEpsilon(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const T epsilon){return notEqualEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec4 notEqualEpsilon(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const T epsilon){return notEqualEpsilonGTX(x, y, epsilon);}

			//! \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec2 equalEpsilon(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& epsilon){return equalEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec3 equalEpsilon(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& epsilon){return equalEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| < epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec4 equalEpsilon(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& epsilon){return equalEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec2 notEqualEpsilon(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& epsilon){return notEqualEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec3 notEqualEpsilon(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& epsilon){return notEqualEpsilonGTX(x, y, epsilon);}
			//! \brief Returns the component-wise compare of |x - y| >= epsilon (from GLM_GTX_epsilon extension)
			template <typename T> inline detail::_bvec4 notEqualEpsilon(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& epsilon){return notEqualEpsilonGTX(x, y, epsilon);}
		}
	}
}

#define GLM_GTX_epsilon namespace gtx::epsilon

#include "epsilon.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_epsilon;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_epsilon__
