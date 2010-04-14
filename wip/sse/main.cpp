#include "precompiled.h"
#include "sse_vec4.h"
#include "sse_vec4array.h"
#include "sse_mat4.h"
#include "sse_mat4array.h"

#include <cstdio>

#define CPUID __asm __emit 0fh __asm __emit 0a2h
#define RDTSC __asm __emit 0fh __asm __emit 031h

unsigned test_sse() 
{
	//test_sse_vec4();
	//test_sse_mat4();

	glm::sse::vec4 v0 = glm::sse::vec4(1.0f, 2.0f, 3.0f, 4.0f);
	glm::sse::mat4 m0 = glm::sse::mat4(v0, v0, v0, v0);
	glm::sse::mat4 m1 = glm::sse::mat4(v0, v0, v0, v0);

	unsigned cycles;

	__asm 
	{
		pushad

		CPUID
		RDTSC
		mov cycles, eax

		popad
	}

	//glm::sse::transpose(m0);
	//m0.transpose();
	m0 * m0;

	__asm 
	{
		pushad

		CPUID
		RDTSC
		sub eax, cycles
		mov cycles, eax

		popad
	}

	return cycles;
}

int main() 
{
	test_sse_vec4();
	test_sse_mat4();

	unsigned int base, base1, base2, base3, base4, base5;
	unsigned int clock;

	// Warm up cpuid & rdtsc

	__asm
	{
		pushad;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base1, eax;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base2, eax;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base3, eax;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base4, eax;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base5, eax;

		popad;
	}

	base = base1;
	if (base > base2)
		base = base2;
	if (base > base3)
		base = base3;
	if (base > base4)
		base = base4;
	if (base > base5)
		base = base5;

	{
		const unsigned size = 16;
		unsigned cycles[size];
		for(unsigned i = 0; i < size; ++i)
			cycles[i] = test_sse();

		// By the second or third run, both data and instruction
		// cache effects should have been eliminated, and results
		// will be consistent.

		printf("SSE\nBase : %d\n", base);
		printf("Cycle counts:\n");
		for(unsigned i = 0; i < size; ++i)
			printf("%d\n", cycles[i] - base);
	}

	system("pause");
}
