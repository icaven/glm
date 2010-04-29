#include "precompiled.h"
#include "sse.h"

//namespace sse
//{
//	// some defines first
//	union ieee754_QNAN
//	{
//	   const float f;
//	   struct
//	   {
//		  const unsigned int mantissa:23, exp:8, sign:1;
//	   };
//	   
//	   ieee754_QNAN() : f(0.0), mantissa(0x7FFFFF), exp(0xFF), sign(0x0) {}
//	};
//
//	namespace detail
//	{
//		union ieee754
//		{
//			ieee754() :
//				f(0.0f)
//			{}
//
//			ieee754(float f) :
//				f(f)
//			{}
//
//			ieee754(unsigned int mantissa, unsigned int exp, unsigned int sign) :
//				mantissa(mantissa), exp(exp), sign(sign)
//			{}
//
//			float f;
//			struct
//			{
//				unsigned int mantissa:23, exp:8, sign:1;
//			};
//		};
//
//		_MM_ALIGN16 const ieee754 qnan(0x7FFFFF, 0xFF, 0x0);
//	}
//
//	float load(unsigned int mantissa, unsigned int exp, unsigned int sign)
//	{
//		sse::detail::ieee754 value(mantissa, exp, sign);
//		return value.f;
//	}
//
//	_MM_ALIGN16 const sse::detail::ieee754 qnan(0x7FFFFF, 0xFF, 0x0);
//
//	_MM_ALIGN16 const ieee754_QNAN absMask;
//	//static const __m128 abs4Mask = _mm_load1_ps( &absMask.f);
//	static const __m128 abs4Mask = _mm_set_ps1(absMask.f);
//
//	__m128 _mm_neg_ps(__m128 v)
//	{
//		return _mm_sub_ps(_mm_setzero_ps(), v);
//	}
//
//	__m128 fast_pow(__m128 base, __m128 exponent)
//	{
//		__m128 denom = _mm_mul_ps( exponent, base);
//		denom = _mm_sub_ps( exponent, denom);
//		denom = _mm_add_ps( base, denom);
//		return _mm_mul_ps( base, _mm_rcp_ps(denom));
//	} 
//
//	static const __m128 zero = _mm_setzero_ps();
//	static const __m128 one = _mm_set_ps1(1.0f);
//	static const __m128 two = _mm_set_ps1(2.0f);
//	static const __m128 pi = _mm_set_ps1(3.1415926535897932384626433832795f);
//	static const __m128 hundred_eighty = _mm_set_ps1(180.f);
//	static const __m128 pi_over_hundred_eighty = _mm_set_ps1(0.017453292519943295769236907684886f);
//	static const __m128 hundred_eighty_over_pi = _mm_set_ps1(57.295779513082320876798154814105f);
//
//    //vec4 radians(vec4 degrees)
//    //{
//    //    const float pi = float(3.1415926535897932384626433832795);
//    //    return degrees * (pi / 180.f);
//    //}
//    __m128 radians(__m128 degrees)
//    {
//        return _mm_mul_ps(degrees, pi_over_hundred_eighty);
//    }
//
//    __m128 _mm_rad_ss(__m128 degrees)
//    {
//        return _mm_mul_ss(degrees, pi_over_hundred_eighty);
//    }
//
//    __m128 _mm_rad_ps(__m128 degrees)
//    {
//        return _mm_mul_ps(degrees, pi_over_hundred_eighty);
//    }
//
//	//vec4 degrees(vec4 radians)
//	//{
//	//	const float pi = float(3.1415926535897932384626433832795);
//	//	return radians * (180.f / pi);
//	//}
//    __m128 degrees(__m128 radians)
//    {
//        return _mm_mul_ps(radians, hundred_eighty_over_pi);
//    }
//
//    __m128 _mm_deg_ss(__m128 radians)
//    {
//        return _mm_mul_ss(radians, hundred_eighty_over_pi);
//    }
//
//    __m128 _mm_deg_ps(__m128 radians)
//    {
//        return _mm_mul_ps(radians, hundred_eighty_over_pi);
//    }
//
//	//vec4 sqrt(vec4 v)
//	//{
//	//	return vec4(sqrt(v.x), sqrt(v.y), sqrt(v.z), sqrt(v.w));
//	//}
//    __m128 sqrt(__m128 v)
//    {
//        return _mm_sqrt_ps(v);
//    }
//
//	//vec4 inversesqrt(vec4 x)
//	//{
//	//	return vec4(1.0f) / sqrt(x);
//	//}
//    __m128 inversesqrt(__m128 v)
//    {
//        return _mm_rsqrt_ps(v);
//    }
//
//    //vec4 abs(vec4 x)
//    //{
//    //    return x >= T(0) ? x : -x;
//    //}
//	__m128 abs(__m128 x)
//	{
//		return _mm_and_ps(abs4Mask, x);
//	} 
//
//	//__m128 _mm_abs_ss(__m128 x)
//	//{
//	//	return _mm_and_ss(abs4Mask, x);
//	//} 
//
//	__m128 _mm_abs_ps(__m128 x)
//	{
//		return _mm_and_ps(abs4Mask, x);
//	} 
//
//	//vec4 sign(vec4 x)
//	//{
//	//	vec4 result;
//	//	if(x > vec4(0))
//	//		result = vec4(1);
//	//	else if(x < T(0))
//	//		result = vec4(-1);
//	//	else
//	//		result = vec4(0);
//	//	return result;
//	//}
//	__m128 sign(__m128 x)
//	{
//		__m128 result;
//		__m128 cmp0 = _mm_cmpeq_ps(x, zero);
//		if(_mm_movemask_ps(cmp0) == 0)
//			result = zero;
//		else
//		{
//			__m128 cmp1 = _mm_cmpge_ps(x, zero);
//			//__m128 cmp2 = _mm_cmple_ps(x, zero);
//			if(_mm_movemask_ps(cmp1) > 0)
//				result = one;
//			else //if(_mm_movemask_ps(cmp2) > 0)
//				result = minus_one;
//		}
//		return result;
//	}
//	
//	__m128 _mm_sgn_ss(__m128 x)
//	{
//		__m128 result;
//		__m128 cmp0 = _mm_cmpeq_ss(x, zero);
//		if(_mm_movemask_ss(cmp0) == 0)
//			result = zero;
//		else
//		{
//			__m128 cmp1 = _mm_cmpge_ss(x, zero);
//			//__m128 cmp2 = _mm_cmple_ss(x, zero);
//			if(_mm_movemask_ss(cmp1) > 0)
//				result = one;
//			else //if(_mm_movemask_ss(cmp2) > 0)
//				result = minus_one;
//		}
//		return result;
//	}
//
//	__m128 _mm_sgn_ps(__m128 x)
//	{
//		__m128 cmp0 = _mm_cmpeq_ps(x, zero);
//		__m128 cmp1 = _mm_cmple_ps(x, zero);
//		__m128 cmp2 = _mm_cmpge_ps(x, zero)
//
//		__m128 result;
//		__m128 cmp0 = _mm_cmpeq_ps(x, zero);
//		if(_mm_movemask_ps(cmp0) == 0)
//			result = zero;
//		else
//		{
//			__m128 cmp1 = _mm_cmpge_ps(x, zero);
//			//__m128 cmp2 = _mm_cmple_ps(x, zero);
//			if(_mm_movemask_ps(cmp1) > 0)
//				result = one;
//			else //if(_mm_movemask_ps(cmp2) > 0)
//				result = minus_one;
//		}
//		return result;
//	}
//
//	//vec4 floor(vec4 x)
//	//{
//	//	return ::std::floor(x);
//	//}
//
//	__m128 floor(__m128 v)
//	{
//
//	}
//
//	__m128 _mm_flr_ss(__m128 v)
//	{
//
//	}
//
//	__m128 _mm_flr_ps(__m128 v)
//	{
//
//	}
//
//	//vec4 ceil(vec4 x)
//	//{
//	//	return ::std::ceil(vec4);
//	//}
//
//	
//
//	//vec4 fract(vec4 x)
//	//{
//	//	return x - floor(x);
//	//}
//	__m128 fract(__m128 x)
//	{
//		__m128 flr0 = floor(x);
//		__m128 sub0 = _mm_sub_ps(x, flr0);
//		return sub0;
//	}
//
//	__m128 _mm_frc_ss(__m128 x)
//	{
//		__m128 flr0 = _mm_flr_ss(x);
//		__m128 sub0 = _mm_sub_ss(x, flr0);
//		return sub0;
//	}
//
//	__m128 _mm_frc_ps(__m128 x)
//	{
//		__m128 flr0 = _mm_flr_ps(x);
//		__m128 sub0 = _mm_sub_ps(x, flr0);
//		return sub0;
//	}
//
//	//vec4 mod(vec4 x, vec4 y)
//	//{
//	//	return x - y * floor(x / y);
//	//}
//	__m128 mod(__m128 x, __m128 y)
//	{
//		__m128 div0 = _mm_div_ps(x, y);
//		__m128 flr0 = _mm_flr_ps(div0);
//		__m128 mul0 = _mm_mul_ps(y, flr0);
//		__m128 sub0 = _mm_sub_ps(x, mul0);
//		return sub0;
//	}
//
//	__m128 _mm_mod_ss(__m128 x, __m128 y)
//	{
//		__m128 div0 = _mm_div_ss(x, y);
//		__m128 flr0 = _mm_flr_ss(div0);
//		__m128 mul0 = _mm_mul_ss(y, flr0);
//		__m128 sub0 = _mm_sub_ss(x, mul0);
//		return sub0;
//	}
//
//	__m128 _mm_mod_ps(__m128 x, __m128 y)
//	{
//		__m128 div0 = _mm_div_ps(x, y);
//		__m128 flr0 = _mm_flr_ps(div0);
//		__m128 mul0 = _mm_mul_ps(y, flr0);
//		__m128 sub0 = _mm_sub_ps(x, mul0);
//		return sub0;
//	}
//
//	//vec4 min(vec4 x, vec4 y)
//	//{
//	//	return x < y ? x : y;
//	//}
//	__m128 min(__m128 v1, __m128 v2)
//	{
//		return _mm_min_ps(v1, v2);
//	}
//
//	//vec4 max(vec4 x, vec4 y)
//    //{
//	//	return x > y ? x : y;
//    //}
//	__m128 max(__m128 v1, __m128 v2)
//	{
//		return _mm_max_ps(v1, v2);
//	}
//
//    //vec4 clamp(vec4 x, vec4 minVal, vec4 maxVal)
//    //{
//	//	return max(min(v, maxVal), minVal);
//    //}
//	__m128 clamp(__m128 v, __m128 minVal, __m128 maxVal)
//	{
//		return _mm_max_ps(_mm_min_ps(v, maxVal), minVal);
//	}
//
//	__m128 _mm_clp_ss(__m128 v, __m128 minVal, __m128 maxVal)
//	{
//		__m128 min0 = _mm_min_ss(v, maxVal);
//		__m128 max0 = _mm_max_ss(min0, minVal);
//		return max0;
//	}
//
//	__m128 _mm_clp_ps(__m128 v, __m128 minVal, __m128 maxVal)
//	{
//		__m128 min0 = _mm_min_ps(v, maxVal);
//		__m128 max0 = _mm_max_ps(min0, minVal);
//		return max0;
//	}
//
//    //vec4 mix(vec4 x, vec4 y, vec4 a)
//    //{
//    //    return x * (vec4(1) - a) + y * a;
//    //}
//	__m128 mix(__m128 v1, __m128 v2, __m128 a)
//	{
//		__m128 sub0 = _mm_sub_ps(one, a);
//		__m128 mul0 = _mm_mul_ps(v1, sub0);
//		__m128 mul1 = _mm_mul_ps(v2, a);
//		__m128 add0 = _mm_add_ps(mul0, mul1);
//		return add0;
//	}
//
//	__m128 _mm_lerp_ss(__m128 v1, __m128 v2, __m128 a)
//	{
//		__m128 sub0 = _mm_sub_ss(one, a);
//		__m128 mul0 = _mm_mul_ss(v1, sub0);
//		__m128 mul1 = _mm_mul_ss(v2, a);
//		__m128 add0 = _mm_add_ss(mul0, mul1);
//		return add0;
//	}
//
//	__m128 _mm_lerp_ps(__m128 v1, __m128 v2, __m128 a)
//	{
//		__m128 sub0 = _mm_sub_ps(one, a);
//		__m128 mul0 = _mm_mul_ps(v1, sub0);
//		__m128 mul1 = _mm_mul_ps(v2, a);
//		__m128 add0 = _mm_add_ps(mul0, mul1);
//		return add0;
//	}
//
//    //vec4 step(vec4 edge, vec4 x)
//    //{
//    //    return x <= edge ? vec4(0) : vec4(1);
//    //}
//    __m128 step(__m128 edge, __m128 x)
//    {
//		__m128 cmp = _mm_cmple_ps(x, edge);
//		if(_mm_movemask_ps(cmp) == 0)
//			return one;
//		else
//			return zero;
//    }
//
//    __m128 _mm_step_ss(__m128 edge, __m128 x)
//    {
//		__m128 cmp = _mm_cmple_ss(x, edge);
//		if(_mm_movemask_ss(cmp) == 0)
//			return one;
//		else
//			return zero;
//    }
//
//    __m128 _mm_step_ps(__m128 edge, __m128 x)
//    {
//		__m128 cmp = _mm_cmple_ps(x, edge);
//		if(_mm_movemask_ps(cmp) == 0)
//			return one;
//		else
//			return zero;
//    }
//
//    //vec4 smoothstep(vec4 edge0, vec4 edge1, vec4 x)
//    //{
//    //    vec4 tmp = clamp((x - edge0) / (edge1 - edge0), vec4(0), vec4(1));
//    //    return tmp * tmp * (vec4(3) - vec4(2) * tmp);
//    //}
//    __m128 smoothstep(__m128 edge0, __m128 edge1, __m128 x)
//    {
//		__m128 sub0 = _mm_sub_ps(x, edge0);
//		__m128 sub1 = _mm_sub_ps(edge1, edge0);
//		__m128 div0 = _mm_sub_ps(sub0, sub1);
//		__m128 clp0 = _mm_clp_ps(div0, zero, one);
//		__m128 mul0 = _mm_mul_ps(two, clp0);
//		__m128 sub2 = _mm_sub_ps(three, mul0);
//		__m128 mul1 = _mm_mul_ps(clp0, clp0);
//		__m128 mul2 = _mm_mul_ps(mul1, sub2);
//		return mul2;
//    }
//
//    __m128 _mm_ssp_ss(__m128 edge0, __m128 edge1, __m128 x)
//    {
//		__m128 sub0 = _mm_sub_ss(x, edge0);
//		__m128 sub1 = _mm_sub_ss(edge1, edge0);
//		__m128 div0 = _mm_sub_ss(sub0, sub1);
//		__m128 clp0 = _mm_clp_ss(div0, zero, one);
//		__m128 mul0 = _mm_mul_ss(two, clp0);
//		__m128 sub2 = _mm_sub_ss(three, mul0);
//		__m128 mul1 = _mm_mul_ss(clp0, clp0);
//		__m128 mul2 = _mm_mul_ss(mul1, sub2);
//		return mul2;
//    }
//
//    __m128 _mm_ssp_ps(__m128 edge0, __m128 edge1, __m128 x)
//    {
//		__m128 sub0 = _mm_sub_ps(x, edge0);
//		__m128 sub1 = _mm_sub_ps(edge1, edge0);
//		__m128 div0 = _mm_sub_ps(sub0, sub1);
//		__m128 clp0 = _mm_clp_ps(div0, zero, one);
//		__m128 mul0 = _mm_mul_ps(two, clp0);
//		__m128 sub2 = _mm_sub_ps(three, mul0);
//		__m128 mul1 = _mm_mul_ps(clp0, clp0);
//		__m128 mul2 = _mm_mul_ps(mul1, sub2);
//		return mul2;
//    }
//
//    //float length(vec4 x)
//    //{
//    //    float sqr = x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w;
//    //    return sqrt(sqr);
//    //}
//    __m128 length(__m128 x)
//    {
//        __m128 dot0 = dot(x, x);
//		__m128 sqt0 = _mm_sqrt_ps(dot0);
//        return sqt0;
//    }
//
//    __m128 _mm_len_ss(__m128 x)
//    {
//        __m128 dot0 = _mm_dot_ss(x, x);
//		__m128 sqt0 = _mm_sqrt_ss(dot0);
//        return sqt0;
//    }
//
//    __m128 _mm_len_ps(__m128 x)
//    {
//        __m128 dot0 = _mm_dot_ps(x, x);
//		__m128 sqt0 = _mm_sqrt_ps(dot0);
//        return sqt0;
//    }
//
//    //float distance(vec4 p0, vec4 p1)
//    //{
//    //    return length(p1 - p0);
//    //}
//    __m128 distance(__m128 p0, __m128 p1)
//    {
//		__m128 sub0 = _mm_sub_ps(p0, p1);
//        __m128 len0 = _mm_len_ps(sub0);
//        return len0;
//    }
//
//    __m128 _mm_dst_ss(__m128 p0, __m128 p1)
//    {
//		__m128 sub0 = _mm_sub_ps(p0, p1);
//        __m128 len0 = _mm_len_ps(sub0);
//        return len0;
//    }
//
//    __m128 _mm_dst_ps(__m128 p0, __m128 p1)
//    {
//		__m128 sub0 = _mm_sub_ps(p0, p1);
//        __m128 len0 = _mm_len_ps(sub0);
//        return len0;
//    }
//
//    //vec4 dot(vec4 x, vec4 y)
//    //{
//    //    return vec4(x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w);
//    //}
//	__m128 dot(__m128 v1, __m128 v2)
//	{
//		__m128 mul0 = _mm_mul_ps(v1, v2);
//		__m128 swp0 = _mm_shuffle_ps(mul0, mul0, _MM_SHUFFLE(2, 3, 0, 1));
//		__m128 add0 = _mm_add_ps(mul0, swp0);
//		__m128 swp1 = _mm_shuffle_ps(add0, add0, _MM_SHUFFLE(0, 1, 2, 3));
//		__m128 add1 = _mm_add_ps(add0, swp1);
//		return add1;
//	}
//
//	__m128 _mm_dot_ss(__m128 v1, __m128 v2)
//	{
//		__m128 mul0 = _mm_mul_ps(v1, v2);
//		__m128 swp0 = _mm_shuffle_ps(mul0, mul0, _MM_SHUFFLE(2, 3, 0, 1));
//		__m128 add0 = _mm_add_ps(mul0, swp0);
//		__m128 swp1 = _mm_shuffle_ps(add0, add0, _MM_SHUFFLE(0, 1, 2, 3));
//		__m128 add1 = _mm_add_ps(add0, swp1);
//		return add1;
//	}
//
//	__m128 _mm_dot_ps(__m128 v1, __m128 v2)
//	{
//		__m128 mul0 = _mm_mul_ps(v1, v2);
//		__m128 swp0 = _mm_shuffle_ps(mul0, mul0, _MM_SHUFFLE(2, 3, 0, 1));
//		__m128 add0 = _mm_add_ps(mul0, swp0);
//		__m128 swp1 = _mm_shuffle_ps(add0, add0, _MM_SHUFFLE(0, 1, 2, 3));
//		__m128 add1 = _mm_add_ps(add0, swp1);
//		return add1;
//	}
//
//    //vec3 cross(vec3 x, vec3 y)
//    //{
//    //    return vec3(
//    //        x.y * y.z - y.y * x.z,
//    //        x.z * y.x - y.z * x.x,
//    //        x.x * y.y - y.x * x.y);
//    //}
//    __m128 cross(__m128 v1, __m128 v2)
//    {
//		__m128 swp0 = _mm_shuffle_ps(v1, v1, _MM_SHUFFLE(3, 0, 2, 1));
//		__m128 swp1 = _mm_shuffle_ps(v1, v1, _MM_SHUFFLE(3, 1, 0, 2));
//		__m128 swp2 = _mm_shuffle_ps(v2, v2, _MM_SHUFFLE(3, 0, 2, 1));
//		__m128 swp3 = _mm_shuffle_ps(v2, v2, _MM_SHUFFLE(3, 1, 0, 2));
//		__m128 mul0 = _mm_mul_ps(swp0, swp3);
//		__m128 mul1 = _mm_mul_ps(swp1, swp2);
//		__m128 sub0 = _mm_sub_ps(mul0, mul1);
//		return sub0;
//    }
//
//    __m128 _mm_xpd_ps(__m128 v1, __m128 v2)
//    {
//		__m128 swp0 = _mm_shuffle_ps(v1, v1, _MM_SHUFFLE(3, 0, 2, 1));
//		__m128 swp1 = _mm_shuffle_ps(v1, v1, _MM_SHUFFLE(3, 1, 0, 2));
//		__m128 swp2 = _mm_shuffle_ps(v2, v2, _MM_SHUFFLE(3, 0, 2, 1));
//		__m128 swp3 = _mm_shuffle_ps(v2, v2, _MM_SHUFFLE(3, 1, 0, 2));
//		__m128 mul0 = _mm_mul_ps(swp0, swp3);
//		__m128 mul1 = _mm_mul_ps(swp1, swp2);
//		__m128 sub0 = _mm_sub_ps(mul0, mul1);
//		return sub0;
//    }
//
//    //vec4 normalize(vec4 x)
//    //{
//    //    float sqr = x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w;
//	   // return x * inversesqrt(sqr);
//    //}
//	__m128 normalize(__m128 v)
//	{
//		__m128 dot0 = dot(v, v);
//		__m128 isr0 = _mm_rsqrt_ps(dot0);
//		__m128 mul0 = _mm_mul_ps(v, isr0);
//		return mul0;
//	}
//
//	__m128 _mm_nrm_ps(__m128 v)
//	{
//		__m128 dot0 = dot(v, v);
//		__m128 isr0 = _mm_rsqrt_ps(dot0);
//		__m128 mul0 = _mm_mul_ps(v, isr0);
//		return mul0;
//	}
//
//	__m128 rcp(__m128 v)
//	{
//		return _mm_rcp_ps(v);
//	}
//
//    //vec4 mad(vec4 v0, vec4 v1, vec4 v2)
//    //{
//	//	return v0 * v1 + v2;
//    //}
//	__m128 mad(__m128 v0, __m128 v1, __m128 v2)
//	{
//		__m128 mul0 = _mm_mul_ps(v0, v1);
//		__m128 add0 = _mm_add_ps(mul0, v2);
//		return add0;
//	}
//
//	__m128 _mm_mad_ss(__m128 v0, __m128 v1, __m128 v2)
//	{
//		__m128 mul0 = _mm_mul_ss(v0, v1);
//		__m128 add0 = _mm_add_ss(mul0, v2);
//		return add0;
//	}
//
//	__m128 _mm_mad_ps(__m128 v0, __m128 v1, __m128 v2)
//	{
//		__m128 mul0 = _mm_mul_ps(v0, v1);
//		__m128 add0 = _mm_add_ps(mul0, v2);
//		return add0;
//	}
//
//	//vec4 reflect(vec4 I, vec4 N)
//	//{
//	//	return I - N * dot(N, I) * 2.0f;
//	//}
//	__m128 reflect(__m128 I, __m128 N)
//	{
//		__m128 dot0 = dot(N, I);
//		__m128 mul0 = _mm_mul_ps(N, I);
//		__m128 mul1 = _mm_mul_ps(mul0, two);
//		__m128 sub0 = _mm_sub_ps(I, mul1);
//		return sub0;
//	}
//
//	__m128 _mm_rfe_ps(__m128 I, __m128 N)
//	{
//		__m128 dot0 = dot(N, I);
//		__m128 mul0 = _mm_mul_ps(N, I);
//		__m128 mul1 = _mm_mul_ps(mul0, two);
//		__m128 sub0 = _mm_sub_ps(I, mul1);
//		return sub0;
//	}
//
//	//vec4 refract(vec4 I, vec4 N, T eta)
//	//{
//	//	float dotValue = dot(N, I);
//	//	float k = 1.0f - eta * eta * (1.0f - dotValue * dotValue);
//	//	if(k < 0.0f)
//	//		return vec4(0.0f);
//	//	return eta * I - (eta * dotValue + sqrt(k)) * N;
//	//}
//	__m128 refract(__m128 I, __m128 N, __m128 eta)
//	{
//		__m128 dot0 = dot(N, I);
//		__m128 mul0 = _mm_mul_ps(eta, eta);
//		__m128 mul1 = _mm_mul_ps(dot0, dot0);
//		__m128 sub0 = _mm_sub_ps(one, mul0);
//		__m128 sub1 = _mm_sub_ps(one, mul1);
//		__m128 mul2 = _mm_mul_ps(sub0, sub1);
//		
//		if(_mm_movemask_ps(_mm_cmplt_ss(mul2, zero)) == 0)
//			return zero;
//
//		__m128 sqt0 = _mm_sqrt_ps(mul2);
//		__m128 mul3 = _mm_mul_ps(eta, dot0);
//		__m128 add0 = _mm_add_ps(mul3, sqt0);
//		__m128 mul4 = _mm_mul_ps(add0, N);
//		__m128 mul5 = _mm_mul_ps(eta, I);
//		__m128 sub2 = _mm_sub_ps(mul5, mul4);
//
//		return sub2;
//	}
//
//	__m128 _mm_rfa_ps(__m128 I, __m128 N, __m128 eta)
//	{
//		__m128 dot0 = dot(N, I);
//		__m128 mul0 = _mm_mul_ps(eta, eta);
//		__m128 mul1 = _mm_mul_ps(dot0, dot0);
//		__m128 sub0 = _mm_sub_ps(one, mul0);
//		__m128 sub1 = _mm_sub_ps(one, mul1);
//		__m128 mul2 = _mm_mul_ps(sub0, sub1);
//		
//		if(_mm_movemask_ps(_mm_cmplt_ss(mul2, zero)) == 0)
//			return zero;
//
//		__m128 sqt0 = _mm_sqrt_ps(mul2);
//		__m128 mul3 = _mm_mul_ps(eta, dot0);
//		__m128 add0 = _mm_add_ps(mul3, sqt0);
//		__m128 mul4 = _mm_mul_ps(add0, N);
//		__m128 mul5 = _mm_mul_ps(eta, I);
//		__m128 sub2 = _mm_sub_ps(mul5, mul4);
//
//		return sub2;
//	}
//
//
//	struct vec4;
//	typedef const vec4& vec4_param;
//
//	template <int N>
//	class comp
//	{
//	public:
//		comp(int i) :
//			index(i)
//		{
//			assert(i < N && i >= 0);
//		}
//
//		operator const int() const{return index;}
//
//	private:
//		int index;
//	};
//
//	typedef comp<4> comp4_t;
//
//	struct vec4
//	{
//		vec4();
//		vec4(float s);
//		vec4(float x, float y, float z, float w);
//		vec4(float v[4]);
//
//		explicit vec4(__m128 data);
//		
//        vec4& operator= (vec4_param v);
//	    vec4& operator+=(float s);
//	    vec4& operator+=(vec4_param v);
//	    vec4& operator-=(float s);
//	    vec4& operator-=(vec4_param v);
//	    vec4& operator*=(float s);
//	    vec4& operator*=(vec4_param v);
//	    vec4& operator/=(float s);
//	    vec4& operator/=(vec4_param v);
//	    vec4& operator++();
//        vec4& operator--();
//
//		union
//		{
//			__m128 data;
//			struct{float x, y, z, w;};
//			float array[4];
//		};
//	};
//
//	vec4::vec4() :
//		data(_mm_setzero_ps())
//	{}
//
//	vec4::vec4(float s) :
//		data(_mm_load_ps1(&s))
////		data(_mm_set_ps1(s))
//	{}
//
//	vec4::vec4(float v[4]) :
//		data(_mm_load_ps(v))
//	{}
//
//	vec4::vec4(float x, float y, float z, float w) :
////		data(_mm_setr_ps(x, y, z, w))
//		data(_mm_set_ps(w, z, y, x))
//	{}
//
//	vec4::vec4(__m128 data) :
//		data(data)
//	{}
//
//    vec4& vec4::operator= (vec4_param v)
//	{
//		this->data = v.data;
//		return *this;
//	}
//
//    vec4& vec4::operator+=(float s)
//	{
//		vec4 tmp(s);
//		this->data = _mm_add_ps(this->data , tmp.data);
//		return *this;
//	}
//
//    vec4& vec4::operator+=(vec4_param v)
//	{
//		this->data = _mm_add_ps(this->data , v.data);
//		return *this;
//	}
//
//    vec4& vec4::operator-=(float s)
//	{
//		vec4 tmp(s);
//		this->data = _mm_sub_ps(this->data , tmp.data);
//		return *this;
//	}
//
//    vec4& vec4::operator-=(vec4_param v)
//	{
//		this->data = _mm_sub_ps(this->data , v.data);
//		return *this;
//	}
//
//    vec4& vec4::operator*=(float s)
//	{
//		vec4 tmp(s);
//		this->data = _mm_mul_ps(this->data , tmp.data);
//		return *this;
//	}
//
//    vec4& vec4::operator*=(vec4_param v)
//	{
//		this->data = _mm_mul_ps(this->data , v.data);
//		return *this;
//	}
//
//    vec4& vec4::operator/=(float s)
//	{
//		vec4 tmp(s);
//		this->data = _mm_div_ps(this->data , tmp.data);
//		return *this;
//	}
//
//    vec4& vec4::operator/=(vec4_param v)
//	{
//		this->data = _mm_div_ps(this->data , v.data);
//		return *this;
//	}
//
//    vec4& vec4::operator++()
//	{
//		static __m128 inc = _mm_set_ps1(1.0f);
//		this->data = _mm_add_ps(this->data , inc);
//		return *this;
//	}
//
//    vec4& vec4::operator--()
//	{
//		static __m128 inc = _mm_set_ps1(1.0f);
//		this->data = _mm_sub_ps(this->data , inc);
//		return *this;
//	}
//
//	vec4 operator+ (const vec4& v1, const vec4& v2)
//	{
//		return vec4(_mm_add_ps(v1.data , v2.data));
//	}
//
//	vec4 operator+ (const vec4& v1, const float s)
//	{
//		vec4 v2(s);
//		return vec4(_mm_add_ps(v1.data , v2.data));
//	}
//
//	vec4 operator+ (const float s, const vec4& v2)
//	{
//		vec4 v1(s);
//		return vec4(_mm_add_ps(v1.data , v2.data));
//	}
//
//	vec4 operator- (const vec4& v1, const vec4& v2)
//	{
//		return vec4(_mm_sub_ps(v1.data , v2.data));
//	}
//
//	vec4 operator- (const vec4& v1, const float s)
//	{
//		vec4 v2(s);
//		return vec4(_mm_sub_ps(v1.data , v2.data));
//	}
//
//	vec4 operator- (const float s, const vec4& v2)
//	{
//		vec4 v1(s);
//		return vec4(_mm_sub_ps(v1.data , v2.data));
//	}
//
//	vec4 operator* (const vec4& v1, const vec4& v2)
//	{
//		return vec4(_mm_mul_ps(v1.data , v2.data));
//	}
//
//	vec4 operator* (const vec4& v1, const float s)
//	{
//		vec4 v2(s);
//		return vec4(_mm_mul_ps(v1.data , v2.data));
//	}
//
//	vec4 operator* (const float s, const vec4& v2)
//	{
//		vec4 v1(s);
//		return vec4(_mm_mul_ps(v1.data , v2.data));
//	}
//
//	vec4 operator/ (const vec4& v1, const vec4& v2)
//	{
//		return vec4(_mm_div_ps(v1.data , v2.data));
//	}
//
//	vec4 operator/ (const vec4& v1, const float s)
//	{
//		vec4 v2(s);
//		return vec4(_mm_div_ps(v1.data , v2.data));
//	}
//
//	vec4 operator/ (const float s, const vec4& v2)
//	{
//		vec4 v1(s);
//		return vec4(_mm_div_ps(v1.data , v2.data));
//	}
//
//	vec4 load(const vec4& v, const comp4_t component)
//	{
//		switch(component)
//		{
//		default:
//		case 3:
//			return vec4(_mm_shuffle_ps(v.data, v.data, _MM_SHUFFLE(0, 0, 0, 0)));
//		case 2:
//			return vec4(_mm_shuffle_ps(v.data, v.data, _MM_SHUFFLE(1, 1, 1, 1)));
//		case 1:
//			return vec4(_mm_shuffle_ps(v.data, v.data, _MM_SHUFFLE(2, 2, 2, 2)));
//		case 0:
//			return vec4(_mm_shuffle_ps(v.data, v.data, _MM_SHUFFLE(3, 3, 3, 3)));
//		}
//	}
//
//	vec4 rcp(vec4_param v)
//	{
//		return vec4(_mm_rcp_ps(v.data));
//	}
//
//	vec4 sqrt(vec4_param v)
//	{
//		return vec4(_mm_sqrt_ps(v.data));
//	}
//
//	vec4 inversesqrt(vec4_param v)
//	{
//		return vec4(_mm_rsqrt_ps(v.data));
//	}
//
//	vec4 min(vec4_param v1, vec4_param v2)
//	{
//		return vec4(_mm_min_ps(v1.data, v2.data));
//	}
//
//	vec4 max(vec4_param v1, vec4_param v2)
//	{
//		return vec4(_mm_max_ps(v1.data, v2.data));
//	}
//
//	vec4 clamp(vec4_param v, float minVal, float maxVal)
//	{
//		vec4 v1(minVal);
//		vec4 v2(maxVal);
//		return vec4(_mm_min_ps(_mm_max_ps(v.data, v2.data), v1.data));
//	}
//
//	vec4 clamp(vec4_param v, vec4_param minVal, vec4_param maxVal)
//	{
//		return vec4(_mm_min_ps(_mm_max_ps(v.data, maxVal.data), minVal.data));
//	}
//
//	vec4 mix(vec4_param x, vec4_param y, vec4_param a)
//	{
//		__m128 one = _mm_set_ps1(1.0f);
//		__m128 b = _mm_sub_ps(one, a.data);
//		__m128 mul1 = _mm_mul_ps(x.data, b);
//		__m128 mul2 = _mm_mul_ps(y.data, a.data);
//		__m128 addFinal = _mm_add_ps(mul1, mul2);
//		return vec4(addFinal);
//
//
////		__m128 b = _mm_sub_ps(_mm_set_ps1(1.0f), a.data);
////		return vec4(_mm_add_ps(_mm_mul_ps(x.data, b), _mm_mul_ps(y.data, a.data)));
//	}
//
//	float dot(vec4_param x, vec4_param y)
//	{
//		float result = 0.0f;
//		_mm_store_ss(&result, dot(x.data, y.data));
//		return result;
//	}
//
//    vec4 reflect(vec4_param I, vec4_param N)
//    {
//		__m128 Normal = N.data;
//		__m128 Inc = I.data;
//		__m128 Two = _mm_set_ps1(2.0f);
//		__m128 Mul = _mm_mul_ps(Normal, dot(Normal, Inc));
//        return vec4(_mm_sub_ps(Inc, _mm_mul_ps(Mul, Two)));
//    }
//
//    vec4 refract(vec4_param I, vec4_param N, float eta)
//	{
//		__m128 zero = _mm_set_ps1(0.0f);
//		__m128 eta1 = _mm_set_ps1(eta);
//		__m128 eta2 = _mm_mul_ps(eta1, eta1);
//		__m128 one = _mm_set_ps1(1.0f);
//		__m128 dotValue = dot(I.data, N.data);
//		__m128 dotValue2 = _mm_mul_ps(dotValue, dotValue);
//		__m128 k = _mm_sub_ps(one, _mm_mul_ps(eta2, _mm_sub_ps(one, dotValue2)));
//		__m128 isnull = _mm_cmplt_ss(k, zero);
//		if(_mm_movemask_ps(isnull) == 0)
//			return vec4(zero);
//		else
//		{
//			__m128 temp0 = _mm_add_ps(_mm_mul_ps(eta1, dotValue), sqrt(k));
//			__m128 temp1 = _mm_shuffle_ps(temp0, temp0, _MM_SHUFFLE(0, 0, 0, 0));
//			__m128 temp2 = _mm_mul_ps(temp1, N.data);
//			__m128 temp3 = _mm_mul_ps(eta1, I.data);
//			return vec4(_mm_sub_ps(temp3, temp2));
//		}
//	}
//
//
//};
//
//namespace glm
//{
//	glm::vec4 rcp(const glm::vec4& v)
//	{
//		return 1.0f / v;
//	}
//}
//
//namespace cpu
//{
//	void sincos(float a, float &s, float &c) 
//	{
//		_asm 
//		{
//			fld		a
//			fsincos
//			mov		ecx, c
//			mov		edx, s
//			fstp	dword ptr [ecx]
//			fstp	dword ptr [edx]
//		}
//	}
//
//	void sincos(double a, double& s, double& c) 
//	{
//		_asm 
//		{
//			fld		a
//			fsincos
//			mov		ecx, c
//			mov		edx, s
//			fstp	qword ptr [ecx]
//			fstp	qword ptr [edx]
//		}
//	}
//
//	float sin(float s) 
//	{
//		float result = 0.0f;
//		float* p = &result;
//		_asm 
//		{
//			fld		s
//			fsin	
//			mov		ecx, p
//			fstp	dword ptr [ecx]
//		}
//		return result;
//
//		//float result = 0.0f;
//		//_asm 
//		//{
//		//	fld		s
//		//	fsin	
//		//	mov		ecx, result
//		//	fstp	dword ptr [ecx]
//		//}
//		//return result;
//	}
//
//	float abs(float s) 
//	{
//		float result = 0.0f;
//		float* p = &result;
//		_asm 
//		{
//			fld		s
//			fabs	
//			mov		ecx, p
//			fstp	dword ptr [ecx]
//		}
//		return result;
//
//		//float result = 0.0f;
//		//_asm 
//		//{
//		//	fld		s
//		//	fsin	
//		//	mov		ecx, result
//		//	fstp	dword ptr [ecx]
//		//}
//		//return result;
//	}
//
//	float add(float s1, float s2)
//	{
//		float result = 0.0f;
//		float* p = &result;
//		_asm 
//		{
//			fld		s1
//			fld		s2
//			fadd	
//			mov		ecx, p
//			fstp	dword ptr [ecx]
//		}
//		return result;
//	}
//
//	float sub(float s1, float s2)
//	{
//		float result = 0.0f;
//		float* p = &result;
//		_asm 
//		{
//			fld		s1
//			fld		s2
//			fsub	
//			mov		ecx, p
//			fstp	dword ptr [ecx]
//		}
//		return result;
//	}
//
//	float mul(float s1, float s2)
//	{
//		float result = 0.0f;
//		float* p = &result;
//		_asm 
//		{
//			fld		s1
//			fld		s2
//			fmul	
//			mov		ecx, p
//			fstp	dword ptr [ecx]
//		}
//		return result;
//	}
//
//	float div(float s1, float s2)
//	{
//		float result = 0.0f;
//		float* p = &result;
//		_asm 
//		{
//			fld		s1
//			fld		s2
//			fdiv	
//			mov		ecx, p
//			fstp	dword ptr [ecx]
//		}
//		return result;
//	}
//}
//
//void test_asm()
//{
//	float sin0 = cpu::sin(1.0f);
//	float sin1 = glm::sin(1.0f);
//	float add0 = cpu::add(1.0f, 2.0f);
//	float sub0 = cpu::sub(1.0f, 2.0f);
//	
//
//	float end = 1.0f;
//}
//
//void test_clamp()
//{
//	sse::vec4 v(0.5f, 0.5f, 9.5f, 9.5f);
//	sse::vec4 minVal(1.0f, 2.0f, 3.0f, 4.0f);
//	sse::vec4 maxVal(5.0f, 6.0f, 7.0f, 8.0f);
//
//	__m128 clamp0 = sse::clamp(
//		v.data, 
//		minVal.data, 
//		maxVal.data);
//
//	glm::vec4 clamp1 = glm::clamp(
//		glm::vec4(0.5f, 0.5f, 9.5f, 9.5f),
//		glm::vec4(1.0f, 2.0f, 3.0f, 4.0f),
//		glm::vec4(5.0f, 6.0f, 7.0f, 8.0f));
//
//	__m128 end = _mm_setzero_ps();
//}
//
//#define DECLARE_EPI32_CONST(name) \
//  extern const _MM_ALIGN16 int _epi32_##name[4];
//#define IMPLEMENT_EPI32_CONST(name,x) \
//  const _MM_ALIGN16 int _epi32_##name[4]={x,x,x,x};
//#define IMPLEMENT_EPI32_CONST4(name,x,y,z,w)  \
//  const _MM_ALIGN16 int _epi32_##name[4]={w,z,y,x};
//
//#define DECLARE_PS_CONST(name) \
//  extern const _MM_ALIGN16 float _ps_##name[4];
//#define IMPLEMENT_PS_CONST(name,x)  \
//  const _MM_ALIGN16 float _ps_##name[4]={x,x,x,x};
//#define IMPLEMENT_PS_CONST4(name,x,y,z,w) \
//  const _MM_ALIGN16 float _ps_##name[4]={w,z,y,x}; 
//
////IMPLEMENT_PS_CONST(sincos_p0,  0.15707963267948963959e1f)
////IMPLEMENT_PS_CONST(sincos_p1, -0.64596409750621907082e0f)
////IMPLEMENT_PS_CONST(sincos_p2,  0.7969262624561800806e-1f)
////IMPLEMENT_PS_CONST(sincos_p3, -0.468175413106023168e-2f) 
//
//IMPLEMENT_EPI32_CONST(sign_mask,0x80000000)
//IMPLEMENT_EPI32_CONST(inv_sign_mask,0x7FFFFFFF)
//IMPLEMENT_EPI32_CONST(mant_mask,0x7F800000)
//IMPLEMENT_EPI32_CONST(inv_mant_mask,0x807FFFFF)
//IMPLEMENT_EPI32_CONST(min_norm_pos,0x00800000)
//IMPLEMENT_EPI32_CONST(1,1)
//IMPLEMENT_EPI32_CONST(2,2)
//IMPLEMENT_EPI32_CONST(7,7)
//IMPLEMENT_EPI32_CONST(127,127)
//IMPLEMENT_EPI32_CONST(ninf,0xFF800000)
//IMPLEMENT_EPI32_CONST(pinf,0x7F800000)
//
//IMPLEMENT_PS_CONST(1_3,0.33333333333333333333333333333333f)
//IMPLEMENT_PS_CONST(0p5,0.5f)
//IMPLEMENT_PS_CONST(1,1.0f)
//IMPLEMENT_PS_CONST(m1,-1.0f)
//IMPLEMENT_PS_CONST(2,2.0f)
//IMPLEMENT_PS_CONST(3,3.0f)
//IMPLEMENT_PS_CONST(127,127.0f)
//IMPLEMENT_PS_CONST(255,255.0f)
//IMPLEMENT_PS_CONST(2pow23,8388608.0f)
//
//IMPLEMENT_PS_CONST4(1_0_0_0,1.0f,0.0f,0.0f,0.0f)
//IMPLEMENT_PS_CONST4(0_1_0_0,0.0f,1.0f,0.0f,0.0f)
//IMPLEMENT_PS_CONST4(0_0_1_0,0.0f,0.0f,1.0f,0.0f)
//IMPLEMENT_PS_CONST4(0_0_0_1,0.0f,0.0f,0.0f,1.0f)
//
//IMPLEMENT_PS_CONST(pi,    3.1415926535897932384626433832795f)
//IMPLEMENT_PS_CONST(pi2,   6.283185307179586476925286766560f)
//IMPLEMENT_PS_CONST(2_pi,  0.63661977236758134307553505349006f)
//IMPLEMENT_PS_CONST(pi_2,  1.5707963267948966192313216916398f)
//IMPLEMENT_PS_CONST(4_pi,  1.2732395447351626861510701069801f)
//IMPLEMENT_PS_CONST(pi_4,  0.78539816339744830961566084581988f)
//
//IMPLEMENT_PS_CONST(sincos_p0,  0.15707963267948963959e1f)
//IMPLEMENT_PS_CONST(sincos_p1, -0.64596409750621907082e0f)
//IMPLEMENT_PS_CONST(sincos_p2,  0.7969262624561800806e-1f)
//IMPLEMENT_PS_CONST(sincos_p3, -0.468175413106023168e-2f)
//IMPLEMENT_PS_CONST(tan_p0,    -1.79565251976484877988e7f)
//IMPLEMENT_PS_CONST(tan_p1,     1.15351664838587416140e6f)
//IMPLEMENT_PS_CONST(tan_p2,    -1.30936939181383777646e4f)
//IMPLEMENT_PS_CONST(tan_q0,    -5.38695755929454629881e7f)
//IMPLEMENT_PS_CONST(tan_q1,     2.50083801823357915839e7f)
//IMPLEMENT_PS_CONST(tan_q2,    -1.32089234440210967447e6f)
//IMPLEMENT_PS_CONST(tan_q3,     1.36812963470692954678e4f)
//IMPLEMENT_PS_CONST(tan_poleval,3.68935e19f)
//IMPLEMENT_PS_CONST(atan_t0,   -0.91646118527267623468e-1f)
//IMPLEMENT_PS_CONST(atan_t1,   -0.13956945682312098640e1f)
//IMPLEMENT_PS_CONST(atan_t2,   -0.94393926122725531747e2f)
//IMPLEMENT_PS_CONST(atan_t3,    0.12888383034157279340e2f)
//IMPLEMENT_PS_CONST(atan_s0,    0.12797564625607904396e1f)
//IMPLEMENT_PS_CONST(atan_s1,    0.21972168858277355914e1f)
//IMPLEMENT_PS_CONST(atan_s2,    0.68193064729268275701e1f)
//IMPLEMENT_PS_CONST(atan_s3,    0.28205206687035841409e2f)
//
//IMPLEMENT_PS_CONST(exp_hi,     88.3762626647949f)
//IMPLEMENT_PS_CONST(exp_lo,    -88.3762626647949f)
//IMPLEMENT_PS_CONST(exp_rln2,   1.4426950408889634073599f)
//IMPLEMENT_PS_CONST(exp_p0,     1.26177193074810590878e-4f)
//IMPLEMENT_PS_CONST(exp_p1,     3.02994407707441961300e-2f)
//IMPLEMENT_PS_CONST(exp_q0,     3.00198505138664455042e-6f)
//IMPLEMENT_PS_CONST(exp_q1,     2.52448340349684104192e-3f)
//IMPLEMENT_PS_CONST(exp_q2,     2.27265548208155028766e-1f)
//IMPLEMENT_PS_CONST(exp_q3,     2.00000000000000000009e0f)
//IMPLEMENT_PS_CONST(exp_c1,     6.93145751953125e-1f)
//IMPLEMENT_PS_CONST(exp_c2,     1.42860682030941723212e-6f)
//IMPLEMENT_PS_CONST(exp2_hi,    127.4999961853f)
//IMPLEMENT_PS_CONST(exp2_lo,   -127.4999961853f)
//IMPLEMENT_PS_CONST(exp2_p0,    2.30933477057345225087e-2f)
//IMPLEMENT_PS_CONST(exp2_p1,    2.02020656693165307700e1f)
//IMPLEMENT_PS_CONST(exp2_p2,    1.51390680115615096133e3f)
//IMPLEMENT_PS_CONST(exp2_q0,    2.33184211722314911771e2f)
//IMPLEMENT_PS_CONST(exp2_q1,    4.36821166879210612817e3f)
//IMPLEMENT_PS_CONST(log_p0,    -7.89580278884799154124e-1f)
//IMPLEMENT_PS_CONST(log_p1,     1.63866645699558079767e1f)
//IMPLEMENT_PS_CONST(log_p2,    -6.41409952958715622951e1f)
//IMPLEMENT_PS_CONST(log_q0,    -3.56722798256324312549e1f)
//IMPLEMENT_PS_CONST(log_q1,     3.12093766372244180303e2f)
//IMPLEMENT_PS_CONST(log_q2,    -7.69691943550460008604e2f)
//IMPLEMENT_PS_CONST(log_c0,     0.693147180559945f)
//IMPLEMENT_PS_CONST(log2_c0,    1.44269504088896340735992f) 
//
//#define GLM_NAKED __declspec(naked) __cdecl
//
//__m128 GLM_NAKED _mm_cos_ps(__m128 x)
//{
//	__asm
//	{
//		andps     xmm0, _epi32_inv_sign_mask
//		addps     xmm0, _ps_pi_2
//		mulps     xmm0, _ps_2_pi
//		pxor      xmm3, xmm3
//		movdqa    xmm5, _epi32_1
//		movaps    xmm4, _ps_1
//		cvttps2dq xmm2, xmm0
//		pand      xmm5, xmm2
//		pcmpeqd   xmm5, xmm3
//		cvtdq2ps  xmm6, xmm2
//		pand      xmm2, _epi32_2
//		pslld     xmm2, 30
//		subps     xmm0, xmm6
//		minps     xmm0, xmm4
//		subps     xmm4, xmm0
//		andps     xmm0, xmm5
//		andnps    xmm5, xmm4
//		orps      xmm0, xmm5
//		movaps    xmm1, xmm0
//		mulps     xmm0, xmm0
//		orps      xmm1, xmm2
//		movaps    xmm7, xmm0
//		mulps     xmm0, _ps_sincos_p3
//		addps     xmm0, _ps_sincos_p2
//		mulps     xmm0, xmm7
//		addps     xmm0, _ps_sincos_p1
//		mulps     xmm0, xmm7
//		addps     xmm0, _ps_sincos_p0
//		mulps     xmm0, xmm1
//		ret
//	}
//} 
//
//void test_sse()
//{
//	sse::vec4 v1(1.0f, 2.0f, 3.0f, 4.0f);
//	sse::vec4 v2(5.0f, 6.0f, 7.0f, 8.0f);
//	sse::vec4 v3(9.0f);
//	sse::vec4 v4(0.5f, 0.5f, 0.5f, 0.5f);
//	__m128 v5 = sse::mix(v1.data, v2.data, v4.data);
//	__m128 dot0 = sse::dot(v1.data, v2.data);
//	float dot1 = sse::dot(v1, v2);
//	__m128 rcp0 = sse::rcp(v1.data);
//	glm::vec4 rcp1 = rcp(glm::vec4(1.0f, 2.0f, 3.0f, 4.0f));
//
//	// cross
//	{
//		sse::vec4 v1(4.0f, 2.0f, 2.0f, 0.0f);
//		sse::vec4 v2(1.0f, 2.0f, 3.0f, 0.0f);
//		__m128 crs0 = sse::cross(v1.data, v2.data);
//
//		glm::vec3 v3(4.0f, 2.0f, 2.0f);
//		glm::vec3 v4(1.0f, 2.0f, 3.0f);
//		glm::vec3 crs1 = glm::cross(v3, v4);
//
//		__m128 end = _mm_set_ps1(1.0f);
//	}
//
//	// ieee754
//	{
//		sse::detail::ieee754 one(1.f);
//		float f = sse::load(one.mantissa, one.exp, one.sign);
//		
//		__m128 end = _mm_set_ps1(1.0f);
//	}
//
//	test_clamp();
//	test_asm();
//
//	__m128 cos0 = _mm_cos_ps(_mm_set_ps1(1.0f));
//	glm::vec4 cos1 = glm::cos(glm::vec4(1.0f));
//
//	float f = glm::dot(glm::vec4(1.0f, 2.0f, 3.0f, 4.0f), glm::vec4(5.0f, 6.0f, 7.0f, 8.0f));
//	sse::vec4 end(9.0f);
//
//	//sse::vec4 vComp = sse::load(sse::vec4(1.0f, 2.0f, 3.0f, 4.0f), 1); 
//	//vComp += sse::vec4(1.0f);
//	//--vComp;
//	//sse::vec4 vMixed = sse::mix(vComp, sse::vec4(-0.5f), sse::vec4(0.5f));
//	//float sDot = sse::dot(sse::vec4(1.0f), sse::vec4(2.0f));
//	//float cDot = glm::dot(glm::vec4(1.0f), glm::vec4(2.0f));
//}
