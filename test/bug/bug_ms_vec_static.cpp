struct vec2;

struct _swizzle
{
	char _buffer[1];
};

struct vec2
{
	constexpr vec2(float x, float y) :
		x(x), y(y)
	{}

	union
	{
		struct { float x, y; };
		struct { _swizzle xx; };
	};
};

// Visual C++ has a bug generating the error: fatal error C1001: An internal error has occurred in the compiler.
vec2 const Bar(1.f, 1.f);

int main()
{
	return 0;
}
