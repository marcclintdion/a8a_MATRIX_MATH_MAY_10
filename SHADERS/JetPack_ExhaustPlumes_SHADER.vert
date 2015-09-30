varying vec3 Normal;
varying vec3 invertPosition;
varying vec4 Color;
varying vec4 Position;

void main()
{
	Position    = gl_ModelViewMatrix * gl_Vertex;
	
	Normal      = gl_NormalMatrix    * gl_Normal;
	
	Color       = gl_Color;
	
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;	
} 
