varying vec4 position;

void main( void )
{
    gl_TexCoord[0]    = gl_MultiTexCoord0;
    
    position          = gl_ModelViewProjectionMatrix * gl_Vertex;
    gl_Position       = position;
}




/*
varying vec4 position;

void main( void )
{
	position    = gl_ModelViewMatrix           * gl_Vertex;
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

	gl_TexCoord[0] = gl_MultiTexCoord0;
}
*/
         
     // MarcPosition[0] = MarcPosition_MOVE_FRAMEA[0] * (1 - ME_animationBlendFactor) + MarcPosition_MOVE_FRAMEB[0] * ME_animationBlendFactor;
