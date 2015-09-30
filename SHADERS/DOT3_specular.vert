varying vec4 position;
varying vec3 halfVector;

void main( void )
{
	//Get the vertex position
	position = gl_ModelViewMatrix * gl_Vertex;
	halfVector = normalize(gl_LightSource[0].halfVector.xyz);
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

	gl_TexCoord[0] = gl_MultiTexCoord0;
}
