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
/// @ref gtc_half_float
/// @file glm/gtc/half_float.inl
/// @date 2009-04-29 / 2012-11-06
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace detail
{
#if(GLM_COMPONENT == GLM_COMPONENT_CXX98)
	//////////////////////////////////////
	// hvec2

	template <precision P>
	GLM_FUNC_QUALIFIER typename tvec2<half, P>::size_type tvec2<half, P>::length() const{return 2;}

	//////////////////////////////////////
	// Accesses

	template <precision P>
	GLM_FUNC_QUALIFIER half & tvec2<half, P>::operator[](typename tvec2<half, P>::size_type i)
	{
		assert(i < this->length());
		return (&x)[i];
	}

	template <precision P>
	GLM_FUNC_QUALIFIER half const & tvec2<half, P>::operator[](typename tvec2<half, P>::size_type i) const
	{
		assert(i < this->length());
		return (&x)[i];
	}

	//////////////////////////////////////
	// Implicit basic constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2() :
		x(half(0.f)),
		y(half(0.f))
	{}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(
		tvec2<half, P> const & v
	) :
		x(v.x),
		y(v.y)
	{}

	//////////////////////////////////////
	// Explicit basic constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(
		half const & s
	) :
		x(s),
		y(s)
	{}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(
		half const & s1,
		half const & s2
	) :
		x(s1),
		y(s2)
	{}

	//////////////////////////////////////
	// Swizzle constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(
		tref2<half, P> const & r
	) :
		x(r.x),
		y(r.y)
	{}

	//////////////////////////////////////
	// Convertion scalar constructors

	template <precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(
		U const & x
	) :
		x(half(x)),
		y(half(x))
	{}

	template <precision P>
	template <typename U, typename V>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(
		U const & x,
		V const & y
	) :
		x(half(x)),
		y(half(y))
	{}

	//////////////////////////////////////
	// Convertion vector constructors

	template <precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(
		tvec2<U, Q> const & v
	) :
		x(half(v.x)),
		y(half(v.y))
	{}

	template <precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(	
		tvec3<U, Q> const & v
	) :
		x(half(v.x)),
		y(half(v.y))
	{}

	template <precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec2<half, P>::tvec2
	(
		tvec4<U, Q> const & v
	) :
		x(half(v.x)),
		y(half(v.y))
	{}

	//////////////////////////////////////
	// Unary arithmetic operators

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator=
	(
		tvec2<half, P> const & v
	)
	{
		this->x = v.x;
		this->y = v.y;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator+=
	(
		half const & s
	)
	{
		this->x += s;
		this->y += s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator+=
	(
		tvec2<half, P> const & v
	)
	{
		this->x += v.x;
		this->y += v.y;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator-=
	(
		half const & s
	)
	{
		this->x -= s;
		this->y -= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator-=
	(
		tvec2<half, P> const & v
	)
	{
		this->x -= v.x;
		this->y -= v.y;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P>& tvec2<half, P>::operator*=
	(
		half const & s
	)
	{
		this->x *= s;
		this->y *= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator*=
	(
		tvec2<half, P> const & v
	)
	{
		this->x *= v.x;
		this->y *= v.y;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator/=
	(
		half const & s
	)
	{
		this->x /= s;
		this->y /= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator/=
	(
		tvec2<half, P> const & v
	)
	{
		this->x /= v.x;
		this->y /= v.y;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> & tvec2<half, P>::operator++()
	{
		++this->x;
		++this->y;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P>& tvec2<half, P>::operator--()
	{
		--this->x;
		--this->y;
		return *this;
	}

	//////////////////////////////////////
	// Swizzle operators

	template <precision P>
	GLM_FUNC_QUALIFIER half tvec2<half, P>::swizzle(comp x) const
	{
		return (*this)[x];
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> tvec2<half, P>::swizzle(comp x, comp y) const
	{
		return tvec2<half, P>(
			(*this)[x],
			(*this)[y]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> tvec2<half, P>::swizzle(comp x, comp y, comp z) const
	{
		return tvec3<half, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P> tvec2<half, P>::swizzle(comp x, comp y, comp z, comp w) const
	{
		return tvec4<half, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z],
			(*this)[w]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tref2<half, P> tvec2<half, P>::swizzle(comp x, comp y)
	{
		return tref2<half, P>(
			(*this)[x],
			(*this)[y]);
	}

	//////////////////////////////////////
	// hvec3

	template <precision P>
	GLM_FUNC_QUALIFIER typename tvec3<half, P>::size_type tvec3<half, P>::length() const
	{
		return 3;
	}

	//////////////////////////////////////
	// Accesses

	template <precision P>
	GLM_FUNC_QUALIFIER half & tvec3<half, P>::operator[]
	(
		tvec3<half, P>::size_type i
	)
	{
		assert(i < this->length());

		return (&x)[i];
	}

	template <precision P>
	GLM_FUNC_QUALIFIER half const & tvec3<half, P>::operator[]
	(
		tvec3<half, P>::size_type i
	) const
	{
		assert(i < this->length());

		return (&x)[i];
	}

	//////////////////////////////////////
	// Implicit basic constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3() :
		x(half(0)),
		y(half(0)),
		z(half(0))
	{}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		tvec3<half, P> const & v
	) :
		x(v.x),
		y(v.y),
		z(v.z)
	{}

	//////////////////////////////////////
	// Explicit basic constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		half const & s
	) :
		x(s),
		y(s),
		z(s)
	{}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		half const & s0,
		half const & s1,
		half const & s2
	) :
		x(s0),
		y(s1),
		z(s2)
	{}

	//////////////////////////////////////
	// Swizzle constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		tref3<half, P> const & r
	) :
		x(r.x),
		y(r.y),
		z(r.z)
	{}

	//////////////////////////////////////
	// Convertion scalar constructors

	template <precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		U const & x
	) :
		x(half(x)),
		y(half(x)),
		z(half(x))
	{}

	template <precision P>
	template <typename A, typename B, typename C>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		A const & x,
		B const & y,
		C const & z
	) :
		x(half(x)),
		y(half(y)),
		z(half(z))
	{}

	//////////////////////////////////////
	// Convertion vector constructors

	template <precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		tvec2<A, Q> const & v,
		B const & s
	) :
		x(half(v.x)),
		y(half(v.y)),
		z(half(s))
	{}

	template <precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		A const & s,
		tvec2<B, Q> const & v
	) :
		x(half(s)),
		y(half(v.x)),
		z(half(v.y))
	{}

	template <precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		tvec3<U, Q> const & v
	) :
		x(half(v.x)),
		y(half(v.y)),
		z(half(v.z))
	{}

	template <precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec3<half, P>::tvec3
	(
		tvec4<U, Q> const & v
	) :
		x(half(v.x)),
		y(half(v.y)),
		z(half(v.z))
	{}

	//////////////////////////////////////
	// Unary arithmetic operators

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator=
	(
		tvec3<half, P> const & v
	)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator+=
	(
		half const & s
	)
	{
		this->x += s;
		this->y += s;
		this->z += s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator+=
	(
		tvec3<half, P> const & v
	)
	{
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator-=
	(
		half const & s
	)
	{
		this->x -= s;
		this->y -= s;
		this->z -= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator-=
	(
		tvec3<half, P> const & v
	)
	{
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator*=
	(
		half const & s
	)
	{
		this->x *= s;
		this->y *= s;
		this->z *= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator*=
	(
		tvec3<half, P> const & v
	)
	{
		this->x *= v.x;
		this->y *= v.y;
		this->z *= v.z;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator/=
	(
		half const & s
	)
	{
		this->x /= s;
		this->y /= s;
		this->z /= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator/=
	(
		tvec3<half, P> const & v
	)
	{
		this->x /= v.x;
		this->y /= v.y;
		this->z /= v.z;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator++()
	{
		++this->x;
		++this->y;
		++this->z;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> & tvec3<half, P>::operator--()
	{
		--this->x;
		--this->y;
		--this->z;
		return *this;
	}

	//////////////////////////////////////
	// Swizzle operators

	template <precision P>
	GLM_FUNC_QUALIFIER half tvec3<half, P>::swizzle(comp x) const
	{
		return (*this)[x];
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> tvec3<half, P>::swizzle(comp x, comp y) const
	{
		return tvec2<half, P>(
			(*this)[x],
			(*this)[y]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> tvec3<half, P>::swizzle(comp x, comp y, comp z) const
	{
		return tvec3<half, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P> tvec3<half, P>::swizzle(comp x, comp y, comp z, comp w) const
	{
		return tvec4<half, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z],
			(*this)[w]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tref3<half, P> tvec3<half, P>::swizzle(comp x, comp y, comp z)
	{
		return tref3<half, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z]);
	}

	//////////////////////////////////////
	// hvec4

	template <precision P>
	GLM_FUNC_QUALIFIER typename tvec4<half, P>::size_type tvec4<half, P>::length() const
	{
		return 4;
	}
	
	//////////////////////////////////////
	// Accesses

	template <precision P>
	GLM_FUNC_QUALIFIER half & tvec4<half, P>::operator[]
	(
		tvec4<half, P>::size_type i
	)
	{
		assert(i < this->length());

		return (&x)[i];
	}

	template <precision P>
	GLM_FUNC_QUALIFIER half const & tvec4<half, P>::operator[]
	(
		tvec4<half, P>::size_type i
	) const
	{
		assert(i < this->length());

		return (&x)[i];
	}

	//////////////////////////////////////
	// Implicit basic constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4() :
		x(half(0)),
		y(half(0)),
		z(half(0)),
		w(half(0))
	{}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		tvec4<half, P> const & v
	) :
		x(v.x),
		y(v.y),
		z(v.z),
		w(v.w)
	{}

	//////////////////////////////////////
	// Explicit basic constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		half const & s
	) :
		x(s),
		y(s),
		z(s),
		w(s)
	{}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		half const & s1,
		half const & s2,
		half const & s3,
		half const & s4
	) :
		x(s1),
		y(s2),
		z(s3),
		w(s4)
	{}

	//////////////////////////////////////
	// Swizzle constructors

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		tref4<half, P> const & r
	) :
		x(r.x),
		y(r.y),
		z(r.z),
		w(r.w)
	{}

	//////////////////////////////////////
	// Convertion scalar constructors

	template <precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		U const & x
	) :
		x(half(x)),
		y(half(x)),
		z(half(x)),
		w(half(x))
	{}

	template <precision P>
	template <typename A, typename B, typename C, typename D>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		A const & x,
		B const & y,
		C const & z,
		D const & w
	) :
		x(half(x)),
		y(half(y)),
		z(half(z)),
		w(half(w))
	{}

	//////////////////////////////////////
	// Convertion vector constructors

	template <precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		tvec2<A, Q> const & v,
		B const & s1,
		C const & s2
	) :
		x(half(v.x)),
		y(half(v.y)),
		z(half(s1)),
		w(half(s2))
	{}

	template <precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		A const & s1,
		tvec2<B, Q> const & v,
		C const & s2
	) :
		x(half(s1)),
		y(half(v.x)),
		z(half(v.y)),
		w(half(s2))
	{}

	template <precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		A const & s1,
		B const & s2,
		tvec2<C, Q> const & v
	) :
		x(half(s1)),
		y(half(s2)),
		z(half(v.x)),
		w(half(v.y))
	{}

	template <precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		tvec3<A, Q> const & v,
		B const & s
	) :
		x(half(v.x)),
		y(half(v.y)),
		z(half(v.z)),
		w(half(s))
	{}

	template <precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		A const & s,
		tvec3<B, Q> const & v
	) :
		x(half(s)),
		y(half(v.x)),
		z(half(v.y)),
		w(half(v.z))
	{}

	template <precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		tvec2<A, Q> const & v1,
		tvec2<B, Q> const & v2
	) :
		x(half(v1.x)),
		y(half(v1.y)),
		z(half(v2.x)),
		w(half(v2.y))
	{}

	template <precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec4<half, P>::tvec4
	(
		tvec4<U, Q> const & v
	) :
		x(half(v.x)),
		y(half(v.y)),
		z(half(v.z)),
		w(half(v.w))
	{}

	//////////////////////////////////////
	// Unary arithmetic operators

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator=
	(
		tvec4<half, P> const & v
	)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
		this->w = v.w;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator+=
	(
		half const & s
	)
	{
		this->x += s;
		this->y += s;
		this->z += s;
		this->w += s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator+=
	(
		tvec4<half, P> const & v
	)
	{
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
		this->w += v.w;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator-=
	(
		half const & s
	)
	{
		this->x -= s;
		this->y -= s;
		this->z -= s;
		this->w -= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator-=
	(
		tvec4<half, P> const & v
	)
	{
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;
		this->w -= v.w;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator*=
	(
		half const & s
	)
	{
		this->x *= s;
		this->y *= s;
		this->z *= s;
		this->w *= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator*=
	(
		tvec4<half, P> const & v
	)
	{
		this->x *= v.x;
		this->y *= v.y;
		this->z *= v.z;
		this->w *= v.w;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator/=
	(
		half const & s
	)
	{
		this->x /= s;
		this->y /= s;
		this->z /= s;
		this->w /= s;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator/=
	(
		tvec4<half, P> const & v
	)
	{
		this->x /= v.x;
		this->y /= v.y;
		this->z /= v.z;
		this->w /= v.w;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator++()
	{
		++this->x;
		++this->y;
		++this->z;
		++this->w;
		return *this;
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P>& tvec4<half, P>::operator--()
	{
		--this->x;
		--this->y;
		--this->z;
		--this->w;
		return *this;
	}

	//////////////////////////////////////
	// Swizzle operators

	template <precision P>
	GLM_FUNC_QUALIFIER half tvec4<half, P>::swizzle(comp x) const
	{
		return (*this)[x];
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<half, P> tvec4<half, P>::swizzle(comp x, comp y) const
	{
		return tvec2<half, P>(
			(*this)[x],
			(*this)[y]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<half, P> tvec4<half, P>::swizzle(comp x, comp y, comp z) const
	{
		return tvec3<half, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<half, P> tvec4<half, P>::swizzle(comp x, comp y, comp z, comp w) const
	{
		return tvec4<half, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z],
			(*this)[w]);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tref4<half, P> tvec4<half, P>::swizzle(comp x, comp y, comp z, comp w)
	{
		return tref4<half, P>(
			(*this)[x],
			(*this)[y],
			(*this)[z],
			(*this)[w]);
	}

#endif//(GLM_COMPONENT == GLM_COMPONENT_CXX98)

}//namespace detail

	GLM_FUNC_QUALIFIER half abs(half const & x)
	{
		return float(x) >= float(0) ? x : -x;
	}

	GLM_FUNC_QUALIFIER hvec2 abs(hvec2 const & v)
	{
		return hvec2(
			float(v.x) >= float(0) ? v.x : -v.x,
			float(v.y) >= float(0) ? v.y : -v.y);
	}

	GLM_FUNC_QUALIFIER hvec3 abs(hvec3 const & v)
	{
		return hvec3(
			float(v.x) >= float(0) ? v.x : -v.x,
			float(v.y) >= float(0) ? v.y : -v.y,
			float(v.z) >= float(0) ? v.z : -v.z);
	}

	GLM_FUNC_QUALIFIER hvec4 abs(hvec4 const & v)
	{
		return hvec4(
			float(v.x) >= float(0) ? v.x : -v.x,
			float(v.y) >= float(0) ? v.y : -v.y,
			float(v.z) >= float(0) ? v.z : -v.z,
			float(v.w) >= float(0) ? v.w : -v.w);
	}

	template <>
	GLM_FUNC_QUALIFIER glm::half mix
	(
		glm::half const & x,
		glm::half const & y,
		bool const & a
	)
	{
		return a ? y : x;
	}

}//namespace glm
