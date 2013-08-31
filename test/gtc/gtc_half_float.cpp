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
/// @ref test
/// @file test/gtc/half_float.cpp
/// @date 2011-05-32 / 2012-04-07
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////


#include <glm/glm.hpp>
#include <glm/gtc/half_float.hpp>
#include <cstdio>

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

	{
		glm::hmat2 A(1);
		glm::mat2 B(1);
		glm::hmat2 C(A);

		Error += A == C ? 0 : 1;
	}

	return Error;
}

int test_half_ctor_mat2x3()
{
	int Error = 0;
	
	{
		glm::hvec3 A(1, 2, 3);
		glm::hvec3 B(4, 5, 6);
		glm::hmat2x3 C(A, B);
		glm::hmat2x3 D(1, 2, 3, 4, 5, 6);
		
		Error += C[0] == D[0] ? 0 : 1;
		Error += C[1] == D[1] ? 0 : 1;
	}
	
	{
		glm::hvec3 A(1.0, 2.0f, 3u);
		glm::hvec3 B(4, 5u, 6u);
		glm::hmat2x3 C(A, B);
		glm::hmat2x3 D(1, 2.0, 3u, 4.0f, 5.0, 6);
		
		Error += C[0] == D[0] ? 0 : 1;
		Error += C[1] == D[1] ? 0 : 1;
	}
	
	{
		glm::hmat2x3 A(1);
		glm::mat2x3 B(1);
		glm::hmat2x3 C(A);
		
		Error += A == C ? 0 : 1;
	}
	
    return Error;
}

int test_half_ctor_mat2x4()
{
	int Error = 0;
	
	{
		glm::hvec4 A(1, 2, 3, 4);
		glm::hvec4 B(5, 6, 7, 8);
		glm::hmat2x4 C(A, B);
		glm::hmat2x4 D(1, 2, 3, 4, 5, 6, 7, 8);
		
		Error += C[0] == D[0] ? 0 : 1;
		Error += C[1] == D[1] ? 0 : 1;
	}
	
	{
		glm::hvec4 A(1.0, 2.0f, 3u, 4u);
		glm::hvec4 B(5u, 6u, 7.0, 8.0);
		glm::hmat2x4 C(A, B);
		glm::hmat2x4 D(1, 2.0, 3u, 4.0f, 5.0, 6, 7.0f, 8.0f);
		
		Error += C[0] == D[0] ? 0 : 1;
		Error += C[1] == D[1] ? 0 : 1;
	}
	
	{
		glm::hmat2x4 A(1);
		glm::mat2x4 B(1);
		glm::hmat2x4 C(A);
		
		Error += A == C ? 0 : 1;
	}
	
    return Error;
}

int test_half_ctor_mat3x2()
{
	int Error = 0;
	
	{
		glm::hvec2 A(1, 2);
		glm::hvec2 B(3, 4);
		glm::hvec2 C(5, 6);
		glm::hmat3x2 M(A, B, C);
		glm::hmat3x2 N(1, 2, 3, 4, 5, 6);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hvec2 A(1, 2.0);
		glm::hvec2 B(3, 4.0f);
		glm::hvec2 C(5u, 6.0f);
		glm::hmat3x2 M(A, B, C);
		glm::hmat3x2 N(1, 2.0, 3u, 4.0f, 5, 6);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hmat3x2 A(1);
		glm::mat3x2 B(1);
		glm::hmat3x2 C(A);
		
		Error += A == C ? 0 : 1;
	}
	
	return Error;
}

int test_half_ctor_mat3x3()
{
	int Error = 0;
	
	{
		glm::hvec3 A(1, 2, 3);
		glm::hvec3 B(4, 5, 6);
		glm::hvec3 C(7, 8, 9);
		glm::hmat3x3 M(A, B, C);
		glm::hmat3x3 N(1, 2, 3, 4, 5, 6, 7, 8, 9);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hvec3 A(1, 2.0, 3.0f);
		glm::hvec3 B(4, 5.0f, 6.0);
		glm::hvec3 C(7u, 8.0f, 9);
		glm::hmat3x3 M(A, B, C);
		glm::hmat3x3 N(1, 2.0, 3u, 4.0f, 5, 6, 7.0f, 8.0, 9u);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hmat3x3 A(1);
		glm::mat3x3 B(1);
		glm::hmat3x3 C(A);
		
		Error += A == C ? 0 : 1;
	}
	
	return Error;
}

int test_half_ctor_mat3x4()
{
	int Error = 0;
	
	{
		glm::hvec4 A(1, 2, 3, 4);
		glm::hvec4 B(5, 6, 7, 8);
		glm::hvec4 C(9, 10, 11, 12);
		glm::hmat3x4 M(A, B, C);
		glm::hmat3x4 N(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hvec4 A(1, 2.0, 3.0f, 4u);
		glm::hvec4 B(5, 6.0f, 7.0, 8);
		glm::hvec4 C(9u, 10.0f, 11, 12.f);
		glm::hmat3x4 M(A, B, C);
		glm::hmat3x4 N(1, 2.0, 3u, 4.0f, 5, 6, 7.0f, 8.0, 9u, 10, 11.f, 12.0);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hmat3x4 A(1);
		glm::mat3x4 B(1);
		glm::hmat3x4 C(A);
		
		Error += A == C ? 0 : 1;
	}
	
	return Error;
}

int test_half_ctor_mat4x2()
{
	int Error = 0;
	
	{
		glm::hvec2 A(1, 2);
		glm::hvec2 B(3, 4);
		glm::hvec2 C(5, 6);
		glm::hvec2 D(7, 8);
		glm::hmat4x2 M(A, B, C, D);
		glm::hmat4x2 N(1, 2, 3, 4, 5, 6, 7, 8);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hvec2 A(1, 2.0);
		glm::hvec2 B(3.0f, 4);
		glm::hvec2 C(5.0, 6u);
		glm::hvec2 D(7, 8u);
		glm::hmat4x2 M(A, B, C, D);
		glm::hmat4x2 N(1, 2.0, 3u, 4.0f, 5u, 6.0, 7, 8.0f);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hmat4x2 A(1);
		glm::mat4x2 B(1);
		glm::hmat4x2 C(A);
		
		Error += A == C ? 0 : 1;
	}
	
	return Error;
}

int test_half_ctor_mat4x3()
{
	int Error = 0;
	
	{
		glm::hvec3 A(1, 2, 3);
		glm::hvec3 B(4, 5, 6);
		glm::hvec3 C(7, 8, 9);
		glm::hvec3 D(10, 11, 12);
		glm::hmat4x3 M(A, B, C, D);
		glm::hmat4x3 N(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hvec3 A(1, 2.0, 3u);
		glm::hvec3 B(4.0f, 5, 6u);
		glm::hvec3 C(7.0, 8u, 9.f);
		glm::hvec3 D(10, 11u, 12.0);
		glm::hmat4x3 M(A, B, C, D);
		glm::hmat4x3 N(1, 2.0, 3u, 4.0f, 5u, 6.0, 7, 8.0f, 9, 10u, 11.f, 12.0);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hmat4x3 A(1);
		glm::mat4x3 B(1);
		glm::hmat4x3 C(A);
		
		Error += A == C ? 0 : 1;
	}
	
	return Error;
}

int test_half_ctor_mat4x4()
{
	int Error = 0;
	
	{
		glm::hvec4 A(1, 2, 3, 4);
		glm::hvec4 B(5, 6, 7, 8);
		glm::hvec4 C(9, 10, 11, 12);
		glm::hvec4 D(13, 14, 15, 16);
		glm::hmat4x4 M(A, B, C, D);
		glm::hmat4x4 N(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hvec4 A(1, 2.0, 3u, 4);
		glm::hvec4 B(5.0f, 6, 7u, 8.0);
		glm::hvec4 C(9.0, 10u, 11.f, 12);
		glm::hvec4 D(13, 14u, 15.0, 16u);
		glm::hmat4x4 M(A, B, C, D);
		glm::hmat4x4 N(1, 2.0, 3u, 4.0f, 5u, 6.0, 7, 8.0f, 9, 10u, 11.f, 12.0, 13, 14u, 15.0f, 16.0);
		
		Error += M == N ? 0 : 1;
	}
	
	{
		glm::hmat4x4 A(1);
		glm::mat4x4 B(1);
		glm::hmat4x4 C(A);
		
		Error += A == C ? 0 : 1;
	}
	
	return Error;
}

int test_half_ctor_vec2()
{
	int Error = 0;
	
	{
		glm::hvec2 A;
		A.x = glm::half(1);
		A.y = glm::half(2);
		//glm::hvec2 A(1, 2);
		glm::hvec2 B(A);
		glm::vec2 C(1, 2);
		glm::hvec2 D(C);
		glm::dvec2 E(1, 2);
		glm::hvec2 F(E);
		glm::hvec2 G(1, 2.0);
		glm::hvec2 H;
		H = A;
		
		Error += A == B ? 0 : 1;
		//Error += C == D ? 0 : 1; //Error
		//Error += E == F ? 0 : 1; //Error
		Error += A == G ? 0 : 1;
		Error += A == H ? 0 : 1;
	}
	
	{
		glm::hvec2 A(1);
		glm::vec2 B(1);
		glm::hvec2 C(A);

		Error += A == C ? 0 : 1;
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
		glm::hvec3 C(B);
		
		Error += A == C ? 0 : 1;
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
		glm::hvec4 C(B);
		
		Error += A == C ? 0 : 1;
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

static int test_hvec_precision()
{
	int Error = 0;
	
	Error += sizeof(glm::hvec2) == sizeof(glm::highp_hvec2) ? 0 : 1;
	Error += sizeof(glm::hvec3) == sizeof(glm::highp_hvec3) ? 0 : 1;
	Error += sizeof(glm::hvec4) == sizeof(glm::highp_hvec4) ? 0 : 1;
	
	return Error;
}

static int test_hmat_precision()
{
	int Error = 0;
	
	Error += sizeof(glm::hmat2) == sizeof(glm::lowp_hmat2) ? 0 : 1;
	Error += sizeof(glm::hmat3) == sizeof(glm::lowp_hmat3) ? 0 : 1;
	Error += sizeof(glm::hmat4) == sizeof(glm::lowp_hmat4) ? 0 : 1;
	Error += sizeof(glm::hmat2) == sizeof(glm::mediump_hmat2) ? 0 : 1;
	Error += sizeof(glm::hmat3) == sizeof(glm::mediump_hmat3) ? 0 : 1;
	Error += sizeof(glm::hmat4) == sizeof(glm::mediump_hmat4) ? 0 : 1;
	Error += sizeof(glm::hmat2) == sizeof(glm::highp_hmat2) ? 0 : 1;
	Error += sizeof(glm::hmat3) == sizeof(glm::highp_hmat3) ? 0 : 1;
	Error += sizeof(glm::hmat4) == sizeof(glm::highp_hmat4) ? 0 : 1;

	Error += sizeof(glm::hmat2x2) == sizeof(glm::lowp_hmat2x2) ? 0 : 1;
	Error += sizeof(glm::hmat3x2) == sizeof(glm::lowp_hmat3x2) ? 0 : 1;
	Error += sizeof(glm::hmat4x2) == sizeof(glm::lowp_hmat4x2) ? 0 : 1;
	Error += sizeof(glm::hmat2x2) == sizeof(glm::mediump_hmat2x2) ? 0 : 1;
	Error += sizeof(glm::hmat3x2) == sizeof(glm::mediump_hmat3x2) ? 0 : 1;
	Error += sizeof(glm::hmat4x2) == sizeof(glm::mediump_hmat4x2) ? 0 : 1;
	Error += sizeof(glm::hmat2x2) == sizeof(glm::highp_hmat2x2) ? 0 : 1;
	Error += sizeof(glm::hmat3x2) == sizeof(glm::highp_hmat3x2) ? 0 : 1;
	Error += sizeof(glm::hmat4x2) == sizeof(glm::highp_hmat4x2) ? 0 : 1;

	Error += sizeof(glm::hmat2x3) == sizeof(glm::lowp_hmat2x3) ? 0 : 1;
	Error += sizeof(glm::hmat3x3) == sizeof(glm::lowp_hmat3x3) ? 0 : 1;
	Error += sizeof(glm::hmat4x3) == sizeof(glm::lowp_hmat4x3) ? 0 : 1;
	Error += sizeof(glm::hmat2x3) == sizeof(glm::mediump_hmat2x3) ? 0 : 1;
	Error += sizeof(glm::hmat3x3) == sizeof(glm::mediump_hmat3x3) ? 0 : 1;
	Error += sizeof(glm::hmat4x3) == sizeof(glm::mediump_hmat4x3) ? 0 : 1;
	Error += sizeof(glm::hmat2x3) == sizeof(glm::highp_hmat2x3) ? 0 : 1;
	Error += sizeof(glm::hmat3x3) == sizeof(glm::highp_hmat3x3) ? 0 : 1;
	Error += sizeof(glm::hmat4x3) == sizeof(glm::highp_hmat4x3) ? 0 : 1;
	
	Error += sizeof(glm::hmat2x4) == sizeof(glm::lowp_hmat2x4) ? 0 : 1;
	Error += sizeof(glm::hmat3x4) == sizeof(glm::lowp_hmat3x4) ? 0 : 1;
	Error += sizeof(glm::hmat4x4) == sizeof(glm::lowp_hmat4x4) ? 0 : 1;
	Error += sizeof(glm::hmat2x4) == sizeof(glm::mediump_hmat2x4) ? 0 : 1;
	Error += sizeof(glm::hmat3x4) == sizeof(glm::mediump_hmat3x4) ? 0 : 1;
	Error += sizeof(glm::hmat4x4) == sizeof(glm::mediump_hmat4x4) ? 0 : 1;
	Error += sizeof(glm::hmat2x4) == sizeof(glm::highp_hmat2x4) ? 0 : 1;
	Error += sizeof(glm::hmat3x4) == sizeof(glm::highp_hmat3x4) ? 0 : 1;
	Error += sizeof(glm::hmat4x4) == sizeof(glm::highp_hmat4x4) ? 0 : 1;
	
	return Error;
}


namespace detail
{
	glm::uint16 float2half(glm::uint32 const & f)
	{
		// 10 bits    =>                         EE EEEFFFFF
		// 11 bits    =>                        EEE EEFFFFFF
		// Half bits  =>                   SEEEEEFF FFFFFFFF
		// Float bits => SEEEEEEE EFFFFFFF FFFFFFFF FFFFFFFF
        
		// 0x00007c00 => 00000000 00000000 01111100 00000000
		// 0x000003ff => 00000000 00000000 00000011 11111111
		// 0x38000000 => 00111000 00000000 00000000 00000000
		// 0x7f800000 => 01111111 10000000 00000000 00000000
		// 0x00008000 => 00000000 00000000 10000000 00000000
		return
        ((f >> 16) & 0x8000) | // sign
        ((((f & 0x7f800000) - 0x38000000) >> 13) & 0x7c00) | // exponential
        ((f >> 13) & 0x03ff); // Mantissa
	}
    
	glm::uint16 float2packed11(glm::uint32 const & f)
	{
		// 10 bits    =>                         EE EEEFFFFF
		// 11 bits    =>                        EEE EEFFFFFF
		// Half bits  =>                   SEEEEEFF FFFFFFFF
		// Float bits => SEEEEEEE EFFFFFFF FFFFFFFF FFFFFFFF
        
		// 0x000007c0 => 00000000 00000000 00000111 11000000
		// 0x00007c00 => 00000000 00000000 01111100 00000000
		// 0x000003ff => 00000000 00000000 00000011 11111111
		// 0x38000000 => 00111000 00000000 00000000 00000000
		// 0x7f800000 => 01111111 10000000 00000000 00000000
		// 0x00008000 => 00000000 00000000 10000000 00000000
		return
        ((((f & 0x7f800000) - 0x38000000) >> 17) & 0x07c0) | // exponential
        ((f >> 17) & 0x003f); // Mantissa
	}
    
	glm::uint float2packed10(glm::uint const & f)
	{
		// 10 bits    =>                         EE EEEFFFFF
		// 11 bits    =>                        EEE EEFFFFFF
		// Half bits  =>                   SEEEEEFF FFFFFFFF
		// Float bits => SEEEEEEE EFFFFFFF FFFFFFFF FFFFFFFF
        
		// 0x0000001F => 00000000 00000000 00000000 00011111
		// 0x0000003F => 00000000 00000000 00000000 00111111
		// 0x000003E0 => 00000000 00000000 00000011 11100000
		// 0x000007C0 => 00000000 00000000 00000111 11000000
		// 0x00007C00 => 00000000 00000000 01111100 00000000
		// 0x000003FF => 00000000 00000000 00000011 11111111
		// 0x38000000 => 00111000 00000000 00000000 00000000
		// 0x7f800000 => 01111111 10000000 00000000 00000000
		// 0x00008000 => 00000000 00000000 10000000 00000000
		return
        ((((f & 0x7f800000) - 0x38000000) >> 18) & 0x03E0) | // exponential
        ((f >> 18) & 0x001f); // Mantissa
	}
    
	glm::uint half2float(glm::uint const & h)
	{
		return ((h & 0x8000) << 16) | ((( h & 0x7c00) + 0x1C000) << 13) | ((h & 0x03FF) << 13);
	}
    
    union uif
    {
        glm::uint i;
        float f;
    };
    
	glm::uint floatTo11bit(float x)
	{
		if(x == 0.0f)
			return 0;
		else if(glm::isnan(x))
			return ~0;
		else if(glm::isinf(x))
			return 0x1f << 6;
        
		uif Union;
		Union.f = x;
		return float2packed11(Union.i);
	}
    
	glm::uint floatTo10bit(float x)
	{
		if(x == 0.0f)
			return 0;
		else if(glm::isnan(x))
			return ~0;
		else if(glm::isinf(x))
			return 0x1f << 5;
        
		uif Union;
		Union.f = x;
		return float2packed10(Union.i);
	}
    
	glm::uint f11_f11_f10(float x, float y, float z)
	{
		return ((floatTo11bit(x) & ((1 << 11) - 1)) << 0) |  ((floatTo11bit(y) & ((1 << 11) - 1)) << 11) | ((floatTo10bit(z) & ((1 << 10) - 1)) << 22);
	}
}//namespace detail

class f11f11f10
{
public:
    f11f11f10(float x, float y, float z) :
        x(detail::floatTo11bit(x)),
        y(detail::floatTo11bit(y)),
        z(detail::floatTo10bit(z))
    {}
    /*
     operator glm::vec3()
     {
     return glm::vec3(
     float(x) / 511.0f,
     float(y) / 511.0f,
     float(z) / 511.0f);
     }
     */
private:
    int x : 11;
    int y : 11;
    int z : 10;
};

void print_bits(glm::half const & s)
{
    union
    {
        glm::detail::hdata h;
        unsigned short i;
    } uif;
    
    uif.h = s._data();
    
    printf("f16: ");
    for(std::size_t j = sizeof(s) * 8; j > 0; --j)
    {
        if(j == 10 || j == 15)
            printf(" ");
        printf("%d", (uif.i & (1 << (j - 1))) ? 1 : 0);
    }
}

void print_bits(float const & s)
{
    union
    {
        float f;
        unsigned int i;
    } uif;
    
    uif.f = s;
    
    printf("f32: ");
    for(std::size_t j = sizeof(s) * 8; j > 0; --j)
    {
        if(j == 23 || j == 31)
            printf(" ");
        printf("%d", (uif.i & (1 << (j - 1))) ? 1 : 0);
    }
}

void print_10bits(glm::uint const & s)
{
    printf("10b: ");
    for(std::size_t j = 10; j > 0; --j)
    {
        if(j == 5)
            printf(" ");
        printf("%d", (s & (1 << (j - 1))) ? 1 : 0);
    }
}

void print_11bits(glm::uint const & s)
{
    printf("11b: ");
    for(std::size_t j = 11; j > 0; --j)
    {
        if(j == 6)
            printf(" ");
        printf("%d", (s & (1 << (j - 1))) ? 1 : 0);
    }
}

void print_value(float const & s)
{
    printf("%2.5f, ", s);
    print_bits(s);
    printf(", ");
    print_bits(glm::half(s));
    printf(", ");
    print_11bits(detail::floatTo11bit(s));
    printf(", ");
    print_10bits(detail::floatTo10bit(s));
    printf("\n");
}

int test_half()
{
    int Error = 0;

    print_value(0.0f);
    print_value(0.1f);
    print_value(0.2f);
    print_value(0.3f);
    print_value(0.4f);
    print_value(0.5f);
    print_value(0.6f);
    print_value(1.0f);
    print_value(1.1f);
    print_value(1.2f);
    print_value(1.3f);
    print_value(1.4f);
    print_value(1.5f);
    print_value(1.6f);
    print_value(2.0f);
    print_value(2.1f);
    print_value(2.2f);
    print_value(2.3f);
    print_value(2.4f);
    print_value(2.5f);
    print_value(2.6f);
    
    return Error;
}

int main()
{
	int Error = 0;

    Error += test_half();
	Error += test_hvec_precision();
	Error += test_hvec2_size();
	Error += test_hvec3_size();
	Error += test_hvec4_size();
	Error += test_half_ctor_vec2();
	Error += test_half_ctor_vec3();
	Error += test_half_ctor_vec4();
	Error += test_half_ctor_mat2x2();
	Error += test_half_ctor_mat2x3();
	Error += test_half_ctor_mat2x4();
	Error += test_half_ctor_mat3x2();
	Error += test_half_ctor_mat3x3();
	Error += test_half_ctor_mat3x4();
	Error += test_half_ctor_mat4x2();
	Error += test_half_ctor_mat4x3();
	Error += test_half_ctor_mat4x4();
	Error += test_half_precision_scalar();
	Error += test_half_precision_vec();
	Error += test_half_precision_mat();

	return Error;
}
