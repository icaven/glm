#include "../precompiled.hpp"
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>

namespace glm{
namespace test
{
	void main_gtx_intesect()
	{
		glm::vec3 Origin = glm::vec3(0.25f, 0.33f, 10.f);
		glm::vec3 Direction = glm::vec3(0.0f, 0.0f, -1.f);

		glm::vec3 Vect0 = glm::vec3(0.0f, 0.0f, 0.f);
		glm::vec3 Vect1 = glm::vec3(1.0f, 0.0f, 0.f);
		glm::vec3 Vect2 = glm::vec3(0.0f, 1.0f, 0.f);
		glm::vec3 Position(0.0f);

		bool Result = intersectRayTriangle(
			Origin, Direction,
			Vect0, Vect1, Vect2,
			Position);

		bool End = true;
	}

}//namespace test
}//namespace glm
