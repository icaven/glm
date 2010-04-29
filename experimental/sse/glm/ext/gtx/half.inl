///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/half.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_HALF_OP(A, B, O) _toFloat16(_toFloat32(A) O _toFloat32(B))
#define GLM_HALF_OP_1(A, B, O) _toFloat16(_toFloat32(A) O float(B))
#define GLM_HALF_OP_2(A, O, B) _toFloat16(_toFloat32(A) O _toFloat32(B))

namespace glm
{
	inline __halfGTX cosGTX(__halfGTX x)
	{
		return __halfGTX(cos(float(x)));
	}

	inline __hvec2GTX cosGTX(const __hvec2GTX& x)
	{
		return __hvec2GTX(
			cos(float(x.x)), 
			cos(float(x.y)));
	}

	inline __hvec3GTX cosGTX(const __hvec3GTX& x)
	{
		return __hvec3GTX(
			cos(float(x.x)), 
			cos(float(x.y)),
			cos(float(x.z)));
	}

	inline __hvec4GTX cosGTX(const __hvec4GTX& x)
	{
		return __hvec4GTX(
			cos(float(x.x)), 
			cos(float(x.y)),
			cos(float(x.z)),
			cos(float(x.w)));
	}

	inline __halfGTX sinGTX(__halfGTX x)
	{
		return __halfGTX(sin(float(x)));
	}

	inline __hvec2GTX sinGTX(const __hvec2GTX& x)
	{
		return __hvec2GTX(
			sin(float(x.x)), 
			sin(float(x.y)));
	}

	inline __hvec3GTX sinGTX(const __hvec3GTX& x)
	{
		return __hvec3GTX(
			sin(float(x.x)), 
			sin(float(x.y)),
			sin(float(x.z)));
	}

	inline __hvec4GTX sinGTX(const __hvec4GTX& x)
	{
		return __hvec4GTX(
			sin(float(x.x)), 
			sin(float(x.y)),
			sin(float(x.z)),
			sin(float(x.w)));
	}

	inline __halfGTX tanGTX(__halfGTX x)
	{
		return __halfGTX(tan(float(x)));
	}

	inline __hvec2GTX tanGTX(const __hvec2GTX& x)
	{
		return __hvec2GTX(
			__halfGTX(tan(float(x.x))),
			__halfGTX(tan(float(x.y))));
	}

	inline __hvec3GTX tanGTX(const __hvec3GTX& x)
	{
		return __hvec3GTX(
			__halfGTX(tan(float(x.x))),
			__halfGTX(tan(float(x.y))),
			__halfGTX(tan(float(x.z))));
	}

	inline __hvec4GTX tanGTX(const __hvec4GTX& x)
	{
		return __hvec4GTX(
			__halfGTX(tan(float(x.x))),
			__halfGTX(tan(float(x.y))),
			__halfGTX(tan(float(x.z))),
			__halfGTX(tan(float(x.w))));
	}

	namespace detail
	{
		inline hdata::hdata(const hdata& value) :
			data(value.data)
		{}

		inline hdata::hdata(float value) :
			data(_toFloat16(value).data)
		{}

		inline hdata::operator float ()
		{
			return _toFloat32(data);
		}

		inline float _overflow()
		{
			volatile float f = 1e10;

			for(int i = 0; i < 10; ++i)	
				f *= f;             // this will overflow before
									// the for­loop terminates
			return f;
		}

		inline float _toFloat32(hdata HData)
		{
			short value = HData.data;

			int s = (value >> 15) & 0x00000001;
			int e = (value >> 10) & 0x0000001f;
			int m =  value        & 0x000003ff;

			if(e == 0)
			{
				if(m == 0)
				{
					//
					// Plus or minus zero
					//

					uif result;
					result.i = s << 31;
					return result.f;
				}
				else
				{
					//
					// Denormalized number -- renormalize it
					//

					while(!(m & 0x00000400))
					{
						m <<= 1;
						e -=  1;
					}

					e += 1;
					m &= ~0x00000400;
				}
			}
			else if(e == 31)
			{
				if(m == 0)
				{
					//
					// Positive or negative infinity
					//

					uif result;
					result.i = (s << 31) | 0x7f800000;
					return result.f;
				}
				else
				{
					//
					// Nan -- preserve sign and significand bits
					//

					uif result;
					result.i = (s << 31) | 0x7f800000 | (m << 13);
					return result.f;
				}
			}

			//
			// Normalized number
			//

			e = e + (127 - 15);
			m = m << 13;

			//
			// Assemble s, e and m.
			//

			uif Result;
			Result.i = (s << 31) | (e << 23) | m;
			return Result.f;
		}

		inline hdata _toFloat16(float f)
		{
			uif Entry;
			Entry.f = f;
			int i = Entry.i;

			//
			// Our floating point number, f, is represented by the bit
			// pattern in integer i.  Disassemble that bit pattern into
			// the sign, s, the exponent, e, and the significand, m.
			// Shift s into the position where it will go in in the
			// resulting _halfGTX number.
			// Adjust e, accounting for the different exponent bias
			// of float and _halfGTX (127 versus 15).
			//

			register int s =  (i >> 16) & 0x00008000;
			register int e = ((i >> 23) & 0x000000ff) - (127 - 15);
			register int m =   i        & 0x007fffff;

			//
			// Now reassemble s, e and m into a _halfGTX:
			//

			if(e <= 0)
			{
				if(e < -10)
				{
					//
					// E is less than -10.  The absolute value of f is
					// less than __halfGTX_MIN (f may be a small normalized
					// float, a denormalized float or a zero).
					//
					// We convert f to a _halfGTX zero.
					//

					return 0;
				}

				//
				// E is between -10 and 0.  F is a normalized float,
				// whose magnitude is less than __halfGTX_NRM_MIN.
				//
				// We convert f to a denormalized _halfGTX.
				// 

				m = (m | 0x00800000) >> (1 - e);

				//
				// Round to nearest, round "0.5" up.
				//
				// Rounding may cause the significand to overflow and make
				// our number normalized.  Because of the way a _halfGTX's bits
				// are laid out, we don't have to treat this case separately;
				// the code below will handle it correctly.
				// 

				if(m &  0x00001000) m += 0x00002000;

				//
				// Assemble the _halfGTX from s, e (zero) and m.
				//

				hdata HData;
				HData.data = s | (m >> 13);
				return HData;
			}
			else if(e == 0xff - (127 - 15))
			{
				if(m == 0)
				{
					//
					// F is an infinity; convert f to a _halfGTX
					// infinity with the same sign as f.
					//

					hdata HData;
					HData.data = s | 0x7c00;
					return HData;
				}
				else
				{
					//
					// F is a NAN; we produce a _halfGTX NAN that preserves
					// the sign bit and the 10 leftmost bits of the
					// significand of f, with one exception: If the 10
					// leftmost bits are all zero, the NAN would turn 
					// into an infinity, so we have to set at least one
					// bit in the significand.
					//

					m >>= 13;

					hdata HData;
					HData.data = s | 0x7c00 | m | (m == 0);
					return HData;
				}
			}
			else
			{
				//
				// E is greater than zero.  F is a normalized float.
				// We try to convert f to a normalized _halfGTX.
				//

				//
				// Round to nearest, round "0.5" up
				//

				if(m &  0x00001000)
				{
					m += 0x00002000;

					if(m & 0x00800000)
					{
						m =  0;     // overflow in significand,
						e += 1;     // adjust exponent
					}
				}

				//
				// Handle exponent overflow
				//

				if (e > 30)
				{
					_overflow();        // Cause a hardware floating point overflow;

					hdata HData;
					HData.data = s | 0x7c00;
					return HData;
					// if this returns, the _halfGTX becomes an
				}   // infinity with the same sign as f.

				//
				// Assemble the _halfGTX from s, e and m.
				//

				hdata HData;
				HData.data = s | (e << 10) | (m >> 13);
				return HData;
			}
		}

		inline _halfGTX::_halfGTX()
		{}

		inline _halfGTX::_halfGTX(float s)
		{
			if(s == 0)
				data = 0;
			else
				data = _toFloat16(s).data;
		}

		inline _halfGTX::_halfGTX(double s)
		{
			if(s == 0)
				data.data = 0;
			else
				data = _toFloat16(float(s)).data;
		}

		inline _halfGTX::_halfGTX(int s)
		{
			data = _toFloat16(float(s));
		}

		inline _halfGTX::_halfGTX(bool s)
		{
			data = _toFloat16(float(s));
		}

		inline _halfGTX::operator float() const
		{
			return _toFloat32(data);
		}

		inline _halfGTX::operator double() const
		{
			return double(_toFloat32(data));
		}

		inline _halfGTX::operator int() const
		{
			return int(_toFloat32(data));
		}

		inline _halfGTX::operator hdata() const
		{
			return data;
		}

		inline _halfGTX& _halfGTX::operator=(_halfGTX h)
		{
			data = h.data;
			return *this;
		}

		inline _halfGTX& _halfGTX::operator=(float f)
		{
			*this = _halfGTX(f);
			return *this;
		}

		inline _halfGTX _halfGTX::operator+(_halfGTX h) const
		{
			return _halfGTX(float(*this) + float(h));
		}

		inline _halfGTX& _halfGTX::operator+=(_halfGTX h)
		{
			*this = _halfGTX(float(*this) + float(h));
			return *this;
		}

		inline _halfGTX _halfGTX::operator+(float f) const
		{
			return _halfGTX(float(*this) + f);
		}

		inline _halfGTX& _halfGTX::operator+=(float f)
		{
			*this = _halfGTX(float(*this) + f);
			return *this;
		}

		inline _halfGTX _halfGTX::operator-(_halfGTX h) const
		{
			return _halfGTX(float(*this) - float(h));
		}

		inline _halfGTX& _halfGTX::operator-=(_halfGTX h)
		{
			*this = _halfGTX(float(*this) - float(h));
			return *this;
		}

		inline _halfGTX _halfGTX::operator-(float f) const
		{
			return _halfGTX(float(*this) - f);
		}

		inline _halfGTX& _halfGTX::operator-=(float f)
		{
			*this = _halfGTX (float (*this) - f);
			return *this;
		}

		inline _halfGTX _halfGTX::operator*(_halfGTX h) const
		{
			return _halfGTX(float(*this) * float(h));
		}

		inline _halfGTX& _halfGTX::operator*=(_halfGTX h)
		{
			*this = _halfGTX (float (*this) * float (h));
			return *this;
		}

		inline _halfGTX _halfGTX::operator*(float f) const
		{
			return _halfGTX(float(*this) * f);
		}

		inline _halfGTX& _halfGTX::operator*=(float f)
		{
			*this = _halfGTX (float (*this) * f);
			return *this;
		}

		inline _halfGTX _halfGTX::operator/(_halfGTX h) const
		{
			return _halfGTX(float(*this) / float(h));
		}

		inline _halfGTX& _halfGTX::operator/=(_halfGTX h)
		{
			*this = _halfGTX (float (*this) / float (h));
			return *this;
		}

		inline _halfGTX _halfGTX::operator/(float f) const
		{
			return _halfGTX(float(*this) / f);
		}

		inline _halfGTX& _halfGTX::operator/=(float f)
		{
			*this = _halfGTX (float (*this) / f);
			return *this;
		}

		inline _halfGTX _halfGTX::operator-() const
		{
			float Result = -_toFloat32(data);
			return _halfGTX(Result);
		}

		inline bool _halfGTX::operator< (const _halfGTX& s) const
		{
			return _toFloat32(data) < _toFloat32(s.data);
		}

		inline bool _halfGTX::operator> (const _halfGTX& s) const
		{
			return _toFloat32(data) > _toFloat32(s.data);
		}

		inline bool _halfGTX::operator<=(const _halfGTX& s) const
		{
			return _toFloat32(data) <= _toFloat32(s.data);
		}

		inline bool _halfGTX::operator>=(const _halfGTX& s) const
		{
			return _toFloat32(data) >= _toFloat32(s.data);
		}

		inline bool _halfGTX::operator==(const _halfGTX& s) const
		{
			return data.data == s.data.data;
		}

		inline bool _halfGTX::operator!=(const _halfGTX& s) const
		{
			return data.data != s.data.data;
		}

		// Common constructors
		inline _hvec2GTX::_hvec2GTX() : 
			_cvec2<HVEC2_INST>(0, 0)
		{}

		inline _hvec2GTX::_hvec2GTX(const _hvec2GTX& v) :
			_cvec2<HVEC2_INST>(v.x, v.y)
		{}

		// Swizzle conclassor
		inline _hvec2GTX::_hvec2GTX(const _xref2<hdata>& r) :
			_cvec2<HVEC2_INST>(r.x, r.y)
		{}

		// T constructors
		inline _hvec2GTX::_hvec2GTX(const _halfGTX x) :
			_cvec2<HVEC2_INST>(x._data(), x._data())
		{}

		inline _hvec2GTX::_hvec2GTX(const _halfGTX a, const _halfGTX b) :
			_cvec2<HVEC2_INST>(a._data(), b._data())
		{}

		inline _hvec2GTX::_hvec2GTX(const _halfGTX a, const _hvec2GTX& b) :
			_cvec2<HVEC2_INST>(a._data(), b.x)
		{}

		inline _hvec2GTX::_hvec2GTX(const _halfGTX a, const _hvec3GTX& b) :
			_cvec2<HVEC2_INST>(a._data(), b.x)
		{}

		inline _hvec2GTX::_hvec2GTX(const _halfGTX a, const _hvec4GTX& b) :
			_cvec2<HVEC2_INST>(a._data(), b.x)
		{}

		inline _hvec2GTX::_hvec2GTX(const _hvec3GTX& a) :
			_cvec2<HVEC2_INST>(a.x, a.y)
		{}

		inline _hvec2GTX::_hvec2GTX(const _hvec4GTX& a) :
			_cvec2<HVEC2_INST>(a.x, a.y)
		{}

		// U constructors
		template <typename U> 
		inline _hvec2GTX::_hvec2GTX(const U x) :
			_cvec2<HVEC2_INST>(_halfGTX(x)._data(), _halfGTX(x)._data())
		{}

		template <typename U> 
		inline _hvec2GTX::_hvec2GTX(const U a, const U b) :
			_cvec2<HVEC2_INST>(_halfGTX(a)._data(), _halfGTX(b)._data())
		{}

		template <typename U> 
		inline _hvec2GTX::_hvec2GTX(const U a, const _xvec2<U>& b) :
			_cvec2<HVEC2_INST>(T(a), T(b.x))
		{}

		template <typename U> 
		inline _hvec2GTX::_hvec2GTX(const U a, const _xvec3<U>& b) :
			_cvec2<HVEC2_INST>(T(a), T(b.x))
		{}

		template <typename U> 
		inline _hvec2GTX::_hvec2GTX(const U a, const _xvec4<U>& b) :
			_cvec2<HVEC2_INST>(T(a), T(b.x))
		{}

		template <typename U> 
		inline _hvec2GTX::_hvec2GTX(const _xvec2<U>& a) :
			_cvec2<HVEC2_INST>(_halfGTX(a.x)._data(), _halfGTX(a.y)._data())
		{}

		template <typename U> 
		inline _hvec2GTX::_hvec2GTX(const _xvec3<U>& a) :
			_cvec2<HVEC2_INST>(T(a.x), T(a.y))
		{}

		template <typename U> 
		inline _hvec2GTX::_hvec2GTX(const _xvec4<U>& a) :
			_cvec2<HVEC2_INST>(T(a.x), T(a.y))
		{}

		// Bool constructors
		inline _hvec2GTX::_hvec2GTX(const bool a) :
			_cvec2<HVEC2_INST>(a, a)
		{}

		inline _hvec2GTX::_hvec2GTX(const bool a, const bool b) :
			_cvec2<HVEC2_INST>(a, b)
		{}

		inline _hvec2GTX::_hvec2GTX(const bool a, const _bvec2& b) :
			_cvec2<HVEC2_INST>(a, b.x)
		{}

		inline _hvec2GTX::_hvec2GTX(const bool a, const _bvec3& b) :
			_cvec2<HVEC2_INST>(a, b.x)
		{}

		inline _hvec2GTX::_hvec2GTX(const bool a, const _bvec4& b) :
			_cvec2<HVEC2_INST>(a, b.x)
		{}

		inline _hvec2GTX::_hvec2GTX(const _bvec3& a) :
			_cvec2<HVEC2_INST>(a.x, a.y)
		{}

		inline _hvec2GTX::_hvec2GTX(const _bvec4& a) :
			_cvec2<HVEC2_INST>(a.x, a.y)
		{}

		inline _hvec2GTX::_hvec2GTX(const _bvec2& a) :
			_cvec2<HVEC2_INST>(a.x, a.y)
		{}

		//////////////////////////////////////////////////////////////
		// vec2 and ivec2 operators

		inline _hvec2GTX& _hvec2GTX::operator=(const _hvec2GTX& v)
		{
			this->x = v.x;
			this->y = v.y;
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator+= (const _halfGTX s)
		{
			this->x = (_halfGTX(this->x) + s)._data();
			this->y = (_halfGTX(this->y) + s)._data();
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator+= (const _hvec2GTX& v)
		{
			this->x = (_halfGTX(this->x) + _halfGTX(v.x))._data();
			this->y = (_halfGTX(this->y) + _halfGTX(v.y))._data();
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator-= (const _halfGTX s)
		{
			this->x = (_halfGTX(this->x) - s)._data();
			this->y = (_halfGTX(this->y) - s)._data();
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator-= (const _hvec2GTX& v)
		{
			this->x = (_halfGTX(this->x) - _halfGTX(v.x))._data();
			this->y = (_halfGTX(this->y) - _halfGTX(v.y))._data();
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator*= (const _halfGTX s)
		{
			this->x = (_halfGTX(this->x) * s)._data();
			this->y = (_halfGTX(this->y) * s)._data();
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator*= (const _hvec2GTX& v)
		{
			this->x = (_halfGTX(this->x) * _halfGTX(v.x))._data();
			this->y = (_halfGTX(this->y) * _halfGTX(v.y))._data();
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator/= (const _halfGTX s)
		{
			this->x = (_halfGTX(this->x) / s)._data();
			this->y = (_halfGTX(this->y) / s)._data();
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator/= (const _hvec2GTX& v)
		{
			this->x = (_halfGTX(this->x) / _halfGTX(v.x))._data();
			this->y = (_halfGTX(this->y) / _halfGTX(v.y))._data();
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator++ ()
		{
			this->x = _toFloat16(_toFloat32(this->x) + 1.0f);
			this->y = _toFloat16(_toFloat32(this->y) + 1.0f);
			return *this;
		}

		inline _hvec2GTX& _hvec2GTX::operator-- ()
		{
			this->x = _toFloat16(_toFloat32(this->x) - 1.0f);
			this->y = _toFloat16(_toFloat32(this->y) - 1.0f);
			return *this;
		}

		// Binary operators
		inline _hvec2GTX operator+ (const _hvec2GTX& v, const _halfGTX s)
		{
			return _hvec2GTX(
				_halfGTX(v.x) + s,
				_halfGTX(v.y) + s);
		}

		inline _hvec2GTX operator+ (const _halfGTX s, const _hvec2GTX& v)
		{
			return _hvec2GTX(
				_halfGTX(v.x) + s,
				_halfGTX(v.y) + s);
		}

		inline _hvec2GTX operator+ (const _hvec2GTX& v1, const _hvec2GTX& v2)
		{
			return _hvec2GTX(
				_halfGTX(v1.x) + _halfGTX(v2.x),
				_halfGTX(v1.y) + _halfGTX(v2.y));
		}

		inline _hvec2GTX operator- (const _hvec2GTX& v, const _halfGTX s)
		{
			return _hvec2GTX(
				_halfGTX(v.x) - s,
				_halfGTX(v.y) - s);
		}

		inline _hvec2GTX operator- (const _halfGTX s, const _hvec2GTX& v)
		{
			return _hvec2GTX(
				_halfGTX(v.x) - s,
				_halfGTX(v.y) - s);
		}

		inline _hvec2GTX operator- (const _hvec2GTX& v1, const _hvec2GTX& v2)
		{
			return _hvec2GTX(
				_halfGTX(v1.x) - _halfGTX(v2.x),
				_halfGTX(v1.y) - _halfGTX(v2.y));
		}

		inline _hvec2GTX operator* (const _hvec2GTX& v, const _halfGTX s)
		{
			return _hvec2GTX(
				_halfGTX(v.x) * s,
				_halfGTX(v.y) * s);
		}

		inline _hvec2GTX operator* (const _halfGTX s, const _hvec2GTX& v)
		{
			return _hvec2GTX(
				s * _halfGTX(v.x),
				s * _halfGTX(v.y));
		}

		inline _hvec2GTX operator* (const _hvec2GTX& v1, const _hvec2GTX& v2)
		{
			return _hvec2GTX(
				_halfGTX(v1.x) * _halfGTX(v2.x),
				_halfGTX(v1.y) * _halfGTX(v2.y));
		}

		inline _hvec2GTX operator/ (const _hvec2GTX& v, const _halfGTX s)
		{
			return _hvec2GTX(
				_halfGTX(v.x) / s,
				_halfGTX(v.y) / s);
		}

		inline _hvec2GTX operator/ (const _halfGTX s, const _hvec2GTX& v)
		{
			return _hvec2GTX(
				s / _halfGTX(v.x),
				s / _halfGTX(v.y));
		}

		inline _hvec2GTX operator/ (const _hvec2GTX& v1, const _hvec2GTX& v2)
		{
			return _hvec2GTX(
				_halfGTX(v1.x) / _halfGTX(v2.x),
				_halfGTX(v1.y) / _halfGTX(v2.y));
		}

		// Unary constant operators
		inline const _hvec2GTX operator- (const _hvec2GTX& v)
		{
			return _hvec2GTX(
				-_halfGTX(v.x), 
				-_halfGTX(v.y));
		}

		inline const _hvec2GTX operator++ (const _hvec2GTX& v, int)
		{
			return _hvec2GTX(
				_halfGTX(v.x) + _halfGTX(1), 
				_halfGTX(v.y) + _halfGTX(1));
		}

		inline const _hvec2GTX operator-- (const _hvec2GTX& v, int)
		{
			return _hvec2GTX(
				_halfGTX(v.x) - _halfGTX(1), 
				_halfGTX(v.y) - _halfGTX(1));
		}

		////////////////////////////////////////////////////////
		// _hvec3GTX
		// Common constructors
		inline _hvec3GTX::_hvec3GTX() :
			_cvec3<HVEC3_INST>(0, 0, 0)
		{}

		inline _hvec3GTX::_hvec3GTX(const _hvec3GTX& v) :
			_cvec3<HVEC3_INST>(v.x, v.y, v.z)
		{}

		// Swizzle constructors
		inline _hvec3GTX::_hvec3GTX(const _xref3<hdata>& r) :
			_cvec3<HVEC3_INST>(r.x, r.y, r.z)
		{}

		// T constructors
		inline _hvec3GTX::_hvec3GTX(const _halfGTX x) :
			_cvec3<HVEC3_INST>(x, x, x)
		{}

		inline _hvec3GTX::_hvec3GTX(const _halfGTX a, const _halfGTX b, const _halfGTX c) :
			_cvec3<HVEC3_INST>(a, b, c)
		{}

		inline _hvec3GTX::_hvec3GTX(const _halfGTX a, const _halfGTX b, const _hvec2GTX& c) :
			_cvec3<HVEC3_INST>(a, b, c.x)
		{}

		inline _hvec3GTX::_hvec3GTX(const _halfGTX a, const _halfGTX b, const _hvec3GTX& c) :
			_cvec3<HVEC3_INST>(a, b, c.x)
		{}

		inline _hvec3GTX::_hvec3GTX(const _halfGTX a, const _halfGTX b, const _hvec4GTX& c) :
			_cvec3<HVEC3_INST>(a, b, c.x)
		{}

		inline _hvec3GTX::_hvec3GTX(const _halfGTX a, const _hvec2GTX& b) :
			_cvec3<HVEC3_INST>(a, b.x, b.y)
		{}

		inline _hvec3GTX::_hvec3GTX(const _halfGTX a, const _hvec3GTX& b) :
			_cvec3<HVEC3_INST>(a, b.x, b.y)
		{}

		inline _hvec3GTX::_hvec3GTX(const _halfGTX a, const _hvec4GTX& b) :
			_cvec3<HVEC3_INST>(a, b.x, b.y)
		{}

		inline _hvec3GTX::_hvec3GTX(const _hvec2GTX& a, _halfGTX b) :
			_cvec3<HVEC3_INST>(a.x, a.y, b)
		{}

		inline _hvec3GTX::_hvec3GTX(const _hvec2GTX& a, const _hvec2GTX& b) :
			_cvec3<HVEC3_INST>(a.x, a.y, b.x)
		{}

		inline _hvec3GTX::_hvec3GTX(const _hvec2GTX& a, const _hvec3GTX& b) :
			_cvec3<HVEC3_INST>(a.x, a.y, b.x)
		{}

		inline _hvec3GTX::_hvec3GTX(const _hvec2GTX& a, const _hvec4GTX& b) :
			_cvec3<HVEC3_INST>(a.x, a.y, b.x)
		{}

		inline _hvec3GTX::_hvec3GTX(const _hvec4GTX& a) :
			_cvec3<HVEC3_INST>(a.x, a.y, a.z)
		{}

		// U constructors
		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const U x) :
			_cvec3<HVEC3_INST>(_halfGTX(x)._data(), _halfGTX(x)._data(), _halfGTX(x)._data())
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const U a, const U b, const U c) :
			_cvec3<HVEC3_INST>(_halfGTX(a)._data(), _halfGTX(b)._data(), _halfGTX(c)._data())
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const U a, const U b, const _xvec2<U>& c) :
			_cvec3<HVEC3_INST>(_halfGTX(a)._data(), _halfGTX(b)._data(), _halfGTX(c.x)._data())
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const U a, const U b, const _xvec3<U>& c) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a)), _toFloat16(float(b)), _toFloat16(float(c.x)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const U a, const U b, const _xvec4<U>& c) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a)), _toFloat16(float(b)), _toFloat16(float(c.x)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const U a, const _xvec2<U>& b) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a)), _toFloat16(float(b.x)), _toFloat16(float(b.y)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const U a, const _xvec3<U>& b) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a)), _toFloat16(float(b.x)), _toFloat16(float(b.y)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const U a, const _xvec4<U>& b) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a)), _toFloat16(float(b.x)), _toFloat16(float(b.y)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const _xvec2<U>& a, U b) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a.x)), _toFloat16(float(a.y)), _toFloat16(float(b)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const _xvec2<U>& a, const _xvec2<U>& b) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a.x)), _toFloat16(float(a.y)), _toFloat16(float(b.x)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const _xvec2<U>& a, const _xvec3<U>& b) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a.x)), _toFloat16(float(a.y)), _toFloat16(float(b.x)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const _xvec2<U>& a, const _xvec4<U>& b) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a.x)), _toFloat16(float(a.y)), _toFloat16(float(b.x)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const _xvec3<U>& a) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a.x)), _toFloat16(float(a.y)), _toFloat16(float(a.z)))
		{}

		template <typename U> 
		inline _hvec3GTX::_hvec3GTX(const _xvec4<U>& a) :
			_cvec3<HVEC3_INST>(_toFloat16(float(a.x)), _toFloat16(float(a.y)), _toFloat16(float(a.z)))
		{}

		// Bool constructors
		inline _hvec3GTX::_hvec3GTX(const bool x) :
			_cvec3<HVEC3_INST>(float(x), float(x), float(x))
		{}

		inline _hvec3GTX::_hvec3GTX(const bool a, const bool b, const bool c) :
			_cvec3<HVEC3_INST>(float(a), float(b), float(c))
		{}

		inline _hvec3GTX::_hvec3GTX(const bool a, const bool b, const _bvec2& c) :
			_cvec3<HVEC3_INST>(float(a), float(b), float(c.x))
		{}

		inline _hvec3GTX::_hvec3GTX(const bool a, const bool b, const _bvec3& c) :
			_cvec3<HVEC3_INST>(float(a), float(b), float(c.x))
		{}

		inline _hvec3GTX::_hvec3GTX(const bool a, const bool b, const _bvec4& c) :
			_cvec3<HVEC3_INST>(float(a), float(b), float(c.x))
		{}

		inline _hvec3GTX::_hvec3GTX(const bool a, const _bvec2& b) :
			_cvec3<HVEC3_INST>(float(a), float(b.x), float(b.y))
		{}

		inline _hvec3GTX::_hvec3GTX(const bool a, const _bvec3& b) :
			_cvec3<HVEC3_INST>(float(a), float(b.x), float(b.y))
		{}

		inline _hvec3GTX::_hvec3GTX(const bool a, const _bvec4& b) :
			_cvec3<HVEC3_INST>(float(a), float(b.x), float(b.y))
		{}

		inline _hvec3GTX::_hvec3GTX(const _bvec2& a, bool b) :
			_cvec3<HVEC3_INST>(float(a.x), float(a.y), float(b))
		{}

		inline _hvec3GTX::_hvec3GTX(const _bvec2& a, const _bvec2& b) :
			_cvec3<HVEC3_INST>(float(a.x), float(a.y), float(b.x))
		{}

		inline _hvec3GTX::_hvec3GTX(const _bvec2& a, const _bvec3& b) :
			_cvec3<HVEC3_INST>(float(a.x), float(a.y), float(b.x))
		{}

		inline _hvec3GTX::_hvec3GTX(const _bvec2& a, const _bvec4& b) :
			_cvec3<HVEC3_INST>(float(a.x), float(a.y), float(b.x))
		{}

		inline _hvec3GTX::_hvec3GTX(const _bvec3& a) :
			_cvec3<HVEC3_INST>(float(a.x), float(a.y), float(a.z))
		{}

		inline _hvec3GTX::_hvec3GTX(const _bvec4& a) :
			_cvec3<HVEC3_INST>(float(a.x), float(a.y), float(a.z))
		{}

		//////////////////////////////////////////////////////////////
		// hvec3 operators

		// This function shouldn't required but it seems that VC7.1 have an optimisation bug if this operator wasn't declared
		inline _hvec3GTX& _hvec3GTX::operator=(const _hvec3GTX& v)
		{
			this->x = v.x;
			this->y = v.y;
			this->z = v.z;
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator+= (const _halfGTX s)
		{
			this->x = GLM_HALF_OP(this->x, s._data(), +);
			this->y = GLM_HALF_OP(this->y, s._data(), +);
			this->z = GLM_HALF_OP(this->z, s._data(), +);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator+= (const _hvec3GTX& v)
		{
			this->x = GLM_HALF_OP(this->x, v.x, +);
			this->y = GLM_HALF_OP(this->y, v.y, +);
			this->z = GLM_HALF_OP(this->z, v.z, +);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator-= (const _halfGTX s)
		{
			this->x = GLM_HALF_OP(this->x, s._data(), -);
			this->y = GLM_HALF_OP(this->y, s._data(), -);
			this->z = GLM_HALF_OP(this->z, s._data(), -);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator-= (const _hvec3GTX& v)
		{
			this->x = GLM_HALF_OP(this->x, v.x, -);
			this->y = GLM_HALF_OP(this->y, v.y, -);
			this->z = GLM_HALF_OP(this->z, v.z, -);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator*= (const _halfGTX s)
		{
			this->x = GLM_HALF_OP(this->x, s._data(), *);
			this->y = GLM_HALF_OP(this->y, s._data(), *);
			this->z = GLM_HALF_OP(this->z, s._data(), *);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator*= (const _hvec3GTX& v)
		{
			this->x = GLM_HALF_OP(this->x, v.x, *);
			this->y = GLM_HALF_OP(this->y, v.y, *);
			this->z = GLM_HALF_OP(this->z, v.z, *);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator/= (const _halfGTX s)
		{
			this->x = GLM_HALF_OP(this->x, s._data(), /);
			this->y = GLM_HALF_OP(this->y, s._data(), /);
			this->z = GLM_HALF_OP(this->z, s._data(), /);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator/= (const _hvec3GTX& v)
		{
			this->x = GLM_HALF_OP(this->x, v.x, /);
			this->y = GLM_HALF_OP(this->y, v.y, /);
			this->z = GLM_HALF_OP(this->z, v.z, /);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator++ ()
		{
			this->x = GLM_HALF_OP_1(this->x, 1.0f, +);
			this->y = GLM_HALF_OP_1(this->y, 1.0f, +);
			this->z = GLM_HALF_OP_1(this->z, 1.0f, +);
			return *this;
		}

		inline _hvec3GTX& _hvec3GTX::operator-- ()
		{
			this->x = GLM_HALF_OP_1(this->x, 1.0f, -);
			this->y = GLM_HALF_OP_1(this->y, 1.0f, -);
			this->z = GLM_HALF_OP_1(this->z, 1.0f, -);
			return *this;
		}

		// Unary constant operators
		inline const _hvec3GTX operator- (const _hvec3GTX& v)
		{
			return _hvec3GTX(
				_toFloat16(-_toFloat32(v.x)), 
				_toFloat16(-_toFloat32(v.y)),
				_toFloat16(-_toFloat32(v.z)));
		}

		inline const _hvec3GTX operator++ (const _hvec3GTX& v, int)
		{
			return _hvec3GTX(
				GLM_HALF_OP_1(v.x, 1.0f, +), 
				GLM_HALF_OP_1(v.y, 1.0f, +),
				GLM_HALF_OP_1(v.z, 1.0f, +));
		}

		inline const _hvec3GTX operator-- (const _hvec3GTX& v, int)
		{
			return _hvec3GTX(
				GLM_HALF_OP_1(v.x, 1.0f, -), 
				GLM_HALF_OP_1(v.y, 1.0f, -),
				GLM_HALF_OP_1(v.z, 1.0f, -));
		}

		// Binary operators
		inline _hvec3GTX operator+ (const _hvec3GTX& v, const _halfGTX s)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(v.x, +, s),
				GLM_HALF_OP_2(v.y, +, s),
				GLM_HALF_OP_2(v.z, +, s));
		}

		inline _hvec3GTX operator+ (const _halfGTX s, const _hvec3GTX& v)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(s, +, v.x),
				GLM_HALF_OP_2(s, +, v.y),
				GLM_HALF_OP_2(s, +, v.z));
		}

		inline _hvec3GTX operator+ (const _hvec3GTX& v1, const _hvec3GTX& v2)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(v1.x, +, v2.x),
				GLM_HALF_OP_2(v1.y, +, v2.y),
				GLM_HALF_OP_2(v1.z, +, v2.z));
		}

		inline _hvec3GTX operator- (const _hvec3GTX& v, const _halfGTX s)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(v.x, -, s),
				GLM_HALF_OP_2(v.y, -, s),
				GLM_HALF_OP_2(v.z, -, s));
		}

		inline _hvec3GTX operator- (const _halfGTX s, const _hvec3GTX& v)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(s, -, v.x),
				GLM_HALF_OP_2(s, -, v.y),
				GLM_HALF_OP_2(s, -, v.z));
		}

		inline _hvec3GTX operator- (const _hvec3GTX& v1, const _hvec3GTX& v2)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(v1.x, -, v2.x),
				GLM_HALF_OP_2(v1.y, -, v2.y),
				GLM_HALF_OP_2(v1.z, -, v2.z));
		}

		inline _hvec3GTX operator* (const _hvec3GTX& v, const _halfGTX s)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(v.x, *, s),
				GLM_HALF_OP_2(v.y, *, s),
				GLM_HALF_OP_2(v.z, *, s));
		}

		inline _hvec3GTX operator* (const _halfGTX s, const _hvec3GTX& v)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(s, *, v.x),
				GLM_HALF_OP_2(s, *, v.y),
				GLM_HALF_OP_2(s, *, v.z));
		}

		inline _hvec3GTX operator* (const _hvec3GTX& v1, const _hvec3GTX & v2)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(v1.x, *, v2.x),
				GLM_HALF_OP_2(v1.y, *, v2.y),
				GLM_HALF_OP_2(v1.z, *, v2.z));
		}

		inline _hvec3GTX operator/ (const _hvec3GTX& v, const _halfGTX s)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(v.x, /, s),
				GLM_HALF_OP_2(v.y, /, s),
				GLM_HALF_OP_2(v.z, /, s));
		}

		inline _hvec3GTX operator/ (const _halfGTX s, const _hvec3GTX& v)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(s, /, v.x),
				GLM_HALF_OP_2(s, /, v.y),
				GLM_HALF_OP_2(s, /, v.z));
		}

		inline _hvec3GTX operator/ (const _hvec3GTX& v1, const _hvec3GTX& v2)
		{
			return _hvec3GTX(
				GLM_HALF_OP_2(v1.x, /, v2.x),
				GLM_HALF_OP_2(v1.y, /, v2.y),
				GLM_HALF_OP_2(v1.z, /, v2.z));
		}
	}
}
