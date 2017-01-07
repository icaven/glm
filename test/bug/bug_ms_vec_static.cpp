struct vec2;

struct _swizzle
{
	char _buffer[1];
};

struct vec2
{
	constexpr vec2() :
		x(0), y(0)
	{}

	union
	{
		struct { float x, y; };
		struct { _swizzle xx; };
	};
};

// Visual C++ has a bug generating the error: fatal error C1001: An internal error has occurred in the compiler.
// vec2 Bar;

int main()
{
	return 0;
}
