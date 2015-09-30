varying vec4 position;
varying vec4 Vertex;			
varying vec4 inverseEye;			


varying vec4 oOsR;
varying float3 wsI;


void main( void )
{
    Vertex            = gl_ModelViewMatrixInverseTranspose * gl_Vertex;
    wsI               = Vertex *-1;
    
    
    
    inverseEye        = gl_ModelViewMatrixInverseTranspose    * vec4(0,0,-1,0);
    
    gl_TexCoord[0]    = gl_MultiTexCoord0;
    
    
    position          = gl_ModelViewProjectionMatrix * gl_Vertex;
    gl_Position       = position;
}
