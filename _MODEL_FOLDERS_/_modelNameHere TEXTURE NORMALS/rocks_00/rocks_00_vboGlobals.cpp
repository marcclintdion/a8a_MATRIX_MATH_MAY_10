GLuint rocks_00_vboID   =  450 ;

GLuint rocks_00_SHADER;
GLuint rocks_00_SHADER_Vertex;
GLuint rocks_00_SHADER_Fragment;

#include "rocks_00_VERT.cpp"
#include "rocks_00_NORM.cpp"
#include "rocks_00_TEX.cpp"
GLfloat lightPos_rocks_00[]               =  {0.132818, 30.1442, -4.0103};
GLfloat lightAttenuation_rocks_00         =   0.774731;

GLfloat MaterialShininess_rocks_00        =  16.7859;

GLfloat rotation_AXIS_rocks_00[]          =  {1.0, 1.0, 1.0};
GLfloat rocks_00_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     rocks_00_counter              = 0;
GLuint      UNIFORM_counter_rocks_00;

GLfloat     LightAmbient_rocks_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_rocks_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_rocks_00[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_rocks_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_rocks_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_rocks_00[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_rocks_00[]   = { 0.0, 0, 0};
GLfloat     scalerocks_00ShadowY[]            = {1.26801, 0.0, 1.26801};
