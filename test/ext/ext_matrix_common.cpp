#include <glm/ext/matrix_common.hpp>
#include <glm/ext/matrix_double4x4.hpp>
#include <glm/ext/matrix_float4x4.hpp>
#include <glm/ext/matrix_relational.hpp>
#include <glm/ext/vector_bool4.hpp>

static int test_mix()
{
	int Error = 0;

	{
		glm::mat4 A(2);
		glm::mat4 B(4);
		glm::mat4 C = glm::mix(A, B, 0.5f);
		glm::bvec4 const D = glm::equal(C, glm::mat4(3), 1);
		Error += glm::all(D) ? 0 : 1;
	}

	{
		glm::mat4 A(2);
		glm::mat4 B(4);
		glm::mat4 C = glm::mix(A, B, 0.5);
		glm::bvec4 const D = glm::equal(C, glm::mat4(3), 1);
		Error += glm::all(D) ? 0 : 1;
	}

	{
		glm::dmat4 A(2);
		glm::dmat4 B(4);
		glm::dmat4 C = glm::mix(A, B, 0.5);
		glm::bvec4 const D = glm::equal(C, glm::dmat4(3), 1);
		Error += glm::all(D) ? 0 : 1;
	}

	{
		glm::dmat4 A(2);
		glm::dmat4 B(4);
		glm::dmat4 C = glm::mix(A, B, 0.5f);
		glm::bvec4 const D = glm::equal(C, glm::dmat4(3), 1);
		Error += glm::all(D) ? 0 : 1;
	}

	return Error;
}

static int test_abs()
{
	int Error = 0;

	{
		glm::mat4 A(
			3.0f, 1.0f, 5.2f, 4.9f,
			1.4f, 0.5f, 9.3f, 3.7f,
			6.8f, 8.4f, 4.3f, 3.9f,
			5.6f, 7.2f, 1.1f, 4.4f
		);
		glm::mat4 B(
			 1.0,-1.0, 1.0, 1.0,
			-1.0, 1.0, 1.0,-1.0,
			 1.0,-1.0,-1.0,-1.0,
			-1.0,-1.0, 1.0, 1.0
		);
		glm::mat4 C = glm::matrixCompMult(A, B); // Not * to avoid matrix product.
		glm::mat4 D = glm::abs(C);
		glm::bvec4 const row1 = glm::equal(D[0], A[0]);
		glm::bvec4 const row2 = glm::equal(D[1], A[1]);
		glm::bvec4 const row3 = glm::equal(D[2], A[2]);
		glm::bvec4 const row4 = glm::equal(D[3], A[3]);
		Error += glm::all(glm::bvec4{glm::all(row1), glm::all(row2), glm::all(row3), glm::all(row4)}) ? 0 : 1;

		return Error;
	}
}

int main()
{
	int Error = 0;

	Error += test_mix();
	Error += test_abs();

	return Error;
}
