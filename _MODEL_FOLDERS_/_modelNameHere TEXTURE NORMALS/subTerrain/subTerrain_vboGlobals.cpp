GLuint  subTerrain_vboID   =  800 ;

GLuint  subTerrain_SHADER;
GLuint  subTerrain_SHADER_Vertex;
GLuint  subTerrain_SHADER_Fragment;

#include "subTerrain_VERT.cpp"
#include "subTerrain_NORM.cpp"
#include "subTerrain_TEX.cpp"
GLfloat lightPos_subTerrain[]               =  {0.132818, 30.1442, -4.0103};
GLfloat lightAttenuation_subTerrain         =   0.774731;

GLfloat MaterialShininess_subTerrain        =  16.7859;

GLfloat rotation_AXIS_subTerrain[]          =  {1.0, 1.0, 1.0};
GLfloat subTerrain_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     subTerrain_counter              = 0;
GLuint      UNIFORM_counter_subTerrain;

GLfloat     LightAmbient_subTerrain[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_subTerrain[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_subTerrain[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_subTerrain[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_subTerrain[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_subTerrain[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_subTerrain[]   = { 0.0, 0, 0};
GLfloat     scalesubTerrainShadowY[]            = {1.26801, 0.0, 1.26801};
