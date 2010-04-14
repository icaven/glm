#include "../precompiled.hpp"
#include <glm/glm.hpp>
#include <glm/gtx/associated_min_max.hpp>

using namespace glm;

bool test_associated_min_max()
{
	//{
	//	int ResultA = associatedMinGTX(
	//		0.0f, 2, 
	//		1.0f, 4);

	//	int ResultB = associatedMaxGTX(
	//		0.0f, 2, 
	//		1.0f, 4);

	//	int ResultC = associatedMinGTX(
	//		0.0f, 2, 
	//		1.0f, 4,
	//		2.0f, 8);

	//	int ResultD = associatedMaxGTX(
	//		0.0f, 2, 
	//		1.0f, 4,
	//		2.0f, 8);

	//	int ResultE = associatedMinGTX(
	//		0.0f, 2, 
	//		1.0f, 4,
	//		2.0f, 8,
	//		3.0f, 6);

	//	int ResultF = associatedMaxGTX(
	//		0.0f, 2, 
	//		1.0f, 4,
	//		2.0f, 8,
	//		3.0f, 6);

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMinGTX(
	//		glm::vec2(0), glm::ivec2(2), 
	//		glm::vec2(1), glm::ivec2(4));

	//	glm::ivec3 ResultB = associatedMinGTX(
	//		glm::vec3(0), glm::ivec3(2), 
	//		glm::vec3(1), glm::ivec3(4));

	//	glm::ivec4 ResultC = associatedMinGTX(
	//		glm::vec4(0), glm::ivec4(2), 
	//		glm::vec4(1), glm::ivec4(4));

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMaxGTX(
	//		glm::vec2(0), glm::ivec2(2), 
	//		glm::vec2(1), glm::ivec2(4));

	//	glm::ivec3 ResultB = associatedMaxGTX(
	//		glm::vec3(0), glm::ivec3(2), 
	//		glm::vec3(1), glm::ivec3(4));

	//	glm::ivec4 ResultC = associatedMaxGTX(
	//		glm::vec4(0), glm::ivec4(2), 
	//		glm::vec4(1), glm::ivec4(4));

	//	int End = 0;
	//}

	//{
	//	glm::vec2 ResultA = associatedMinGTX(
	//		glm::vec2(0.f), 2.f, 
	//		glm::vec2(1.f), 4.f);

	//	glm::ivec3 ResultB = associatedMinGTX(
	//		glm::vec3(0.f), 2, 
	//		glm::vec3(1.f), 4);

	//	glm::ivec4 ResultC = associatedMinGTX(
	//		glm::vec4(0.f), 2, 
	//		glm::vec4(1.f), 4);

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMaxGTX(
	//		glm::vec2(0), 2, 
	//		glm::vec2(1), 4);

	//	glm::ivec3 ResultB = associatedMaxGTX(
	//		glm::vec3(0), 2, 
	//		glm::vec3(1), 4);

	//	glm::ivec4 ResultC = associatedMaxGTX(
	//		glm::vec4(0), 2, 
	//		glm::vec4(1), 4);

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMinGTX(
	//		0.0f, glm::ivec2(2), 
	//		1.0f, glm::ivec2(4));

	//	glm::ivec3 ResultB = associatedMinGTX(
	//		0.0f, glm::ivec3(2), 
	//		1.0f, glm::ivec3(4));

	//	glm::ivec4 ResultC = associatedMinGTX(
	//		0.0f, glm::ivec4(2), 
	//		1.0f, glm::ivec4(4));

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMaxGTX(
	//		0.0f, glm::ivec2(2), 
	//		1.0f, glm::ivec2(4));

	//	glm::ivec3 ResultB = associatedMaxGTX(
	//		0.0f, glm::ivec3(2), 
	//		1.0f, glm::ivec3(4));

	//	glm::ivec4 ResultC = associatedMaxGTX(
	//		0.0f, glm::ivec4(2), 
	//		1.0f, glm::ivec4(4));

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMinGTX(
	//		glm::vec2(0), glm::ivec2(2), 
	//		glm::vec2(1), glm::ivec2(4),
	//		glm::vec2(2), glm::ivec2(8));

	//	glm::ivec3 ResultB = associatedMinGTX(
	//		glm::vec3(0), glm::ivec3(2), 
	//		glm::vec3(1), glm::ivec3(4),
	//		glm::vec3(2), glm::ivec3(8));

	//	glm::ivec4 ResultC = associatedMinGTX(
	//		glm::vec4(0), glm::ivec4(2), 
	//		glm::vec4(1), glm::ivec4(4),
	//		glm::vec4(2), glm::ivec4(8));

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMaxGTX(
	//		glm::vec2(0), glm::ivec2(2), 
	//		glm::vec2(1), glm::ivec2(4),
	//		glm::vec2(2), glm::ivec2(8));

	//	glm::ivec3 ResultB = associatedMaxGTX(
	//		glm::vec3(0), glm::ivec3(2), 
	//		glm::vec3(1), glm::ivec3(4),
	//		glm::vec3(2), glm::ivec3(8));

	//	glm::ivec4 ResultC = associatedMaxGTX(
	//		glm::vec4(0), glm::ivec4(2), 
	//		glm::vec4(1), glm::ivec4(4),
	//		glm::vec4(2), glm::ivec4(8));

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMinGTX(
	//		glm::vec2(0), glm::ivec2(2), 
	//		glm::vec2(1), glm::ivec2(4),
	//		glm::vec2(2), glm::ivec2(8),
	//		glm::vec2(3), glm::ivec2(6));

	//	glm::ivec3 ResultB = associatedMinGTX(
	//		glm::vec3(0), glm::ivec3(2), 
	//		glm::vec3(1), glm::ivec3(4),
	//		glm::vec3(2), glm::ivec3(8),
	//		glm::vec3(3), glm::ivec3(6));

	//	glm::ivec4 ResultC = associatedMinGTX(
	//		glm::vec4(0), glm::ivec4(2), 
	//		glm::vec4(1), glm::ivec4(4),
	//		glm::vec4(2), glm::ivec4(8),
	//		glm::vec4(3), glm::ivec4(6));

	//	int End = 0;
	//}

	//{
	//	glm::ivec2 ResultA = associatedMaxGTX(
	//		glm::vec2(0), glm::ivec2(2), 
	//		glm::vec2(1), glm::ivec2(4),
	//		glm::vec2(2), glm::ivec2(8),
	//		glm::vec2(3), glm::ivec2(6));

	//	glm::ivec3 ResultB = associatedMaxGTX(
	//		glm::vec3(0), glm::ivec3(2), 
	//		glm::vec3(1), glm::ivec3(4),
	//		glm::vec3(2), glm::ivec3(8),
	//		glm::vec3(3), glm::ivec3(6));

	//	glm::ivec4 ResultC = associatedMaxGTX(
	//		glm::vec4(0), glm::ivec4(2), 
	//		glm::vec4(1), glm::ivec4(4),
	//		glm::vec4(2), glm::ivec4(8),
	//		glm::vec4(3), glm::ivec4(6));

	//	int End = 0;
	//}

	return true;
}
