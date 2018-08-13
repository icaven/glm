#include <glm/ext/vector_float3.hpp>
#include <glm/ext/quaternion_common.hpp>
#include <glm/ext/quaternion_float.hpp>
#include <glm/ext/quaternion_relational.hpp>
#include <glm/ext/scalar_constants.hpp>

static int test_conjugate()
{
	int Error = 0;

	glm::quat const A(glm::vec3(1, 0, 0), glm::vec3(0, 1, 0));
	glm::quat const C = glm::conjugate(A);
	Error += glm::any(glm::notEqual(A, C, glm::epsilon<float>())) ? 0 : 1;

	glm::quat const B = glm::conjugate(C);
	Error += glm::all(glm::equal(A, B, glm::epsilon<float>())) ? 0 : 1;

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_conjugate();

	return Error;
}
