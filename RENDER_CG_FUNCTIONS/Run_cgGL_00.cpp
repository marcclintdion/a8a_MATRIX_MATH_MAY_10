void Run_cgGL_00(void)
{
PNT_SZE = 2.0;
  glPointSize(PNT_SZE);

       cgGLBindProgram(cgGL_00_CgVertexProgram);
       cgGLEnableProfile(cgGL_00_CgVertexProfile);
       cgGLBindProgram(cgGL_00_CgFragmentProgram);
       cgGLEnableProfile(cgGL_00_CgFragmentProfile);
 
       setBrassMaterial();

       
       glPushMatrix();
       glRotatef(90.0f, 1.0f, 0.0f, 0.0f);            
             glTranslatef(-1.0f, 0.0f, 2.0f);
             if(cgGL_00_counterSWITCH)
             {
                   glRotatef(((cgGL_00counterVALUE*100.0f)-0.05f), 0.0f, 1.0f, 0.0f);
             }      
                    
             cgGLSetStateMatrixParameter(modelViewMatrix, CG_GL_MODELVIEW_PROJECTION_MATRIX, CG_GL_MATRIX_IDENTITY);
                   
             if(cgGL_00_counterSWITCH)
             {         
                   cgSetParameter1f(cgGL_00VertexParam_counter, cgGL_00counterVALUE);
                      
                   cgGL_00counterVALUE += cgGL_00counterINCREMENT;
                   cgGL_00counterINCREMENT -= 0.00001f;
                   
                   if(cgGL_00counterVALUE < 0.0)
                   {
                           cgGL_00counterVALUE = 0.0;
                           cgSetParameter1f(cgGL_00VertexParam_counter, cgGL_00counterVALUE);
                           RENDER_POINTS = false;       
                           RENDER_TRIANGLES = true;
                           cgGL_00_counterSWITCH = false;
                           cgGL_00counterINCREMENT = 0.005;
                   }
             }
             cgSetParameter3f(cgGL_00VertexParam_lightPosition,   cgGL_00_lightPositionX, cgGL_00_lightPositionY, cgGL_00_lightPositionZ);
             cgSetParameter3f(cgGL_00FragmentParam_lightPosition, cgGL_00_lightPositionX, cgGL_00_lightPositionY, cgGL_00_lightPositionZ);
                   
             cgUpdateProgramParameters(cgGL_00_CgVertexProgram);
             cgUpdateProgramParameters(cgGL_00_CgFragmentProgram);
                   
             glNormalPointer(GL_FLOAT, 0, MeTooB_NORM);
             glEnableClientState(GL_NORMAL_ARRAY);

 
  //glTexCoordPointer(3, GL_FLOAT, 6*sizeof(GLfloat), 
  //                  BUFFER_OFFSET(frameB*arrayIndicesPerFrame*6*sizeof(GLfloat)));
  //glEnableClientState(GL_TEXTURE_COORD_ARRAY);             
             
             
             glActiveTextureARB(GL_TEXTURE0_ARB);
             glTexCoordPointer(3, GL_FLOAT, 0, MeTooB_EXPLODED_VERT);
             glEnableClientState(GL_TEXTURE_COORD_ARRAY);
             glEnable(GL_TEXTURE_2D);
             
                 glActiveTextureARB(GL_TEXTURE1_ARB);
                 glTexCoordPointer(3, GL_FLOAT, 0, MeTooB_EXPLODED_VERT);
                 glEnableClientState(GL_TEXTURE_COORD_ARRAY);
                 glEnable(GL_TEXTURE_2D);


             glVertexPointer(3, GL_FLOAT, 0, MeTooB_VERT);
             glEnableClientState(GL_VERTEX_ARRAY);
                   
             if(RENDER_POINTS) glDrawArrays( GL_POINTS, 0, 7506); 
             if(RENDER_TRIANGLES) glDrawArrays( GL_TRIANGLES, 0, 7506);         
                  
      glPopMatrix();
       
       //PNT_SZE -= 0.3;
       cgGLDisableProfile(cgGL_00_CgVertexProfile);
       cgGLDisableProfile(cgGL_00_CgFragmentProfile);
}
