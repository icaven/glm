//#include "../precompiled.hpp"
#include "../../glm/glm.hpp"
#include "../../glm/gtc/half_float.hpp"
#include "../../glm/gtc/double_float.hpp"
#include "../../glm/img/wrap.hpp"

namespace glm{
namespace test
{
	static float const epsilon = 0.001f;

	bool main_img_wrap()
	{
		bool Success = true;

		// mirrorRepeat
		{
			float A = mirrorRepeat(0.0f); // 0.0f
			Success = Success && (A - 0.0f) < epsilon;
			assert(Success);

			float B = mirrorRepeat(0.2f); // 0.2f
			Success = Success && (B - 0.2f) < epsilon;
			assert(Success);

			float C = mirrorRepeat(0.5f); // 0.5f
			Success = Success && (C - 0.5f) < epsilon;
			assert(Success);

			float D = mirrorRepeat(1.0f); // 1.0f
			Success = Success && (D - 1.0f) < epsilon;
			assert(Success);

			float E = mirrorRepeat(1.2f); // 0.8f
			Success = Success && (E - 0.8f) < epsilon;
			assert(Success);

			float F = mirrorRepeat(1.5f); // 0.5f
			Success = Success && (F - 0.5f) < epsilon;
			assert(Success);

			float G = mirrorRepeat(1.6f); // 0.4f
			Success = Success && (G - 0.4f) < epsilon;
			assert(Success);

			float H = mirrorRepeat(2.0f); // 0.0f
			Success = Success && (H - 0.0f) < epsilon;
			assert(Success);

			float I = mirrorRepeat(2.1f); // 0.1f
			Success = Success && (I - 0.1f) < epsilon;
			assert(Success);

			float J = mirrorRepeat(3.0f); // 1.0f
			Success = Success && (J - 1.0f) < epsilon;
			assert(Success);

			float K = mirrorRepeat(3.9f); // 0.1f
			Success = Success && (K - 0.1f) < epsilon;
			assert(Success);

			float L = mirrorRepeat(4.2f); // 0.2f
			Success = Success && (L - 0.2f) < epsilon;
			assert(Success);

			float M = mirrorRepeat(3.9f); // 0.1f
			Success = Success && (M - 0.1f) < epsilon;
			assert(Success);

			float N = mirrorRepeat(4.2f); // 0.2f
			Success = Success && (N - 0.2f) < epsilon;
			assert(Success);

			float O = mirrorRepeat(5.2f); // 0.8f
			Success = Success && (O - 0.8f) < epsilon;
			assert(Success);

			float P = mirrorRepeat(5.8f); // 0.2f
			Success = Success && (P - 0.2f) < epsilon;
			assert(Success);

			float Q = mirrorRepeat(6.2f); // 0.2f
			Success = Success && (Q - 0.2f) < epsilon;
			assert(Success);

			float R = mirrorRepeat(6.8f); // 0.8f
			Success = Success && (R - 0.8f) < epsilon;
			assert(Success);

			float S = mirrorRepeat(7.0f); // 1.0f
			Success = Success && (S - 1.0f) < epsilon;
			assert(Success);
		}

		{
			glm::vec2 A = mirrorRepeat(glm::vec2(0.0f)); // 0.0f
			Success = Success && glm::all(glm::lessThan((A - 0.0f), glm::vec2(epsilon)));
			assert(Success);

			glm::vec3 B = mirrorRepeat(glm::vec3(0.2f)); // 0.2f
			Success = Success && glm::all(glm::lessThan((B - 0.2f), glm::vec3(epsilon)));
			assert(Success);

			glm::vec4 C = mirrorRepeat(glm::vec4(1.2f)); // 0.8f
			Success = Success && glm::all(glm::lessThan((C - 0.8f), glm::vec4(epsilon)));
			assert(Success);
		}

		{
			glm::hvec2 A = mirrorRepeat(glm::hvec2(0.0f)); // 0.0f
			Success = Success && glm::all(glm::lessThan((A - glm::half(0.0f)), glm::hvec2(epsilon)));
			assert(Success);

			glm::hvec3 B = mirrorRepeat(glm::hvec3(0.2f)); // 0.2f
			Success = Success && glm::all(glm::lessThan((B - glm::half(0.2f)), glm::hvec3(epsilon)));
			assert(Success);

			glm::hvec4 C = mirrorRepeat(glm::hvec4(1.2f)); // 0.8f
			Success = Success && glm::all(glm::lessThan((C - glm::half(0.8f)), glm::hvec4(epsilon)));
			assert(Success);
		}

		{
			glm::dvec2 A = mirrorRepeat(glm::dvec2(0.0f)); // 0.0f
			Success = Success && glm::all(glm::lessThan((A - double(0.0f)), glm::dvec2(epsilon)));
			assert(Success);

			glm::dvec3 B = mirrorRepeat(glm::dvec3(0.2f)); // 0.2f
			Success = Success && glm::all(glm::lessThan((B - double(0.2f)), glm::dvec3(epsilon)));
			assert(Success);

			glm::dvec4 C = mirrorRepeat(glm::dvec4(1.2f)); // 0.8f
			Success = Success && glm::all(glm::lessThan((C - double(0.8f)), glm::dvec4(epsilon)));
			assert(Success);
		}

		return Success;
	}

}//namespace test
}//namespace glm
