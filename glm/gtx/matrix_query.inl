///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-05
// Updated : 2007-03-05
// Licence : This source is under MIT License
// File    : glm/gtx/matrix_query.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull(tmat2x2<T, P> const & m, T const & epsilon)
	{
		bool result = true;
		for(detail::component_count_t i = 0; result && i < 2 ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull(tmat3x3<T, P> const & m, T const & epsilon)
	{
		bool result = true;
		for(detail::component_count_t i = 0; result && i < 3 ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull(tmat4x4<T, P> const & m, T const & epsilon)
	{
		bool result = true;
		for(detail::component_count_t i = 0; result && i < 4 ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

	template<typename T, precision P, template <typename, precision> class matType>
	GLM_FUNC_QUALIFIER bool isIdentity(matType<T, P> const & m, T const & epsilon)
	{
		bool result = true;
		for(detail::component_count_t i(0); result && i < detail::component_count(m[0]); ++i)
		{
			for(detail::component_count_t j(0); result && j < i ; ++j)
				result = abs(m[i][j]) <= epsilon;
			if(result)
				result = abs(m[i][i] - 1) <= epsilon;
			for(detail::component_count_t j(i + 1); result && j < detail::component_count(m); ++j)
				result = abs(m[i][j]) <= epsilon;
		}
		return result;
	}

	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNormalized(tmat2x2<T, P> const & m, T const & epsilon)
	{
		bool result(true);
		for(detail::component_count_t i(0); result && i < detail::component_count(m); ++i)
			result = isNormalized(m[i], epsilon);
		for(detail::component_count_t i(0); result && i < detail::component_count(m); ++i)
		{
			typename tmat2x2<T, P>::col_type v;
			for(detail::component_count_t j(0); j < detail::component_count(m); ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNormalized(tmat3x3<T, P> const & m, T const & epsilon)
	{
		bool result(true);
		for(detail::component_count_t i(0); result && i < detail::component_count(m); ++i)
			result = isNormalized(m[i], epsilon);
		for(detail::component_count_t i(0); result && i < detail::component_count(m); ++i)
		{
			typename tmat3x3<T, P>::col_type v;
			for(detail::component_count_t j(0); j < detail::component_count(m); ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNormalized(tmat4x4<T, P> const & m, T const & epsilon)
	{
		bool result(true);
		for(detail::component_count_t i(0); result && i < detail::component_count(m); ++i)
			result = isNormalized(m[i], epsilon);
		for(detail::component_count_t i(0); result && i < detail::component_count(m); ++i)
		{
			typename tmat4x4<T, P>::col_type v;
			for(detail::component_count_t j(0); j < detail::component_count(m); ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

	template<typename T, precision P, template <typename, precision> class matType>
	GLM_FUNC_QUALIFIER bool isOrthogonal(matType<T, P> const & m, T const & epsilon)
	{
		bool result(true);
		for(detail::component_count_t i(0); result && i < detail::component_count(m) - 1; ++i)
		for(detail::component_count_t j(i + 1); result && j < detail::component_count(m); ++j)
			result = areOrthogonal(m[i], m[j], epsilon);

		if(result)
		{
			matType<T, P> tmp = transpose(m);
			for(detail::component_count_t i(0); result && i < detail::component_count(m) - 1 ; ++i)
			for(detail::component_count_t j(i + 1); result && j < detail::component_count(m); ++j)
				result = areOrthogonal(tmp[i], tmp[j], epsilon);
		}
		return result;
	}
}//namespace glm
