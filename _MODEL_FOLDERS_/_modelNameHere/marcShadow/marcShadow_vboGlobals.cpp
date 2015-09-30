GLuint marcShadow_vboID   =  299 ;

GLuint marcShadow_SHADER;
GLuint marcShadow_SHADER_Vertex;
GLuint marcShadow_SHADER_Fragment;

#include "marcShadow_VERT.cpp"
#include "marcShadow_NORM.cpp"
#include "marcShadow_TEX.cpp"
GLfloat lightPos_marcShadow[]               =  {3.969, 82.575, 132.685};
GLfloat lightAttenuation_marcShadow         =   1.283;

GLfloat rotation_AXIS_marcShadow[]          =  {1.0, 1.0, 1.0};
GLfloat marcShadow_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     marcShadow_counter              = 0;
GLuint      UNIFORM_counter_marcShadow;

GLfloat     LightAmbient_marcShadow[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_marcShadow[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_marcShadow[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_marcShadow[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_marcShadow[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_marcShadow[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_marcShadow[]   = { 0.0, 0, 0};
GLfloat     MaterialShininess_marcShadow   =  10.000;
GLfloat     scalemarcShadowShadowY[]            = {1.26801, 0.0, 1.26801};
