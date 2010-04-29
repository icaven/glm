///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-05-21
// Updated : 2007-05-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/verbose_operator.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename genType> 
	inline genType addGTX(const genType& a, const genType& b)
	{
		return a + b;
	}

	template <typename genType> 
	inline genType subGTX(const genType& a, const genType& b)
	{
		return a - b;
	}

	template <typename genType> 
	inline genType divGTX(const genType& a, const genType& b)
	{
		return a / b;
	}
}
