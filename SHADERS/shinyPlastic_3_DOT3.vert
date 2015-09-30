varying vec4 position;
varying vec4 Vertex;			
varying vec4 inverseEye;			

void main( void )
{
    Vertex = gl_ModelViewMatrix * gl_Vertex;
    inverseEye = gl_ModelViewMatrixInverse * vec4(0,0,-1,0);
    
    gl_TexCoord[0]    = gl_MultiTexCoord0;
    
    position          = gl_ModelViewProjectionMatrix * gl_Vertex;
    gl_Position       = position;
}
