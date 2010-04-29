#include "../precompiled.hpp"
#include <glm/glm.hpp>
#include <glm/img/multiple.hpp>

namespace glm{
namespace test
{
	bool main_img_multiple()
	{
		bool Success = true;

		{
			glm::detail::thalf Source(24.f);
			glm::detail::thalf Multiple(16.f);

			glm::detail::thalf Value = glm::higherMultiple(Source, Multiple);
			float ExpectedResult(32.f);
			float ValueFloat = Value;

			Success = Success && ExpectedResult == ValueFloat;
			assert(Success);
		}

		{
			float Source(24.f);
			float Multiple(16.f);

			float Value = glm::higherMultiple(Source, Multiple);
			float ExpectedResult(32.f);

			Success = Success && ExpectedResult == Value;
			assert(Success);
		}

		{
			glm::ivec4 Source(16, 24, 47, 65);
			glm::ivec4 Multiple(16);

			glm::ivec4 Value = glm::higherMultiple(Source, Multiple);
			glm::ivec4 ExpectedResult(16, 32, 48, 80);

			Success = Success && glm::all(glm::equal(ExpectedResult, Value));
			assert(Success);
		}

		{
			glm::vec2 Source(16, 24);
			glm::vec2 Multiple(16);

			glm::vec2 Value = glm::higherMultiple(Source, Multiple);
			glm::vec2 ExpectedResult(16, 32);

			Success = Success && glm::all(glm::equal(ExpectedResult, Value));
			assert(Success);
		}

		{
			glm::vec3 Source(16, 24, 47);
			glm::vec3 Multiple(16);

			glm::vec3 Value = glm::higherMultiple(Source, Multiple);
			glm::vec3 ExpectedResult(16, 32, 48);

			Success = Success && glm::all(glm::equal(ExpectedResult, Value));
			assert(Success);
		}

		{
			glm::vec4 Source(16, 24, 47, 65);
			glm::vec4 Multiple(16);

			glm::vec4 Value = glm::higherMultiple(Source, Multiple);
			glm::vec4 ExpectedResult(16, 32, 48, 80);

			Success = Success && glm::all(glm::equal(ExpectedResult, Value));
			assert(Success);
		}

		{
			glm::ivec4 Source(16, 24, 47, 65);
			glm::ivec4 Multiple(16);

			glm::ivec4 Value = glm::lowerMultiple(Source, Multiple);
			glm::ivec4 ExpectedResult(16, 16, 32, 64);

			Success = Success && glm::all(glm::equal(ExpectedResult, Value));
			assert(Success);
		}

		{
			glm::vec2 Source(16, 24);
			glm::vec2 Multiple(16);

			glm::vec2 Value = glm::lowerMultiple(Source, Multiple);
			glm::vec2 ExpectedResult(16, 16);

			Success = Success && glm::all(glm::equal(ExpectedResult, Value));
			assert(Success);
		}

		{
			glm::vec3 Source(16, 24, 47);
			glm::vec3 Multiple(16);

			glm::vec3 Value = glm::lowerMultiple(Source, Multiple);
			glm::vec3 ExpectedResult(16, 16, 32);

			Success = Success && glm::all(glm::equal(ExpectedResult, Value));
			assert(Success);
		}

		{
			glm::vec4 Source(16, 24, 47, 65);
			glm::vec4 Multiple(16);

			glm::vec4 Value = glm::lowerMultiple(Source, Multiple);
			glm::vec4 ExpectedResult(16, 16, 32, 64);

			Success = Success && glm::all(glm::equal(ExpectedResult, Value));
			assert(Success);
		}

		return Success;
	}

}//namespace test
}//namespace glm
