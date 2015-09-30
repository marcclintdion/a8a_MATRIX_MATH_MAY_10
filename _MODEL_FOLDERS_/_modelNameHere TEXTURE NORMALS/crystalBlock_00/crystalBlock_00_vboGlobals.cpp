GLuint  crystalBlock_00_vboID   =  441 ;

GLuint  crystalBlock_00_SHADER;
GLuint  crystalBlock_00_SHADER_Vertex;
GLuint  crystalBlock_00_SHADER_Fragment;

#include "crystalBlock_00_VERT.cpp"
#include "crystalBlock_00_NORM.cpp"
#include "crystalBlock_00_TEX.cpp"
GLfloat lightPos_crystalBlock_00[]               =  {0.132818, 30.1442, -4.0103};
GLfloat lightAttenuation_crystalBlock_00         =   0.774731;

GLfloat MaterialShininess_crystalBlock_00        =  16.7859;

GLfloat rotation_AXIS_crystalBlock_00[]          =  {1.0, 1.0, 1.0};
GLfloat crystalBlock_00_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     crystalBlock_00_counter              = 0;
GLuint      UNIFORM_counter_crystalBlock_00;

GLfloat     LightAmbient_crystalBlock_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_crystalBlock_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_crystalBlock_00[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_crystalBlock_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_crystalBlock_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_crystalBlock_00[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_crystalBlock_00[]   = { 0.0, 0, 0};
GLfloat     scalecrystalBlock_00ShadowY[]            = {1.26801, 0.0, 1.26801};
