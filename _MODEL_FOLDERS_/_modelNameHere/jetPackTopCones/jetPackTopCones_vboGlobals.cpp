GLuint jetPackTopCones_vboID   =  225 ;

GLuint jetPackTopCones_SHADER;
GLuint jetPackTopCones_SHADER_Vertex;
GLuint jetPackTopCones_SHADER_Fragment;

#include "jetPackTopCones_VERT.cpp"
#include "jetPackTopCones_NORM.cpp"
#include "jetPackTopCones_TEX.cpp"
GLfloat lightPos_jetPackTopCones[]               =  {3.969, 82.575, 132.685};
GLfloat lightAttenuation_jetPackTopCones         =   1.283;

GLfloat rotation_AXIS_jetPackTopCones[]          =  {1.0, 1.0, 1.0};
GLfloat jetPackTopCones_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     jetPackTopCones_counter              = 0;
GLuint      UNIFORM_counter_jetPackTopCones;

GLfloat     LightAmbient_jetPackTopCones[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_jetPackTopCones[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_jetPackTopCones[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_jetPackTopCones[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_jetPackTopCones[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_jetPackTopCones[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_jetPackTopCones[]   = { 0.0, 0, 0};
GLfloat     MaterialShininess_jetPackTopCones   =  10.000;
GLfloat     scalejetPackTopConesShadowY[]            = {1.26801, 0.0, 1.26801};
