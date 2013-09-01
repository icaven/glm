///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref core
/// @file glm/core/type_tvec2.inl
/// @date 2008-08-18 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace detail
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR typename tvec2<T, P>::size_type tvec2<T, P>::length() const
	{
		return 2;
	}

	//////////////////////////////////////
	// Accesses

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T & tvec2<T, P>::operator[](size_type i)
	{
		assert(i < this->length());
		return (&x)[i];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T const & tvec2<T, P>::operator[](size_type i) const
	{
		assert(i < this->length());
		return (&x)[i];
	}

	//////////////////////////////////////
	// Implicit basic constructors

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2() :
		x(value_type(0)),
		y(value_type(0))
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		tvec2<T, P> const & v
	) :
		x(v.x),
		y(v.y)
	{}

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		tvec2<T, Q> const & v
	) :
		x(v.x),
		y(v.y)
	{}

	//////////////////////////////////////
	// Explicit basic constructors

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		ctor
	)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		value_type const & s
	) :
		x(s),
		y(s)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		value_type const & s1,
		value_type const & s2
	) :
		x(s1),
		y(s2)
	{}

	//////////////////////////////////////
	// Swizzle constructors

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		tref2<T, P> const & r
	) :
		x(r.x),
		y(r.y)
	{}

	//////////////////////////////////////
	// Conversion scalar constructors
		
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		U const & x
	) :
		x(value_type(x)),
		y(value_type(x))
	{}

	template <typename T, precision P>
	template <typename U, typename V>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		U const & a,
		V const & b
	) :
		x(value_type(a)),
		y(value_type(b))
	{}

	//////////////////////////////////////
	// Conversion vector constructors

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		tvec2<U, Q> const & v
	) :
		x(value_type(v.x)),
		y(value_type(v.y))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		tvec3<U, Q> const & v
	) :
		x(value_type(v.x)),
		y(value_type(v.y))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec2<T, P>::tvec2
	(
		tvec4<U, Q> const & v
	) :
		x(value_type(v.x)),
		y(value_type(v.y))
	{}

	//////////////////////////////////////
	// Unary arithmetic operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator=
	(
		tvec2<T, P> const & v
	)
	{
		this->x = v.x;
		this->y = v.y;
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator=
	(
		tvec2<U, P> const & v
	)
	{
		this->x = T(v.x);
		this->y = T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator+=
	(
		U const & s
	)
	{
		this->x += T(s);
		this->y += T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator+=
	(
		tvec2<U, P> const & v
	)
	{
		this->x += T(v.x);
		this->y += T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator-=
	(
		U const & s
	)
	{
		this->x -= T(s);
		this->y -= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator-=
	(
		tvec2<U, P> const & v
	)
	{
		this->x -= T(v.x);
		this->y -= T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator*=
	(
		U const & s
	)
	{
		this->x *= T(s);
		this->y *= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator*=
	(
		tvec2<U, P> const & v
	)
	{
		this->x *= T(v.x);
		this->y *= T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator/=
	(
		U const & s
	)
	{
		this->x /= T(s);
		this->y /= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator/=
	(
		tvec2<U, P> const & v
	)
	{
		this->x /= T(v.x);
		this->y /= T(v.y);
		return *this;
	}

	//////////////////////////////////////
	// Increment and decrement operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator++()
	{
		++this->x;
		++this->y;
		return *this;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator--()
	{
		--this->x;
		--this->y;
		return *this;
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec2<T, P> tvec2<T, P>::operator++(int)
	{
		tvec2<T, P> Result(*this);
		++*this;
		return Result;
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec2<T, P> tvec2<T, P>::operator--(int)
	{
		tvec2<T, P> Result(*this);
		--*this;
		return Result;
	}

	//////////////////////////////////////
	// Boolean operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator==
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return (v1.x == v2.x) && (v1.y == v2.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator!=
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return (v1.x != v2.x) || (v1.y != v2.y);
	}

	//////////////////////////////////////
	// Unary bit operators

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator%=
	(
		U const & s
	)
	{
		this->x %= T(s);
		this->y %= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator%=
	(
		tvec2<U, P> const & v
	)
	{
		this->x %= T(v.x);
		this->y %= T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator&=
	(
		U const & s
	)
	{
		this->x &= T(s);
		this->y &= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator&=
	(
		tvec2<U, P> const & v
	)
	{
		this->x &= T(v.x);
		this->y &= T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator|=
	(
		U const & s
	)
	{
		this->x |= T(s);
		this->y |= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator|=
	(
		tvec2<U, P> const & v
	)
	{
		this->x |= T(v.x);
		this->y |= T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator^=
	(
		U const & s
	)
	{
		this->x ^= T(s);
		this->y ^= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator^=
	(
		tvec2<U, P> const & v
	)
	{
		this->x ^= T(v.x);
		this->y ^= T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator<<=
	(
		U const & s
	)
	{
		this->x <<= T(s);
		this->y <<= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator<<=
	(
		tvec2<U, P> const & v
	)
	{
		this->x <<= T(v.x);
		this->y <<= T(v.y);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator>>=
	(
		U const & s
	)
	{
		this->x >>= T(s);
		this->y >>= T(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator>>=
	(
		tvec2<U, P> const & v
	)
	{
		this->x >>= T(v.x);
		this->y >>= T(v.y);
		return *this;
	}

	//////////////////////////////////////
	// Swizzle operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec2<T, P>::value_type tvec2<T, P>::swizzle
	(
		comp x
	) const
	{
		return (*this)[x];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> tvec2<T, P>::swizzle
	(
		comp x,
		comp y
	) const
	{
		return tvec2<T, P>(
			(*this)[x],
			(*this)[y]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> tvec2<T, P>::swizzle
	(
		comp x,
		comp y,
		comp z
	) const
	{
		return tvec3<T, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> tvec2<T, P>::swizzle
	(
		comp x,
		comp y,
		comp z,
		comp w
	) const
	{
		return tvec4<T, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z],
			(*this)[w]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tref2<T, P> tvec2<T, P>::swizzle
	(
		comp x,
		comp y
	)
	{
		return tref2<T, P>(
			(*this)[x],
			(*this)[y]);
	}

	//////////////////////////////////////
	// Binary arithmetic operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x + T(s),
			v.y + T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) + v.x,
			T(s) + v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x + T(v2.x),
			v1.y + T(v2.y));
	}

	//operator-
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-
	(
		tvec2<T, P> const & v, 
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x - T(s),
			v.y - T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator- 
	(
		T const & s, 
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) - v.x,
			T(s) - v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x - T(v2.x),
			v1.y - T(v2.y));
	}

	//operator*
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator*
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x * T(s),
			v.y * T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator*
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) * v.x,
			T(s) * v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator*
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x * T(v2.x),
			v1.y * T(v2.y));
	}

	//operator/
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator/
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x / T(s),
			v.y / T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator/
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) / v.x,
			T(s) / v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator/
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x / T(v2.x),
			v1.y / T(v2.y));
	}

	// Unary constant operators
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-
	(
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			-v.x, 
			-v.y);
	}

	//////////////////////////////////////
	// Binary bit operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator%
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x % T(s),
			v.y % T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator%
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) % v.x,
			T(s) % v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator%
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x % T(v2.x),
			v1.y % T(v2.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator&
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x & T(s),
			v.y & T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator&
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) & v.x,
			T(s) & v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator&
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x & T(v2.x),
			v1.y & T(v2.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator|
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x | T(s),
			v.y | T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator|
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) | v.x,
			T(s) | v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator|
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x | T(v2.x),
			v1.y | T(v2.y));
	}
		
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator^
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x ^ T(s),
			v.y ^ T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator^
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) ^ v.x,
			T(s) ^ v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator^
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x ^ T(v2.x),
			v1.y ^ T(v2.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator<<
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x << T(s),
			v.y << T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator<<
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			s << T(v.x),
			s << T(v.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator<<
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x << T(v2.x),
			v1.y << T(v2.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator>>
	(
		tvec2<T, P> const & v,
		T const & s
	)
	{
		return tvec2<T, P>(
			v.x >> T(s),
			v.y >> T(s));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator>>
	(
		T const & s,
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			T(s) >> v.x,
			T(s) >> v.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator>>
	(
		tvec2<T, P> const & v1,
		tvec2<T, P> const & v2
	)
	{
		return tvec2<T, P>(
			v1.x >> T(v2.x),
			v1.y >> T(v2.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator~
	(
		tvec2<T, P> const & v
	)
	{
		return tvec2<T, P>(
			~v.x,
			~v.y);
	}

	//////////////////////////////////////
	// tref definition

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tref2<T, P>::tref2
	(
		T & x, 
		T & y
	) :
		x(x),
		y(y)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tref2<T, P>::tref2
	(
		tref2<T, P> const & r
	) :
		x(r.x),
		y(r.y)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tref2<T, P>::tref2
	(
		tvec2<T, P> const & v
	) :
		x(v.x),
		y(v.y)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tref2<T, P>& tref2<T, P>::operator=
	(
		tref2<T, P> const & r
	)
	{
		x = r.x;
		y = r.y;
		return *this;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tref2<T, P>& tref2<T, P>::operator=
	(
		tvec2<T, P> const & v
	)
	{
		x = v.x;
		y = v.y;
		return *this;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> tref2<T, P>::operator() ()
	{
		return tvec2<T, P>(this->x, this->y);
	}
}//namespace detail
}//namespace glm
