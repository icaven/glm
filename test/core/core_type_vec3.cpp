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

#if 0
using namespace glm;

//
// Description : Array and textureless GLSL 2D/3D/4D simplex 
//               noise functions.
//      Author : Ian McEwan, Ashima Arts.
//  Maintainer : ijm
//     Lastmod : 20110822 (ijm)
//     License : Copyright (C) 2011 Ashima Arts. All rights reserved.
//               Distributed under the MIT License. See LICENSE file.
//               https://github.com/ashima/webgl-noise
// 

vec4 mod289(vec4 x) {
  return x - floor(x * (1.0 / 289.0)) * 289.0; }

float mod289(float x) {
  return x - floor(x * (1.0 / 289.0)) * 289.0; }

vec4 permute(vec4 x) {
     return mod289(((x*34.0)+1.0)*x);
}

float permute(float x) {
     return mod289(((x*34.0)+1.0)*x);
}

vec4 taylorInvSqrt(vec4 r)
{
  return 1.79284291400159 - 0.85373472095314 * r;
}

float taylorInvSqrt(float r)
{
  return 1.79284291400159 - 0.85373472095314 * r;
}

vec4 grad4(float j, vec4 ip)
  {
  const vec4 ones = vec4(1.0, 1.0, 1.0, -1.0);
  vec4 p,s;

  p.xyz = floor( fract (vec3(j) * ip.xyz) * 7.0) * ip.z - 1.0;
  p.w = 1.5 - dot(abs(p.xyz), ones.xyz);
  s = vec4(lessThan(p, vec4(0.0)));
  p.xyz = p.xyz + (s.xyz*2.0 - 1.0) * s.www; 

  return p;
  }

float snoise(vec4 v)
  {
  const vec4  C = vec4( 0.138196601125011,  // (5 - sqrt(5))/20  G4
                        0.276393202250021,  // 2 * G4
                        0.414589803375032,  // 3 * G4
                       -0.447213595499958); // -1 + 4 * G4

// (sqrt(5) - 1)/4 = F4, used once below
#define F4 0.309016994374947451

// First corner
  vec4 i  = floor(v + dot(v, vec4(F4)) );
  vec4 x0 = v -   i + dot(i, C.xxxx);

// Other corners

// Rank sorting originally contributed by Bill Licea-Kane, AMD (formerly ATI)
  vec4 i0;
  vec3 isX = step( x0.yzw, x0.xxx );
  vec3 isYZ = step( x0.zww, x0.yyz );
//  i0.x = dot( isX, vec3( 1.0 ) );
  i0.x = isX.x + isX.y + isX.z;
  i0.yzw = 1.0 - isX;
//  i0.y += dot( isYZ.xy, vec2( 1.0 ) );
  i0.y += isYZ.x + isYZ.y;
  i0.zw += 1.0 - isYZ.xy;
  i0.z += isYZ.z;
  i0.w += 1.0 - isYZ.z;

  // i0 now contains the unique values 0,1,2,3 in each channel
  vec4 i3 = clamp( i0, 0.0, 1.0 );
  vec4 i2 = clamp( i0-1.0, 0.0, 1.0 );
  vec4 i1 = clamp( i0-2.0, 0.0, 1.0 );

  //  x0 = x0 - 0.0 + 0.0 * C.xxxx
  //  x1 = x0 - i1  + 1.0 * C.xxxx
  //  x2 = x0 - i2  + 2.0 * C.xxxx
  //  x3 = x0 - i3  + 3.0 * C.xxxx
  //  x4 = x0 - 1.0 + 4.0 * C.xxxx
  vec4 x1 = x0 - i1 + C.xxxx;
  vec4 x2 = x0 - i2 + C.yyyy;
  vec4 x3 = x0 - i3 + C.zzzz;
  vec4 x4 = x0 + C.wwww;

// Permutations
  i = mod289(i); 
  float j0 = permute( permute( permute( permute(i.w) + i.z) + i.y) + i.x);
  vec4 j1 = permute( permute( permute( permute (
             i.w + vec4(i1.w, i2.w, i3.w, 1.0 ))
           + i.z + vec4(i1.z, i2.z, i3.z, 1.0 ))
           + i.y + vec4(i1.y, i2.y, i3.y, 1.0 ))
           + i.x + vec4(i1.x, i2.x, i3.x, 1.0 ));

// Gradients: 7x7x6 points over a cube, mapped onto a 4-cross polytope
// 7*7*6 = 294, which is close to the ring size 17*17 = 289.
  vec4 ip = vec4(1.0/294.0, 1.0/49.0, 1.0/7.0, 0.0) ;

  vec4 p0 = grad4(j0,   ip);
  vec4 p1 = grad4(j1.x, ip);
  vec4 p2 = grad4(j1.y, ip);
  vec4 p3 = grad4(j1.z, ip);
  vec4 p4 = grad4(j1.w, ip);

// Normalise gradients
  vec4 norm = taylorInvSqrt(vec4(dot(p0,p0), dot(p1,p1), dot(p2, p2), dot(p3,p3)));
  p0 *= norm.x;
  p1 *= norm.y;
  p2 *= norm.z;
  p3 *= norm.w;
  p4 *= taylorInvSqrt(dot(p4,p4));

// Mix contributions from the five corners
  vec3 m0 = max(0.6 - vec3(dot(x0,x0), dot(x1,x1), dot(x2,x2)), 0.0);
  vec2 m1 = max(0.6 - vec2(dot(x3,x3), dot(x4,x4)            ), 0.0);
  m0 = m0 * m0;
  m1 = m1 * m1;
  return 49.0 * ( dot(m0*m0, vec3( dot( p0, x0 ), dot( p1, x1 ), dot( p2, x2 )))
               + dot(m1*m1, vec2( dot( p3, x3 ), dot( p4, x4 ) ) ) ) ;

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
	
	return Error;
}
