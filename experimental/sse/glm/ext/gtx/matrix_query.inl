///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-05
// Updated : 2007-03-05
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_query.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
/*
	template<typename genType> 
	inline bool isNullGTX(const genType& m, const typename genType::value_type epsilon)
	{
		bool result = true;
		for(genType::value_type i = genType::value_type(0); result && i < genType::col_size; ++i)
			result = isNullGTX(m[i], epsilon);
		return result;
	}
*/
	template<typename T> 
	inline bool isNullGTX(const detail::_xmat2<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 2 ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

	template<typename T> 
	inline bool isNullGTX(const detail::_xmat3<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 3 ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

	template<typename T> 
	inline bool isNullGTX(const detail::_xmat4<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 4 ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

	template<typename genType> 
	inline bool isIdentityGTX(const genType& m, const typename genType::value_type epsilon)
	{
		bool result = true;
		for(typename genType::value_type i = typename genType::value_type(0); result && i < genType::col_size; ++i)
		{
			for(typename genType::value_type j = typename genType::value_type(0); result && j < i ; ++j)
				result = abs(m[i][j]) <= epsilon;
			if(result)
				result = abs(m[i][i] - typename genType::value_type(1)) <= epsilon;
			for(typename genType::value_type j = i + typename genType::value_type(1); result && j < genType::row_size; ++j)
				result = abs(m[i][j]) <= epsilon;
		}
		return result;
	}
/*
	template<typename T> 
	inline bool isIdentityGTX(const _xmat2<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 2; ++i)
		{
			for(int j = 0; result && j < i ; ++j)
				result = abs(m[i][j]) <= epsilon;
			if(result)
				result = abs(m[i][i] - T(1)) <= epsilon;
			for(int j = i + 1; result && j < 2; ++j)
				result = abs(m[i][j]) <= epsilon;
		}
		return result;
	}

	template<typename T> 
	inline bool isIdentityGTX(const _xmat3<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 3; ++i)
		{
			for(int j = 0; result && j < i ; ++j)
				result = abs(m[i][j]) <= epsilon;
			if(result)
				result = abs(m[i][i] - T(1)) <= epsilon;
			for(int j = i + 1; result && j < 3; ++j)
				result = abs(m[i][j]) <= epsilon;
		}
		return result;
	}

	template<typename T> 
	inline bool isIdentityGTX(const _xmat4<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 4; ++i)
		{
			for(int j = 0; result && j < i ; ++j)
				result = abs(m[i][j]) <= epsilon;
			if(result)
				result = abs(m[i][i] - T(1)) <= epsilon;
			for(int j = i + 1; result && j < 4; ++j)
				result = abs(m[i][j]) <= epsilon;
		}
		return result;
	}
*/
/*
	template<typename genType> 
	inline bool isNormalizedGTX(const genType& m, const typename genType::value_type epsilon)
	{
		bool result = true;
		for(genType::value_type i = genType::value_type(0); result && i < genType::col_size; ++i)
			result = isNormalized(m[i], epsilon);
		for(genType::value_type i = genType::value_type(0); result && i < genType::row_size; ++i)
		{
			vecType v;
			for(genType::value_type j = genType::value_type(0); j < genType::col_size; ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}
*/

	template<typename T> 
	inline bool isNormalizedGTX(const detail::_xmat2<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 2; ++i)
			result = isNormalized(m[i], epsilon);
		for(int i = 0; result && i < 2; ++i)
		{
			detail::_xvec2<T> v;
			for(int j = 0; j < 2; ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

	template<typename T> 
	inline bool isNormalizedGTX(const detail::_xmat3<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 3; ++i)
			result = isNormalized(m[i], epsilon);
		for(int i = 0; result && i < 3; ++i)
		{
			detail::_xvec3<T> v;
			for(int j = 0; j < 3; ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

	template<typename T> 
	inline bool isNormalizedGTX(const detail::_xmat4<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 4; ++i)
			result = isNormalized(m[i], epsilon);
		for(int i = 0; result && i < 4; ++i)
		{
			detail::_xvec4<T> v;
			for(int j = 0; j < 4; ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

	template<typename genType> 
	inline bool isOrthogonalGTX(const genType& m, const typename genType::value_type epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < genType::col_size - 1; ++i)
		for(int j= i + 1; result && j < genType::col_size; ++j)
			result = areOrthogonal(m[i], m[j], epsilon);

		if(result)
		{
			genType tmp = transpose(m);
			for(int i = 0; result && i < genType::col_size - 1 ; ++i)
			for(int j = i + 1; result && j < genType::col_size; ++j)
				result = areOrthogonal(tmp[i], tmp[j], epsilon);
		}
		return result;
	}

/*
	template<typename T> 
	inline bool isOrthogonalGTX(const _xmat2<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 2 - 1; ++i)
		for(int j= i + 1; result && j < 2; ++j)
			result = areOrthogonal(m[i], m[j], epsilon);

		if(result)
		{
			_xmat2<T> tmp = transpose(m);
			for(int i = 0; result && i < 2 - 1 ; ++i)
			for(int j = i + 1; result && j < 2; ++j)
				result = areOrthogonal(tmp[i], tmp[j], epsilon);
		}
		return result;
	}

	template<typename T> 
	inline bool isOrthogonalGTX(const _xmat3<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 3 - 1; ++i)
		for(int j= i + 1; result && j < 3; ++j)
			result = areOrthogonal(m[i], m[j], epsilon);

		if(result)
		{
			_xmat3<T> tmp = transpose(m);
			for(int i = 0; result && i < 3 - 1 ; ++i)
			for(int j = i + 1; result && j < 3; ++j)
				result = areOrthogonal(tmp[i], tmp[j], epsilon);
		}
		return result;
	}

	template<typename T> 
	inline bool isOrthogonalGTX(const _xmat4<T>& m, const T epsilon)
	{
		bool result = true;
		for(int i = 0; result && i < 4 - 1; ++i)
		for(int j= i + 1; result && j < 4; ++j)
			result = areOrthogonal(m[i], m[j], epsilon);

		if(result)
		{
			_xmat4<T> tmp = transpose(m);
			for(int i = 0; result && i < 4 - 1 ; ++i)
			for(int j = i + 1; result && j < 4; ++j)
				result = areOrthogonal(tmp[i], tmp[j], epsilon);
		}
		return result;
	}
*/
}
