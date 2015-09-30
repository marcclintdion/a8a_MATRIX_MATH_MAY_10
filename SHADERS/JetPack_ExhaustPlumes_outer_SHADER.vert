varying vec3 Normal;
varying vec3 invertPosition;
varying vec4 Color;
varying vec4 Position;
varying vec4 positionOfModelCenter;
varying vec4 rawPosition;

void main()
{
	rawPosition           = gl_Vertex;
    
    positionOfModelCenter = gl_Vertex;
    
    Position              = gl_ModelViewProjectionMatrix * gl_Vertex;
	
	Normal                = gl_NormalMatrix * gl_Normal;
	
	Color                 = gl_Color;
	
	gl_Position           = gl_ModelViewProjectionMatrix * gl_Vertex;	
} 

