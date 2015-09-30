void loadCubeMap( void ) 
{

	AUX_RGBImageRec *pTextureImage = NULL;

	glGenTextures( 1, &cubemapTexture[0] );
	glBindTexture( GL_TEXTURE_CUBE_MAP_ARB, cubemapTexture[0] );

	int j;
	for ( j=0; j < 6; j++ )
	{
		pTextureImage = auxDIBImageLoad( g_cCubemaps[j] );

		if( pTextureImage != NULL ) {

			gluBuild2DMipmaps( g_uiCubeMapConstants[j], GL_RGB8, pTextureImage->sizeX, pTextureImage->sizeY,    GL_RGB, GL_UNSIGNED_BYTE, pTextureImage->data );
		}


		if( pTextureImage ) {

			// Release all data, since OpenGL holds its own copy of the textures
			if( pTextureImage->data )
				free( pTextureImage->data );
			free( pTextureImage );
		}
	}


	glTexParameteri( GL_TEXTURE_CUBE_MAP_ARB, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE );
	glTexParameteri( GL_TEXTURE_CUBE_MAP_ARB, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE );
	glTexParameteri( GL_TEXTURE_CUBE_MAP_ARB, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE );
	glTexParameteri( GL_TEXTURE_CUBE_MAP_ARB, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexParameteri( GL_TEXTURE_CUBE_MAP_ARB, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
	glTexParameteri( GL_TEXTURE_CUBE_MAP_ARB, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
	glTexParameterf( GL_TEXTURE_CUBE_MAP_ARB, GL_TEXTURE_MAX_ANISOTROPY_EXT, 8.0f );
}
