varying vec4 pos;

uniform vec3  nMapLightPosition;
uniform float nMapLightAttenuation;

void main( void )
{
	//Get the vertex position
	pos = gl_ModelViewMatrix * gl_Vertex;

	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

	gl_TexCoord[0] = gl_MultiTexCoord0;
}
