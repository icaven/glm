///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2012 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-31
// Updated : 2011-05-31
// Licence : This source is under MIT License
// File    : test/core/setup_message.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_MESSAGES
#include <glm/glm.hpp>
#include <iostream>

int test_compiler()
{
	int Error(0);
	
	switch(GLM_COMPILER)
	{
	case GLM_COMPILER_VC:
		std::cout << "GLM_COMPILER_VC" << std::endl;	
		break;
		case GLM_COMPILER_VC2:
			std::cout << "GLM_COMPILER_VC2" << std::endl;	
			break;
		case GLM_COMPILER_VC4:
			std::cout << "GLM_COMPILER_VC4" << std::endl;	
			break;
		case GLM_COMPILER_VC5:
			std::cout << "GLM_COMPILER_VC5" << std::endl;	
			break;
		case GLM_COMPILER_VC6:
			std::cout << "GLM_COMPILER_VC6" << std::endl;	
			break;
		case GLM_COMPILER_VC2002:
			std::cout << "GLM_COMPILER_VC2002" << std::endl;	
			break;
		case GLM_COMPILER_VC2003:
			std::cout << "GLM_COMPILER_VC2003" << std::endl;	
			break;
		case GLM_COMPILER_VC2005:
			std::cout << "GLM_COMPILER_VC2005" << std::endl;	
			break;
		case GLM_COMPILER_VC2008:
			std::cout << "GLM_COMPILER_VC2008" << std::endl;	
			break;
		case GLM_COMPILER_VC2010:
			std::cout << "GLM_COMPILER_VC2010" << std::endl;	
			break;
		case GLM_COMPILER_VC2011:
			std::cout << "GLM_COMPILER_VC2011" << std::endl;	
			break;

	case GLM_COMPILER_GCC:
		std::cout << "GLM_COMPILER_GCC" << std::endl;	
		break;
		case GLM_COMPILER_GCC30:
			std::cout << "GLM_COMPILER_GCC30" << std::endl;	
			break;
		case GLM_COMPILER_GCC31:
			std::cout << "GLM_COMPILER_GCC31" << std::endl;	
			break;
		case GLM_COMPILER_GCC32:
			std::cout << "GLM_COMPILER_GCC32" << std::endl;	
			break;
		case GLM_COMPILER_GCC33:
			std::cout << "GLM_COMPILER_GCC33" << std::endl;	
			break;
		case GLM_COMPILER_GCC34:
			std::cout << "GLM_COMPILER_GCC34" << std::endl;	
			break;
		case GLM_COMPILER_GCC35:
			std::cout << "GLM_COMPILER_GCC35" << std::endl;	
			break;
		case GLM_COMPILER_GCC40:
			std::cout << "GLM_COMPILER_GCC40" << std::endl;	
			break;
		case GLM_COMPILER_GCC41:
			std::cout << "GLM_COMPILER_GCC41" << std::endl;	
			break;
		case GLM_COMPILER_GCC42:
			std::cout << "GLM_COMPILER_GCC42" << std::endl;	
			break;
		case GLM_COMPILER_GCC43:
			std::cout << "GLM_COMPILER_GCC43" << std::endl;	
			break;
		case GLM_COMPILER_GCC44:
			std::cout << "GLM_COMPILER_GCC44" << std::endl;	
			break;
		case GLM_COMPILER_GCC45:
			std::cout << "GLM_COMPILER_GCC45" << std::endl;	
			break;
		case GLM_COMPILER_GCC46:
			std::cout << "GLM_COMPILER_GCC46" << std::endl;	
			break;
		case GLM_COMPILER_GCC47:
			std::cout << "GLM_COMPILER_GCC47" << std::endl;	
			break;
			
	case GLM_COMPILER_BC:
		std::cout << "GLM_COMPILER_BC" << std::endl;	
		break;
		case GLM_COMPILER_BCB4:
			std::cout << "GLM_COMPILER_BCB4" << std::endl;	
			break;
		case GLM_COMPILER_BCB5:
			std::cout << "GLM_COMPILER_BCB5" << std::endl;	
			break;
		case GLM_COMPILER_BCB6:
			std::cout << "GLM_COMPILER_BCB6" << std::endl;	
			break;
		case GLM_COMPILER_BCB2009:
			std::cout << "GLM_COMPILER_BCB2009" << std::endl;	
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
		case GLM_COMPILER_CLANG26:
			std::cout << "GLM_COMPILER_CLANG26" << std::endl;		
			break;
		case GLM_COMPILER_CLANG27:
			std::cout << "GLM_COMPILER_CLANG27" << std::endl;		
			break;
		case GLM_COMPILER_CLANG28:
			std::cout << "GLM_COMPILER_CLANG28" << std::endl;		
			break;
		case GLM_COMPILER_CLANG29:
			std::cout << "GLM_COMPILER_CLANG29" << std::endl;		
			break;
		case GLM_COMPILER_CLANG30:
			std::cout << "GLM_COMPILER_CLANG30" << std::endl;		
			break;
		case GLM_COMPILER_CLANG31:
			std::cout << "GLM_COMPILER_CLANG31" << std::endl;		
			break;
	case GLM_COMPILER_LLVM_GCC:
		std::cout << "GLM_COMPILER_LLVM_GCC" << std::endl;		
		break;
	default:
		std::cout << "Undetected compiler" << std::endl;
		Error += 1;
	}
	
	return Error;
}

int test_model()
{
	int Error = 0;
	
	Error += ((sizeof(void*) == 4) && (GLM_MODEL == GLM_MODEL_32)) || ((sizeof(void*) == 8) && (GLM_MODEL == GLM_MODEL_64)) ? 0 : 1;
	
	if(GLM_MODEL == GLM_MODEL_32)
		std::cout << "GLM_MODEL_32" << std::endl;	
	else if(GLM_MODEL == GLM_MODEL_64)
		std::cout << "GLM_MODEL_64" << std::endl;	
	
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
