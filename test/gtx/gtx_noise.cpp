///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-04-21
// Updated : 2011-04-26
// Licence : This source is under MIT licence
// File    : test/gtx/noise.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/noise.hpp>
#include <iostream>

int test_simplex()
{
	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::simplex(glm::vec2(x / 16.f, y / 16.f));
		}
	}

	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::simplex(glm::vec3(x / 16.f, y / 16.f, 0.5f));
		}
	}
	
	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::simplex(glm::vec4(x / 16.f, y / 16.f, 0.5f, 0.5f));
		}
	}	

	return 0;
}

int test_perlin()
{
	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::perlin(glm::vec2(x / 16.f, y / 16.f));
		}
	}
	
	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::perlin(glm::vec3(x / 16.f, y / 16.f, 0.5f));
		}
	}
	
	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::perlin(glm::vec4(x / 16.f, y / 16.f, 0.5f, 0.5f));
		}
	}	
	
	return 0;
}

int test_perlin_pedioric()
{
	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::perlin(glm::vec2(x / 16.f, y / 16.f), glm::vec2(0.5f));
		}
	}
	
	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::perlin(glm::vec3(x / 16.f, y / 16.f, 0.5f), glm::vec3(0.5f));
		}
	}
	
	{
		float ImageData[256];
		
		for(std::size_t y = 0; y < 16; ++y)
		for(std::size_t x = 0; x < 16; ++x)
		{
			ImageData[x + y * 16] = glm::perlin(glm::vec4(x / 16.f, y / 16.f, 0.5f, 0.5f), glm::vec4(0.5f));
		}
	}	
	
	return 0;
}

int main()
{
	int Error = 0;

	Error += test_simplex();
	Error += test_perlin();
	Error += test_perlin_pedioric();

	return Error;
}
