template<typename T> struct vec2;

struct _swizzle_base0
{
	char _buffer[1];
};

template<int E0, int E1, int E2, int E3>
struct _swizzle_base1 : public _swizzle_base0
{
};

template<int E0, int E1>
struct _swizzle_base1<E0,E1,-1,-2> : public _swizzle_base0
{

};

template<int E0, int E1, int E2, int E3, int DUPLICATE_ELEMENTS>
struct _swizzle_base2 : public _swizzle_base1<E0,E1,E2,E3>
{

};

template<int E0, int E1, int E2, int E3>
struct _swizzle_base2<E0,E1,E2,E3, 1> : public _swizzle_base1<E0,E1,E2,E3>
{

};

template<int E0, int E1, int E2, int E3>
struct _swizzle : public _swizzle_base2<E0, E1, E2, E3, (E0 == E1 || E0 == E2 || E0 == E3 || E1 == E2 || E1 == E3 || E2 == E3)>
{

};

template<typename T>
struct vec2
{
	constexpr vec2(T x, T y) :
		x(x), y(y)
	{}

	union
	{
		struct { T x, y; };
		struct { _swizzle<0,0,-1,-2> xx; };
	};
};

typedef vec2<float> float2;

// Visual C++ has a bug generating the error: fatal error C1001: An internal error has occurred in the compiler.
float2 const Bar(1.f, 1.f);

int main()
{
	return 0;
}
