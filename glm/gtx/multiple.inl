///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2009-10-26
// Updated : 2011-06-07
// Licence : This source is under MIT License
// File    : glm/gtx/multiple.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	//////////////////////
	// higherMultiple

	template <typename genType>
	GLM_FUNC_QUALIFIER genType higherMultiple(genType Source, genType Multiple)
	{
		return detail::compute_ceilMultiple<std::numeric_limits<genType>::is_iec559, std::numeric_limits<genType>::is_signed>::call(Source, Multiple);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> higherMultiple(vecType<T, P> const & Source, vecType<T, P> const & Multiple)
	{
		return detail::functor2<T, P, vecType>::call(higherMultiple, Source, Multiple);
	}

	//////////////////////
	// lowerMultiple

	template <typename genType>
	GLM_FUNC_QUALIFIER genType lowerMultiple(genType Source, genType Multiple)
	{
		return detail::compute_floorMultiple<std::numeric_limits<genType>::is_iec559, std::numeric_limits<genType>::is_signed>::call(Source, Multiple);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> lowerMultiple(vecType<T, P> const & Source, vecType<T, P> const & Multiple)
	{
		return detail::functor2<T, P, vecType>::call(lowerMultiple, Source, Multiple);
	}
}//namespace glm
