enum precision
{
	packed_highp,
	packed_mediump,
	packed_lowp,

	aligned_highp,
	aligned_mediump,
	aligned_lowp,
	aligned = aligned_highp,

	highp = packed_highp,
	mediump = packed_mediump,
	lowp = packed_lowp,
	packed = packed_highp,

	defaultp = highp
};

template<precision P>
struct is_aligned
{
	static const bool value = false;
};

template<>
struct is_aligned<aligned_lowp>
{
	static const bool value = true;
};

template<>
struct is_aligned<aligned_mediump>
{
	static const bool value = true;
};

template<>
struct is_aligned<aligned_highp>
{
	static const bool value = true;
};

template<typename T, precision P = defaultp> struct vec2;

template<typename T>
struct _swizzle_base0
{
protected:
	T& elem(size_t i){ return (reinterpret_cast<T*>(_buffer))[i]; }
	T const& elem(size_t i) const{ return (reinterpret_cast<const T*>(_buffer))[i]; }

	char _buffer[1];
};

template<typename T, precision P, int E0, int E1, int E2, int E3, bool Aligned>
struct _swizzle_base1 : public _swizzle_base0<T>
{
};

template<typename T, precision P, int E0, int E1, bool Aligned>
struct _swizzle_base1<T, P, E0,E1,-1,-2, Aligned> : public _swizzle_base0<T>
{
	vec2<T, P> operator ()()  const { return vec2<T, P>(this->elem(E0), this->elem(E1)); }
};

template<typename T, precision P, int E0, int E1, int E2, int E3, int DUPLICATE_ELEMENTS>
struct _swizzle_base2 : public _swizzle_base1<T, P, E0,E1,E2,E3, is_aligned<P>::value>
{
	_swizzle_base2& operator= (const T& t)
	{
		for (int i = 0; i < 2; ++i)
			(*this)[i] = t;
		return *this;
	}

	_swizzle_base2& operator= (vec2<T, P> const& that)
	{
		struct op { 
			void operator() (T& e, T& t) { e = t; } 
		};
		_apply_op(that, op());
		return *this;
	}

	T& operator[](size_t i)
	{
		const int offset_dst[4] = { E0, E1, E2, E3 };
		return this->elem(offset_dst[i]);
	}
	T operator[](size_t i) const
	{
		const int offset_dst[4] = { E0, E1, E2, E3 };
		return this->elem(offset_dst[i]);
	}

protected:
	template<typename U>
	void _apply_op(vec2<T, P> const& that, U op)
	{
		T t[N];
		for (int i = 0; i < N; ++i)
			t[i] = that[i];
		for (int i = 0; i < N; ++i)
			op( (*this)[i], t[i] );
	}
};

template<typename T, precision P, int E0, int E1, int E2, int E3>
struct _swizzle_base2<T, P, E0,E1,E2,E3, 1> : public _swizzle_base1<T, P, E0,E1,E2,E3, is_aligned<P>::value>
{
	struct Stub {};

	_swizzle_base2& operator= (Stub const &) { return *this; }

	T operator[]  (size_t i) const
	{
		const int offset_dst[4] = { E0, E1, E2, E3 };
		return this->elem(offset_dst[i]);
	}
};

template<typename T, precision P, int E0, int E1, int E2, int E3>
struct _swizzle : public _swizzle_base2<T, P, E0, E1, E2, E3, (E0 == E1 || E0 == E2 || E0 == E3 || E1 == E2 || E1 == E3 || E2 == E3)>
{
	typedef _swizzle_base2<T, P, E0, E1, E2, E3, (E0 == E1 || E0 == E2 || E0 == E3 || E1 == E2 || E1 == E3 || E2 == E3)> base_type;

	using base_type::operator=;

	operator vec2<T, P> () const { return (*this)(); }
};

template<typename T, precision P>
struct vec2
{
	constexpr vec2(T x, T y) :
		x(x), y(y)
	{}

	union
	{
		struct{ T x, y; };
		struct{ T r, g; };
		struct{ T s, t; };
		struct { _swizzle<T, P, 0,0,-1,-2> xx; };
		struct { _swizzle<T, P, 0,0,-1,-2> xy; };
		struct { _swizzle<T, P, 0,0,-1,-2> yy; };
		struct { _swizzle<T, P, 0,0,-1,-2> yx; };
		struct { _swizzle<T, P, 0,0,-1,-2> rr; };
		struct { _swizzle<T, P, 0,0,-1,-2> rg; };
		struct { _swizzle<T, P, 0,0,-1,-2> gr; };
		struct { _swizzle<T, P, 0,0,-1,-2> gg; };
		struct { _swizzle<T, P, 0,0,-1,-2> ss; };
		struct { _swizzle<T, P, 0,0,-1,-2> st; };
		struct { _swizzle<T, P, 0,0,-1,-2> ts; };
		struct { _swizzle<T, P, 0,0,-1,-2> tt; };
	};
};

typedef vec2<float, defaultp> float2;

// Visual C++ has a bug generating the error: fatal error C1001: An internal error has occurred in the compiler.
float2 const Bar(1.f, 1.f);

int main()
{
	return 0;
}
