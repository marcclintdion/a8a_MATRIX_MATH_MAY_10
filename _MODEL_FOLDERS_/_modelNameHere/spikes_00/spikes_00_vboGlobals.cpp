GLuint spikes_00_vboID   =  16 ;

GLuint spikes_00_SHADER;
GLuint spikes_00_SHADER_Vertex;
GLuint spikes_00_SHADER_Fragment;

#include "spikes_00_VERT.cpp"
#include "spikes_00_NORM.cpp"
#include "spikes_00_TEX.cpp"
GLfloat lightPos_spikes_00[]               =  {-1.56117, 11.9431, 10.7077};
GLfloat lightAttenuation_spikes_00         =   1.283;

GLfloat     MaterialShininess_spikes_00   =  360.816;

GLfloat rotation_AXIS_spikes_00[]          =  {1.0, 1.0, 1.0};
GLfloat spikes_00_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     spikes_00_counter              = 0;
GLuint      UNIFORM_counter_spikes_00;

GLfloat     LightAmbient_spikes_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_spikes_00[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_spikes_00[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_spikes_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_spikes_00[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_spikes_00[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_spikes_00[]   = { 0.0, 0, 0};
GLfloat     scalespikes_00ShadowY[]            = {1.26801, 0.0, 1.26801};
