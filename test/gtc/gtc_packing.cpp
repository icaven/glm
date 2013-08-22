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
/// @file test/gtc/packing.cpp
/// @date 2013-08-09 / 2013-08-09
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/packing.hpp>
#include <cstdio>

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
//    printf(", ");
//    print_11bits(detail::floatTo11bit(s));
//    printf(", ");
//    print_10bits(detail::floatTo10bit(s));
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
	int Error(0);

    Error += test_half();

	return Error;
}
