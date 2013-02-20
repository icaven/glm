///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2013-02-10
// Updated : 2013-02-11
// Licence : This source is under MIT licence
// File    : test/gtc/gtc_dual_quaternion.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/dual_quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/gtx/euler_angles.hpp>

#include <iostream>

int myrand()
{
    static int holdrand = 1;
    return (((holdrand = holdrand * 214013L + 2531011L) >> 16) & 0x7fff);
}

float myfrand() // returns values from -1 to 1 inclusive
{
    return float(double(myrand()) / double( 0x7ffff )) * 2.0f - 1.0f;
}

int test_quat_angle()
{
    int Error = 1;

    {
        glm::quat Q = glm::angleAxis(45.0f, glm::vec3(0, 0, 1));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += glm::epsilonEqual(L, 0.0f, 0.01f) ? 1 : 0;
        float A = glm::angle(N);
        Error += glm::epsilonEqual(A, 45.0f, 0.01f) ? 0 : 1;
    }
    {
        glm::quat Q = glm::angleAxis(45.0f, glm::normalize(glm::vec3(0, 1, 1)));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += glm::epsilonEqual(L, 1.0f, 0.01f) ? 0 : 1;
        float A = glm::angle(N);
        Error += glm::epsilonEqual(A, 45.0f, 0.01f) ? 0 : 1;
    }
    {
        glm::quat Q = glm::angleAxis(45.0f, glm::normalize(glm::vec3(1, 2, 3)));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += glm::epsilonEqual(L, 1.0f, 0.01f) ? 0 : 1;
        float A = glm::angle(N);
        Error += glm::epsilonEqual(A, 45.0f, 0.01f) ? 0 : 1;
    }

    return Error;
}

int test_quat_angleAxis()
{
    int Error = 0;

    glm::quat A = glm::angleAxis(0.0f, glm::vec3(0, 0, 1));
    glm::quat B = glm::angleAxis(90.0f, glm::vec3(0, 0, 1));
    glm::quat C = glm::mix(A, B, 0.5f);
    glm::quat D = glm::angleAxis(45.0f, glm::vec3(0, 0, 1));

    Error += glm::epsilonEqual(C.x, D.x, 0.01f) ? 0 : 1;
    Error += glm::epsilonEqual(C.y, D.y, 0.01f) ? 0 : 1;
    Error += glm::epsilonEqual(C.z, D.z, 0.01f) ? 0 : 1;
    Error += glm::epsilonEqual(C.w, D.w, 0.01f) ? 0 : 1;

    return Error;
}

int test_quat_mix()
{
    int Error = 0;

    glm::quat A = glm::angleAxis(0.0f, glm::vec3(0, 0, 1));
    glm::quat B = glm::angleAxis(90.0f, glm::vec3(0, 0, 1));
    glm::quat C = glm::mix(A, B, 0.5f);
    glm::quat D = glm::angleAxis(45.0f, glm::vec3(0, 0, 1));

    Error += glm::epsilonEqual(C.x, D.x, 0.01f) ? 0 : 1;
    Error += glm::epsilonEqual(C.y, D.y, 0.01f) ? 0 : 1;
    Error += glm::epsilonEqual(C.z, D.z, 0.01f) ? 0 : 1;
    Error += glm::epsilonEqual(C.w, D.w, 0.01f) ? 0 : 1;

    return Error;
}

int test_quat_precision()
{
    int Error = 0;

    Error += sizeof(glm::lowp_quat) <= sizeof(glm::mediump_quat) ? 0 : 1;
    Error += sizeof(glm::mediump_quat) <= sizeof(glm::highp_quat) ? 0 : 1;

    return Error;
}

int test_quat_normalize()
{
    int Error(0);

    {
        glm::quat Q = glm::angleAxis(45.0f, glm::vec3(0, 0, 1));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += glm::epsilonEqual(L, 1.0f, 0.000001f) ? 0 : 1;
    }
    {
        glm::quat Q = glm::angleAxis(45.0f, glm::vec3(0, 0, 2));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += glm::epsilonEqual(L, 1.0f, 0.000001f) ? 0 : 1;
    }
    {
        glm::quat Q = glm::angleAxis(45.0f, glm::vec3(1, 2, 3));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += glm::epsilonEqual(L, 1.0f, 0.000001f) ? 0 : 1;
    }

    return Error;
}

int test_quat_euler()
{
    int Error(0);

    {
        glm::quat q(1.0f, 0.0f, 0.0f, 1.0f);
        float Roll = glm::roll(q);
        float Pitch = glm::pitch(q);
        float Yaw = glm::yaw(q);
        glm::vec3 Angles = glm::eulerAngles(q);
    }

    {
        glm::dquat q(1.0f, 0.0f, 0.0f, 1.0f);
        double Roll = glm::roll(q);
        double Pitch = glm::pitch(q);
        double Yaw = glm::yaw(q);
        glm::dvec3 Angles = glm::eulerAngles(q);
    }

    {
        glm::hquat q(glm::half(1.0f), glm::half(0.0f), glm::half(0.0f), glm::half(1.0f));
        glm::half Roll = glm::roll(q);
        glm::half Pitch = glm::pitch(q);
        glm::half Yaw = glm::yaw(q);
        glm::hvec3 Angles = glm::eulerAngles(q);
    }

    return Error;
}

int test_quat_slerp()
{
    int Error(0);

    float const Epsilon = 0.0001f;//glm::epsilon<float>();

    float sqrt2 = sqrt(2.0f)/2.0f;
    glm::quat id;
    glm::quat Y90rot(sqrt2, 0.0f, sqrt2, 0.0f);
    glm::quat Y180rot(0.0f, 0.0f, 1.0f, 0.0f);

    // Testing a == 0
    // Must be id
    glm::quat id2 = glm::slerp(id, Y90rot, 0.0f);
    Error += glm::all(glm::epsilonEqual(id, id2, Epsilon)) ? 0 : 1;

    // Testing a == 1
    // Must be 90° rotation on Y : 0 0.7 0 0.7
    glm::quat Y90rot2 = glm::slerp(id, Y90rot, 1.0f);
    Error += glm::all(glm::epsilonEqual(Y90rot, Y90rot2, Epsilon)) ? 0 : 1;

    // Testing standard, easy case
    // Must be 45° rotation on Y : 0 0.38 0 0.92
    glm::quat Y45rot1 = glm::slerp(id, Y90rot, 0.5f);

    // Testing reverse case
    // Must be 45° rotation on Y : 0 0.38 0 0.92
    glm::quat Ym45rot2 = glm::slerp(Y90rot, id, 0.5f);

    // Testing against full circle around the sphere instead of shortest path
    // Must be 45° rotation on Y
    // certainly not a 135° rotation
    glm::quat Y45rot3 = glm::slerp(id , -Y90rot, 0.5f);
    float Y45angle3 = glm::angle(Y45rot3);
    Error += glm::epsilonEqual(Y45angle3, 45.f, Epsilon) ? 0 : 1;
    Error += glm::all(glm::epsilonEqual(Ym45rot2, Y45rot3, Epsilon)) ? 0 : 1;

    // Same, but inverted
    // Must also be 45° rotation on Y :  0 0.38 0 0.92
    // -0 -0.38 -0 -0.92 is ok too
    glm::quat Y45rot4 = glm::slerp(-Y90rot, id, 0.5f);
    Error += glm::all(glm::epsilonEqual(Ym45rot2, -Y45rot4, Epsilon)) ? 0 : 1;

    // Testing q1 = q2
    // Must be 90° rotation on Y : 0 0.7 0 0.7
    glm::quat Y90rot3 = glm::slerp(Y90rot, Y90rot, 0.5f);
    Error += glm::all(glm::epsilonEqual(Y90rot, Y90rot3, Epsilon)) ? 0 : 1;

    // Testing 180° rotation
    // Must be 90° rotation on almost any axis that is on the XZ plane
    glm::quat XZ90rot = glm::slerp(id, -Y90rot, 0.5f);
    float XZ90angle = glm::angle(XZ90rot); // Must be PI/4 = 0.78;
    Error += glm::epsilonEqual(XZ90angle, 45.f, Epsilon) ? 0 : 1;

    // Testing almost equal quaternions (this test should pass through the linear interpolation)
    // Must be 0 0.00X 0 0.99999
    glm::quat almostid = glm::slerp(id, glm::angleAxis(0.1f, 0.0f, 1.0f, 0.0f), 0.5f);

    return Error;
}

int test_dquat_type()
{
    glm::dvec3 vA;
    glm::dquat dqA,dqB;
    glm::ddualquat C(dqA,dqB);
    glm::ddualquat B(dqA);
    glm::ddualquat D(dqA,vA);
    return 0;
}

int test_scalars() {
    float const Epsilon = 0.0001f;

    int Error(0);

    glm::quat src_q1 = glm::quat(1.0f,2.0f,3.0f,4.0f);
    glm::quat src_q2 = glm::quat(5.0f,6.0f,7.0f,8.0f);
    glm::dualquat src1(src_q1,src_q2);

    {
        glm::dualquat dst1 = src1 * 2.0f;
        glm::dualquat dst2 = 2.0f * src1;
        glm::dualquat dst3 = src1;
        dst3 *= 2.0f;
        glm::dualquat dstCmp(src_q1 * 2.0f,src_q2 * 2.0f);
        Error += glm::all(glm::epsilonEqual(dst1.real,dstCmp.real, Epsilon)) && glm::all(glm::epsilonEqual(dst1.dual,dstCmp.dual, Epsilon)) ? 0 : 1;
        Error += glm::all(glm::epsilonEqual(dst2.real,dstCmp.real, Epsilon)) && glm::all(glm::epsilonEqual(dst2.dual,dstCmp.dual, Epsilon)) ? 0 : 1;
        Error += glm::all(glm::epsilonEqual(dst3.real,dstCmp.real, Epsilon)) && glm::all(glm::epsilonEqual(dst3.dual,dstCmp.dual, Epsilon)) ? 0 : 1;
    }

    {
        glm::dualquat dst1 = src1 / 2.0f;
        glm::dualquat dst2 = src1;
        dst2 /= 2.0f;
        glm::dualquat dstCmp(src_q1 / 2.0f,src_q2 / 2.0f);
        Error += glm::all(glm::epsilonEqual(dst1.real,dstCmp.real, Epsilon)) && glm::all(glm::epsilonEqual(dst1.dual,dstCmp.dual, Epsilon)) ? 0 : 1;
        Error += glm::all(glm::epsilonEqual(dst2.real,dstCmp.real, Epsilon)) && glm::all(glm::epsilonEqual(dst2.dual,dstCmp.dual, Epsilon)) ? 0 : 1;
    }
    return Error;
}

int test_inverse() 
{
    int Error(0);

    float const Epsilon = 0.0001f;

    glm::dualquat dqid;
    glm::mat4x4 mid(1.0f);

    for (int j = 0; j < 100; ++j) {
        glm::mat4x4 rot = glm::yawPitchRoll(myfrand() * 360.0f, myfrand() * 360.0f, myfrand() * 360.0f);
        glm::vec3 vt = glm::vec3(myfrand() * 10.0f, myfrand() * 10.0f, myfrand() * 10.0f);

        glm::mat4x4 m = glm::translate(mid, vt) * rot;

        glm::quat qr = glm::quat_cast(m);

        glm::dualquat dq(qr);
        
        glm::dualquat invdq = glm::inverse(dq);

        glm::dualquat r1 = invdq * dq;
        glm::dualquat r2 = dq * invdq;

        Error += glm::all(glm::epsilonEqual(r1.real, dqid.real, Epsilon)) && glm::all(glm::epsilonEqual(r1.dual, dqid.dual, Epsilon)) ? 0 : 1;
        Error += glm::all(glm::epsilonEqual(r2.real, dqid.real, Epsilon)) && glm::all(glm::epsilonEqual(r2.dual, dqid.dual, Epsilon)) ? 0 : 1;

        // testing commutative property
        glm::dualquat r (   glm::quat( myfrand() * glm::pi<float>() * 2.0f, myfrand(), myfrand(), myfrand() ),
                            glm::vec3(myfrand() * 10.0f, myfrand() * 10.0f, myfrand() * 10.0f) );
        glm::dualquat riq = (r * invdq) * dq;
        glm::dualquat rqi = (r * dq) * invdq;

        Error += glm::all(glm::epsilonEqual(riq.real, rqi.real, Epsilon)) && glm::all(glm::epsilonEqual(riq.dual, rqi.dual, Epsilon)) ? 0 : 1;
    }

    return Error;
}

int test_mul() 
{
    int Error(0);

    float const Epsilon = 0.0001f;

    glm::mat4x4 mid(1.0f);

    for (int j = 0; j < 100; ++j) {
        // generate random rotations and translations and compare transformed by matrix and dualquats random points 
        glm::vec3 vt1 = glm::vec3(myfrand() * 10.0f, myfrand() * 10.0f, myfrand() * 10.0f);
        glm::vec3 vt2 = glm::vec3(myfrand() * 10.0f, myfrand() * 10.0f, myfrand() * 10.0f);

        glm::mat4x4 rot1 = glm::yawPitchRoll(myfrand() * 360.0f, myfrand() * 360.0f, myfrand() * 360.0f);
        glm::mat4x4 rot2 = glm::yawPitchRoll(myfrand() * 360.0f, myfrand() * 360.0f, myfrand() * 360.0f);
        glm::mat4x4 m1 = glm::translate(mid, vt1) * rot1;
        glm::mat4x4 m2 = glm::translate(mid, vt2) * rot2;
        glm::mat4x4 m3 = m2 * m1;
        glm::mat4x4 m4 = m1 * m2;

        glm::quat qrot1 = glm::quat_cast(rot1);
        glm::quat qrot2 = glm::quat_cast(rot2);

        glm::dualquat dq1 = glm::dualquat(qrot1,vt1);
        glm::dualquat dq2 = glm::dualquat(qrot2,vt2);
        glm::dualquat dq3 = dq2 * dq1;
        glm::dualquat dq4 = dq1 * dq2;

        for (int i = 0; i < 100; ++i) {
            glm::vec4 src_pt = glm::vec4(myfrand() * 4.0f, myfrand() * 5.0f, myfrand() * 3.0f,1.0f);
            // test both multiplication orders        
            glm::vec4 dst_pt_m3  = m3 * src_pt; 
            glm::vec4 dst_pt_dq3 = dq3 * src_pt;
         
            glm::vec4 dst_pt_m3_i  = glm::inverse(m3) * src_pt;
            glm::vec4 dst_pt_dq3_i = src_pt * dq3;

            glm::vec4 dst_pt_m4  = m4 * src_pt;
            glm::vec4 dst_pt_dq4 = dq4 * src_pt;

            glm::vec4 dst_pt_m4_i  = glm::inverse(m4) * src_pt;
            glm::vec4 dst_pt_dq4_i = src_pt * dq4;

            Error += glm::all(glm::epsilonEqual(dst_pt_m3, dst_pt_dq3, Epsilon)) ? 0 : 1;
            Error += glm::all(glm::epsilonEqual(dst_pt_m4, dst_pt_dq4, Epsilon)) ? 0 : 1;
            Error += glm::all(glm::epsilonEqual(dst_pt_m3_i, dst_pt_dq3_i, Epsilon)) ? 0 : 1;
            Error += glm::all(glm::epsilonEqual(dst_pt_m4_i, dst_pt_dq4_i, Epsilon)) ? 0 : 1;
        }
    } 

    return Error;
}

int main()
{
    int Error(0);

    Error += test_dquat_type();
    Error += test_scalars();
    Error += test_inverse();
    Error += test_mul();

    //std::cout << "Errors count: " << Error << std::endl;
    return Error;
}
