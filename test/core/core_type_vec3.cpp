///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2011-09-19
// Licence : This source is under MIT License
// File    : test/core/type_vec3.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/half_float.hpp>

static int test_vec3_operators()
{
	glm::vec3 A(1.0f);
	glm::vec3 B(1.0f);
	bool R = A != B;
	bool S = A == B;

	return (S && !R) ? 0 : 1;
}

int test_vec3_size()
{
	int Error = 0;
	
	Error += sizeof(glm::vec3) == sizeof(glm::mediump_vec3) ? 0 : 1;
	Error += 12 == sizeof(glm::mediump_vec3) ? 0 : 1;
	Error += sizeof(glm::dvec3) == sizeof(glm::highp_vec3) ? 0 : 1;
	Error += 24 == sizeof(glm::highp_vec3) ? 0 : 1;
	Error += glm::vec3().length() == 3 ? 0 : 1;
	Error += glm::dvec3().length() == 3 ? 0 : 1;
	
	return Error;
}

int test_vec3_swizzle3_2()
{
    int Error = 0;

    glm::vec3 v(1, 2, 3);
    glm::vec2 u;

    // Can not assign a vec3 swizzle to a vec2
    //u = v.xyz;    //Illegal
    //u = v.rgb;    //Illegal
    //u = v.stp;    //Illegal

    u = v.xx;       Error += (u.x == 1.0f && u.y == 1.0f) ? 0 : 1;
    u = v.xy;       Error += (u.x == 1.0f && u.y == 2.0f) ? 0 : 1;
    u = v.xz;       Error += (u.x == 1.0f && u.y == 3.0f) ? 0 : 1;
    u = v.yx;       Error += (u.x == 2.0f && u.y == 1.0f) ? 0 : 1;
    u = v.yy;       Error += (u.x == 2.0f && u.y == 2.0f) ? 0 : 1;
    u = v.yz;       Error += (u.x == 2.0f && u.y == 3.0f) ? 0 : 1;
    u = v.zx;       Error += (u.x == 3.0f && u.y == 1.0f) ? 0 : 1;
    u = v.zy;       Error += (u.x == 3.0f && u.y == 2.0f) ? 0 : 1;
    u = v.zz;       Error += (u.x == 3.0f && u.y == 3.0f) ? 0 : 1;

    u = v.rr;       Error += (u.r == 1.0f && u.g == 1.0f) ? 0 : 1;
    u = v.rg;       Error += (u.r == 1.0f && u.g == 2.0f) ? 0 : 1;
    u = v.rb;       Error += (u.r == 1.0f && u.g == 3.0f) ? 0 : 1;
    u = v.gr;       Error += (u.r == 2.0f && u.g == 1.0f) ? 0 : 1;
    u = v.gg;       Error += (u.r == 2.0f && u.g == 2.0f) ? 0 : 1;
    u = v.gb;       Error += (u.r == 2.0f && u.g == 3.0f) ? 0 : 1;
    u = v.br;       Error += (u.r == 3.0f && u.g == 1.0f) ? 0 : 1;
    u = v.bg;       Error += (u.r == 3.0f && u.g == 2.0f) ? 0 : 1;
    u = v.bb;       Error += (u.r == 3.0f && u.g == 3.0f) ? 0 : 1;   

    u = v.ss;       Error += (u.s == 1.0f && u.t == 1.0f) ? 0 : 1;
    u = v.st;       Error += (u.s == 1.0f && u.t == 2.0f) ? 0 : 1;
    u = v.sp;       Error += (u.s == 1.0f && u.t == 3.0f) ? 0 : 1;
    u = v.ts;       Error += (u.s == 2.0f && u.t == 1.0f) ? 0 : 1;
    u = v.tt;       Error += (u.s == 2.0f && u.t == 2.0f) ? 0 : 1;
    u = v.tp;       Error += (u.s == 2.0f && u.t == 3.0f) ? 0 : 1;
    u = v.ps;       Error += (u.s == 3.0f && u.t == 1.0f) ? 0 : 1;
    u = v.pt;       Error += (u.s == 3.0f && u.t == 2.0f) ? 0 : 1;
    u = v.pp;       Error += (u.s == 3.0f && u.t == 3.0f) ? 0 : 1;

    // Mixed member aliases are not valid
    //u = v.rx;     //Illegal
    //u = v.sy;     //Illegal


    u = glm::vec2(1, 2);
    v = glm::vec3(1, 2, 3);
    //v.xx = u;     //Illegal
    v.xy = u;       Error += (v.x == 1.0f && v.y == 2.0f && v.z == 3.0f) ? 0 : 1;
    v.xz = u;       Error += (v.x == 1.0f && v.y == 2.0f && v.z == 2.0f) ? 0 : 1;
    v.yx = u;       Error += (v.x == 2.0f && v.y == 1.0f && v.z == 2.0f) ? 0 : 1;
    //v.yy = u;     //Illegal
    v.yz = u;       Error += (v.x == 2.0f && v.y == 1.0f && v.z == 2.0f) ? 0 : 1;
    v.zx = u;       Error += (v.x == 2.0f && v.y == 1.0f && v.z == 1.0f) ? 0 : 1;
    v.zy = u;       Error += (v.x == 2.0f && v.y == 2.0f && v.z == 1.0f) ? 0 : 1;
    //v.zz = u;     //Illegal
    
    return Error;
}

int test_vec3_swizzle3_3()
{
    int Error = 0;

    glm::vec3 v(1, 2, 3);
    glm::vec3 u;
    
    u = v;          Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    
    u = v.xyz;      Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.zyx;      Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.zyx = v;      Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    
    u = v.rgb;      Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.bgr;      Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.bgr = v;      Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;

    u = v.stp;      Error += (u.x == 1.0f && u.y == 2.0f && u.z == 3.0f) ? 0 : 1;
    u = v.pts;      Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
    u.pts = v;      Error += (u.x == 3.0f && u.y == 2.0f && u.z == 1.0f) ? 0 : 1;
   
    return Error;
}

int test_vec3_swizzle_half()
{
    int Error = 0;

    glm::half a1(1);
    glm::half b1(2);
    glm::half c1(3);
    glm::hvec3 v(a1, b1, c1);
    glm::hvec3 u;

    u = v;

    Error += (u.x.toFloat() == 1.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 3.0f) ? 0 : 1;
    
    u = v.xyz;
    Error += (u.x.toFloat() == 1.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 3.0f) ? 0 : 1;
    u = v.zyx;
    Error += (u.x.toFloat() == 3.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 1.0f) ? 0 : 1;
    u.zyx = v;
    Error += (u.x.toFloat() == 3.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 1.0f) ? 0 : 1;
    
    u = v.rgb;
    Error += (u.x.toFloat() == 1.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 3.0f) ? 0 : 1;
    u = v.bgr;
    Error += (u.x.toFloat() == 3.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 1.0f) ? 0 : 1;
    u.bgr = v;
    Error += (u.x.toFloat() == 3.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 1.0f) ? 0 : 1;

    u = v.stp;
    Error += (u.x.toFloat() == 1.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 3.0f) ? 0 : 1;
    u = v.pts;
    Error += (u.x.toFloat() == 3.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 1.0f) ? 0 : 1;
    u.pts = v;
    Error += (u.x.toFloat() == 3.0f && u.y.toFloat() == 2.0f && u.z.toFloat() == 1.0f) ? 0 : 1;

    return Error;
}

int test_vec3_swizzle_operators()
{
    int Error = 0;

    glm::vec3 q, u, v;

    u = glm::vec3(1, 2, 3);
    v = glm::vec3(10, 20, 30);

    // Swizzle, swizzle binary operators
    q = u.xyz + v.xyz;          Error += (q == (u + v)) ? 0 : 1;
    q = (u.zyx + v.zyx).zyx;    Error += (q == (u + v)) ? 0 : 1;
    q = (u.xyz - v.xyz);        Error += (q == (u - v)) ? 0 : 1;
    q = (u.xyz * v.xyz);        Error += (q == (u * v)) ? 0 : 1;
    q = (u.xxx * v.xxx);        Error += (q == glm::vec3(u.x * v.x)) ? 0 : 1;
    q = (u.xyz / v.xyz);        Error += (q == (u / v)) ? 0 : 1;

    // vec, swizzle binary operators
    q = u + v.xyz;              Error += (q == (u + v)) ? 0 : 1;
    q = (u - v.xyz);            Error += (q == (u - v)) ? 0 : 1;
    q = (u * v.xyz);            Error += (q == (u * v)) ? 0 : 1;
    q = (u * v.xxx);            Error += (q == v.x * u) ? 0 : 1;
    q = (u / v.xyz);            Error += (q == (u / v)) ? 0 : 1;

    // swizzle,vec binary operators
    q = u.xyz + v;              Error += (q == (u + v)) ? 0 : 1;
    q = (u.xyz - v);            Error += (q == (u - v)) ? 0 : 1;
    q = (u.xyz * v);            Error += (q == (u * v)) ? 0 : 1;
    q = (u.xxx * v);            Error += (q == u.x * v) ? 0 : 1;
    q = (u.xyz / v);            Error += (q == (u / v)) ? 0 : 1;

    // Compile errors
    //q = (u.yz * v.xyz);
    //q = (u * v.xy);

    return Error;
}

int test_vec3_swizzle_functions()
{
    int Error = 0;

    // vec3 - working as expected
    glm::vec3 q, u, v;
    u = glm::vec3(1, 2, 3);
    v = glm::vec3(10, 20, 30);
    glm::dot(u, v);
    glm::dot(u.xyz, v.zyz);
    glm::dot(u, v.zyx);
    glm::dot(u.xyz, v);

    // vec2 - not working! how is vec3 working and not vec2?
    glm::vec2 a, b;
    glm::dot(a, b);
    glm::dot(a.xy, b.yy);
    glm::dot(a.xy, b.xy);
    glm::dot(u.xy, v.xy);

    glm::dot(glm::vec4(1,2,3,4).xyz, v);

    glm::vec4 r, s, t;

    r = glm::vec4(1, 2, 3, 4);
    s = glm::vec4(10, 20, 30, 40);

    glm::dot(r, s);
    glm::dot(r.xyzw, s.xyzw);
    glm::dot(r.xyz, s.xyz);

    glm::cross(u, v);
    glm::cross(u.zyx, v);
    glm::cross(u.xxz, v.yyx);

    return Error;
}

#if 1
using namespace glm;

//
// GLSL textureless classic 4D noise "cnoise",
// with an RSL-style periodic variant "pnoise".
// Author:  Stefan Gustavson (stefan.gustavson@liu.se)
// Version: 2011-08-22
//
// Many thanks to Ian McEwan of Ashima Arts for the
// ideas for permutation and gradient selection.
//
// Copyright (c) 2011 Stefan Gustavson. All rights reserved.
// Distributed under the MIT license. See LICENSE file.
// https://github.com/ashima/webgl-noise
//

vec4 mod289(vec4 x)
{
  return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec4 permute(vec4 x)
{
  return mod289(((x*34.0)+1.0)*x);
}

vec4 taylorInvSqrt(vec4 r)
{
  return 1.79284291400159 - 0.85373472095314 * r;
}

vec4 fade(vec4 t) {
  return t*t*t*(t*(t*6.0-15.0)+10.0);
}

// Classic Perlin noise
float cnoise(vec4 P)
{
  vec4 Pi0 = floor(P); // Integer part for indexing
  vec4 Pi1 = Pi0 + 1.0; // Integer part + 1
  Pi0 = mod289(Pi0);
  Pi1 = mod289(Pi1);
  vec4 Pf0 = fract(P); // Fractional part for interpolation
  vec4 Pf1 = Pf0 - 1.0; // Fractional part - 1.0
  vec4 ix = vec4(Pi0.x, Pi1.x, Pi0.x, Pi1.x);
  vec4 iy = vec4(Pi0.yy(), Pi1.yy());
  vec4 iz0 = vec4(Pi0.zzzz());
  vec4 iz1 = vec4(Pi1.zzzz());
  vec4 iw0 = vec4(Pi0.wwww());
  vec4 iw1 = vec4(Pi1.wwww);

  vec4 ixy = permute(permute(ix) + iy);
  vec4 ixy0 = permute(ixy + iz0);
  vec4 ixy1 = permute(ixy + iz1);
  vec4 ixy00 = permute(ixy0 + iw0);
  vec4 ixy01 = permute(ixy0 + iw1);
  vec4 ixy10 = permute(ixy1 + iw0);
  vec4 ixy11 = permute(ixy1 + iw1);

  vec4 gx00 = ixy00 * (1.0 / 7.0);
  vec4 gy00 = floor(gx00) * (1.0 / 7.0);
  vec4 gz00 = floor(gy00) * (1.0 / 6.0);
  gx00 = fract(gx00) - 0.5;
  gy00 = fract(gy00) - 0.5;
  gz00 = fract(gz00) - 0.5;
  vec4 gw00 = vec4(0.75) - abs(gx00) - abs(gy00) - abs(gz00);
  vec4 sw00 = step(gw00, vec4(0.0));
  gx00 -= sw00 * (step(0.0, gx00) - 0.5);
  gy00 -= sw00 * (step(0.0, gy00) - 0.5);

  vec4 gx01 = ixy01 * (1.0 / 7.0);
  vec4 gy01 = floor(gx01) * (1.0 / 7.0);
  vec4 gz01 = floor(gy01) * (1.0 / 6.0);
  gx01 = fract(gx01) - 0.5;
  gy01 = fract(gy01) - 0.5;
  gz01 = fract(gz01) - 0.5;
  vec4 gw01 = vec4(0.75) - abs(gx01) - abs(gy01) - abs(gz01);
  vec4 sw01 = step(gw01, vec4(0.0));
  gx01 -= sw01 * (step(0.0, gx01) - 0.5);
  gy01 -= sw01 * (step(0.0, gy01) - 0.5);

  vec4 gx10 = ixy10 * (1.0 / 7.0);
  vec4 gy10 = floor(gx10) * (1.0 / 7.0);
  vec4 gz10 = floor(gy10) * (1.0 / 6.0);
  gx10 = fract(gx10) - 0.5;
  gy10 = fract(gy10) - 0.5;
  gz10 = fract(gz10) - 0.5;
  vec4 gw10 = vec4(0.75) - abs(gx10) - abs(gy10) - abs(gz10);
  vec4 sw10 = step(gw10, vec4(0.0));
  gx10 -= sw10 * (step(0.0, gx10) - 0.5);
  gy10 -= sw10 * (step(0.0, gy10) - 0.5);

  vec4 gx11 = ixy11 * (1.0 / 7.0);
  vec4 gy11 = floor(gx11) * (1.0 / 7.0);
  vec4 gz11 = floor(gy11) * (1.0 / 6.0);
  gx11 = fract(gx11) - 0.5;
  gy11 = fract(gy11) - 0.5;
  gz11 = fract(gz11) - 0.5;
  vec4 gw11 = vec4(0.75) - abs(gx11) - abs(gy11) - abs(gz11);
  vec4 sw11 = step(gw11, vec4(0.0));
  gx11 -= sw11 * (step(0.0, gx11) - 0.5);
  gy11 -= sw11 * (step(0.0, gy11) - 0.5);

  vec4 g0000 = vec4(gx00.x,gy00.x,gz00.x,gw00.x);
  vec4 g1000 = vec4(gx00.y,gy00.y,gz00.y,gw00.y);
  vec4 g0100 = vec4(gx00.z,gy00.z,gz00.z,gw00.z);
  vec4 g1100 = vec4(gx00.w,gy00.w,gz00.w,gw00.w);
  vec4 g0010 = vec4(gx10.x,gy10.x,gz10.x,gw10.x);
  vec4 g1010 = vec4(gx10.y,gy10.y,gz10.y,gw10.y);
  vec4 g0110 = vec4(gx10.z,gy10.z,gz10.z,gw10.z);
  vec4 g1110 = vec4(gx10.w,gy10.w,gz10.w,gw10.w);
  vec4 g0001 = vec4(gx01.x,gy01.x,gz01.x,gw01.x);
  vec4 g1001 = vec4(gx01.y,gy01.y,gz01.y,gw01.y);
  vec4 g0101 = vec4(gx01.z,gy01.z,gz01.z,gw01.z);
  vec4 g1101 = vec4(gx01.w,gy01.w,gz01.w,gw01.w);
  vec4 g0011 = vec4(gx11.x,gy11.x,gz11.x,gw11.x);
  vec4 g1011 = vec4(gx11.y,gy11.y,gz11.y,gw11.y);
  vec4 g0111 = vec4(gx11.z,gy11.z,gz11.z,gw11.z);
  vec4 g1111 = vec4(gx11.w,gy11.w,gz11.w,gw11.w);

  vec4 norm00 = taylorInvSqrt(vec4(dot(g0000, g0000), dot(g0100, g0100), dot(g1000, g1000), dot(g1100, g1100)));
  g0000 *= norm00.x;
  g0100 *= norm00.y;
  g1000 *= norm00.z;
  g1100 *= norm00.w;

  vec4 norm01 = taylorInvSqrt(vec4(dot(g0001, g0001), dot(g0101, g0101), dot(g1001, g1001), dot(g1101, g1101)));
  g0001 *= norm01.x;
  g0101 *= norm01.y;
  g1001 *= norm01.z;
  g1101 *= norm01.w;

  vec4 norm10 = taylorInvSqrt(vec4(dot(g0010, g0010), dot(g0110, g0110), dot(g1010, g1010), dot(g1110, g1110)));
  g0010 *= norm10.x;
  g0110 *= norm10.y;
  g1010 *= norm10.z;
  g1110 *= norm10.w;

  vec4 norm11 = taylorInvSqrt(vec4(dot(g0011, g0011), dot(g0111, g0111), dot(g1011, g1011), dot(g1111, g1111)));
  g0011 *= norm11.x;
  g0111 *= norm11.y;
  g1011 *= norm11.z;
  g1111 *= norm11.w;

  float n0000 = dot(g0000, Pf0);
  float n1000 = dot(g1000, vec4(Pf1.x, Pf0.yzw()));
  float n0100 = dot(g0100, vec4(Pf0.x, Pf1.y, Pf0.zw()));
  float n1100 = dot(g1100, vec4(Pf1.xy(), Pf0.zw()));
  float n0010 = dot(g0010, vec4(Pf0.xy(), Pf1.z, Pf0.w));
  float n1010 = dot(g1010, vec4(Pf1.x, Pf0.y, Pf1.z, Pf0.w));
  float n0110 = dot(g0110, vec4(Pf0.x, Pf1.yz(), Pf0.w));
  float n1110 = dot(g1110, vec4(Pf1.xyz(), Pf0.w));
  float n0001 = dot(g0001, vec4(Pf0.xyz(), Pf1.w));
  float n1001 = dot(g1001, vec4(Pf1.x, Pf0.yz(), Pf1.w));
  float n0101 = dot(g0101, vec4(Pf0.x, Pf1.y, Pf0.z, Pf1.w));
  float n1101 = dot(g1101, vec4(Pf1.xy(), Pf0.z, Pf1.w));
  float n0011 = dot(g0011, vec4(Pf0.xy(), Pf1.zw()));
  float n1011 = dot(g1011, vec4(Pf1.x, Pf0.y, Pf1.zw()));
  float n0111 = dot(g0111, vec4(Pf0.x, Pf1.yzw()));
  float n1111 = dot(g1111, Pf1);

  vec4 fade_xyzw = fade(Pf0);
  vec4 n_0w = mix(vec4(n0000, n1000, n0100, n1100), vec4(n0001, n1001, n0101, n1101), fade_xyzw.w);
  vec4 n_1w = mix(vec4(n0010, n1010, n0110, n1110), vec4(n0011, n1011, n0111, n1111), fade_xyzw.w);
  vec4 n_zw = mix(n_0w, n_1w, fade_xyzw.z);
  vec2 n_yzw = mix(n_zw.xy, n_zw.zw, fade_xyzw.y);
  float n_xyzw = mix(n_yzw.x, n_yzw.y, fade_xyzw.x);
  return 2.2 * n_xyzw;
}

// Classic Perlin noise, periodic version
float pnoise(vec4 P, vec4 rep)
{
  vec4 Pi0 = mod(floor(P), rep); // Integer part modulo rep
  vec4 Pi1 = mod(Pi0 + 1.0, rep); // Integer part + 1 mod rep
  Pi0 = mod289(Pi0);
  Pi1 = mod289(Pi1);
  vec4 Pf0 = fract(P); // Fractional part for interpolation
  vec4 Pf1 = Pf0 - 1.0; // Fractional part - 1.0
  vec4 ix = vec4(Pi0.x, Pi1.x, Pi0.x, Pi1.x);
  vec4 iy = vec4(Pi0.yy(), Pi1.yy());
  vec4 iz0 = vec4(Pi0.zzzz());
  vec4 iz1 = vec4(Pi1.zzzz());
  vec4 iw0 = vec4(Pi0.wwww());
  vec4 iw1 = vec4(Pi1.wwww());

  vec4 ixy = permute(permute(ix) + iy);
  vec4 ixy0 = permute(ixy + iz0);
  vec4 ixy1 = permute(ixy + iz1);
  vec4 ixy00 = permute(ixy0 + iw0);
  vec4 ixy01 = permute(ixy0 + iw1);
  vec4 ixy10 = permute(ixy1 + iw0);
  vec4 ixy11 = permute(ixy1 + iw1);

  vec4 gx00 = ixy00 * (1.0 / 7.0);
  vec4 gy00 = floor(gx00) * (1.0 / 7.0);
  vec4 gz00 = floor(gy00) * (1.0 / 6.0);
  gx00 = fract(gx00) - 0.5;
  gy00 = fract(gy00) - 0.5;
  gz00 = fract(gz00) - 0.5;
  vec4 gw00 = vec4(0.75) - abs(gx00) - abs(gy00) - abs(gz00);
  vec4 sw00 = step(gw00, vec4(0.0));
  gx00 -= sw00 * (step(0.0, gx00) - 0.5);
  gy00 -= sw00 * (step(0.0, gy00) - 0.5);

  vec4 gx01 = ixy01 * (1.0 / 7.0);
  vec4 gy01 = floor(gx01) * (1.0 / 7.0);
  vec4 gz01 = floor(gy01) * (1.0 / 6.0);
  gx01 = fract(gx01) - 0.5;
  gy01 = fract(gy01) - 0.5;
  gz01 = fract(gz01) - 0.5;
  vec4 gw01 = vec4(0.75) - abs(gx01) - abs(gy01) - abs(gz01);
  vec4 sw01 = step(gw01, vec4(0.0));
  gx01 -= sw01 * (step(0.0, gx01) - 0.5);
  gy01 -= sw01 * (step(0.0, gy01) - 0.5);

  vec4 gx10 = ixy10 * (1.0 / 7.0);
  vec4 gy10 = floor(gx10) * (1.0 / 7.0);
  vec4 gz10 = floor(gy10) * (1.0 / 6.0);
  gx10 = fract(gx10) - 0.5;
  gy10 = fract(gy10) - 0.5;
  gz10 = fract(gz10) - 0.5;
  vec4 gw10 = vec4(0.75) - abs(gx10) - abs(gy10) - abs(gz10);
  vec4 sw10 = step(gw10, vec4(0.0));
  gx10 -= sw10 * (step(0.0, gx10) - 0.5);
  gy10 -= sw10 * (step(0.0, gy10) - 0.5);

  vec4 gx11 = ixy11 * (1.0 / 7.0);
  vec4 gy11 = floor(gx11) * (1.0 / 7.0);
  vec4 gz11 = floor(gy11) * (1.0 / 6.0);
  gx11 = fract(gx11) - 0.5;
  gy11 = fract(gy11) - 0.5;
  gz11 = fract(gz11) - 0.5;
  vec4 gw11 = vec4(0.75) - abs(gx11) - abs(gy11) - abs(gz11);
  vec4 sw11 = step(gw11, vec4(0.0));
  gx11 -= sw11 * (step(0.0, gx11) - 0.5);
  gy11 -= sw11 * (step(0.0, gy11) - 0.5);

  vec4 g0000 = vec4(gx00.x,gy00.x,gz00.x,gw00.x);
  vec4 g1000 = vec4(gx00.y,gy00.y,gz00.y,gw00.y);
  vec4 g0100 = vec4(gx00.z,gy00.z,gz00.z,gw00.z);
  vec4 g1100 = vec4(gx00.w,gy00.w,gz00.w,gw00.w);
  vec4 g0010 = vec4(gx10.x,gy10.x,gz10.x,gw10.x);
  vec4 g1010 = vec4(gx10.y,gy10.y,gz10.y,gw10.y);
  vec4 g0110 = vec4(gx10.z,gy10.z,gz10.z,gw10.z);
  vec4 g1110 = vec4(gx10.w,gy10.w,gz10.w,gw10.w);
  vec4 g0001 = vec4(gx01.x,gy01.x,gz01.x,gw01.x);
  vec4 g1001 = vec4(gx01.y,gy01.y,gz01.y,gw01.y);
  vec4 g0101 = vec4(gx01.z,gy01.z,gz01.z,gw01.z);
  vec4 g1101 = vec4(gx01.w,gy01.w,gz01.w,gw01.w);
  vec4 g0011 = vec4(gx11.x,gy11.x,gz11.x,gw11.x);
  vec4 g1011 = vec4(gx11.y,gy11.y,gz11.y,gw11.y);
  vec4 g0111 = vec4(gx11.z,gy11.z,gz11.z,gw11.z);
  vec4 g1111 = vec4(gx11.w,gy11.w,gz11.w,gw11.w);

  vec4 norm00 = taylorInvSqrt(vec4(dot(g0000, g0000), dot(g0100, g0100), dot(g1000, g1000), dot(g1100, g1100)));
  g0000 *= norm00.x;
  g0100 *= norm00.y;
  g1000 *= norm00.z;
  g1100 *= norm00.w;

  vec4 norm01 = taylorInvSqrt(vec4(dot(g0001, g0001), dot(g0101, g0101), dot(g1001, g1001), dot(g1101, g1101)));
  g0001 *= norm01.x;
  g0101 *= norm01.y;
  g1001 *= norm01.z;
  g1101 *= norm01.w;

  vec4 norm10 = taylorInvSqrt(vec4(dot(g0010, g0010), dot(g0110, g0110), dot(g1010, g1010), dot(g1110, g1110)));
  g0010 *= norm10.x;
  g0110 *= norm10.y;
  g1010 *= norm10.z;
  g1110 *= norm10.w;

  vec4 norm11 = taylorInvSqrt(vec4(dot(g0011, g0011), dot(g0111, g0111), dot(g1011, g1011), dot(g1111, g1111)));
  g0011 *= norm11.x;
  g0111 *= norm11.y;
  g1011 *= norm11.z;
  g1111 *= norm11.w;

  float n0000 = dot(g0000, Pf0);
  float n1000 = dot(g1000, vec4(Pf1.x, Pf0.yzw()));
  float n0100 = dot(g0100, vec4(Pf0.x, Pf1.y, Pf0.zw()));
  float n1100 = dot(g1100, vec4(Pf1.xy(), Pf0.zw()));
  float n0010 = dot(g0010, vec4(Pf0.xy(), Pf1.z, Pf0.w));
  float n1010 = dot(g1010, vec4(Pf1.x, Pf0.y, Pf1.z, Pf0.w));
  float n0110 = dot(g0110, vec4(Pf0.x, Pf1.yz(), Pf0.w));
  float n1110 = dot(g1110, vec4(Pf1.xyz(), Pf0.w));
  float n0001 = dot(g0001, vec4(Pf0.xyz(), Pf1.w));
  float n1001 = dot(g1001, vec4(Pf1.x, Pf0.yz(), Pf1.w));
  float n0101 = dot(g0101, vec4(Pf0.x, Pf1.y, Pf0.z, Pf1.w));
  float n1101 = dot(g1101, vec4(Pf1.xy(), Pf0.z, Pf1.w));
  float n0011 = dot(g0011, vec4(Pf0.xy(), Pf1.zw()));
  float n1011 = dot(g1011, vec4(Pf1.x, Pf0.y, Pf1.zw()));
  float n0111 = dot(g0111, vec4(Pf0.x, Pf1.yzw()));
  float n1111 = dot(g1111, Pf1);

  vec4 fade_xyzw = fade(Pf0);
  vec4 n_0w = mix(vec4(n0000, n1000, n0100, n1100), vec4(n0001, n1001, n0101, n1101), fade_xyzw.w);
  vec4 n_1w = mix(vec4(n0010, n1010, n0110, n1110), vec4(n0011, n1011, n0111, n1111), fade_xyzw.w);
  vec4 n_zw = mix(n_0w, n_1w, fade_xyzw.z);
  vec2 n_yzw = mix(n_zw.xy, n_zw.zw, fade_xyzw.y);
  float n_xyzw = mix(n_yzw.x, n_yzw.y, fade_xyzw.x);
  return 2.2 * n_xyzw;
  }
#endif

int main()
{
	int Error = 0;

	Error += test_vec3_operators();
	Error += test_vec3_size();
    Error += test_vec3_swizzle3_2();
    Error += test_vec3_swizzle3_3();
    Error += test_vec3_swizzle_half();
    Error += test_vec3_swizzle_operators();
    Error += test_vec3_swizzle_functions();
	
	return Error;
}
