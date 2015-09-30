GLuint  waterLayer_00_vboID   =  441 ;

GLuint  waterLayer_00_SHADER;
GLuint  waterLayer_00_SHADER_Vertex;
GLuint  waterLayer_00_SHADER_Fragment;

#include "waterLayer_00_VERT.cpp"
#include "waterLayer_00_NORM.cpp"
#include "waterLayer_00_TEX.cpp"
GLfloat lightPos_waterLayer_00[]               =  {0.132818, 30.1442, -4.0103};
GLfloat lightAttenuation_waterLayer_00         =   0.774731;

GLfloat MaterialShininess_waterLayer_00        =  16.7859;

GLfloat rotation_AXIS_waterLayer_00[]          =  {1.0, 1.0, 1.0};
GLfloat waterLayer_00_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     waterLayer_00_counter              = 0;
GLuint      UNIFORM_counter_waterLayer_00;

GLfloat     LightAmbient_waterLayer_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_waterLayer_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_waterLayer_00[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_waterLayer_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_waterLayer_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_waterLayer_00[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_waterLayer_00[]   = { 0.0, 0, 0};
GLfloat     scalewaterLayer_00ShadowY[]            = {1.26801, 0.0, 1.26801};
