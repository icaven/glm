/// @ref core
/// @file glm/detail/type_vec1.inl

namespace glm
{
	// -- Implicit basic constructors --

#	if !GLM_HAS_DEFAULTED_FUNCTIONS || !defined(GLM_FORCE_NO_CTOR_INIT)
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<1, T, P>::tvec()
#			ifndef GLM_FORCE_NO_CTOR_INIT
				: x(0)
#			endif
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<1, T, P>::tvec(tvec<1, T, P> const & v)
			: x(v.x)
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<1, T, P>::tvec(tvec<1, T, Q> const & v)
		: x(v.x)
	{}

	// -- Explicit basic constructors --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec<1, T, P>::tvec(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<1, T, P>::tvec(T scalar)
		: x(scalar)
	{}

	// -- Conversion vector constructors --

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<1, T, P>::tvec(tvec1<U, Q> const & v)
		: x(static_cast<T>(v.x))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<1, T, P>::tvec(tvec2<U, Q> const & v)
		: x(static_cast<T>(v.x))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<1, T, P>::tvec(tvec3<U, Q> const & v)
		: x(static_cast<T>(v.x))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tvec<1, T, P>::tvec(tvec4<U, Q> const & v)
		: x(static_cast<T>(v.x))
	{}

	// -- Component accesses --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T & tvec<1, T, P>::operator[](typename tvec<1, T, P>::length_type i)
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T const & tvec<1, T, P>::operator[](typename tvec<1, T, P>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
	}

	// -- Unary arithmetic operators --

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator=(tvec<1, T, P> const & v)
		{
			this->x = v.x;
			return *this;
		}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator=(tvec1<U, P> const & v)
	{
		this->x = static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator+=(U scalar)
	{
		this->x += static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator+=(tvec1<U, P> const & v)
	{
		this->x += static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator-=(U scalar)
	{
		this->x -= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator-=(tvec1<U, P> const & v)
	{
		this->x -= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator*=(U scalar)
	{
		this->x *= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator*=(tvec1<U, P> const & v)
	{
		this->x *= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator/=(U scalar)
	{
		this->x /= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator/=(tvec1<U, P> const & v)
	{
		this->x /= static_cast<T>(v.x);
		return *this;
	}

	// -- Increment and decrement operators --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator++()
	{
		++this->x;
		return *this;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator--()
	{
		--this->x;
		return *this;
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> tvec<1, T, P>::operator++(int)
	{
		tvec<1, T, P> Result(*this);
		++*this;
		return Result;
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> tvec<1, T, P>::operator--(int)
	{
		tvec<1, T, P> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary bit operators --

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator%=(U scalar)
	{
		this->x %= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator%=(tvec1<U, P> const & v)
	{
		this->x %= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator&=(U scalar)
	{
		this->x &= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator&=(tvec1<U, P> const & v)
	{
		this->x &= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator|=(U scalar)
	{
		this->x |= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator|=(tvec1<U, P> const & v)
	{
		this->x |= U(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator^=(U scalar)
	{
		this->x ^= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator^=(tvec1<U, P> const & v)
	{
		this->x ^= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator<<=(U scalar)
	{
		this->x <<= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator<<=(tvec1<U, P> const & v)
	{
		this->x <<= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator>>=(U scalar)
	{
		this->x >>= static_cast<T>(scalar);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> & tvec<1, T, P>::operator>>=(tvec1<U, P> const & v)
	{
		this->x >>= static_cast<T>(v.x);
		return *this;
	}

	// -- Unary constant operators --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator+(tvec<1, T, P> const & v)
	{
		return v;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator-(tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			-v.x);
	}

	// -- Binary arithmetic operators --

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator+(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x + scalar);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator+(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar + v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator+(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x + v2.x);
	}

	//operator-
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator-(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x - scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator-(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar - v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator-(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x - v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator*(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x * scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator*(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar * v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator*(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x * v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator/(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x / scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator/(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar / v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator/(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x / v2.x);
	}

	// -- Binary bit operators --

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator%(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x % scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator%(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar % v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator%(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x % v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator&(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x & scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator&(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar & v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator&(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x & v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator|(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x | scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator|(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar | v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator|(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x | v2.x);
	}
		
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator^(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x ^ scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator^(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar ^ v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator^(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x ^ v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator<<(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x << scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator<<(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar << v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator<<(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x << v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator>>(tvec<1, T, P> const & v, T scalar)
	{
		return tvec<1, T, P>(
			v.x >> scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator>>(T scalar, tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			scalar >> v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator>>(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return tvec<1, T, P>(
			v1.x >> v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec<1, T, P> operator~(tvec<1, T, P> const & v)
	{
		return tvec<1, T, P>(
			~v.x);
	}

	// -- Boolean operators --

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER bool operator==(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return (v1.x == v2.x);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER bool operator!=(tvec<1, T, P> const & v1, tvec<1, T, P> const & v2)
	{
		return (v1.x != v2.x);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec1<bool, P> operator&&(tvec1<bool, P> const & v1, tvec1<bool, P> const & v2)
	{
		return tvec1<bool, P>(v1.x && v2.x);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec1<bool, P> operator||(tvec1<bool, P> const & v1, tvec1<bool, P> const & v2)
	{
		return tvec1<bool, P>(v1.x || v2.x);
	}
}//namespace glm
