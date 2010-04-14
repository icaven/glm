///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-11-13
// Updated : 2007-03-14
// Licence : This source is under GNU LGPL licence
// File    : glm/glmsetup.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_glmsetup__
#define __glm_glmsetup__

///////////////////////////////////////////////////////////////////////////////////////////////////
// Version

#define GLM_VERSION 70
#define GLM_REVISION 111

///////////////////////////////////////////////////////////////////////////////////////////////////
// Cast

#define GLM_CAST_NONE				0x00000000
#define GLM_CAST_DIRECTX_9			0x00000001
#define GLM_CAST_DIRECTX_10			0x00000002
#define GLM_CAST_NVSG				0x00000004
#define GLM_CAST_WILD_MAGIC_3		0x00000008
#define GLM_CAST_WILD_MAGIC_4		0x00000010
#define GLM_CAST_PHYSX				0x00000020
#define GLM_CAST_ODE				0x00000040

//! By default:
// #define GLM_CAST	GLM_CAST_NONE
// #define GLM_CAST_EXT	GLM_CAST_NONE

///////////////////////////////////////////////////////////////////////////////////////////////////
// Swizzle operators

#define GLM_SWIZZLE_NONE            0x00000000
#define GLM_SWIZZLE_XYZW            0x00000001
#define GLM_SWIZZLE_RGBA            0x00000002
#define GLM_SWIZZLE_STQP            0x00000004
#define GLM_SWIZZLE_FULL            (GLM_SWIZZLE_XYZW | GLM_SWIZZLE_RGBA | GLM_SWIZZLE_STQP)

//! By default:
// #define GLM_SWIZZLE GLM_SWIZZLE_NONE

///////////////////////////////////////////////////////////////////////////////////////////////////
// Compiler

#ifdef _MSC_VER
#define GLM_COMPILER_VC				0x01001000

#if _MSC_VER == 1000
#define GLM_COMPILER_VC40			0x01000100
#endif

#if _MSC_VER == 1100
#define GLM_COMPILER_VC50			0x01000200
#endif

#if _MSC_VER == 1200
#define GLM_COMPILER_VC60			0x01000400
#endif

#if _MSC_VER == 1300
#define GLM_COMPILER_VC70			0x01000800
#endif

#if _MSC_VER == 1310
#define GLM_COMPILER_VC71			0x01001000
#endif

#if _MSC_VER == 1400
#define GLM_COMPILER_VC80			0x01002000
#endif

#endif

#ifdef __GNUC__
#define GLM_COMPILER_GCC            0x02000000

#if (__GNUC__ == 2) && (__GNUC_MINOR__ == 8) //!< GCC 2.8x isn't supported
#define GLM_COMPILER_GCC29			0x02000400
#endif

#if (__GNUC__ == 2) && (__GNUC_MINOR__ == 9) //!< GCC 2.9x isn't supported
#define GLM_COMPILER_GCC29			0x02000400
#endif

#if (__GNUC__ == 3) && (__GNUC_MINOR__ == 0) //!< GCC 3.0 isn't supported yet
#define GLM_COMPILER_GCC30			0x02000800
#endif

#if (__GNUC__ == 3) && (__GNUC_MINOR__ == 1) //!< GCC 3.1 isn't supported yet
#define GLM_COMPILER_GCC31			0x02001000
#endif

#if (__GNUC__ == 3) && (__GNUC_MINOR__ == 2)
#define GLM_COMPILER_GCC32			0x02002000
#endif

#if (__GNUC__ == 3) && (__GNUC_MINOR__ == 3)
#define GLM_COMPILER_GCC33			0x02004000
#endif

#if (__GNUC__ == 3) && (__GNUC_MINOR__ == 4)
#define GLM_COMPILER_GCC34			0x02008000
#endif

#if (__GNUC__ == 3) && (__GNUC_MINOR__ == 5)
#define GLM_COMPILER_GCC35			0x02010000
#endif

#if (__GNUC__ == 4) && (__GNUC_MINOR__ == 0)
#define GLM_COMPILER_GCC40			0x02020000
#endif

#if (__GNUC__ == 4) && (__GNUC_MINOR__ == 1)
#define GLM_COMPILER_GCC41			0x02040000
#endif

#if (__GNUC__ == 4) && (__GNUC_MINOR__ == 2)
#define GLM_COMPILER_GCC42			0x02080000
#endif

#endif

#endif//__glm_glmsetup__
