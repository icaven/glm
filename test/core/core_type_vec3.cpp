///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2011-09-19
// Licence : This source is under MIT License
// File    : test/core/type_vec3.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/half_float.hpp>
#include <vector>

int test_vec3_ctor()
{
	int Error = 0;
	
	{
		glm::vec3 A(1);
		glm::vec3 B(1, 1, 1);
		
		Error += A == B ? 0 : 1;
	}
	
	{
		std::vector<glm::vec3> Tests;
		Tests.push_back(glm::vec3(glm::vec2(1, 2), 3));
		Tests.push_back(glm::vec3(1, glm::vec2(2, 3)));
		Tests.push_back(glm::vec3(1, 2, 3));
		Tests.push_back(glm::vec3(glm::vec4(1, 2, 3, 4)));

		for(std::size_t i = 0; i < Tests.size(); ++i)
			Error += Tests[i] == glm::vec3(1, 2, 3) ? 0 : 1;
	}
		
	return Error;
}

int test_vec3_operators()
{
	int Error = 0;
	
	{
		glm::vec3 A(1.0f);
		glm::vec3 B(1.0f);
		bool R = A != B;
		bool S = A == B;

		Error += (S && !R) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		glm::vec3 C = A + B;
		Error += C == glm::vec3(5, 7, 9) ? 0 : 1;

		glm::vec3 D = B - A;
		Error += D == glm::vec3(3, 3, 3) ? 0 : 1;

		glm::vec3 E = A * B;
		Error += E == glm::vec3(4, 10, 18) ? 0 : 1;

		glm::vec3 F = B / A;
		Error += F == glm::vec3(4, 2.5, 2) ? 0 : 1;

		glm::vec3 G = A + 1.0f;
		Error += G == glm::vec3(2, 3, 4) ? 0 : 1;

		glm::vec3 H = B - 1.0f;
		Error += H == glm::vec3(3, 4, 5) ? 0 : 1;

		glm::vec3 I = A * 2.0f;
		Error += I == glm::vec3(2, 4, 6) ? 0 : 1;

		glm::vec3 J = B / 2.0f;
		Error += J == glm::vec3(2, 2.5, 3) ? 0 : 1;

		glm::vec3 K = 1.0f + A;
		Error += K == glm::vec3(2, 3, 4) ? 0 : 1;

		glm::vec3 L = 1.0f - B;
		Error += L == glm::vec3(-3, -4, -5) ? 0 : 1;

		glm::vec3 M = 2.0f * A;
		Error += M == glm::vec3(2, 4, 6) ? 0 : 1;

		glm::vec3 N = 2.0f / B;
		Error += N == glm::vec3(0.5, 2.0 / 5.0, 2.0 / 6.0) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		A += B;
		Error += A == glm::vec3(5, 7, 9) ? 0 : 1;

		A += 1.0f;
		Error += A == glm::vec3(6, 8, 10) ? 0 : 1;
	}
	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		B -= A;
		Error += B == glm::vec3(3, 3, 3) ? 0 : 1;

		B -= 1.0f;
		Error += B == glm::vec3(2, 2, 2) ? 0 : 1;
	}
	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		A *= B;
		Error += A == glm::vec3(4, 10, 18) ? 0 : 1;

		A *= 2.0f;
		Error += A == glm::vec3(8, 20, 36) ? 0 : 1;
	}
	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		B /= A;
		Error += B == glm::vec3(4, 2.5, 2) ? 0 : 1;

		B /= 2.0f;
		Error += B == glm::vec3(2, 1.25, 1) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = -A;
		Error += B == glm::vec3(-1.0f, -2.0f, -3.0f) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = --A;
		Error += B == glm::vec3(0.0f, 1.0f, 2.0f) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = A--;
		Error += B == glm::vec3(0.0f, 1.0f, 2.0f) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = ++A;
		Error += B == glm::vec3(2.0f, 3.0f, 4.0f) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = A++;
		Error += B == glm::vec3(2.0f, 3.0f, 4.0f) ? 0 : 1;
	}

	return Error;
}

int test_vec3_size()
{
	int Error = 0;
	
	Error += sizeof(glm::vec3) == sizeof(glm::mediump_vec3) ? 0 : 1;
	Error += 12 == sizeof(glm::mediump_vec3) ? 0 : 1;
	Error += sizeof(glm::dvec3) == sizeof(glm::highp_vec3) ? 0 : 1;
	Error += 24 == sizeof(glm::highp_vec3) ? 0 : 1;
	Error += glm::vec3().length() == 3 ? 0 : 1;
	Error += glm::dvec3().length() == 3 ? 0 : 1;
	
	return Error;
}

int test_vec3_swizzle3_2()
{
    int Error = 0;

    glm::vec3 v(1, 2, 3);
    glm::vec2 u;

    // Can not assign a vec3 swizzle to a vec2
    //u = v.xyz;    //Illegal
    //u = v.rgb;    //Illegal
    //u = v.stp;    //Illegal

    u = v.xx;       Error += (u.x == 1.0f && u.y == 1.0f) ? 0 : 1;
    u = v.xy;       Error += (u.x == 1.0f && u.y == 2.0f) ? 0 : 1;
    u = v.xz;       Error += (u.x == 1.0f && u.y == 3.0f) ? 0 : 1;
    u = v.yx;       Error += (u.x == 2.0f && u.y == 1.0f) ? 0 : 1;
    u = v.yy;       Error += (u.x == 2.0f && u.y == 2.0f) ? 0 : 1;
    u = v.yz;       Error += (u.x == 2.0f && u.y == 3.0f) ? 0 : 1;
    u = v.zx;       Error += (u.x == 3.0f && u.y == 1.0f) ? 0 : 1;
    u = v.zy;       Error += (u.x == 3.0f && u.y == 2.0f) ? 0 : 1;
    u = v.zz;       Error += (u.x == 3.0f && u.y == 3.0f) ? 0 : 1;

    u = v.rr;       Error += (u.r == 1.0f && u.g == 1.0f) ? 0 : 1;
    u = v.rg;       Error += (u.r == 1.0f && u.g == 2.0f) ? 0 : 1;
    u = v.rb;       Error += (u.r == 1.0f && u.g == 3.0f) ? 0 : 1;
    u = v.gr;       Error += (u.r == 2.0f && u.g == 1.0f) ? 0 : 1;
    u = v.gg;       Error += (u.r == 2.0f && u.g == 2.0f) ? 0 : 1;
    u = v.gb;       Error += (u.r == 2.0f && u.g == 3.0f) ? 0 : 1;
    u = v.br;       Error += (u.r == 3.0f && u.g == 1.0f) ? 0 : 1;
    u = v.bg;       Error += (u.r == 3.0f && u.g == 2.0f) ? 0 : 1;
    u = v.bb;       Error += (u.r == 3.0f && u.g == 3.0f) ? 0 : 1;   

    u = v.ss;       Error += (u.s == 1.0f && u.t == 1.0f) ? 0 : 1;
    u = v.st;       Error += (u.s == 1.0f && u.t == 2.0f) ? 0 : 1;
    u = v.sp;       Error += (u.s == 1.0f && u.t == 3.0f) ? 0 : 1;
    u = v.ts;       Error += (u.s == 2.0f && u.t == 1.0f) ? 0 : 1;
    u = v.tt;       Error += (u.s == 2.0f && u.t == 2.0f) ? 0 : 1;
    u = v.tp;       Error += (u.s == 2.0f && u.t == 3.0f) ? 0 : 1;
    u = v.ps;       Error += (u.s == 3.0f && u.t == 1.0f) ? 0 : 1;
    u = v.pt;       Error += (u.s == 3.0f && u.t == 2.0f) ? 0 : 1;
    u = v.pp;       Error += (u.s == 3.0f && u.t == 3.0f) ? 0 : 1;

    // Mixed member aliases are not valid
    //u = v.rx;     //Illegal
    //u = v.sy;     //Illegal


    u = glm::vec2(1, 2);
    v = glm::vec3(1, 2, 3);
    //v.xx = u;     //Illegal
    v.xy = u;       Error += (v.x == 1.0f && v.y == 2.0f && v.z == 3.0f) ? 0 : 1;
    v.xz = u;       Error += (v.x == 1.0f && v.y == 2.0f && v.z == 2.0f) ? 0 : 1;
    v.yx = u;       Error += (v.x == 2.0f && v.y == 1.0f && v.z == 2.0f) ? 0 : 1;
    //v.yy = u;     //Illegal
    v.yz = u;       Error += (v.x == 2.0f && v.y == 1.0f && v.z == 2.0f) ? 0 : 1;
    v.zx = u;       Error += (v.x == 2.0f && v.y == 1.0f && v.z == 1.0f) ? 0 : 1;
    v.zy = u;       Error += (v.x == 2.0f && v.y == 2.0f && v.z == 1.0f) ? 0 : 1;
    //v.zz = u;     //Illegal
    
    return Error;
}

int test_vec3_swizzle3_3()
{
    int Error = 0;

    glm::vec3 v(1, 2, 3);
    glm::vec3 u;
    
    u.xyz = v.xyz;
    Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    
    u = v.xyz;
    Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.zyx;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.zyx = v;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    
    u = v.rgb;
    Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.bgr;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.bgr = v;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;

    u = v.stp;
    Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.pts;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.pts = v;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    
    return Error;
}

int test_vec3_swizzle_half()
{
    int Error = 0;

    glm::half a1(1);
    glm::half b1(2);
    glm::half c1(3);
    glm::hvec3 v(a1, b1, c1);
    glm::hvec3 u;

    float c = v.x;
    float d = v.y;
    u = v;

    float a = u.x;
    float b = u.y;
    Error += (u.x == glm::half(1.0f) && u.y == glm::half(2.0f) && u.z == glm::half(3.0f)) ? 0 : 1;
    
    /*u = v.xyz;
    Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.zyx;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.zyx = v;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    
    u = v.rgb;
    Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.bgr;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.bgr = v;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;

    u = v.stp;
    Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.pts;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.pts = v;
    Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;*/

    return Error;
}

int test_vec3_swizzle_partial()
{
	int Error = 0;

	glm::vec3 A(1, 2, 3);

	{
		glm::vec3 B(A.xy, 3.0f);

		Error += A == B ? 0 : 1;
	}

	{
		glm::vec3 B(1.0f, A.yz);

		Error += A == B ? 0 : 1;
	}

	{
		glm::vec3 B(A.xyz);

		Error += A == B ? 0 : 1;
	}

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_vec3_ctor();
	Error += test_vec3_operators();
	Error += test_vec3_size();
    Error += test_vec3_swizzle3_2();
    Error += test_vec3_swizzle3_3();
    Error += test_vec3_swizzle_half();
	Error += test_vec3_swizzle_partial();
	
	return Error;
}
