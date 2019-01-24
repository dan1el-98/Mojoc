/*
 * Copyright (c) 2012-2019 scott.cgi All Rights Reserved.
 *
 * This code and its project Mojoc are licensed under [the MIT License],
 * and the project Mojoc is a game engine hosted on github at [https://github.com/scottcgi/Mojoc],
 * and the author's personal website is [https://scottcgi.github.io],
 * and the author's email is [scott.cgi@qq.com].
 *
 * Since : 2013-1-10
 * Update: 2019-1-24
 * Author: scott.cgi
 */


#ifndef CAMERA_H
#define  CAMERA_H


#include "Engine/Toolkit/Math/Matrix.h"
#include "Engine/Toolkit/Math/Math.h"


/**
 * Control main camera.
 */
struct ACamera
{
    float left;
    float right;
    float bottom;

    float top;
    float near;
    float far;

    /**
     * Camera position.
     */
    float eyeX;
    float eyeY;
    float eyeZ;

    /**
     * We are looking toward the distance.
     */
    float lookX;
    float lookY;
    float lookZ;

    /**
     * The up vector control camera direction, perpendicular to the camera plane.
     */
    float upX;
    float upY;
    float upZ;
    
    /**
     * Store view projection matrix.
     */
    Matrix4 vp        [1];

    /**
     * Store projection matrix.
     */
    Matrix4 projection[1];

    /**
     * Store the view matrix.
     */
    Matrix4  view     [1];


    void  (*SetOrtho)    ();
    void  (*SetFrustum)  ();
    void  (*SetLookAt)   ();

    /**
     * The ZOrder most near camera.
     */
    float (*GetNearZOrder)();

    /**
     * The ZOrder most far camera.
     */
    float (*GetFarZOrder) ();
};


extern struct ACamera ACamera[1];


#endif
