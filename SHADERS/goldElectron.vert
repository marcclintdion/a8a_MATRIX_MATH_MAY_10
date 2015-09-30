varying vec3 normal, lightDir_1, lightDir_2, eyeVec;

void main()
{	
	normal = gl_NormalMatrix * gl_Normal;

	vec3 vVertex = vec3(gl_ModelViewMatrix * gl_Vertex);

	
    lightDir_1 = vec3(gl_LightSource[0].position.xyz - vVertex);
	lightDir_2 = vec3(gl_LightSource[0].position.xyz - vVertex);
	
    
    eyeVec   = -vVertex;

	gl_Position = ftransform();		
}
