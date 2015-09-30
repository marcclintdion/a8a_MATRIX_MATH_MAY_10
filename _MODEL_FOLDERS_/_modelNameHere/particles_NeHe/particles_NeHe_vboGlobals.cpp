GLuint particles_NeHe_vboID   =  515 ;

GLuint particles_NeHe_SHADER;
GLuint particles_NeHe_SHADER_Vertex;
GLuint particles_NeHe_SHADER_Fragment;

#include "particles_NeHe_VERT.cpp"
#include "particles_NeHe_NORM.cpp"
#include "particles_NeHe_TEX.cpp"
GLfloat lightPos_particles_NeHe[]               =  {-1.56117, 11.9431, 10.7077};
GLfloat lightAttenuation_particles_NeHe         =   1.283;

GLfloat     MaterialShininess_particles_NeHe   =  360.816;

GLfloat rotation_AXIS_particles_NeHe[]          =  {1.0, 1.0, 1.0};
GLfloat particles_NeHe_POSITION[]               =  {0.0, 0.0, 0.0};
GLfloat     particles_NeHe_counter              = 0;
GLuint      UNIFORM_counter_particles_NeHe;

GLfloat     LightAmbient_particles_NeHe[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightDiffuse_particles_NeHe[]       = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     LightSpecular_particles_NeHe[]      = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialAmbient_particles_NeHe[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialDiffuse_particles_NeHe[]    = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialEmission_particles_NeHe[]   = { 1.0f, 1.0f, 1.0f, 1.0f};
GLfloat     MaterialSpecular_particles_NeHe[]   = { 0.0, 0, 0};
GLfloat     scaleparticles_NeHeShadowY[]            = {1.26801, 0.0, 1.26801};
