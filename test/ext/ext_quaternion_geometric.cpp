#include <glm/gtc/constants.hpp>
#include <glm/ext/quaternion_geometric.hpp>
#include <glm/ext/quaternion_float.hpp>
#include <glm/ext/quaternion_float_precision.hpp>
#include <glm/ext/quaternion_double.hpp>
#include <glm/ext/quaternion_double_precision.hpp>
#include <glm/ext/vector_float3.hpp>
#include <glm/ext/vector_float3_precision.hpp>
#include <glm/ext/vector_double3.hpp>
#include <glm/ext/vector_double3_precision.hpp>
#include <glm/ext/scalar_relational.hpp>

#include <glm/gtc/quaternion.hpp>

float const Epsilon = 0.001f;;

static int test_angle()
{
	int Error = 0;

	{
		glm::quat const Q = glm::quat(glm::vec3(1, 0, 0), glm::vec3(0, 1, 0));
		float const A = glm::degrees(glm::angle(Q));
		Error += glm::equal(A, 90.0f, Epsilon) ? 0 : 1;
	}

	{
		glm::quat const Q = glm::quat(glm::vec3(0, 1, 0), glm::vec3(1, 0, 0));
		float const A = glm::degrees(glm::angle(Q));
		Error += glm::equal(A, 90.0f, Epsilon) ? 0 : 1;
	}

	return Error;
}

static int test_length()
{
	int Error = 0;

	{
		float const A = glm::length(glm::quat(1, 0, 0, 0));
		Error += glm::equal(A, 1.0f, Epsilon) ? 0 : 1;
	}

	{
		float const A = glm::length(glm::quat(1, glm::vec3(0)));
		Error += glm::equal(A, 1.0f, Epsilon) ? 0 : 1;
	}

	{
		float const A = glm::length(glm::quat(glm::vec3(1, 0, 0), glm::vec3(0, 1, 0)));
		Error += glm::equal(A, 1.0f, Epsilon) ? 0 : 1;
	}

	return Error;
}

static int test_normalize()
{
	int Error = 0;

	{
		glm::quat const A = glm::quat(1, 0, 0, 0);
		glm::quat const N = glm::normalize(A);
		Error += glm::all(glm::equal(A, N, Epsilon)) ? 0 : 1;
	}

	{
		glm::quat const A = glm::quat(1, glm::vec3(0));
		glm::quat const N = glm::normalize(A);
		Error += glm::all(glm::equal(A, N, Epsilon)) ? 0 : 1;
	}

	return Error;
}


int main()
{
	int Error = 0;

	Error += test_angle();
	Error += test_length();
	Error += test_normalize();

	return Error;
}
