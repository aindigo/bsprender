//
// Created by Patricio Villalobos on 6/21/15.
//

#ifndef TESSELLATION_SIMPLE_CUBE_H
#define TESSELLATION_SIMPLE_CUBE_H

#define SIMPLE_CUBE_VERTICES \
GLfloat __vertices[] = { \
    -0.5f, -0.5f, -0.5f, 0.3f, 0.3f, 0.3f, \
     0.5f, -0.5f, -0.5f, 0.3f, 0.3f, 0.3f, \
     0.5f,  0.5f, -0.5f, 0.3f, 0.3f, 0.3f, \
     0.5f,  0.5f, -0.5f, 0.3f, 0.3f, 0.3f, \
    -0.5f,  0.5f, -0.5f, 0.3f, 0.3f, 0.3f, \
    -0.5f, -0.5f, -0.5f, 0.3f, 0.3f, 0.3f, \
\
    -0.5f, -0.5f,  0.5f, 0.5f, 0.3f, 0.7f, \
     0.5f, -0.5f,  0.5f, 0.5f, 0.3f, 0.7f,  \
     0.5f,  0.5f,  0.5f, 0.5f, 0.3f, 0.7f, \
     0.5f,  0.5f,  0.5f, 0.5f, 0.3f, 0.7f, \
    -0.5f,  0.5f,  0.5f, 0.5f, 0.3f, 0.7f, \
    -0.5f, -0.5f,  0.5f, 0.5f, 0.3f, 0.7f, \
 \
    -0.5f,  0.5f,  0.5f, 0.7f, 0.3f, 0.5f, \
    -0.5f,  0.5f, -0.5f, 0.7f, 0.3f, 0.5f, \
    -0.5f, -0.5f, -0.5f, 0.7f, 0.3f, 0.5f, \
    -0.5f, -0.5f, -0.5f, 0.7f, 0.3f, 0.5f, \
    -0.5f, -0.5f,  0.5f, 0.7f, 0.3f, 0.5f, \
    -0.5f,  0.5f,  0.5f, 0.7f, 0.3f, 0.5f, \
 \
     0.5f,  0.5f,  0.5f, 0.9f, 0.3f, 0.3f, \
     0.5f,  0.5f, -0.5f, 0.9f, 0.3f, 0.3f, \
     0.5f, -0.5f, -0.5f, 0.9f, 0.3f, 0.3f, \
     0.5f, -0.5f, -0.5f, 0.9f, 0.3f, 0.3f, \
     0.5f, -0.5f,  0.5f, 0.9f, 0.3f, 0.3f, \
     0.5f,  0.5f,  0.5f, 0.9f, 0.3f, 0.3f, \
 \
    -0.5f, -0.5f, -0.5f, 0.1f, 0.3f, 0.3f, \
     0.5f, -0.5f, -0.5f, 0.1f, 0.3f, 0.3f, \
     0.5f, -0.5f,  0.5f, 0.1f, 0.3f, 0.3f, \
     0.5f, -0.5f,  0.5f, 0.1f, 0.3f, 0.3f, \
    -0.5f, -0.5f,  0.5f, 0.1f, 0.3f, 0.3f, \
    -0.5f, -0.5f, -0.5f, 0.1f, 0.3f, 0.3f, \
 \
    -0.5f,  0.5f, -0.5f, 0.3f, 0.6f, 0.3f,  \
     0.5f,  0.5f, -0.5f, 0.3f, 0.6f, 0.3f,  \
     0.5f,  0.5f,  0.5f, 0.3f, 0.6f, 0.3f,  \
     0.5f,  0.5f,  0.5f, 0.3f, 0.6f, 0.3f,  \
    -0.5f,  0.5f,  0.5f, 0.3f, 0.6f, 0.3f,  \
    -0.5f,  0.5f, -0.5f, 0.3f, 0.6f, 0.3f   \
};

#define SIMPLE_PATCH \
float patch_vertices[] = { \
639.407227f , 272.000000f , -84.000000f , \
616.831055f , 272.000000f , -68.000000f , \
580.362305f , 272.000000f , -68.000000f , \
530.000000f , 272.000000f , -4.000000f ,  \
542.156250f , 272.000000f , -140.000000f , \
\
618.567871f , 262.827637f , 4.000000f , \
595.991699f , 262.827637f , 12.000000f , \
573.415527f , 262.827637f , 12.000000f , \
530.000000f , 262.827637f , 76.000000f ,  \
535.209961f , 262.827637f , -60.000000f , \
\
639.407227f , 143.586182f , 20.000000f , \
616.831055f , 143.586182f , 36.000000f , \
580.362305f , 143.586182f , 36.000000f , \
543.893066f , 143.586182f , 84.000000f , \
 542.156250f , 143.586182f , -36.000000f ,  \
\
741.000000f , 102.310547f , -14.000000f , \
616.831055f , 83.048584f , 20.000000f , \
580.362305f , 83.048584f , 20.000000f , \
543.893066f , 83.048584f , 100.000000f , \
 542.156250f , 83.048584f , -52.000000f , \
\
694.979492f , 22.510254f , 12.000000f , \
616.831055f , 22.510254f , 36.000000f , \
580.362305f , 6.000000f , 12.000000f , \
543.893066f , 22.510254f , 100.000000f , \
542.156250f , 22.510254f , -52.000000f  \
\
};


#define SIMPLE_PATCH_1 \
float patch_vertices[] = { \
714.0000f , 236.0000f ,1160.0000f , \
714.0000f , 236.0000f ,1170.0000f , \
724.0000f , 236.0000f ,1170.0000f , \
734.0000f , 236.0000f ,1170.0000f , \
734.0000f , 236.0000f ,1160.0000f , \
734.0000f , 236.0000f ,1150.0000f , \
724.0000f , 236.0000f ,1150.0000f , \
714.0000f , 236.0000f ,1150.0000f , \
714.0000f , 236.0000f ,1160.0000f , \
714.0000f , 150.0000f ,1160.0000f , \
714.0000f , 150.0000f ,1170.0000f , \
724.0000f , 150.0000f ,1170.0000f , \
734.0000f , 150.0000f ,1170.0000f , \
734.0000f , 150.0000f ,1160.0000f , \
734.0000f , 150.0000f ,1150.0000f , \
724.0000f , 150.0000f ,1150.0000f , \
714.0000f , 150.0000f ,1150.0000f , \
714.0000f , 150.0000f ,1160.0000f , \
714.0000f , 64.0000f ,1160.0000f , \
714.0000f , 64.0000f ,1170.0000f , \
724.0000f , 64.0000f ,1170.0000f , \
734.0000f , 64.0000f ,1170.0000f , \
734.0000f , 64.0000f ,1160.0000f , \
734.0000f , 64.0000f ,1150.0000f , \
724.0000f , 64.0000f ,1150.0000f , \
714.0000f , 64.0000f ,1150.0000f , \
714.0000f , 64.0000f ,1160.0000f , \
\
};


#define COMPARE_PLANE_BOX( plane ) \
 ( frustum.##plane.x * mins.x + frustum.##plane.y * mins.y + frustum.##plane.z * mins.z + frustum.##plane.w > 0 || \
frustum.##plane .x * maxs.x + frustum.##plane .y * mins.y + frustum.##plane e.z * mins.z + frustum.##plane.w > 0 || \
frustum.##plane .x * mins.x + frustum.##plane .y * maxs.y + frustum.##plane .z * mins.z + frustum.##plane.w > 0 || \
frustum.##plane .x * maxs.x + frustum.##plane .y * maxs.y + frustum.##plane .z * mins.z + frustum.##plane.w > 0 || \
frustum.##plane .x * mins.x + frustum.##plane .y * mins.y + frustum.##plane .z * maxs.z + frustum.##plane.w > 0 || \
frustum.##plane .x * maxs.x + frustum.##plane .y * mins.y + frustum.##plane .z * maxs.z + frustum.##plane.w > 0 || \
frustum.##plane .x * mins.x + frustum.##plane .y * maxs.y + frustum.##plane .z * maxs.z + frustum.##plane.w > 0 || \
frustum.##plane .x * maxs.x + frustum.##plane .y * maxs.y + frustum.##plane .z * maxs.z + frustum.##plane.w > 0)


#endif //TESSELLATION_SIMPLE_CUBE_H