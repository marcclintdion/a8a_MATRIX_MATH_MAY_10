void CG_initialize(void)
{
    cgVertexProfile		= cgGLGetLatestProfile(CG_GL_VERTEX);
	cgFragmentProfile	= cgGLGetLatestProfile(CG_GL_FRAGMENT);
	
    cgGLSetOptimalOptions(cgVertexProfile);
	cgGLSetOptimalOptions(cgFragmentProfile);
    
    cgContext           = cgCreateContext();
    
    cgVertexProgram = cgCreateProgramFromFile(cgContext,
                                              CG_SOURCE,
                                              "CG_ENVIRO_MAPPING/oglu_per_vertex_reflective_environment_mapping_vs.cg",
                                              cgVertexProfile, 
                                              NULL, 
                                              NULL);	
cgGLLoadProgram(cgVertexProgram);
enviroCgVertexParam_lightPosition =  cgGetNamedParameter(cgVertexProgram, "lightPosition");
enviroCgVertexParam_globalAmbient =  cgGetNamedParameter(cgVertexProgram, "globalAmbient");    
enviroCgVertexParam_lightColor    =  cgGetNamedParameter(cgVertexProgram, "lightColor");  
//enviroCgVertexParam_Ke            =  cgGetNamedParameter(cgVertexProgram, "Ke");
enviroCgVertexParam_Ka            =  cgGetNamedParameter(cgVertexProgram, "Ka");    
enviroCgVertexParam_Kd            =  cgGetNamedParameter(cgVertexProgram, "Kd");  
enviroCgVertexParam_Ks            =  cgGetNamedParameter(cgVertexProgram, "Ks");
enviroCgVertexParam_shininess     =  cgGetNamedParameter(cgVertexProgram, "shininess"); 
enviroCgVertexParam_time     =  cgGetNamedParameter(cgVertexProgram, "time"); 
    


    cgModelViewProj = cgGetNamedParameter(cgVertexProgram, "ModelViewProj");
	cgModelView		= cgGetNamedParameter(cgVertexProgram, "ModelView");
	cgModelViewI	= cgGetNamedParameter(cgVertexProgram, "ModelViewI");
	cgModelViewIT	= cgGetNamedParameter(cgVertexProgram, "ModelViewIT");
	cgPosition		= cgGetNamedParameter(cgVertexProgram, "position");
	cgNormal		= cgGetNamedParameter(cgVertexProgram, "N");
	cgTexcoords		= cgGetNamedParameter(cgVertexProgram, "texCoord");
	cgEyePosition	= cgGetNamedParameter(cgVertexProgram, "eyePosition");
	
	cgGLSetParameter3f(cgEyePosition, 0, 0, 0);
    

    
    
   




    cgFragmentProgram = cgCreateProgramFromFile(cgContext, 
                                                CG_SOURCE, 
                                                "CG_ENVIRO_MAPPING/oglu_per_vertex_reflective_environment_mapping_ps.cg",
											    cgFragmentProfile, 
                                                NULL, 
                                                NULL );
    cgGLLoadProgram(cgFragmentProgram);

    
    cgEnvironmentMap = cgGetNamedParameter(cgFragmentProgram, "environmentMap");
    loadCubeMap();
    cgGLSetTextureParameter(cgEnvironmentMap, cubemapTexture[0]);
}

