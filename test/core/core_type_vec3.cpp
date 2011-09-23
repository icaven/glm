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

    //
    // NOTE: template functions cannot pick up the implicit conversion from
    // a swizzle to the unswizzled type, therefore the operator() must be 
    // used.  E.g.:
    //
    // glm::dot(u.xy, v.xy);        <--- Compile error
    // glm::dot(u.xy(), v.xy());    <--- Compiles correctly
    //

    float r;

    // vec2
    glm::vec2 a(1, 2);
    glm::vec2 b(10, 20);
    r = glm::dot(a, b);                 Error += (int(r) == 50) ? 0 : 1;
    r = glm::dot(a.xy(), b.xy());       Error += (int(r) == 50) ? 0 : 1;
    r = glm::dot(a.xy(), b.yy());       Error += (int(r) == 60) ? 0 : 1;

    // vec3
    glm::vec3 q, u, v;
    u = glm::vec3(1, 2, 3);
    v = glm::vec3(10, 20, 30);
    r = glm::dot(u, v);                 Error += (int(r) == 140) ? 0 : 1;
    r = glm::dot(u.xyz(), v.zyz());     Error += (int(r) == 160) ? 0 : 1;
    r = glm::dot(u, v.zyx());           Error += (int(r) == 100) ? 0 : 1;
    r = glm::dot(u.xyz(), v);           Error += (int(r) == 140) ? 0 : 1;
    r = glm::dot(u.xy(), v.xy());       Error += (int(r) == 50) ? 0 : 1;

    // vec4
    glm::vec4 s, t;
    s = glm::vec4(1, 2, 3, 4);
    t = glm::vec4(10, 20, 30, 40);
    r = glm::dot(s, t);                 Error += (int(r) == 300) ? 0 : 1;
    r = glm::dot(s.xyzw(), t.xyzw());   Error += (int(r) == 300) ? 0 : 1;
    r = glm::dot(s.xyz(), t.xyz());     Error += (int(r) == 140) ? 0 : 1;

    return Error;
}

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
