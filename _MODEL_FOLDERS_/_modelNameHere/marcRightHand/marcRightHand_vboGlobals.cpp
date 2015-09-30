GLuint marcRightHand_vboID   =  212 ;

GLuint marcRightHand_SHADER;
GLuint marcRightHand_SHADER_Vertex;
GLuint marcRightHand_SHADER_Fragment;

#include "marcRightHand_VERT.cpp"
#include "marcRightHand_NORM.cpp"
#include "marcRightHand_TEX.cpp"
GLfloat lightPos_marcRightHand[]               =  {3.969, 82.575, 132.685};
GLfloat lightAttenuation_marcRightHand         =   1.283;

GLfloat rotation_AXIS_marcRightHand[]          =  {1.0, 1.0, 1.0};
GLfloat marcRightHand_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     marcRightHand_counter              = 0;
GLuint      UNIFORM_counter_marcRightHand;

GLfloat     LightAmbient_marcRightHand[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_marcRightHand[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_marcRightHand[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_marcRightHand[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_marcRightHand[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_marcRightHand[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_marcRightHand[]   = { 0.0, 0, 0};
GLfloat     MaterialShininess_marcRightHand   =  10.000;
GLfloat     scalemarcRightHandShadowY[]            = {1.26801, 0.0, 1.26801};
