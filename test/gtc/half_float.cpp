#include "../precompiled.hpp"
#include <glm/glm.hpp>
#include <glm/gtc/half_float.hpp>

namespace glm{
namespace test
{
	bool main_gtc_half_float()
	{
		bool Result = true;

		{
			glm::hvec2 A(1.0f, 3.0f);
			glm::half B(2.0f);
			glm::hvec2 C = A * B;
			glm::hvec2 D = C - glm::hvec2(2.0f);

			Result = Result && glm::all(glm::equal(C, glm::hvec2(0.0f, 4.0f)));
		}

		return Result;
	}

}//namespace test
}//namespace glm
