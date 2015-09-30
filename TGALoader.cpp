/********************************************************************************
/Name:		TGA.cpp																*
/Header:	tga.h																*
/Purpose:	Load Compressed and Uncompressed TGA files							*
/Functions:	LoadTGA(TGA_Texture * TGA_Texture, char * filename)							*
/			LoadCompressedTGA(TGA_Texture * TGA_Texture, char * filename, FILE * fTGA)	*
/			LoadUncompressedTGA(TGA_Texture * TGA_Texture, char * filename, FILE * fTGA)*	
/*******************************************************************************/
typedef	struct									
{
	GLubyte	* imageData;								
	GLuint	bpp;										
	GLuint	width;											
	GLuint	height;											
	GLuint	texID;											
	GLuint	type;											
}TGA_Texture;	

typedef struct
{
	GLubyte Header[12];								
}TGAHeader;

typedef struct
{
	GLubyte		header[6];							
	GLuint		bytesPerPixel;							
	GLuint		imageSize;							
	GLuint		temp;									
	GLuint		type;	
	GLuint		Height;									
	GLuint		Width;									
	GLuint		Bpp;									
}TGA;

TGAHeader tgaheader;									
TGA tga;												


GLubyte uTGAcompare[12] = {0,0,2, 0,0,0,0,0,0,0,0,0};	
GLubyte cTGAcompare[12] = {0,0,10,0,0,0,0,0,0,0,0,0};	
bool    LoadUncompressedTGA(TGA_Texture*, char*, FILE*);
bool    LoadCompressedTGA(TGA_Texture*, char*, FILE*);	


bool LoadTGA(TGA_Texture *TGA_Texture, char *filename)			
{
	FILE * fTGA;											
	fTGA = fopen(filename, "rb");							

	if(fTGA == NULL)										
	{
		MessageBox(NULL, "Could not open TGA_Texture file", "ERROR", MB_OK);	
		return false;													
	}

	if(fread(&tgaheader, sizeof(TGAHeader), 1, fTGA) == 0)					
	{
		MessageBox(NULL, "Could not read file header", "ERROR", MB_OK);		
		if(fTGA != NULL)													
		{
			fclose(fTGA);												
		}
		return false;													
	}

	if(memcmp(uTGAcompare, &tgaheader, sizeof(tgaheader)) == 0)				
	{																		
		LoadUncompressedTGA(TGA_Texture, filename, fTGA);					
	}
	else if(memcmp(cTGAcompare, &tgaheader, sizeof(tgaheader)) == 0)		
	{																		
		LoadCompressedTGA(TGA_Texture, filename, fTGA);							
	}
	else																
	{
		MessageBox(NULL, "TGA file be type 2 or type 10 ", "Invalid Image", MB_OK);	
		fclose(fTGA);
		return false;																
	}
	return true;															
}

bool LoadUncompressedTGA(TGA_Texture *TGA_Texture, char *filename, FILE *fTGA)	
{																			
	if(fread(tga.header, sizeof(tga.header), 1, fTGA) == 0)				
	{										
		MessageBox(NULL, "Could not read info header", "ERROR", MB_OK);	
		if(fTGA != NULL)												
		{
			fclose(fTGA);												
		}
		return false;													
	}	

	TGA_Texture->width  = tga.header[1] * 256 + tga.header[0];					
	TGA_Texture->height = tga.header[3] * 256 + tga.header[2];					
	TGA_Texture->bpp	= tga.header[4];									
	tga.Width		= TGA_Texture->width;														
	tga.Height		= TGA_Texture->height;										
	tga.Bpp			= TGA_Texture->bpp;											

	if((TGA_Texture->width <= 0) || (TGA_Texture->height <= 0) || ((TGA_Texture->bpp != 24) && (TGA_Texture->bpp !=32)))	
	{
		MessageBox(NULL, "Invalid TGA_Texture information", "ERROR", MB_OK);	
		if(fTGA != NULL)													
		{
			fclose(fTGA);													
		}
		return false;													
	}

	if(TGA_Texture->bpp == 24)												
	{
		TGA_Texture->type	= GL_RGB;											
	}
	else																	
	{
		TGA_Texture->type	= GL_RGBA;										
	}

	tga.bytesPerPixel	= (tga.Bpp / 8);									
	tga.imageSize		= (tga.bytesPerPixel * tga.Width * tga.Height);		
	TGA_Texture->imageData	= (GLubyte *)malloc(tga.imageSize);				

	if(TGA_Texture->imageData == NULL)											
	{
		MessageBox(NULL, "Could not allocate memory for image", "ERROR", MB_OK);	
		fclose(fTGA);													
		return false;														
	}

	if(fread(TGA_Texture->imageData, 1, tga.imageSize, fTGA) != tga.imageSize)
	{
		MessageBox(NULL, "Could not read image data", "ERROR", MB_OK);		
		if(TGA_Texture->imageData != NULL)										
		{
			free(TGA_Texture->imageData);									
		}
		fclose(fTGA);														
		return false;														
	}


	for(GLuint cswap = 0; cswap < (int)tga.imageSize; cswap += tga.bytesPerPixel)
	{
		TGA_Texture->imageData[cswap] ^= TGA_Texture->imageData[cswap+2] ^=
		TGA_Texture->imageData[cswap] ^= TGA_Texture->imageData[cswap+2];
	}

	fclose(fTGA);															
	return true;														
}

bool LoadCompressedTGA(TGA_Texture *TGA_Texture, char *filename, FILE *fTGA)		
{ 
	if(fread(tga.header, sizeof(tga.header), 1, fTGA) == 0)					
	{
		MessageBox(NULL, "Could not read info header", "ERROR", MB_OK);	
		if(fTGA != NULL)												
		{
			fclose(fTGA);													
		}
		return false;														
	}

	TGA_Texture->width  = tga.header[1] * 256 + tga.header[0];				
	TGA_Texture->height = tga.header[3] * 256 + tga.header[2];					
	TGA_Texture->bpp	= tga.header[4];										
	tga.Width		= TGA_Texture->width;										
	tga.Height		= TGA_Texture->height;									
	tga.Bpp			= TGA_Texture->bpp;										

	if((TGA_Texture->width <= 0) || (TGA_Texture->height <= 0) || ((TGA_Texture->bpp != 24) && (TGA_Texture->bpp !=32)))
	{
		MessageBox(NULL, "Invalid TGA_Texture information", "ERROR", MB_OK);
		if(fTGA != NULL)													
		{
			fclose(fTGA);													
		}
		return false;													
	}

	tga.bytesPerPixel	= (tga.Bpp / 8);									
	tga.imageSize		= (tga.bytesPerPixel * tga.Width * tga.Height);		
	TGA_Texture->imageData	= (GLubyte *)malloc(tga.imageSize);					

	if(TGA_Texture->imageData == NULL)											
	{
		MessageBox(NULL, "Could not allocate memory for image", "ERROR", MB_OK);
		fclose(fTGA);														
		return false;														
	}

	GLuint pixelcount	= tga.Height * tga.Width;							
	GLuint currentpixel	= 0;												
	GLuint currentbyte	= 0;												
	GLubyte * colorbuffer = (GLubyte *)malloc(tga.bytesPerPixel);			

	do
	{
		GLubyte chunkheader = 0;										

		if(fread(&chunkheader, sizeof(GLubyte), 1, fTGA) == 0)				
		{
			MessageBox(NULL, "Could not read RLE header", "ERROR", MB_OK);	
			if(fTGA != NULL)												
			{
				fclose(fTGA);											
			}
			if(TGA_Texture->imageData != NULL)									
			{
				free(TGA_Texture->imageData);									
			}
			return false;												
		}

		if(chunkheader < 128)												
		{																	
			chunkheader++;													
			for(short counter = 0; counter < chunkheader; counter++)	
			{
				if(fread(colorbuffer, 1, tga.bytesPerPixel, fTGA) != tga.bytesPerPixel) 
				{
					MessageBox(NULL, "Could not read image data", "ERROR", MB_OK);		

					if(fTGA != NULL)												
					{
						fclose(fTGA);													
					}

					if(colorbuffer != NULL)											
					{
						free(colorbuffer);											
					}

					if(TGA_Texture->imageData != NULL)									
					{
						free(TGA_Texture->imageData);										
					}

					return false;														
				}
																					
				TGA_Texture->imageData[currentbyte		] = colorbuffer[2];				    
				TGA_Texture->imageData[currentbyte + 1	] = colorbuffer[1];
				TGA_Texture->imageData[currentbyte + 2	] = colorbuffer[0];

				if(tga.bytesPerPixel == 4)											
				{
					TGA_Texture->imageData[currentbyte + 3] = colorbuffer[3];				
				}

				currentbyte += tga.bytesPerPixel;										
				currentpixel++;															

				if(currentpixel > pixelcount)											
				{
					MessageBox(0, "Too many pixels read", "ERROR", 0);		

					if(fTGA != NULL)												
					{
						fclose(fTGA);													
					}	

					if(colorbuffer != NULL)										
					{
						free(colorbuffer);												
					}

					if(TGA_Texture->imageData != NULL)										
					{
						free(TGA_Texture->imageData);										
					}

					return false;													
				}
			}
		}
		else																			
		{
			chunkheader -= 127;															
			if(fread(colorbuffer, 1, tga.bytesPerPixel, fTGA) != tga.bytesPerPixel)	
			{	
				MessageBox(NULL, "Could not read from file", "ERROR", MB_OK);		

				if(fTGA != NULL)														
				{
					fclose(fTGA);													
				}

				if(colorbuffer != NULL)												
				{
					free(colorbuffer);													
				}

				if(TGA_Texture->imageData != NULL)											
				{
					free(TGA_Texture->imageData);											
				}

				return false;														
			}

			for(short counter = 0; counter < chunkheader; counter++)				
			{																			
				TGA_Texture->imageData[currentbyte		] = colorbuffer[2];				
				TGA_Texture->imageData[currentbyte + 1	] = colorbuffer[1];
				TGA_Texture->imageData[currentbyte + 2	] = colorbuffer[0];

				if(tga.bytesPerPixel == 4)												
				{
					TGA_Texture->imageData[currentbyte + 3] = colorbuffer[3];			
				}

				currentbyte += tga.bytesPerPixel;										
				currentpixel++;															

				if(currentpixel > pixelcount)										
				{
					MessageBox(0, "Too many pixels read", "ERROR", 0);		
					if(fTGA != NULL)													
					{
						fclose(fTGA);													
					}	

					if(colorbuffer != NULL)											
					{
						free(colorbuffer);											
					}

					if(TGA_Texture->imageData != NULL)										
					{
						free(TGA_Texture->imageData);										
					}

					return false;													
				}
			}
		}
	}
    while(currentpixel < pixelcount);													
	fclose(fTGA);																	
	return true;																	
}
