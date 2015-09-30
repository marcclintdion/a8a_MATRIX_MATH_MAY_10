static CGcontext   cgGL_00_CgContext;
static CGprofile   cgGL_00_CgVertexProfile,
                   cgGL_00_CgFragmentProfile;

static CGprogram   cgGL_00_CgVertexProgram,
                   cgGL_00_CgFragmentProgram;

static CGparameter cgGL_00_CgVertexParam_constantColor,
                   cgGL_00VertexParam_counter, 
                   modelViewMatrix,
                   cgGL_00VertexParam_globalAmbient,
                   cgGL_00VertexParam_lightColor,
                   cgGL_00VertexParam_lightPosition,
                   cgGL_00VertexParam_eyePosition,
                   cgGL_00VertexParam_Ke,
                   cgGL_00VertexParam_Ka,
                   cgGL_00VertexParam_Kd,
                   cgGL_00VertexParam_Ks,
                   cgGL_00VertexParam_shininess,
                   
                   
                   cgGL_00FragmentParam_Ke,
                   cgGL_00FragmentParam_Ka,
                   cgGL_00FragmentParam_Kd,
                   cgGL_00FragmentParam_Ks,

                   cgGL_00FragmentParam_shininess,
                   cgGL_00VertexParam_decal,
                   cgGL_00FragmentParam_decal,
                   cgGL_00FragmentParam_lightPosition;

static const char *cgGL_00_ProgramName = "03_uniform_parameter",
                  *cgGL_00_VertexProgramFileName = "RENDER_CG_FUNCTIONS/C3E1v_anycolor.cg",
/* Page 62 */     *cgGL_00_VertexProgramName = "C3E1v_anycolor",
                  *cgGL_00_FragmentProgramFileName = "RENDER_CG_FUNCTIONS/C2E2f_passthru.cg",
/* Page 53 */     *cgGL_00_FragmentProgramName = "C2E2f_passthru";



void Setup_cgGL_00(void)
{ 
int textureMap = 0;
static float myGlobalAmbient[3] = { 0.1, 0.1, 0.1 };
static float myLightColor[3] = { 0.95, 0.95, 0.95 };
  
  cgGL_00_CgContext = cgCreateContext();



  cgGL_00_CgVertexProfile = cgGLGetLatestProfile(CG_GL_VERTEX);
  cgGLSetOptimalOptions(cgGL_00_CgVertexProfile);


  cgGL_00_CgVertexProgram =
    cgCreateProgramFromFile(
      cgGL_00_CgContext,              /* Cg runtime context */
      CG_SOURCE,                /* Program in human-readable form */
      cgGL_00_VertexProgramFileName,  /* Name of file containing program */
      cgGL_00_CgVertexProfile,        /* Profile: OpenGL ARB vertex program */
      cgGL_00_VertexProgramName,      /* Entry function name */
      NULL);                    /* No extra compiler options */

  cgGLLoadProgram(cgGL_00_CgVertexProgram);
  
  cgGL_00_CgVertexParam_constantColor = cgGetNamedParameter(cgGL_00_CgVertexProgram, "constantColor");
  modelViewMatrix	= cgGetNamedParameter(cgGL_00_CgVertexProgram, "ModelViewProj");
  
  cgGL_00VertexParam_globalAmbient 	= cgGetNamedParameter(cgGL_00_CgVertexProgram, "globalAmbient");
  cgGL_00VertexParam_lightColor	    = cgGetNamedParameter(cgGL_00_CgVertexProgram, "lightColor");
  cgGL_00VertexParam_lightPosition	    = cgGetNamedParameter(cgGL_00_CgVertexProgram, "lightPosition");
  cgGL_00VertexParam_eyePosition	    = cgGetNamedParameter(cgGL_00_CgVertexProgram, "eyePosition");
  cgGL_00VertexParam_Ke	            = cgGetNamedParameter(cgGL_00_CgVertexProgram, "Ke");
  cgGL_00VertexParam_Ka	            = cgGetNamedParameter(cgGL_00_CgVertexProgram, "Ka");
  cgGL_00VertexParam_Kd	            = cgGetNamedParameter(cgGL_00_CgVertexProgram, "Kd");
  cgGL_00VertexParam_Ks	            = cgGetNamedParameter(cgGL_00_CgVertexProgram, "Ks");
  cgGL_00VertexParam_shininess	        = cgGetNamedParameter(cgGL_00_CgVertexProgram, "shininess");
  
  
  cgGL_00VertexParam_decal	        = cgGetNamedParameter(cgGL_00_CgVertexProgram, "decal");
   
  cgSetParameter3fv(cgGL_00VertexParam_globalAmbient, myGlobalAmbient);
  cgSetParameter3fv(cgGL_00VertexParam_lightColor, myLightColor);
  
  cgGL_00VertexParam_counter = cgGetNamedParameter(cgGL_00_CgVertexProgram, "keyFrameBlend");
 
  cgGL_00VertexParam_lightPosition = cgGetNamedParameter(cgGL_00_CgVertexProgram, "lightPosition");
  
  
  cgGL_00_CgFragmentProfile = cgGLGetLatestProfile(CG_GL_FRAGMENT);
  cgGLSetOptimalOptions(cgGL_00_CgFragmentProfile);


  cgGL_00_CgFragmentProgram =
    cgCreateProgramFromFile(
      cgGL_00_CgContext,                /* Cg runtime context */
      CG_SOURCE,                  /* Program in human-readable form */
      cgGL_00_FragmentProgramFileName,  /* Name of file containing program */
      cgGL_00_CgFragmentProfile,        /* Profile: OpenGL ARB vertex program */
      cgGL_00_FragmentProgramName,      /* Entry function name */
      NULL);                      /* No extra compiler options */
 
  cgGLLoadProgram(cgGL_00_CgFragmentProgram);

  cgGL_00FragmentParam_lightPosition       = cgGetNamedParameter(cgGL_00_CgFragmentProgram, "lightPosition");
  cgGL_00FragmentParam_Ke	            = cgGetNamedParameter(cgGL_00_CgFragmentProgram, "Ke");
  cgGL_00FragmentParam_Ka	            = cgGetNamedParameter(cgGL_00_CgFragmentProgram, "Ka");
  cgGL_00FragmentParam_Kd	            = cgGetNamedParameter(cgGL_00_CgFragmentProgram, "Kd");
  cgGL_00FragmentParam_Ks	            = cgGetNamedParameter(cgGL_00_CgFragmentProgram, "Ks");
  cgGL_00FragmentParam_shininess	        = cgGetNamedParameter(cgGL_00_CgFragmentProgram, "shininess");
  
  cgGL_00FragmentParam_decal = cgGetNamedParameter(cgGL_00_CgFragmentProgram, "decal");
 cgGLSetTextureParameter(cgGL_00FragmentParam_decal, textureMap);
}

