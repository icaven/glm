///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-03
// Updated : 2008-09-09
// Licence : This source is under MIT License
// File    : glm/core/func_vector_relational.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_core_func_vector_relational
#define glm_core_func_vector_relational

namespace glm
{
	namespace test{
		void main_core_func_vector_relational();
	}//namespace test

	namespace core{
	namespace function{
	//! Define vector relational functions from Section 8.3 of GLSL 1.30.8 specification. 
	//! Included in glm namespace.
	namespace vector_relational
	{
		//! Returns the component-wise comparison result of x < y.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <typename T, template <typename> class vecType> 
		inline typename vecType<T>::bool_type lessThan
		(
			vecType<T> const & x, 
			vecType<T> const & y
		)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_float || 
				detail::type<T>::is_int || 
				detail::type<T>::is_uint, "'lessThan' only accept numbers");

			typename vecType<bool>::bool_type Result(vecType<bool>::null);
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result[i] = x[i] < y[i];
			return Result;
		}

		//! Returns the component-wise comparison of result x <= y.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <typename T, template <typename> class vecType> 
		inline typename vecType<T>::bool_type lessThanEqual
		(
			vecType<T> const & x, 
			vecType<T> const & y
		)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_float || 
				detail::type<T>::is_int || 
				detail::type<T>::is_uint, "'lessThanEqual' only accept numbers");

			typename vecType<bool>::bool_type Result(vecType<bool>::null);
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result[i] = x[i] <= y[i];
			return Result;
		}

		//! Returns the component-wise comparison of result x > y.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <typename T, template <typename> class vecType> 
		inline typename vecType<T>::bool_type greaterThan
		(
			vecType<T> const & x, 
			vecType<T> const & y
		)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_float || 
				detail::type<T>::is_int || 
				detail::type<T>::is_uint, "'greaterThan' only accept numbers");

			typename vecType<bool>::bool_type Result(vecType<bool>::null);
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result[i] = x[i] > y[i];
			return Result;
		}

		//! Returns the component-wise comparison of result x >= y.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <typename T, template <typename> class vecType> 
		inline typename vecType<T>::bool_type greaterThanEqual
		(
			vecType<T> const & x, 
			vecType<T> const & y
		)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_float || 
				detail::type<T>::is_int || 
				detail::type<T>::is_uint, "'greaterThanEqual' only accept numbers");

			typename vecType<bool>::bool_type Result(vecType<bool>::null);
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result[i] = x[i] >= y[i];
			return Result;
		}

		//! Returns the component-wise comparison of result x == y.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <typename T, template <typename> class vecType> 
		inline typename vecType<T>::bool_type equal
		(
			vecType<T> const & x, 
			vecType<T> const & y
		)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_float || 
				detail::type<T>::is_int || 
				detail::type<T>::is_uint || 
				detail::type<T>::is_bool, "'equal' only accept GLM vectors");

			typename vecType<bool>::bool_type Result(vecType<bool>::null);
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result[i] = x[i] == y[i];
			return Result;
		}

		//! Returns the component-wise comparison of result x != y.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <typename T, template <typename> class vecType> 
		inline typename vecType<T>::bool_type notEqual
		(
			vecType<T> const & x, 
			vecType<T> const & y
		)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_float || 
				detail::type<T>::is_int || 
				detail::type<T>::is_uint || 
				detail::type<T>::is_bool, "'notEqual' only accept GLM vectors");

			typename vecType<bool>::bool_type Result(vecType<bool>::null);
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result[i] = x[i] != y[i];
			return Result;
		}

		//! Returns true if any component of x is true.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <template <typename> class vecType> 
		inline bool any(vecType<bool> const & v)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_bool, "'any' only accept GLM boolean vectors");

			bool Result = false;
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result = Result || v[i];
			return Result;
		}

		//! Returns true if all components of x are true.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <template <typename> class vecType> 
		inline bool all(vecType<bool> const & v)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_bool, "'all' only accept GLM boolean vectors");

			bool Result = true;
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result = Result && v[i];
			return Result;
		}

		//! Returns the component-wise logical complement of x.
		//! (From GLSL 1.30.08 specification, section 8.6)
		template <template <typename> class vecType> 
		inline vecType<bool> not_(vecType<bool> const & v)
		{
			GLM_STATIC_ASSERT(
				detail::type<T>::is_bool, "'not_' only accept GLM boolean vectors");

			typename vecType<bool>::bool_type Result(vecType<bool>::null);
			for(typename vecType<bool>::size_type i = 0; i < vecType<bool>::value_size(); ++i)
				Result[i] = !v[i];
			return Result;
		}

	}//namespace vector_relational
	}//namespace function
	}//namespace core

	using namespace core::function::vector_relational;
}//namespace glm

#include "func_vector_relational.inl"

#endif//glm_core_func_vector_relational
