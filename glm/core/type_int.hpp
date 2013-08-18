///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref core
/// @file glm/core/type_int.hpp
/// @date 2008-08-22 / 2013-03-30
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#ifndef glm_core_type_int
#define glm_core_type_int

#include "setup.hpp"

#if(((GLM_LANG & GLM_LANG_CXX11) == GLM_LANG_CXX11) || (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)))
#	include <cstdint>
#endif

namespace glm{
namespace detail
{
#	if((GLM_LANG & GLM_LANG_CXX11) == GLM_LANG_CXX11)
		typedef std::int8_t					int8;
		typedef std::int16_t				int16;
		typedef std::int32_t				int32;
		typedef std::int64_t				int64;
	
		typedef std::uint8_t				uint8;
		typedef std::uint16_t				uint16;
		typedef std::uint32_t				uint32;
		typedef std::uint64_t				uint64;
#	else
#		if(defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)) // C99 detected, 64 bit types available
			typedef int64_t					sint64;
			typedef uint64_t				uint64;
#		elif(GLM_COMPILER & GLM_COMPILER_VC)
			typedef signed __int64			sint64;
			typedef unsigned __int64		uint64;
#		elif(GLM_COMPILER & (GLM_COMPILER_GCC | GLM_COMPILER_LLVM_GCC | GLM_COMPILER_CLANG))
			__extension__ typedef signed long long		sint64;
			__extension__ typedef unsigned long long	uint64;
#		elif(GLM_COMPILER & GLM_COMPILER_BC)
			typedef Int64					sint64;
			typedef Uint64					uint64;
#		else//unknown compiler
			typedef signed long	long		sint64;
			typedef unsigned long long		uint64;
#		endif//GLM_COMPILER
		
		typedef signed char					int8;
		typedef signed short				int16;
		typedef signed int					int32;
		typedef sint64						int64;
	
		typedef unsigned char				uint8;
		typedef unsigned short				uint16;
		typedef unsigned int				uint32;
		typedef uint64						uint64;
#endif//
	
	typedef signed int						lowp_int_t;
	typedef signed int						mediump_int_t;
	typedef signed int						highp_int_t;
	
	typedef unsigned int					lowp_uint_t;
	typedef unsigned int					mediump_uint_t;
	typedef unsigned int					highp_uint_t;
}//namespace detail

	typedef detail::int8					int8;
	typedef detail::int16					int16;
	typedef detail::int32					int32;
	typedef detail::int64					int64;
	
	typedef detail::uint8					uint8;
	typedef detail::uint16					uint16;
	typedef detail::uint32					uint32;
	typedef detail::uint64					uint64;

	/// @addtogroup core_precision
	/// @{

	/// Low precision signed integer. 
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.3 Integers</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::lowp_int_t				lowp_int;

	/// Medium precision signed integer. 
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.3 Integers</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::mediump_int_t			mediump_int;

	/// High precision signed integer.
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.3 Integers</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::highp_int_t				highp_int;

	/// Low precision unsigned integer. 
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.3 Integers</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::lowp_uint_t				lowp_uint;

	/// Medium precision unsigned integer. 
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.3 Integers</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::mediump_uint_t			mediump_uint;

	/// High precision unsigned integer. 
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.3 Integers</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef detail::highp_uint_t			highp_uint;

#if(!defined(GLM_PRECISION_HIGHP_INT) && !defined(GLM_PRECISION_MEDIUMP_INT) && !defined(GLM_PRECISION_LOWP_INT))
	typedef mediump_int					int_t;
#elif(defined(GLM_PRECISION_HIGHP_INT) && !defined(GLM_PRECISION_MEDIUMP_INT) && !defined(GLM_PRECISION_LOWP_INT))
	typedef highp_int					int_t;
#elif(!defined(GLM_PRECISION_HIGHP_INT) && defined(GLM_PRECISION_MEDIUMP_INT) && !defined(GLM_PRECISION_LOWP_INT))
	typedef mediump_int					int_t;
#elif(!defined(GLM_PRECISION_HIGHP_INT) && !defined(GLM_PRECISION_MEDIUMP_INT) && defined(GLM_PRECISION_LOWP_INT))
	typedef lowp_int					int_t;
#else
#	error "GLM error: multiple default precision requested for signed interger types"
#endif

#if(!defined(GLM_PRECISION_HIGHP_UINT) && !defined(GLM_PRECISION_MEDIUMP_UINT) && !defined(GLM_PRECISION_LOWP_UINT))
	typedef mediump_uint				uint_t;
#elif(defined(GLM_PRECISION_HIGHP_UINT) && !defined(GLM_PRECISION_MEDIUMP_UINT) && !defined(GLM_PRECISION_LOWP_UINT))
	typedef highp_uint					uint_t;
#elif(!defined(GLM_PRECISION_HIGHP_UINT) && defined(GLM_PRECISION_MEDIUMP_UINT) && !defined(GLM_PRECISION_LOWP_UINT))
	typedef mediump_uint				uint_t;
#elif(!defined(GLM_PRECISION_HIGHP_UINT) && !defined(GLM_PRECISION_MEDIUMP_UINT) && defined(GLM_PRECISION_LOWP_UINT))
	typedef lowp_uint					uint_t;
#else
#	error "GLM error: multiple default precision requested for unsigned interger types"
#endif

	/// Unsigned integer type.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.3 Integers</a>
	typedef unsigned int				uint;

	/// @}

////////////////////
// check type sizes
#ifndef GLM_STATIC_ASSERT_NULL
	GLM_STATIC_ASSERT(sizeof(glm::int8) == 1, "int8 size isn't 1 byte on this platform");
	GLM_STATIC_ASSERT(sizeof(glm::int16) == 2, "int16 size isn't 2 bytes on this platform");
	GLM_STATIC_ASSERT(sizeof(glm::int32) == 4, "int32 size isn't 4 bytes on this platform");
	GLM_STATIC_ASSERT(sizeof(glm::int64) == 8, "int64 size isn't 8 bytes on this platform");

	GLM_STATIC_ASSERT(sizeof(glm::uint8) == 1, "uint8 size isn't 1 byte on this platform");
	GLM_STATIC_ASSERT(sizeof(glm::uint16) == 2, "uint16 size isn't 2 bytes on this platform");
	GLM_STATIC_ASSERT(sizeof(glm::uint32) == 4, "uint32 size isn't 4 bytes on this platform");
	GLM_STATIC_ASSERT(sizeof(glm::uint64) == 8, "uint64 size isn't 8 bytes on this platform");
#endif//GLM_STATIC_ASSERT_NULL

namespace detail
{
	//////////////////
	// int
	
	template <typename T>
	struct is_int
	{
		enum is_int_enum
		{
			_YES = 0,
			_NO = 1
		};
	};
	
	#define GLM_DETAIL_IS_INT(T)	\
		template <>					\
		struct is_int<T>			\
		{							\
			enum is_int_enum		\
			{						\
				_YES = 1,			\
				_NO = 0				\
			};						\
		}
	
	GLM_DETAIL_IS_INT(signed char);
	GLM_DETAIL_IS_INT(signed short);
	GLM_DETAIL_IS_INT(signed int);
	GLM_DETAIL_IS_INT(signed long);
#	if(GLM_LANG >= GLM_LANG_CXX0X)
		GLM_DETAIL_IS_INT(signed long long);
#	else
		GLM_DETAIL_IS_INT(glm::int64);
#	endif
	
	//////////////////
	// uint
	
	template <typename T>
	struct is_uint
	{
		enum is_uint_enum
		{
			_YES = 0,
			_NO = 1
		};
	};
	
	#define GLM_DETAIL_IS_UINT(T)	\
		template <>					\
		struct is_uint<T>			\
		{							\
			enum is_uint_enum		\
			{						\
				_YES = 1,			\
				_NO = 0				\
			};						\
		}

	GLM_DETAIL_IS_UINT(unsigned char);
	GLM_DETAIL_IS_UINT(unsigned short);
	GLM_DETAIL_IS_UINT(unsigned int);
	GLM_DETAIL_IS_UINT(unsigned long);
#	if(GLM_LANG >= GLM_LANG_CXX0X)
		GLM_DETAIL_IS_INT(unsigned long long);
#	else
		GLM_DETAIL_IS_INT(glm::uint64);
#	endif

	//////////////////
	// bool
	
	template <typename T>
	struct is_bool
	{
		enum is_bool_enum
		{
			_YES = 0,
			_NO = 1
		};
	};
	
	template <>
	struct is_bool<bool>
	{
		enum is_bool_enum
		{
			_YES = 1,
			_NO = 0
		};
	};
	
	//////////////////
	// float_or_int_trait
	
	struct float_or_int_value
	{
		enum
		{
			GLM_ERROR,
			GLM_FLOAT,
			GLM_INT
		};
	};
	
	template <typename T>
	struct float_or_int_trait
	{
		enum{ID = float_or_int_value::GLM_ERROR};
	};
	
	template <>
	struct float_or_int_trait<detail::int8>
	{
		enum{ID = float_or_int_value::GLM_INT};
	};

	template <>
	struct float_or_int_trait<detail::int16>
	{
		enum{ID = float_or_int_value::GLM_INT};
	};

	template <>
	struct float_or_int_trait<detail::int32>
	{
		enum{ID = float_or_int_value::GLM_INT};
	};

	template <>
	struct float_or_int_trait<detail::int64>
	{
		enum{ID = float_or_int_value::GLM_INT};
	};

	template <>
	struct float_or_int_trait<detail::uint8>
	{
		enum{ID = float_or_int_value::GLM_INT};
	};

	template <>
	struct float_or_int_trait<detail::uint16>
	{
		enum{ID = float_or_int_value::GLM_INT};
	};

	template <>
	struct float_or_int_trait<detail::uint32>
	{
		enum{ID = float_or_int_value::GLM_INT};
	};

	template <>
	struct float_or_int_trait<detail::uint64>
	{
		enum{ID = float_or_int_value::GLM_INT};
	};
}//namespace detail
}//namespace glm

#endif//glm_core_type_int
