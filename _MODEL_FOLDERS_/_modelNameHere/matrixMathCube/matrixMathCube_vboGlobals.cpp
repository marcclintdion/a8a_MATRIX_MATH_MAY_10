GLuint matrixMathCube_vboID   =  520 ;

GLuint matrixMathCube_SHADER;
GLuint matrixMathCube_SHADER_Vertex;
GLuint matrixMathCube_SHADER_Fragment;

#include "matrixMathCube_VERT.cpp"
#include "matrixMathCube_NORM.cpp"
#include "matrixMathCube_TEX.cpp"
GLfloat     lightPos_matrixMathCube[]           =  {-1.56117, 11.9431, 10.7077};
GLfloat     lightAttenuation_matrixMathCube     =   1.283;

GLfloat     MaterialShininess_matrixMathCube    =  360.816;

GLfloat     rotation_AXIS_matrixMathCube[]      =  {1.0, 1.0, 1.0, 0.0};
GLfloat     matrixMathCube_POSITION[]           =  {0.0, 0.0, 0.0};
GLfloat     matrixMathCube_counter1             =   0.0;
GLfloat     matrixMathCube_counter2             =   0.0;
GLfloat     matrixMathCube_counter3             =   0.0;
GLfloat     matrixMathCube_counter4             =   0.0;
GLuint      UNIFORM_counter1_matrixMathCube;

GLuint      UNIFORM_counter2_matrixMathCube;

GLuint      UNIFORM_counter3_matrixMathCube;

GLuint      UNIFORM_counter4_matrixMathCube;

GLfloat     LightAmbient_matrixMathCube[]        = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_matrixMathCube[]        = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_matrixMathCube[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_matrixMathCube[]     = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_matrixMathCube[]     = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_matrixMathCube[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_matrixMathCube[]    = { 0.0, 0, 0};
GLfloat     scalematrixMathCubeShadowY[]         = {1.26801, 0.0, 1.26801};
