GLuint marcFace_vboID   =  201 ;

GLuint marcFace_SHADER;
GLuint marcFace_SHADER_Vertex;
GLuint marcFace_SHADER_Fragment;

#include "marcFace_VERT.cpp"
#include "marcFace_NORM.cpp"
#include "marcFace_TEX.cpp"
GLfloat lightPos_marcFace[]               =  {3.969, 82.575, 132.685};
GLfloat lightAttenuation_marcFace         =   1.283;

GLfloat rotation_AXIS_marcFace[]          =  {1.0, 1.0, 1.0};
GLfloat marcFace_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     marcFace_counter              = 0;
GLuint      UNIFORM_counter_marcFace;

GLfloat     LightAmbient_marcFace[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_marcFace[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_marcFace[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_marcFace[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_marcFace[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_marcFace[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_marcFace[]   = { 0.0, 0, 0};
GLfloat     MaterialShininess_marcFace   =  10.000;
GLfloat     scalemarcFaceShadowY[]            = {1.26801, 0.0, 1.26801};
