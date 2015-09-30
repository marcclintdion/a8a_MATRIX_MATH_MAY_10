static float GlobalAmbient[3] = { 0.1, 0.1, 0.1 };  /* Dim */
static float LightColor[3] = { 0.95, 0.95, 0.95 };  /* White */

////////////////////________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING
////////////////////________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING
////////////////////________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING
////////////////////________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING
////////////////////________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING________________CG_ENVIROMAPPING


 GLfloat mudBallTimer_EmissionChannel[]  = {0.0f, 0.0f, 0.0f, 0.0f};


      


unsigned char *readShaderFile( const char *fileName )
{
    FILE *file = fopen( fileName, "r" );

    if( file == NULL )
    {
        MessageBox( NULL, "Cannot open shader file!", "ERROR",
            MB_OK | MB_ICONEXCLAMATION );
		return 0;
    }

    struct _stat fileStats;

    if( _stat( fileName, &fileStats ) != 0 )
    {
        MessageBox( NULL, "Cannot get file stats for shader file!", "ERROR",
                    MB_OK | MB_ICONEXCLAMATION );
        return 0;
    }

    unsigned char *buffer = new unsigned char[fileStats.st_size];

	int bytes = fread( buffer, 1, fileStats.st_size, file );

    buffer[bytes] = 0;

	fclose( file );

	return buffer;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////____________________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP
/////////////////____________________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP
/////////////////____________________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP
/////////////////____________________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP
/////////////////____________________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP_____________SHADER_SETUP
   
     PFNGLCREATEPROGRAMOBJECTARBPROC  glCreateProgramObjectARB  = NULL;
     PFNGLDELETEOBJECTARBPROC         glDeleteObjectARB         = NULL;
     PFNGLUSEPROGRAMOBJECTARBPROC     glUseProgramObjectARB     = NULL;
     PFNGLCREATESHADEROBJECTARBPROC   glCreateShaderObjectARB   = NULL;
     PFNGLSHADERSOURCEARBPROC         glShaderSourceARB         = NULL;
     PFNGLCOMPILESHADERARBPROC        glCompileShaderARB        = NULL;
     PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB = NULL;
     PFNGLATTACHOBJECTARBPROC         glAttachObjectARB         = NULL;
     PFNGLGETINFOLOGARBPROC           glGetInfoLogARB           = NULL;
     PFNGLLINKPROGRAMARBPROC          glLinkProgramARB          = NULL;
     PFNGLGETUNIFORMLOCATIONARBPROC   glGetUniformLocationARB   = NULL;
     PFNGLGETATTRIBLOCATIONARBPROC    glGetAttribLocationARB    = NULL;
     PFNGLBINDATTRIBLOCATIONARBPROC   glBindAttribLocationARB    = NULL;     
     PFNGLUNIFORM1IARBPROC			  glUniform1iARB		    = NULL;
     PFNGLUNIFORM1FARBPROC            glUniform1fARB            = NULL; 
     PFNGLUNIFORM3FARBPROC			  glUniform3fARB			= NULL;     
     PFNGLUNIFORM4FARBPROC			  glUniform4fARB			= NULL;
     PFNGLUNIFORM3FVARBPROC           glUniform3fvARB           = NULL;     
     PFNGLUNIFORM4FVARBPROC           glUniform4fvARB           = NULL;
     PFNGLACTIVETEXTUREARBPROC		  glActiveTextureARB		= NULL;
     PFNGLUNIFORMMATRIX4FVARBPROC     glUniformMatrix4fvARB     = NULL;
     PFNGLMULTITEXCOORD2FARBPROC      glMultiTexCoord2fARB      = NULL;
     PFNGLMULTITEXCOORD3FARBPROC      glMultiTexCoord3fARB      = NULL;
     PFNGLMULTITEXCOORD2FVARBPROC     glMultiTexCoord2fvARB     = NULL;
     PFNGLMULTITEXCOORD3FVARBPROC     glMultiTexCoord3fvARB     = NULL;          
     PFNGLCLIENTACTIVETEXTUREARBPROC  glClientActiveTextureARB  = NULL;     
     

PFNGLGENFRAMEBUFFERSEXTPROC                     pglGenFramebuffersEXT = 0;                      
PFNGLDELETEFRAMEBUFFERSEXTPROC                  pglDeleteFramebuffersEXT = 0;                   
PFNGLBINDFRAMEBUFFEREXTPROC                     pglBindFramebufferEXT = 0;                     
PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC              pglCheckFramebufferStatusEXT = 0;              
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC pglGetFramebufferAttachmentParameterivEXT = 0;  
PFNGLGENERATEMIPMAPEXTPROC                      pglGenerateMipmapEXT = 0;                       
PFNGLFRAMEBUFFERTEXTURE2DEXTPROC                pglFramebufferTexture2DEXT = 0;             
PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC             pglFramebufferRenderbufferEXT = 0;            

PFNGLGENRENDERBUFFERSEXTPROC                    pglGenRenderbuffersEXT = 0;                  
PFNGLDELETERENDERBUFFERSEXTPROC                 pglDeleteRenderbuffersEXT = 0;                 
PFNGLBINDRENDERBUFFEREXTPROC                    pglBindRenderbufferEXT = 0;                     
PFNGLRENDERBUFFERSTORAGEEXTPROC                 pglRenderbufferStorageEXT = 0;                  
PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC          pglGetRenderbufferParameterivEXT = 0;         
PFNGLISRENDERBUFFEREXTPROC                      pglIsRenderbufferEXT = 0;                      

#define glGenFramebuffersEXT                        pglGenFramebuffersEXT
#define glDeleteFramebuffersEXT                     pglDeleteFramebuffersEXT
#define glBindFramebufferEXT                        pglBindFramebufferEXT
#define glCheckFramebufferStatusEXT                 pglCheckFramebufferStatusEXT
#define glGetFramebufferAttachmentParameterivEXT    pglGetFramebufferAttachmentParameterivEXT
#define glGenerateMipmapEXT                         pglGenerateMipmapEXT
#define glFramebufferTexture2DEXT                   pglFramebufferTexture2DEXT
#define glFramebufferRenderbufferEXT                pglFramebufferRenderbufferEXT

#define glGenRenderbuffersEXT                       pglGenRenderbuffersEXT
#define glDeleteRenderbuffersEXT                    pglDeleteRenderbuffersEXT
#define glBindRenderbufferEXT                       pglBindRenderbufferEXT
#define glRenderbufferStorageEXT                    pglRenderbufferStorageEXT
#define glGetRenderbufferParameterivEXT             pglGetRenderbufferParameterivEXT
#define glIsRenderbufferEXT                         pglIsRenderbufferEXT

	   //glMultiTexCoord2fvARB      = (PFNGLMULTITEXCOORD2FvARBPROC)wglGetProcAddress("glMultiTexCoord2fvARB");
	  // glMultiTexCoord3fvARB      = (PFNGLMULTITEXCOORD3FvARBPROC)wglGetProcAddress("glMultiTexCoord3fvARB");
void Dot3shader( void )
{
    char *ext = (char*)glGetString( GL_EXTENSIONS );

    if( strstr( ext, "GL_ARB_shading_language_100" ) == NULL )
    {
        // This extension string indicates that the OpenGL Shading Language,
        // version 1.00, is supported.
        MessageBox(NULL,"GL_ARB_shading_language_100 extension was not found",
            "ERROR",MB_OK|MB_ICONEXCLAMATION);
        return;
    }

    if( strstr( ext, "GL_ARB_shader_objects" ) == NULL )
    {
        MessageBox(NULL,"GL_ARB_shader_objects extension was not found",
            "ERROR",MB_OK|MB_ICONEXCLAMATION);
        return;
    }
    else
    {
       glCreateProgramObjectARB  = (PFNGLCREATEPROGRAMOBJECTARBPROC)wglGetProcAddress("glCreateProgramObjectARB");
       glDeleteObjectARB         = (PFNGLDELETEOBJECTARBPROC)wglGetProcAddress("glDeleteObjectARB");
       glUseProgramObjectARB     = (PFNGLUSEPROGRAMOBJECTARBPROC)wglGetProcAddress("glUseProgramObjectARB");
       glCreateShaderObjectARB   = (PFNGLCREATESHADEROBJECTARBPROC)wglGetProcAddress("glCreateShaderObjectARB");
       glShaderSourceARB         = (PFNGLSHADERSOURCEARBPROC)wglGetProcAddress("glShaderSourceARB");
       glCompileShaderARB        = (PFNGLCOMPILESHADERARBPROC)wglGetProcAddress("glCompileShaderARB");
       glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC)wglGetProcAddress("glGetObjectParameterivARB");
       glAttachObjectARB         = (PFNGLATTACHOBJECTARBPROC)wglGetProcAddress("glAttachObjectARB");
       glGetInfoLogARB           = (PFNGLGETINFOLOGARBPROC)wglGetProcAddress("glGetInfoLogARB");
       glLinkProgramARB          = (PFNGLLINKPROGRAMARBPROC)wglGetProcAddress("glLinkProgramARB");
       glGetUniformLocationARB   = (PFNGLGETUNIFORMLOCATIONARBPROC)wglGetProcAddress("glGetUniformLocationARB");
       glGetAttribLocationARB    = (PFNGLGETATTRIBLOCATIONARBPROC)wglGetProcAddress("glGetAttribLocationARB");
       glBindAttribLocationARB   = (PFNGLBINDATTRIBLOCATIONARBPROC)wglGetProcAddress("glBindAttribLocationARB");
       glUniform1iARB			 = (PFNGLUNIFORM1IARBPROC)wglGetProcAddress("glUniform1iARB");
       glUniform3fARB			 = (PFNGLUNIFORM3FARBPROC)wglGetProcAddress("glUniform3fARB");       
       glUniform4fARB			 = (PFNGLUNIFORM4FARBPROC)wglGetProcAddress("glUniform4fARB");
       glActiveTextureARB        = (PFNGLACTIVETEXTUREARBPROC)wglGetProcAddress("glActiveTextureARB");
       glUniform1fARB            = (PFNGLUNIFORM1FARBPROC)wglGetProcAddress("glUniform1fARB");       
       glUniform3fvARB           = (PFNGLUNIFORM3FVARBPROC)wglGetProcAddress("glUniform3fvARB");       
       glUniform4fvARB           = (PFNGLUNIFORM4FVARBPROC)wglGetProcAddress("glUniform4fvARB");
       glUniformMatrix4fvARB     = (PFNGLUNIFORMMATRIX4FVARBPROC)wglGetProcAddress("glUniformMatrix4fvARB");
	   glMultiTexCoord2fARB      = (PFNGLMULTITEXCOORD2FARBPROC)wglGetProcAddress("glMultiTexCoord2fARB");
	   glMultiTexCoord3fARB      = (PFNGLMULTITEXCOORD3FARBPROC)wglGetProcAddress("glMultiTexCoord3fARB");
	   glMultiTexCoord2fvARB      = (PFNGLMULTITEXCOORD2FVARBPROC)wglGetProcAddress("glMultiTexCoord2fvARB");
	   glMultiTexCoord3fvARB      = (PFNGLMULTITEXCOORD3FVARBPROC)wglGetProcAddress("glMultiTexCoord3fvARB");                     	   
       glClientActiveTextureARB  = (PFNGLACTIVETEXTUREARBPROC)wglGetProcAddress("glClientActiveTextureARB");       
     


        if( !glCreateProgramObjectARB  || !glDeleteObjectARB       || !glUseProgramObjectARB ||
            !glCreateShaderObjectARB   || !glCreateShaderObjectARB || !glCompileShaderARB    || 
            !glGetObjectParameterivARB || !glAttachObjectARB       || !glGetInfoLogARB       || 
            !glLinkProgramARB          || !glGetUniformLocationARB || !glUniform4fARB        ||
			!glUniform1iARB            || !glMultiTexCoord2fARB    || !glClientActiveTextureARB)
        {
            MessageBox(NULL,"One or more GL_ARB_shader_objects functions were not found",
                "ERROR",MB_OK|MB_ICONEXCLAMATION);
            return;
        }
    }




    #include "_MODEL_FOLDERS_/matrixMathCube/matrixMathCube_shaderInit.cpp"//vboID = 520      


}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS

/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___BMP__TEXTURE_MAPS_______________________LOAD___BMP__TEXTURE_MAPS
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS

int LoadGLTextureTGA(char *textureFileName, GLuint &textureMapID)                                 
 {
    
    tgaImageFile tgaImage;
    tgaImage.load( textureFileName );
 
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glGenTextures( 1, &textureMapID );
    glEnable( GL_TEXTURE_2D );
    glBindTexture( GL_TEXTURE_2D, textureMapID );
    
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT_ARB );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_MIRRORED_REPEAT_ARB );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_NEAREST);
    gluBuild2DMipmaps(GL_TEXTURE_2D, tgaImage.m_texFormat, tgaImage.m_nImageWidth, tgaImage.m_nImageHeight, tgaImage.m_texFormat,  GL_UNSIGNED_BYTE, tgaImage.m_nImageData);

//-----------------------------------------------------------------------------
//           Name: ogl_alpha_blending_texture.cpp
//         Author: Kevin Harris
//  Last Modified: 03/25/05
return 0;
}
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
int LoadGLTextureTGA(char *textureFileName, char *normalMapFileName, GLuint &textureMapID, GLuint &normalMapID) 
{
      tgaImageFile tgaImage;
      tgaImage.load( textureFileName );
      
      glPixelStorei(GL_UNPACK_ALIGNMENT, 1);     
      glGenTextures( 1, &textureMapID );
      glEnable( GL_TEXTURE_2D );
      glBindTexture( GL_TEXTURE_2D, textureMapID );
      glPixelStorei( GL_UNPACK_ALIGNMENT, 1 );
	  glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_NEAREST );
	  glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST );
      gluBuild2DMipmaps(GL_TEXTURE_2D, tgaImage.m_texFormat, tgaImage.m_nImageWidth, 
                                       tgaImage.m_nImageHeight, tgaImage.m_texFormat, 
                                       GL_UNSIGNED_BYTE, tgaImage.m_nImageData);

      tgaImageFile tgaImage2;
      tgaImage2.load( textureFileName );
      
      glPixelStorei(GL_UNPACK_ALIGNMENT, 1);   
      glGenTextures( 1, &normalMapID );
      glEnable( GL_TEXTURE_2D );
      glBindTexture( GL_TEXTURE_2D, normalMapID );
      glPixelStorei( GL_UNPACK_ALIGNMENT, 1 );
	  glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_NEAREST );
	  glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST );
      gluBuild2DMipmaps(GL_TEXTURE_2D, tgaImage2.m_texFormat, tgaImage2.m_nImageWidth, 
                                      tgaImage2.m_nImageHeight, tgaImage2.m_texFormat, 
                                      GL_UNSIGNED_BYTE, tgaImage2.m_nImageData);    

  return 0;
                    //-----------------------------------------------------------------------------
//           Name: ogl_alpha_blending_texture.cpp
//         Author: Kevin Harris
//  Last Modified: 03/25/05
 }
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
/////////////////////////////////_______________________LOAD___TGA__TEXTURE_MAPS_______________________LOAD___TGA__TEXTURE_MAPS
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER
///////////__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER
///////////__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER
///////////__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER
///////////__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER__________________RUN_NMAP_SHADER



