GLuint tiles_1_vboID   =  15 ;

GLuint tiles_1_SHADER;
GLuint tiles_1_SHADER_Vertex;
GLuint tiles_1_SHADER_Fragment;

#include "tiles_1_VERT.cpp"
#include "tiles_1_NORM.cpp"
#include "tiles_1_TEX.cpp"
GLfloat lightPos_tiles_1[]               =  {-1.56117, 11.9431, 10.7077};
GLfloat lightAttenuation_tiles_1         =   1.283;

GLfloat     MaterialShininess_tiles_1   =  360.816;

GLfloat rotation_AXIS_tiles_1[]          =  {1.0, 1.0, 1.0};
GLfloat tiles_1_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     tiles_1_counter              = 0;
GLuint      UNIFORM_counter_tiles_1;

GLfloat     LightAmbient_tiles_1[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_tiles_1[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_tiles_1[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_tiles_1[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_tiles_1[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_tiles_1[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_tiles_1[]   = { 0.0, 0, 0};
GLfloat     scaletiles_1ShadowY[]            = {1.26801, 0.0, 1.26801};
