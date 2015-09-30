GLuint spikyBall_00_vboID   =  15 ;

GLuint spikyBall_00_SHADER;
GLuint spikyBall_00_SHADER_Vertex;
GLuint spikyBall_00_SHADER_Fragment;

#include "spikyBall_00_VERT.cpp"
#include "spikyBall_00_NORM.cpp"
#include "spikyBall_00_TEX.cpp"
GLfloat lightPos_spikyBall_00[]               =  {-1.56117, 11.9431, 10.7077};
GLfloat lightAttenuation_spikyBall_00         =   1.283;

GLfloat     MaterialShininess_spikyBall_00   =  360.816;

GLfloat rotation_AXIS_spikyBall_00[]          =  {1.0, 1.0, 1.0};
GLfloat spikyBall_00_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     spikyBall_00_counter              = 0;
GLuint      UNIFORM_counter_spikyBall_00;

GLfloat     LightAmbient_spikyBall_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_spikyBall_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_spikyBall_00[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_spikyBall_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_spikyBall_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_spikyBall_00[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_spikyBall_00[]   = { 0.0, 0, 0};
GLfloat     scalespikyBall_00ShadowY[]            = {1.26801, 0.0, 1.26801};
