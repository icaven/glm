///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-05-21
// Updated : 2007-05-21
// Licence : This source is under GNU LGPL licence
// File    : gtx_component_wise.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename genType>
	inline GLMvalType compAddGTX(const genType& v)
	{
        typename genType::size_type result = typename genType::value_type(0);
		for(typename genType::size_type i = 0; i < genType::value_size; ++i)
			result += v[i];
		return result;
	}
/*
	template <typename genType>
	inline valType compAddGTX(const genType& v)
	{
		valType result = valType(0);
		for(sizeType i = 0; i < valSize; ++i)
			result += v[i];
		return result;
	}
*/
	template <typename genType>
	inline GLMvalType compMulGTX(const genType& v)
	{
        typename genType::size_type result = typename genType::value_type(0);
		for(typename genType::size_type i = 0; i < genType::value_size; ++i)
			result *= v[i];
		return result;
	}
/*
	template <typename genType>
	inline GLMvalType compMulGTX(const genType& v)
	{
		valType result = valType(0);
		for(GLMsizeType i = 0; i < valSize; ++i)
			result *= v[i];
		return result;
	}
*/
	template <typename genType>
	inline GLMvalType compMinGTX(const genType& v)
	{
        typename genType::size_type result = typename genType::value_type(0);
		for(typename genType::size_type i = 0; i < genType::value_size; ++i)
			result = min(result, v[i]);
		return result;
	}
/*
	template <typename genType>
	inline GLMvalType compMinGTX(const genType& v)
	{
		valType result = valType(0);
		for(GLMsizeType i = 0; i < valSize; ++i)
			result = min(result, v[i]);
		return result;
	}
*/
	template <typename genType>
	inline GLMvalType compMaxGTX(const genType& v)
	{
        typename genType::size_type result = typename genType::value_type(0);
		for(typename genType::size_type i = 0; i < genType::value_size; ++i)
			result = max(result, v[i]);
		return result;
	}
/*
	template <typename genType>
	inline GLMvalType compMaxGTX(const genType& v)
	{
		GLMvalType result = GLMvalType(0);
		for(GLMsizeType i = 0; i < GLMvalSize; ++i)
			result = max(result, v[i]);
		return result;
	}
*/
}

