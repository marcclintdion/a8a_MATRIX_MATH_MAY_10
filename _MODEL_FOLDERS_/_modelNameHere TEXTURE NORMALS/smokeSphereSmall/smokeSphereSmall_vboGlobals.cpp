GLuint  smokeSphereSmall_vboID   =  510 ;

GLuint  smokeSphereSmall_SHADER;
GLuint  smokeSphereSmall_SHADER_Vertex;
GLuint  smokeSphereSmall_SHADER_Fragment;

#include "smokeSphereSmall_VERT.cpp"
#include "smokeSphereSmall_NORM.cpp"
#include "smokeSphereSmall_TEX.cpp"
GLfloat lightPos_smokeSphereSmall[]               =  {0.132818, 30.1442, -4.0103};
GLfloat lightAttenuation_smokeSphereSmall         =   0.774731;

GLfloat MaterialShininess_smokeSphereSmall        =  16.7859;

GLfloat rotation_AXIS_smokeSphereSmall[]          =  {1.0, 1.0, 1.0};
GLfloat smokeSphereSmall_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     smokeSphereSmall_counter              = 0;
GLuint      UNIFORM_counter_smokeSphereSmall;

GLfloat     LightAmbient_smokeSphereSmall[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_smokeSphereSmall[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_smokeSphereSmall[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_smokeSphereSmall[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_smokeSphereSmall[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_smokeSphereSmall[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_smokeSphereSmall[]   = { 0.0, 0, 0};
GLfloat     scalesmokeSphereSmallShadowY[]            = {1.26801, 0.0, 1.26801};
