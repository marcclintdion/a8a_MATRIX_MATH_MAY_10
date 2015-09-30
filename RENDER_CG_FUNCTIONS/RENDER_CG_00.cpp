void CG_RENDER_CUBEMAP(void)
{
glPushMatrix();    
        glTranslatef(0, 0.0f, 1.5f);                                          
        //glRotatef(spinFloat -25, 0.0f, 0.0f, 1.0f);  spinFloat += 0.0;
        glRotatef(90, 1.0, 0.0,0.0);
    
    
    cgGLBindProgram( cgVertexProgram );
	cgGLBindProgram( cgFragmentProgram );
	cgGLEnableProfile( cgVertexProfile );
    cgGLEnableProfile( cgFragmentProfile );

    cgGLEnableTextureParameter( cgEnvironmentMap );
    cgGLSetStateMatrixParameter( cgModelViewProj,	CG_GL_MODELVIEW_PROJECTION_MATRIX,	CG_GL_MATRIX_IDENTITY );
	cgGLSetStateMatrixParameter( cgModelView,		CG_GL_MODELVIEW_MATRIX,				CG_GL_MATRIX_IDENTITY );
	cgGLSetStateMatrixParameter( cgModelViewI,		CG_GL_MODELVIEW_MATRIX,				CG_GL_MATRIX_INVERSE );
	cgGLSetStateMatrixParameter( cgModelViewIT,		CG_GL_MODELVIEW_MATRIX,				CG_GL_MATRIX_INVERSE_TRANSPOSE );

        glInterleavedArrays( GL_T2F_N3F_V3F, 0, MeTooB);                        
        glDrawArrays( GL_TRIANGLES, 0, 7608); 

	cgGLDisableTextureParameter( cgEnvironmentMap );
    cgGLDisableProfile( cgVertexProfile );
    cgGLDisableProfile( cgFragmentProfile );
glPopMatrix();
}
