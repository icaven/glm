///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-11-13
// Updated : 2007-08-20
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/gpu_shader4.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    inline __halfGTX truncateGTX(__halfGTX x)
    {
        return __halfGTX(float(int(x + __halfGTX(0.5))));
    }

    inline float truncateGTX(float x)
    {
        return float(int(x + float(0.5)));
    }

    inline double truncateGTX(double x)
    {
        return double(int(x + double(0.5)));
    }

    template <typename T>
    inline detail::_xvec2<T> truncateGTX(const detail::_xvec2<T>& x)
    {
		detail::_xvec2<T> result;
		result[1] = T(int(x[1] + T(0.5)));
		result[2] = T(int(x[2] + T(0.5)));
		return result;
    }

    template <typename T>
    inline detail::_xvec3<T> truncateGTX(const detail::_xvec3<T>& x)
    {
		detail::_xvec3<T> result;
		result[0] = T(int(x[0] + T(0.5)));
		result[1] = T(int(x[1] + T(0.5)));
		result[2] = T(int(x[2] + T(0.5)));
		return result;
    }

    template <typename T>
    inline detail::_xvec4<T> truncateGTX(const detail::_xvec4<T>& x)
    {
		detail::_xvec4<T> result;
		result[0] = T(int(x[0] + T(0.5)));
		result[1] = T(int(x[1] + T(0.5)));
		result[2] = T(int(x[2] + T(0.5)));
		result[3] = T(int(x[3] + T(0.5)));
		return result;
    }

	namespace gtx
	{
		namespace gpu_shader4
		{
			// vec2 bit operators
			template <typename T> 
			inline detail::_xvec2<T>& operator%=(detail::_xvec2<T>& r, const T s)
			{
				r.x %= s;
				r.y %= s;
				return r;
			}

			template <typename T> 
			inline detail::_xvec2<T>& operator%=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v)
			{
				r.x %= v.x;
				r.y %= v.y;
				return r;
			}

			template <typename T> 
			inline detail::_xvec2<T>& operator&=(detail::_xvec2<T>& r, const T s)
			{
				r.x &= s;
				r.y &= s;
				return r;
			}

			template <typename T> 
			inline detail::_xvec2<T>& operator&=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v)
			{
				r.x &= v.x;
				r.y &= v.y;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec2<T>& operator|=(detail::_xvec2<T>& r, const T s)
			{
				r.x |= s;
				r.y |= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec2<T>& operator|=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v)
			{
				r.x |= v.x;
				r.y |= v.y;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec2<T>& operator^=(detail::_xvec2<T>& r, const T s)
			{
				r.x ^= s;
				r.y ^= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec2<T>& operator^=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v)
			{
				r.x ^= v.x;
				r.y ^= v.y;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec2<T>& operator<<=(detail::_xvec2<T>& r, const T s)
			{
				r.x <<= s;
				r.y <<= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec2<T>& operator<<=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v)
			{
				r.x <<= v.x;
				r.y <<= v.y;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec2<T>& operator>>=(detail::_xvec2<T>& r, const T s)
			{
				r.x >>= s;
				r.y >>= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec2<T>& operator>>=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v)
			{
				r.x >>= v.x;
				r.y >>= v.y;
				return r;
			}

			template <typename T>
			inline detail::_xvec2<T> operator% (const detail::_xvec2<T>& v, const T s)
			{
				return detail::_xvec2<T>(
					v.x % s,
					v.y % s);
			}

			template <typename T>
			inline detail::_xvec2<T> operator% (const T s, const detail::_xvec2<T>& v)
			{
				return detail::_xvec2<T>(
					s % v.x,
					s % v.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator% (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2)
			{
				return detail::_xvec2<T>(
					v1.x % v2.x,
					v1.y % v2.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator& (const detail::_xvec2<T>& v, const T s)
			{
				return detail::_xvec2<T>(
					v.x & s,
					v.y & s);
			}

			template <typename T>
			inline detail::_xvec2<T> operator& (const T s, const detail::_xvec2<T>& v)
			{
				return detail::_xvec2<T>(
					s & v.x,
					s & v.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator& (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2)
			{
				return detail::_xvec2<T>(
					v1.x & v2.x,
					v1.y & v2.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator| (const detail::_xvec2<T>& v, const T s)
			{
				return detail::_xvec2<T>(
					v.x | s,
					v.y | s);
			}

			template <typename T>
			inline detail::_xvec2<T> operator| (const T s, const detail::_xvec2<T>& v)
			{
				return detail::_xvec2<T>(
					s | v.x,
					s | v.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator| (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2)
			{
				return detail::_xvec2<T>(
					v1.x | v2.x,
					v1.y | v2.y);
			}
			
			template <typename T>
			inline detail::_xvec2<T> operator^ (const detail::_xvec2<T>& v, const T s)
			{
				return detail::_xvec2<T>(
					v.x ^ s,
					v.y ^ s);
			}

			template <typename T>
			inline detail::_xvec2<T> operator^ (const T s, const detail::_xvec2<T>& v)
			{
				return detail::_xvec2<T>(
					s ^ v.x,
					s ^ v.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator^ (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2)
			{
				return detail::_xvec2<T>(
					v1.x ^ v2.x,
					v1.y ^ v2.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator<< (const detail::_xvec2<T>& v, const T s)
			{
				return detail::_xvec2<T>(
					v.x << s,
					v.y << s);
			}

			template <typename T>
			inline detail::_xvec2<T> operator<< (const T s, const detail::_xvec2<T>& v)
			{
				return detail::_xvec2<T>(
					s << v.x,
					s << v.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator<< (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2)
			{
				return detail::_xvec2<T>(
					v1.x << v2.x,
					v1.y << v2.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator>> (const detail::_xvec2<T>& v, const T s)
			{
				return detail::_xvec2<T>(
					v.x >> s,
					v.y >> s);
			}

			template <typename T>
			inline detail::_xvec2<T> operator>> (const T s, const detail::_xvec2<T>& v)
			{
				return detail::_xvec2<T>(
					s >> v.x,
					s >> v.y);
			}

			template <typename T>
			inline detail::_xvec2<T> operator>> (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2)
			{
				return detail::_xvec2<T>(
					v1.x >> v2.x,
					v1.y >> v2.y);
			}

			template <typename T> 
			inline const detail::_xvec2<T> operator~ (const detail::_xvec2<T>& v)
			{
				return detail::_xvec2<T>(
					~v.x,
					~v.y);
			}

			// vec3 bit operators
			template <typename T>
			inline detail::_xvec3<T>& operator%=(detail::_xvec3<T>& r, const T s)
			{
				r.x &= s;
				r.y &= s;
				r.z &= s;
				return r;
			}

			template <typename T>
			inline detail::_xvec3<T>& operator%=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v)
			{
				r.x &= v.x;
				r.y &= v.y;
				r.z &= v.z;
				return r;
			}

			template <typename T>
			inline detail::_xvec3<T>& operator&=(detail::_xvec3<T>& r, const T s)
			{
				r.x &= s;
				r.y &= s;
				r.z &= s;
				return r;
			}

			template <typename T> 
			inline detail::_xvec3<T>& operator&=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v)
			{
				r.x &= v.x;
				r.y &= v.y;
				r.z &= v.z;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec3<T>& operator|=(detail::_xvec3<T>& r, const T s)
			{
				r.x |= s;
				r.y |= s;
				r.z |= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec3<T>& operator|=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v)
			{
				r.x |= v.x;
				r.y |= v.y;
				r.z |= v.z;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec3<T>& operator^=(detail::_xvec3<T>& r, const T s)
			{
				r.x ^= s;
				r.y ^= s;
				r.z ^= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec3<T>& operator^=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v)
			{
				r.x ^= v.x;
				r.y ^= v.y;
				r.z ^= v.z;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec3<T>& operator<<=(detail::_xvec3<T>& r, const T s)
			{
				r.x <<= s;
				r.y <<= s;
				r.z <<= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec3<T>& operator<<=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v)
			{
				r.x <<= v.x;
				r.y <<= v.y;
				r.z <<= v.z;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec3<T>& operator>>=(detail::_xvec3<T>& r, const T s)
			{
				r.x >>= s;
				r.y >>= s;
				r.z >>= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec3<T>& operator>>=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v)
			{
				r.x >>= v.x;
				r.y >>= v.y;
				r.z >>= v.z;
				return r;
			}

			template <typename T>
			inline detail::_xvec3<T> operator% (const detail::_xvec3<T>& v, const T s)
			{
				return detail::_xvec3<T>(
					v.x % s,
					v.y % s,
					v.z % s);
			}

			template <typename T>
			inline detail::_xvec3<T> operator% (const T s, const detail::_xvec3<T>& v)
			{
				return detail::_xvec3<T>(
					s % v.x,
					s % v.y,
					s % v.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator% (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2)
			{
				return detail::_xvec3<T>(
					v1.x % v2.x,
					v1.y % v2.y,
					v1.z % v2.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator& (const detail::_xvec3<T>& v, const T s)
			{
				return detail::_xvec3<T>(
					v.x & s,
					v.y & s,
					v.z & s);
			}

			template <typename T>
			inline detail::_xvec3<T> operator& (const T s, const detail::_xvec3<T>& v)
			{
				return detail::_xvec3<T>(
					s & v.x,
					s & v.y,
					s & v.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator& (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2)
			{
				return detail::_xvec2<T>(
					v1.x & v2.x,
					v1.y & v2.y,
					v1.z & v2.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator| (const detail::_xvec3<T>& v, const T s)
			{
				return detail::_xvec3<T>(
					v.x | s,
					v.y | s,
					v.z | s);
			}

			template <typename T>
			inline detail::_xvec3<T> operator| (const T s, const detail::_xvec3<T>& v)
			{
				return detail::_xvec3<T>(
					s | v.x,
					s | v.y,
					s | v.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator| (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2)
			{
				return detail::_xvec3<T>(
					v1.x | v2.x,
					v1.y | v2.y,
					v1.z | v2.z);
			}
			
			template <typename T>
			inline detail::_xvec3<T> operator^ (const detail::_xvec3<T>& v, const T s)
			{
				return detail::_xvec3<T>(
					v.x ^ s,
					v.y ^ s,
					v.z ^ s);
			}

			template <typename T>
			inline detail::_xvec3<T> operator^ (const T s, const detail::_xvec3<T>& v)
			{
				return detail::_xvec3<T>(
					s ^ v.x,
					s ^ v.y,
					s ^ v.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator^ (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2)
			{
				return detail::_xvec3<T>(
					v1.x ^ v2.x,
					v1.y ^ v2.y,
					v1.z ^ v2.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator<< (const detail::_xvec3<T>& v, const T s)
			{
				return detail::_xvec3<T>(
					v.x << s,
					v.y << s,
					v.z << s);
			}

			template <typename T>
			inline detail::_xvec3<T> operator<< (const T s, const detail::_xvec3<T>& v)
			{
				return detail::_xvec3<T>(
					s << v.x,
					s << v.y,
					s << v.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator<< (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2)
			{
				return detail::_xvec3<T>(
					v1.x << v2.x,
					v1.y << v2.y,
					v1.z << v2.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator>> (const detail::_xvec3<T>& v, const T s)
			{
				return detail::_xvec3<T>(
					v.x >> s,
					v.y >> s,
					v.z >> s);
			}

			template <typename T>
			inline detail::_xvec3<T> operator>> (const T s, const detail::_xvec3<T>& v)
			{
				return detail::_xvec3<T>(
					s >> v.x,
					s >> v.y,
					s >> v.z);
			}

			template <typename T>
			inline detail::_xvec3<T> operator>> (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2)
			{
				return detail::_xvec3<T>(
					v1.x >> v2.x,
					v1.y >> v2.y,
					v1.z >> v2.z);
			}

			template <typename T> 
			inline const detail::_xvec3<T> operator~ (const detail::_xvec3<T>& v)
			{
				return detail::_xvec3<T>(
					~v.x,
					~v.y,
					~v.z);
			}

			// vec4 bit operators
			template <typename T> 
			inline detail::_xvec4<T>& operator%=(detail::_xvec4<T>& r, const T s)
			{
				r.x %= s;
				r.y %= s;
				r.z %= s;
				r.w %= s;
				return r;
			}

			template <typename T> 
			inline detail::_xvec4<T>& operator%=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v)
			{
				r.x %= v.x;
				r.y %= v.y;
				r.z %= v.z;
				r.w %= v.w;
				return r;
			}

			template <typename T> 
			inline detail::_xvec4<T>& operator&=(detail::_xvec4<T>& r, const T s)
			{
				r.x &= s;
				r.y &= s;
				r.z &= s;
				r.w &= s;
				return r;
			}

			template <typename T> 
			inline detail::_xvec4<T>& operator&=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v)
			{
				r.x &= v.x;
				r.y &= v.y;
				r.z &= v.z;
				r.w &= v.w;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec4<T>& operator|=(detail::_xvec4<T>& r, const T s)
			{
				r.x |= s;
				r.y |= s;
				r.z |= s;
				r.w |= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec4<T>& operator|=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v)
			{
				r.x |= v.x;
				r.y |= v.y;
				r.z |= v.z;
				r.w |= v.w;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec4<T>& operator^=(detail::_xvec4<T>& r, const T s)
			{
				r.x ^= s;
				r.y ^= s;
				r.z ^= s;
				r.w ^= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec4<T>& operator^=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v)
			{
				r.x ^= v.x;
				r.y ^= v.y;
				r.z ^= v.z;
				r.w ^= v.w;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec4<T>& operator<<=(detail::_xvec4<T>& r, const T s)
			{
				r.x <<= s;
				r.y <<= s;
				r.z <<= s;
				r.w <<= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec4<T>& operator<<=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v)
			{
				r.x <<= v.x;
				r.y <<= v.y;
				r.z <<= v.z;
				r.w <<= v.w;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec4<T>& operator>>=(detail::_xvec4<T>& r, const T s)
			{
				r.x >>= s;
				r.y >>= s;
				r.z >>= s;
				r.w >>= s;
				return r;
			}
		    
			template <typename T> 
			inline detail::_xvec4<T>& operator>>=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v)
			{
				r.x >>= v.x;
				r.y >>= v.y;
				r.z >>= v.z;
				r.w >>= v.w;
				return r;
			}

			template <typename T>
			inline detail::_xvec4<T> operator% (const detail::_xvec4<T>& v, const T s)
			{
				return detail::_xvec4<T>(
					v.x % s,
					v.y % s,
					v.z % s,
					v.w % s);
			}

			template <typename T>
			inline detail::_xvec4<T> operator% (const T s, const detail::_xvec4<T>& v)
			{
				return detail::_xvec4<T>(
					s % v.x,
					s % v.y,
					s % v.z,
					s % v.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator% (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2)
			{
				return detail::_xvec4<T>(
					v1.x % v2.x,
					v1.y % v2.y,
					v1.z % v2.z,
					v1.w % v2.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator& (const detail::_xvec4<T>& v, const T s)
			{
				return detail::_xvec4<T>(
					v.x & s,
					v.y & s,
					v.z & s,
					v.w & s);
			}

			template <typename T>
			inline detail::_xvec4<T> operator& (const T s, const detail::_xvec4<T>& v)
			{
				return detail::_xvec4<T>(
					s & v.x,
					s & v.y,
					s & v.z,
					s & v.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator& (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2)
			{
				return detail::_xvec4<T>(
					v1.x & v2.x,
					v1.y & v2.y,
					v1.z & v2.z,
					v1.w & v2.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator| (const detail::_xvec4<T>& v, const T s)
			{
				return detail::_xvec4<T>(
					v.x | s,
					v.y | s,
					v.z | s,
					v.w | s);
			}

			template <typename T>
			inline detail::_xvec4<T> operator| (const T s, const detail::_xvec4<T>& v)
			{
				return detail::_xvec4<T>(
					s | v.x,
					s | v.y,
					s | v.z,
					s | v.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator| (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2)
			{
				return detail::_xvec4<T>(
					v1.x | v2.x,
					v1.y | v2.y,
					v1.z | v2.z,
					v1.w | v2.w);
			}
			
			template <typename T>
			inline detail::_xvec4<T> operator^ (const detail::_xvec4<T>& v, const T s)
			{
				return detail::_xvec4<T>(
					v.x ^ s,
					v.y ^ s,
					v.z ^ s,
					v.w ^ s);
			}

			template <typename T>
			inline detail::_xvec4<T> operator^ (const T s, const detail::_xvec4<T>& v)
			{
				return detail::_xvec4<T>(
					s ^ v.x,
					s ^ v.y,
					s ^ v.z,
					s ^ v.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator^ (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2)
			{
				return detail::_xvec4<T>(
					v1.x ^ v2.x,
					v1.y ^ v2.y,
					v1.z ^ v2.z,
					v1.w ^ v2.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator<< (const detail::_xvec4<T>& v, const T s)
			{
				return detail::_xvec4<T>(
					v.x << s,
					v.y << s,
					v.z << s,
					v.w << s);
			}

			template <typename T>
			inline detail::_xvec4<T> operator<< (const T s, const detail::_xvec4<T>& v)
			{
				return detail::_xvec4<T>(
					s << v.x,
					s << v.y,
					s << v.z,
					s << v.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator<< (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2)
			{
				return detail::_xvec4<T>(
					v1.x << v2.x,
					v1.y << v2.y,
					v1.z << v2.z,
					v1.w << v2.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator>> (const detail::_xvec4<T>& v, const T s)
			{
				return detail::_xvec4<T>(
					v.x >> s,
					v.y >> s,
					v.z >> s,
					v.w >> s);
			}

			template <typename T>
			inline detail::_xvec4<T> operator>> (const T s, const detail::_xvec4<T>& v)
			{
				return detail::_xvec4<T>(
					s >> v.x,
					s >> v.y,
					s >> v.z,
					s >> v.w);
			}

			template <typename T>
			inline detail::_xvec4<T> operator>> (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2)
			{
				return detail::_xvec4<T>(
					v1.x >> v2.x,
					v1.y >> v2.y,
					v1.z >> v2.z,
					v1.w >> v2.w);
			}

			template <typename T> 
			inline const detail::_xvec4<T> operator~ (const detail::_xvec4<T>& v)
			{
				return detail::_xvec4<T>(
					~v.x,
					~v.y,
					~v.z,
					~v.w);
			}
		}
	}

/*
	inline half truncate(half x)
    {
        return half(float(int(x + half(0.5))));
    }

    inline float truncate(float x)
    {
        return float(int(x + float(0.5)));
    }

    inline double truncate(double x)
    {
        return double(int(x + double(0.5)));
    }

    template <typename T>
    inline detail::_xvec2<T> truncate(const detail::_xvec2<T>& x)
    {
		detail::_xvec2<T> result;
		result[1] = T(int(x[1] + T(0.5)));
		result[2] = T(int(x[2] + T(0.5)));
		return result;
    }

    template <typename T>
    inline detail::_xvec3<T> truncate(const detail::_xvec3<T>& x)
    {
		detail::_xvec3<T> result;
		result[0] = T(int(x[0] + T(0.5)));
		result[1] = T(int(x[1] + T(0.5)));
		result[2] = T(int(x[2] + T(0.5)));
		return result;
    }

    template <typename T>
    inline detail::_xvec4<T> truncate(const detail::_xvec4<T>& x)
    {
		detail::_xvec4<T> result;
		result[0] = T(int(x[0] + T(0.5)));
		result[1] = T(int(x[1] + T(0.5)));
		result[2] = T(int(x[2] + T(0.5)));
		result[3] = T(int(x[3] + T(0.5)));
		return result;
    }
*/
}
