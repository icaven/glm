///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-31
// Updated : 2011-05-31
// Licence : This source is under MIT License
// File    : test/core/setup_message.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_MESSAGES
#include <glm/glm.hpp>
#include <iostream>

/*
#define GLM_COMPILER_UNKNOWN		0x00000000

// Visual C++ defines
#define GLM_COMPILER_VC				0x01000000
#define GLM_COMPILER_VC2			0x01000010
#define GLM_COMPILER_VC4			0x01000020
#define GLM_COMPILER_VC5			0x01000030
#define GLM_COMPILER_VC6			0x01000040
#define GLM_COMPILER_VC2002			0x01000050
#define GLM_COMPILER_VC2003			0x01000060
#define GLM_COMPILER_VC2005			0x01000070
#define GLM_COMPILER_VC2008			0x01000080
#define GLM_COMPILER_VC2010			0x01000090
#define GLM_COMPILER_VC2011			0x010000A0

// GCC defines
#define GLM_COMPILER_GCC            0x02000000
#define GLM_COMPILER_GCC_LLVM       0x02000001
#define GLM_COMPILER_GCC_CLANG      0x02000002
#define GLM_COMPILER_GCC30			0x02000010
#define GLM_COMPILER_GCC31			0x02000020
#define GLM_COMPILER_GCC32			0x02000030
#define GLM_COMPILER_GCC33			0x02000040
#define GLM_COMPILER_GCC34			0x02000050
#define GLM_COMPILER_GCC35			0x02000060
#define GLM_COMPILER_GCC40			0x02000070
#define GLM_COMPILER_GCC41			0x02000080
#define GLM_COMPILER_GCC42			0x02000090
#define GLM_COMPILER_GCC43			0x020000A0
#define GLM_COMPILER_GCC44			0x020000B0
#define GLM_COMPILER_GCC45			0x020000C0
#define GLM_COMPILER_GCC46			0x020000D0
#define GLM_COMPILER_GCC47			0x020000E0
#define GLM_COMPILER_GCC48			0x020000F0
#define GLM_COMPILER_GCC49			0x02000100
#define GLM_COMPILER_GCC50			0x02000200

// G++ command line to display defined
// echo "" | g++ -E -dM -x c++ - | sort

// Borland C++ defines. How to identify BC?
#define GLM_COMPILER_BC				0x04000000
#define GLM_COMPILER_BCB4			0x04000100
#define GLM_COMPILER_BCB5			0x04000200
#define GLM_COMPILER_BCB6			0x04000300
//#define GLM_COMPILER_BCBX			0x04000400 // What's the version value?
#define GLM_COMPILER_BCB2009		0x04000500

// CodeWarrior
#define GLM_COMPILER_CODEWARRIOR	0x08000000

// CUDA
#define GLM_COMPILER_CUDA           0x10000000
#define GLM_COMPILER_CUDA30			0x10000010
#define GLM_COMPILER_CUDA31			0x10000020
#define GLM_COMPILER_CUDA32			0x10000030
#define GLM_COMPILER_CUDA40			0x10000040

// Clang
#define GLM_COMPILER_CLANG          0x20000000
#define GLM_COMPILER_CLANG26		0x20000010
#define GLM_COMPILER_CLANG27		0x20000020
#define GLM_COMPILER_CLANG28		0x20000030
#define GLM_COMPILER_CLANG29		0x20000040

// LLVM GCC
#define GLM_COMPILER_LLVM_GCC		0x40000000
*/
int test_compiler()
{
	int Error = 0;
	
	switch(GLM_COMPILER)
	{
	case GLM_COMPILER_VC:
		std::cout << "GLM_COMPILER_VC" << std::endl;	
		break;
	case GLM_COMPILER_GCC:
		std::cout << "GLM_COMPILER_GCC" << std::endl;	
		break;
	case GLM_COMPILER_BC:
		std::cout << "GLM_COMPILER_BC" << std::endl;	
		break;
	case GLM_COMPILER_CODEWARRIOR:
		std::cout << "GLM_COMPILER_CODEWARRIOR" << std::endl;	
		break;
	case GLM_COMPILER_CUDA:
		std::cout << "GLM_COMPILER_CUDA" << std::endl;		
		break;
	case GLM_COMPILER_CLANG:
		std::cout << "GLM_COMPILER_CLANG" << std::endl;		
		break;
	case GLM_COMPILER_LLVM_GCC:
		std::cout << "GLM_COMPILER_LLVM_GCC" << std::endl;		
		break;
	default:
		std::cout << "Undetected compiler" << std::endl;
		break;
	}
	
	return Error;
}

int test_model()
{
	int Error = 0;
	
	Error += ((sizeof(void*) == 4) && (GLM_MODEL == GLM_MODEL_32)) || ((sizeof(void*) == 8) && (GLM_MODEL == GLM_MODEL_64)) ? 0 : 1;
	
	return Error;
}

int test_operators()
{
	glm::vec3 A(1.0f);
	glm::vec3 B(1.0f);
	bool R = A != B;
	bool S = A == B;

	return (S && !R) ? 0 : 1;
}

int main()
{
	int Error = 0;

	Error += test_compiler();
	Error += test_model();
	Error += test_operators();
	
	return Error;
}
