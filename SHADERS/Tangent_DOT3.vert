varying vec4 position;


void main( void )
{
     position       = gl_ModelViewMatrix * gl_Vertex;

    
    gl_Position    = gl_ModelViewProjectionMatrix * gl_Vertex;

	gl_TexCoord[0] = gl_MultiTexCoord0;
}
