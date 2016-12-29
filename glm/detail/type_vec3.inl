/// @ref core
/// @file glm/detail/type_tvec3.inl

namespace glm
{
	// -- Implicit basic constructors --

#	if !GLM_HAS_DEFAULTED_FUNCTIONS || !defined(GLM_FORCE_NO_CTOR_INIT)
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec()
#			ifndef GLM_FORCE_NO_CTOR_INIT 
				: x(0), y(0), z(0)
#			endif
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(tvec<3, T, P> const & v)
			: x(v.x), y(v.y), z(v.z)
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(tvec<3, T, Q> const & v)
		: x(v.x), y(v.y), z(v.z)
	{}

	// -- Explicit basic constructors --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec<3, T, P>::tvec(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(T scalar)
		: x(scalar), y(scalar), z(scalar)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(T a, T b, T c)
		: x(a), y(b), z(c)
	{}

	// -- Conversion scalar constructors --

	template <typename T, precision P>
	template <typename A, typename B, typename C>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(A a, B b, C c) :
		x(static_cast<T>(a)),
		y(static_cast<T>(b)),
		z(static_cast<T>(c))
	{}

	template <typename T, precision P>
	template <typename A, typename B, typename C>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(tvec<1, A, P> const & a, tvec<1, B, P> const & b, tvec<1, C, P> const & c) :
		x(static_cast<T>(a)),
		y(static_cast<T>(b)),
		z(static_cast<T>(c))
	{}

	// -- Conversion vector constructors --

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(tvec<2, A, Q> const & a, B b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(b))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(tvec<2, A, Q> const & a, tvec<1, B, Q> const & b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(b.x))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(A a, tvec<2, B, Q> const & b) :
		x(static_cast<T>(a)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(b.y))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(tvec<1, A, Q> const & a, tvec<2, B, Q> const & b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(b.y))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(tvec<3, U, Q> const & v) :
		x(static_cast<T>(v.x)),
		y(static_cast<T>(v.y)),
		z(static_cast<T>(v.z))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<3, T, P>::tvec(tvec<4, U, Q> const & v) :
		x(static_cast<T>(v.x)),
		y(static_cast<T>(v.y)),
		z(static_cast<T>(v.z))
	{}

	// -- Component accesses --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T & tvec<3, T, P>::operator[](typename tvec<3, T, P>::length_type i)
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T const & tvec<3, T, P>::operator[](typename tvec<3, T, P>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
	}

	// -- Unary arithmetic operators --

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tvec<3, T, P>& tvec<3, T, P>::operator=(tvec<3, T, P> const & v)
		{
			this->x = v.x;
			this->y = v.y;
			this->z = v.z;
			return *this;
		}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P>& tvec<3, T, P>::operator=(tvec<3, U, P> const & v)
	{
		this->x = static_cast<T>(v.x);
		this->y = static_cast<T>(v.y);
		this->z = static_cast<T>(v.z);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator+=(U scalar)
	{
		this->x += static_cast<T>(scalar);
		this->y += static_cast<T>(scalar);
		this->z += static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator+=(tvec<1, U, P> const & v)
	{
		this->x += static_cast<T>(v.x);
		this->y += static_cast<T>(v.x);
		this->z += static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator+=(tvec<3, U, P> const & v)
	{
		this->x += static_cast<T>(v.x);
		this->y += static_cast<T>(v.y);
		this->z += static_cast<T>(v.z);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator-=(U scalar)
	{
		this->x -= static_cast<T>(scalar);
		this->y -= static_cast<T>(scalar);
		this->z -= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator-=(tvec<1, U, P> const & v)
	{
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.x);
		this->z -= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator-=(tvec<3, U, P> const & v)
	{
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.y);
		this->z -= static_cast<T>(v.z);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator*=(U scalar)
	{
		this->x *= static_cast<T>(scalar);
		this->y *= static_cast<T>(scalar);
		this->z *= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator*=(tvec<1, U, P> const & v)
	{
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.x);
		this->z *= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator*=(tvec<3, U, P> const & v)
	{
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.y);
		this->z *= static_cast<T>(v.z);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator/=(U v)
	{
		this->x /= static_cast<T>(v);
		this->y /= static_cast<T>(v);
		this->z /= static_cast<T>(v);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator/=(tvec<1, U, P> const & v)
	{
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.x);
		this->z /= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator/=(tvec<3, U, P> const & v)
	{
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.y);
		this->z /= static_cast<T>(v.z);
		return *this;
	}

	// -- Increment and decrement operators --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator++()
	{
		++this->x;
		++this->y;
		++this->z;
		return *this;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator--()
	{
		--this->x;
		--this->y;
		--this->z;
		return *this;
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> tvec<3, T, P>::operator++(int)
	{
		tvec<3, T, P> Result(*this);
		++*this;
		return Result;
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> tvec<3, T, P>::operator--(int)
	{
		tvec<3, T, P> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary bit operators --

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator%=(U scalar)
	{
		this->x %= scalar;
		this->y %= scalar;
		this->z %= scalar;
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator%=(tvec<1, U, P> const & v)
	{
		this->x %= v.x;
		this->y %= v.x;
		this->z %= v.x;
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator%=(tvec<3, U, P> const & v)
	{
		this->x %= v.x;
		this->y %= v.y;
		this->z %= v.z;
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator&=(U scalar)
	{
		this->x &= scalar;
		this->y &= scalar;
		this->z &= scalar;
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator&=(tvec<1, U, P> const & v)
	{
		this->x &= v.x;
		this->y &= v.x;
		this->z &= v.x;
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator&=(tvec<3, U, P> const & v)
	{
		this->x &= v.x;
		this->y &= v.y;
		this->z &= v.z;
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator|=(U scalar)
	{
		this->x |= scalar;
		this->y |= scalar;
		this->z |= scalar;
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator|=(tvec<1, U, P> const & v)
	{
		this->x |= v.x;
		this->y |= v.x;
		this->z |= v.x;
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator|=(tvec<3, U, P> const & v)
	{
		this->x |= v.x;
		this->y |= v.y;
		this->z |= v.z;
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator^=(U scalar)
	{
		this->x ^= scalar;
		this->y ^= scalar;
		this->z ^= scalar;
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator^=(tvec<1, U, P> const & v)
	{
		this->x ^= v.x;
		this->y ^= v.x;
		this->z ^= v.x;
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator^=(tvec<3, U, P> const & v)
	{
		this->x ^= v.x;
		this->y ^= v.y;
		this->z ^= v.z;
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator<<=(U scalar)
	{
		this->x <<= scalar;
		this->y <<= scalar;
		this->z <<= scalar;
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator<<=(tvec<1, U, P> const & v)
	{
		this->x <<= static_cast<T>(v.x);
		this->y <<= static_cast<T>(v.x);
		this->z <<= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator<<=(tvec<3, U, P> const & v)
	{
		this->x <<= static_cast<T>(v.x);
		this->y <<= static_cast<T>(v.y);
		this->z <<= static_cast<T>(v.z);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator>>=(U scalar)
	{
		this->x >>= static_cast<T>(scalar);
		this->y >>= static_cast<T>(scalar);
		this->z >>= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator>>=(tvec<1, U, P> const & v)
	{
		this->x >>= static_cast<T>(v.x);
		this->y >>= static_cast<T>(v.x);
		this->z >>= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> & tvec<3, T, P>::operator>>=(tvec<3, U, P> const & v)
	{
		this->x >>= static_cast<T>(v.x);
		this->y >>= static_cast<T>(v.y);
		this->z >>= static_cast<T>(v.z);
		return *this;
	}

	// -- Unary arithmetic operators --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator+(tvec<3, T, P> const & v)
	{
		return v;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator-(tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			-v.x, 
			-v.y, 
			-v.z);
	}

	// -- Binary arithmetic operators --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator+(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x + scalar,
			v.y + scalar,
			v.z + scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator+(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x + scalar.x,
			v.y + scalar.x,
			v.z + scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator+(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar + v.x,
			scalar + v.y,
			scalar + v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator+(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x + v.x,
			scalar.x + v.y,
			scalar.x + v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator+(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x + v2.x,
			v1.y + v2.y,
			v1.z + v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator-(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x - scalar,
			v.y - scalar,
			v.z - scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator-(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x - scalar.x,
			v.y - scalar.x,
			v.z - scalar.x);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator-(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar - v.x,
			scalar - v.y,
			scalar - v.z);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator-(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x - v.x,
			scalar.x - v.y,
			scalar.x - v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator-(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x - v2.x,
			v1.y - v2.y,
			v1.z - v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator*(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x * scalar,
			v.y * scalar,
			v.z * scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator*(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x * scalar.x,
			v.y * scalar.x,
			v.z * scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator*(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar * v.x,
			scalar * v.y,
			scalar * v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator*(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x * v.x,
			scalar.x * v.y,
			scalar.x * v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator*(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x * v2.x,
			v1.y * v2.y,
			v1.z * v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator/(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x / scalar,
			v.y / scalar,
			v.z / scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator/(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x / scalar.x,
			v.y / scalar.x,
			v.z / scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator/(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar / v.x,
			scalar / v.y,
			scalar / v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator/(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x / v.x,
			scalar.x / v.y,
			scalar.x / v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator/(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x / v2.x,
			v1.y / v2.y,
			v1.z / v2.z);
	}

	// -- Binary bit operators --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator%(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x % scalar,
			v.y % scalar,
			v.z % scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator%(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x % scalar.x,
			v.y % scalar.x,
			v.z % scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator%(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar % v.x,
			scalar % v.y,
			scalar % v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator%(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x % v.x,
			scalar.x % v.y,
			scalar.x % v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator%(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x % v2.x,
			v1.y % v2.y,
			v1.z % v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator&(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x & scalar,
			v.y & scalar,
			v.z & scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator&(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x & scalar.x,
			v.y & scalar.x,
			v.z & scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator&(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar & v.x,
			scalar & v.y,
			scalar & v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator&(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x & v.x,
			scalar.x & v.y,
			scalar.x & v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator&(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x & v2.x,
			v1.y & v2.y,
			v1.z & v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator|(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x | scalar,
			v.y | scalar,
			v.z | scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator|(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x | scalar.x,
			v.y | scalar.x,
			v.z | scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator|(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar | v.x,
			scalar | v.y,
			scalar | v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator|(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x | v.x,
			scalar.x | v.y,
			scalar.x | v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator|(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x | v2.x,
			v1.y | v2.y,
			v1.z | v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator^(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x ^ scalar,
			v.y ^ scalar,
			v.z ^ scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator^(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x ^ scalar.x,
			v.y ^ scalar.x,
			v.z ^ scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator^(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar ^ v.x,
			scalar ^ v.y,
			scalar ^ v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator^(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x ^ v.x,
			scalar.x ^ v.y,
			scalar.x ^ v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator^(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x ^ v2.x,
			v1.y ^ v2.y,
			v1.z ^ v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator<<(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x << scalar,
			v.y << scalar,
			v.z << scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator<<(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x << scalar.x,
			v.y << scalar.x,
			v.z << scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator<<(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar << v.x,
			scalar << v.y,
			scalar << v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator<<(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x << v.x,
			scalar.x << v.y,
			scalar.x << v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator<<(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x << v2.x,
			v1.y << v2.y,
			v1.z << v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator>>(tvec<3, T, P> const & v, T scalar)
	{
		return tvec<3, T, P>(
			v.x >> scalar,
			v.y >> scalar,
			v.z >> scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator>>(tvec<3, T, P> const & v, tvec<1, T, P> const & scalar)
	{
		return tvec<3, T, P>(
			v.x >> scalar.x,
			v.y >> scalar.x,
			v.z >> scalar.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator>>(T scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar >> v.x,
			scalar >> v.y,
			scalar >> v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator>>(tvec<1, T, P> const & scalar, tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			scalar.x >> v.x,
			scalar.x >> v.y,
			scalar.x >> v.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator>>(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return tvec<3, T, P>(
			v1.x >> v2.x,
			v1.y >> v2.y,
			v1.z >> v2.z);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<3, T, P> operator~(tvec<3, T, P> const & v)
	{
		return tvec<3, T, P>(
			~v.x,
			~v.y,
			~v.z);
	}

	// -- Boolean operators --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator==(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return (v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator!=(tvec<3, T, P> const & v1, tvec<3, T, P> const & v2)
	{
		return (v1.x != v2.x) || (v1.y != v2.y) || (v1.z != v2.z);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec<3, bool, P> operator&&(tvec<3, bool, P> const & v1, tvec<3, bool, P> const & v2)
	{
		return tvec<3, bool, P>(v1.x && v2.x, v1.y && v2.y, v1.z && v2.z);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec<3, bool, P> operator||(tvec<3, bool, P> const & v1, tvec<3, bool, P> const & v2)
	{
		return tvec<3, bool, P>(v1.x || v2.x, v1.y || v2.y, v1.z || v2.z);
	}
}//namespace glm
