///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-32
// Updated : 2011-05-32
// Licence : This source is under MIT licence
// File    : test/gtc/half_float.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/half_float.hpp>

int test_half_precision_scalar()
{
	int Error = 0;

	Error += sizeof(glm::half) == 2 ? 0 : 1;

	return Error;
}

int test_half_precision_vec()
{
	int Error = 0;

	Error += sizeof(glm::hvec2) == 4 ? 0 : 1;
	Error += sizeof(glm::hvec3) == 6 ? 0 : 1;
	Error += sizeof(glm::hvec4) == 8 ? 0 : 1;
    
    return Error;
}

int test_half_precision_mat()
{
	int Error = 0;

	Error += sizeof(glm::hmat2) == 8 ? 0 : 1;
	Error += sizeof(glm::hmat3) == 18 ? 0 : 1;
	Error += sizeof(glm::hmat4) == 32 ? 0 : 1;

	Error += sizeof(glm::hmat2x2) == 8 ? 0 : 1;
	Error += sizeof(glm::hmat2x3) == 12 ? 0 : 1;
	Error += sizeof(glm::hmat2x4) == 16 ? 0 : 1;
	Error += sizeof(glm::hmat3x2) == 12 ? 0 : 1;
	Error += sizeof(glm::hmat3x3) == 18 ? 0 : 1;
	Error += sizeof(glm::hmat3x4) == 24 ? 0 : 1;
	Error += sizeof(glm::hmat4x2) == 16 ? 0 : 1;
	Error += sizeof(glm::hmat4x3) == 24 ? 0 : 1;
	Error += sizeof(glm::hmat4x4) == 32 ? 0 : 1;

    return Error;
}

int test_half_ctor_mat2x2()
{
	int Error = 0;

	{
		glm::hvec2 A(1, 2);
		glm::hvec2 B(3, 4);
		glm::hmat2 C(A, B);//, 2.0f, 3.0f, 4.0f);
		glm::hmat2 D(1, 2, 3, 4);

		Error += C[0] == D[0] ? 0 : 1;
		Error += C[1] == D[1] ? 0 : 1;
	}

	{
		glm::hvec2 A(1, 2.0);
		glm::hvec2 B(3, 4.0);
		glm::hmat2 C(A, B);//, 2.0f, 3.0f, 4.0f);
		glm::hmat2 D(1, 2.0, 3u, 4.0f);

		Error += C[0] == D[0] ? 0 : 1;
		Error += C[1] == D[1] ? 0 : 1;
	}

    return Error;
}

int test_half_ctor_mat2x3()
{
	int Error = 0;
	
	return Error;
}

int test_half_ctor_mat2x4()
{
	int Error = 0;
	
	return Error;
}

int test_half_ctor_mat3x2()
{
	int Error = 0;
	
	return Error;
}

int test_half_ctor_mat3x3()
{
	int Error = 0;
	
	return Error;
}

int test_half_ctor_mat3x4()
{
	int Error = 0;
	
	return Error;
}

int test_half_ctor_mat4x2()
{
	int Error = 0;
	
	return Error;
}

int test_half_ctor_mat4x3()
{
	int Error = 0;
	
	return Error;
}

int test_half_ctor_mat4x4()
{
	int Error = 0;
	
	return Error;
}

int test_half_ctor_vec2()
{
	int Error = 0;
	
	{
		glm::hvec2 A(1, 2);
		glm::hvec2 B(A);
		glm::vec2 C(1, 2);
		glm::hvec2 D(C);
		glm::dvec2 E(1, 2);
		glm::hvec2 F(E);
		glm::hvec2 G(1, 2.0);
		glm::hvec2 H;
		H = A;
		
		Error += A == B ? 0 : 1;
		//Error += C == D ? 0 : 1;
		//Error += E == F ? 0 : 1;
		Error += A == G ? 0 : 1;
		Error += A == H ? 0 : 1;
	}
	
	{
		glm::hvec2 A(1);
		glm::vec2 B(1);
	
		//Error += A == B ? 0 : 1;
	}
	
	return Error;
}

int test_half_ctor_vec3()
{
	int Error = 0;
	
	{
		glm::hvec3 A(1, 2, 3);
		glm::hvec3 B(A);
		glm::vec3 C(1, 2, 3);
		glm::hvec3 D(C);
		glm::dvec3 E(1, 2, 3);
		glm::hvec3 F(E);
		glm::hvec3 G(1, 2.0, 3);
		glm::hvec3 H;
		H = A;
		
		Error += A == B ? 0 : 1;
		//Error += C == D ? 0 : 1;
		//Error += E == F ? 0 : 1;
		Error += A == G ? 0 : 1;
		Error += A == H ? 0 : 1;
	}
	
	{
		glm::hvec3 A(1);
		glm::vec3 B(1);
		
		//Error += A == B ? 0 : 1;
	}
	
	return Error;
}

int test_half_ctor_vec4()
{
	int Error = 0;
	
	{
		glm::hvec4 A(1, 2, 3, 4);
		glm::hvec4 B(A);
		glm::vec4 C(1, 2, 3, 4);
		glm::hvec4 D(C);
		glm::dvec4 E(1, 2, 3, 4);
		glm::hvec4 F(E);
		glm::hvec4 G(1, 2.0, 3, 4);
		glm::hvec4 H;
		H = A;
		
		Error += A == B ? 0 : 1;
		//Error += C == D ? 0 : 1;
		//Error += E == F ? 0 : 1;
		Error += A == G ? 0 : 1;
		Error += A == H ? 0 : 1;
	}
	
	{
		glm::hvec4 A(1);
		glm::vec4 B(1);
		
		//Error += A == B ? 0 : 1;
	}
	
	return Error;
}

int test_hvec2_size()
{
	int Error = 0;
	
	Error += sizeof(glm::hvec2) <= sizeof(glm::lowp_vec2) ? 0 : 1;
	Error += 4 == sizeof(glm::hvec2) ? 0 : 1;
	Error += glm::hvec2().length() == 2 ? 0 : 1;
	
	return Error;
}

int test_hvec3_size()
{
	int Error = 0;
	
	Error += sizeof(glm::hvec3) <= sizeof(glm::lowp_vec3) ? 0 : 1;
	Error += 6 <= sizeof(glm::hvec3) ? 0 : 1;
	Error += glm::hvec3().length() == 3 ? 0 : 1;
		
	return Error;
}

int test_hvec4_size()
{
	int Error = 0;
	
	Error += sizeof(glm::hvec4) <= sizeof(glm::lowp_vec4) ? 0 : 1;
	Error += 8 <= sizeof(glm::hvec4) ? 0 : 1;
	Error += glm::hvec4().length() == 4 ? 0 : 1;
	
	return Error;
}

int main()
{
	int Error = 0;

	Error += test_hvec2_size();
	Error += test_hvec3_size();
	Error += test_hvec4_size();
	Error += test_half_ctor_vec2();
	Error += test_half_ctor_vec3();
	Error += test_half_ctor_vec4();
	Error += test_half_ctor_mat2x2();
	Error += test_half_precision_scalar();
	Error += test_half_precision_vec();
	Error += test_half_precision_mat();

	return Error;
}
