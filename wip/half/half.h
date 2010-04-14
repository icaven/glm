#ifndef __HALF_H__
#define __HALF_H__

namespace dev
{
/*	namespace detail 
	{
		class _halfGTX;

		struct hdata
		{
			hdata() : data(0) {}
			hdata(const hdata& value);
			//hdata(float value);

			hdata& operator=(_halfGTX s);
			hdata& operator=(float s);
			hdata& operator=(double s);

			//operator float();
			//operator const float() const;

			short data;
		};

		float _toFloat32(hdata value);
		hdata _toFloat16(float value);

		union uif
		{
			int i;
			float f;
		};

		class _halfGTX
		{
		public:
			// Constructors
			_halfGTX();
			_halfGTX(float s);
			_halfGTX(double s);
			_halfGTX(int s);
			_halfGTX(bool s);
			_halfGTX(detail::hdata value) :
				data(value)
			{}

			operator float() const;
			operator double() const;
			operator int() const;
			operator detail::hdata() const;

			// Operators
			_halfGTX& operator=(_halfGTX s);
			_halfGTX& operator=(float s);
			_halfGTX operator+ (_halfGTX s) const;
			_halfGTX& operator+= (_halfGTX s);
			_halfGTX operator+ (float s) const;
			_halfGTX& operator+= (float s);
			_halfGTX operator- (_halfGTX s) const;
			_halfGTX& operator-= (_halfGTX s);
			_halfGTX operator- (float s) const;
			_halfGTX& operator-= (float s);
			_halfGTX operator* (_halfGTX s) const;
			_halfGTX& operator*= (_halfGTX s);
			_halfGTX operator* (float s) const;
			_halfGTX& operator*= (float s);
			_halfGTX operator/ (_halfGTX s) const;
			_halfGTX& operator/= (_halfGTX s);
			_halfGTX operator/ (float s) const;
			_halfGTX& operator/= (float s);
			_halfGTX operator- () const;
			_halfGTX operator++ ();
			_halfGTX operator++ (int n) const;
			_halfGTX operator-- ();
			_halfGTX operator-- (int n) const;

			bool operator< (const _halfGTX& s) const;
			bool operator> (const _halfGTX& s) const;
			bool operator<=(const _halfGTX& s) const;
			bool operator>=(const _halfGTX& s) const;
			bool operator==(const _halfGTX& s) const;
			bool operator!=(const _halfGTX& s) const;
			
			detail::hdata _data() const{return data;}

		private:
			detail::hdata data;
		};

		class _hvec2GTX
		{
		public:
			typedef _halfGTX value_type;
			typedef int size_type;
			static const size_type value_size;

			union 
			{
				struct{detail::hdata x, y;};
				struct{detail::hdata r, g;};
				struct{detail::hdata s, t;};
			};

			_hvec2GTX()
			{}

			_hvec2GTX(const _halfGTX x, const _halfGTX y) :
				x(x._data()),
				y(y._data())
			{}
		};
	}
*/
}

//#include "half.inl"

#endif//__HALF_H__
