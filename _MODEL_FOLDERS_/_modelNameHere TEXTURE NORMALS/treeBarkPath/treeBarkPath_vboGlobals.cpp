GLuint  treeBarkPath_vboID   =  400 ;

GLuint  treeBarkPath_SHADER;
GLuint  treeBarkPath_SHADER_Vertex;
GLuint  treeBarkPath_SHADER_Fragment;

#include "treeBarkPath_VERT.cpp"
#include "treeBarkPath_NORM.cpp"
#include "treeBarkPath_TEX.cpp"
GLfloat lightPos_treeBarkPath[]               =  {0.132818, 30.1442, -4.0103};
GLfloat lightAttenuation_treeBarkPath         =   0.774731;

GLfloat MaterialShininess_treeBarkPath        =  16.7859;

GLfloat rotation_AXIS_treeBarkPath[]          =  {1.0, 1.0, 1.0};
GLfloat treeBarkPath_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     treeBarkPath_counter              = 0;
GLuint      UNIFORM_counter_treeBarkPath;

GLfloat     LightAmbient_treeBarkPath[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_treeBarkPath[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_treeBarkPath[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_treeBarkPath[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_treeBarkPath[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_treeBarkPath[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_treeBarkPath[]   = { 0.0, 0, 0};
GLfloat     scaletreeBarkPathShadowY[]            = {1.26801, 0.0, 1.26801};
