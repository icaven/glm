///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-14
// Updated : 2008-03-22
// Licence : This source is under GNU LGPL licence
// File    : glm/glm.h
///////////////////////////////////////////////////////////////////////////////////////////////////

/*! \mainpage OpenGL Mathematics
 *
 * \section introduction 1. Introduction
 *
 * OpenGL Mathematics (GLM) is a mathematics library for 3D applications based on OpenGL Shading Language(GLSL). The project's goal is to provide to 3D programmer the same tools when he develops under GPU and CPU. This project wasn't limited by GLSL tools, an extension system based on GLSL extensions development conventions allows to extend GLSL capabilities. GLM is release under MIT license and available for all version of GCC from version 3.4 and Visual Studio from version 7.1 (2003).
 *
 * Any feedback are welcome, please send then to g.truc.creation[NO_SPAM_THANKS]gmail.com.
 *
 * \section using_glm_installation 2. Installation
 *
 * \subsection using_glm_installation_compiler 2.1. Compiler setup
 * It's not required to build GLM, it's a header library. You use have to indicate where is the "glm" directory to your compiler. The only files present in this directory that matter for your own projects are header files. You can whether copy this directory in your "include" project directory or add this directory to your compiler header directories list (-I with GCC).
 *
 * \subsection using_glm_installation_core 2.2. Core features
 * When you have setup your compiler or project, all core features of GLM (basically, GLSL features) will be available to your project if you include "glm.h": #include <glm/glm.h>
 *
 * \subsection using_glm_installation_swizzle 2.3. Setup of swizzle operators
 * Swizzle operators are disabled by default. It's possible to enable each component types by defining GLM_SWIZZLE to GLM_SWIZZLE_XYZW, GLM_SWIZZLE_RGBA or GLM_SWIZZLE_STQP. To enable all swizzle names, use GLM_SWIZZLE_FULL.
 * This setup is done using defines included in "glmsetup.h". You can directly edit this file but you take the risk to replace "glmsetup.h" and lose your settings when you will update GLM. Other way is to include "glmsetup.h" in a third-party file and then add your settings before including "glm.h". GLM will use default settings if "glmsetup.h" isn't included before "glm.h".
 *
 * \subsection using_glm_installation_ext 2.4. Using extensions features
 * To take advantages of all extra features of GLM, you have to use the extensions which are included in "glmext.h": #include <glm/glmext.h>. Go to section 3 for more information about extensions
 * 
 * \section extensions 3. GLM Extensions
 *
 * \subsection extensions_setup 3.1. Setup
 * To take advantages of all extra features of GLM, you have to use the extensions which are included in "glmext.h": #include <glm/glmext.h>
 *
 * \subsection extensions_about 3.2. About GLSL extension convensions
 * GLSL working group have defined some rules to define GLSL extensions. However, it seams that graphics card companies choose to adapt this rules according there own wishes which actually have some advantages thanks to the possibility to enable or disable GLSL extensions. 
 *
 * \subsection extensions_arb 3.3. ARB convensions
 * By default, all extensions are available using the working group rules. To use an extension, you just have to include the according header file. To include the quaternion extension (GLM_GTX_quaternion), just include "glm/gtx/quaternion.h" You can also ask to use every extension by including glmext.h. 
 *
 * \subsection extensions_ihv 3.4. IHV convensions
 * To use the vendor way of using extensions, it's still required include header files but you also have to explicitly ask for it. Example to use GLM_GTX_quaternion with IHV convensions:
 *
 * namespace glm
 * {
 *     using GLM_GTX_quaternion;
 * }
 * 
 * It's also possible to automatically setup every extensions defining GLM_GTX_INCLUDED before including "glm.h".
 *
 *
 * \section known_issue 4. Known issues
 *
 * \subsection known_issue_swizzle 4.1. Swizzle operators
 * Enabling swizzle operator can result to name collision with the Win32 API.
 *
 * \subsection known_issue_not 4.2. "not" function
 * The GLSL keyword "not" isn’t well supported under Visual Studio because of Microsoft implementation of the "not" C++ Keyword… it's a #define.
 *
 * \subsection known_issue_half 4.3. "half" based types
 * Half based types can't be used with GCC because of multiple component names implementation based on union. To use half based types, define GLM_SINGLE_COMP_NAME before including GLM headers. This disables color and texcoord component names.
 *
 */

#ifndef __glm_glm__
#define __glm_glm__

#undef max
#undef min

#ifdef __GNUC__ 
#define GLM_SINGLE_COMP_NAME
#endif

#define GLMvalType typename genType::value_type
#define GLMcolType typename genType::col_type
#define GLMrowType typename genType::row_type

#define GLMsizeType typename genType::size_type
#define GLMrowSize typename genType::row_size
#define GLMcolSize typename genType::col_size

#define GLMvalSize typename genType::value_size

#include "./glmsetup.h"

#include "./core/_bvec2.inl"
#include "./core/_bvec3.inl"
#include "./core/_bvec4.inl"
#include "./core/_xvec2.inl"
#include "./core/_xvec3.inl"
#include "./core/_xvec4.inl"
#include "./core/_xmat2.inl"
#include "./core/_xmat3.inl"
#include "./core/_xmat4.inl"
#include "./core/_xmat2x3.inl"
#include "./core/_xmat2x4.inl"
#include "./core/_xmat3x2.inl"
#include "./core/_xmat3x4.inl"
#include "./core/_xmat4x2.inl"
#include "./core/_xmat4x3.inl"
#include "./core/_func.inl"
#include "./core/_swizzle.h"
#include "./core/_xref2.inl"
#include "./core/_xref3.inl"
#include "./core/_xref4.inl"

//! \brief OpenGL Mathematics namespace
namespace glm
{
	//! GLM experimental extensions. The interface could change between releases.
	namespace gtx{}

	//! GLM stable extensions. Nothing yet.
	namespace gtc{}

	typedef detail::_xvec2<float>   vec2;		//!< \brief Vector of 2 floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xvec2<int>     ivec2;		//!< \brief Vector of 2 integers. (From GLSL 1.20.6 specification)
    typedef detail::_bvec2          bvec2;		//!< \brief Vector of 2 booleans. (From GLSL 1.20.6 specification)
    typedef detail::_xvec3<float>   vec3;		//!< \brief Vector of 3 floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xvec3<int>     ivec3;		//!< \brief Vector of 3 integers. (From GLSL 1.20.6 specification)
    typedef detail::_bvec3          bvec3;		//!< \brief Vector of 3 booleans. (From GLSL 1.20.6 specification)
    typedef detail::_xvec4<float>   vec4;		//!< \brief Vector of 4 floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xvec4<int>     ivec4;		//!< \brief Vector of 4 integers. (From GLSL 1.20.6 specification)
    typedef detail::_bvec4          bvec4;		//!< \brief Vector of 4 booleans. (From GLSL 1.20.6 specification)
    typedef detail::_xmat2<float>   mat2;		//!< \brief 2 * 2 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xmat3<float>   mat3;		//!< \brief 3 * 3 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xmat4<float>   mat4;		//!< \brief 4 * 4 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xmat2<float>   mat2x2;		//!< \brief 2 * 2 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xmat3<float>   mat3x3;		//!< \brief 3 * 3 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xmat4<float>   mat4x4;		//!< \brief 4 * 4 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
	typedef detail::_xmat2x3<float> mat2x3;		//!< \brief 2 * 3 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xmat3x2<float> mat3x2;		//!< \brief 3 * 2 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
    typedef detail::_xmat2x4<float> mat2x4;		//!< \brief 2 * 4 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
	typedef detail::_xmat4x2<float> mat4x2;		//!< \brief 4 * 2 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
	typedef detail::_xmat3x4<float> mat3x4;		//!< \brief 3 * 4 matrix of floating-point numbers. (From GLSL 1.20.6 specification)
	typedef detail::_xmat4x3<float> mat4x3;		//!< \brief 4 * 3 matrix of floating-point numbers. (From GLSL 1.20.6 specification)

	typedef const vec2& param_vec2;
	typedef const vec3& param_vec3;
	typedef const vec4& param_vec4;
	typedef const ivec2& param_ivec2;
	typedef const ivec3& param_ivec3;
	typedef const ivec4& param_ivec4;
	typedef const bvec2& param_bvec2;
	typedef const bvec3& param_bvec3;
	typedef const bvec4& param_bvec4;
	typedef const mat2& param_mat2;
	typedef const mat3& param_mat3;
	typedef const mat4& param_mat4;
	typedef const mat2x3& param_mat2x3;
	typedef const mat3x2& param_mat3x2;
	typedef const mat2x4& param_mat2x4;
	typedef const mat4x2& param_mat4x2;
	typedef const mat3x4& param_mat3x4;
	typedef const mat4x3& param_mat4x3;
} //namespace glm

#ifdef GLM_COMPILER_VC
#define GLM_DEPRECATED __declspec(deprecated)
#else
#define GLM_DEPRECATED
#endif//GLM_COMPILER_VC

#ifdef GLM_COMPILER_VC
#define GLM_RESTRICT __restrict
#else
#define GLM_RESTRICT
#endif//GLM_COMPILER_VC

#ifdef GLM_COMPILER_VC
#define GLM_ALIGN(x) __declspec(align(x))
#else
#define GLM_ALIGN(x)
#endif//GLM_COMPILER_VC

#endif //__glm_glm__
