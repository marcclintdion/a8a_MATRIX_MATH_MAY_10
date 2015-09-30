varying vec4 diffuse;
varying vec4 ambientGlobal;
varying vec4 ambient;

varying vec3 normal;
varying vec3 lightDir;
varying vec3 halfVector;
varying float dist;

////////////////////////////////////////////////////////________lightHouse3D(above)_____/////_____fresnel(below)______
varying vec4 Vertex;			// vertex position
varying vec4 inverseEye;		// eye position
			                   

void main()
{
    	vec4 ecPos;
		vec3 aux;
		
		normal = normalize(gl_NormalMatrix * gl_Normal);
		
	
		ecPos = gl_ModelViewMatrix * gl_Vertex;
		aux = vec3(gl_LightSource[0].position-ecPos);
		lightDir = normalize(aux);
		dist = length(aux);
	
		//halfVector = normalize(gl_LightSource[0].halfVector.xyz);
		
	    diffuse = gl_FrontMaterial.diffuse * gl_LightSource[0].diffuse;

		ambient = gl_FrontMaterial.ambient * gl_LightSource[0].ambient;
		ambientGlobal = gl_LightModel.ambient * gl_FrontMaterial.ambient;
    
    

////////////////////////////////////////////////////////________lightHouse3D(above)_____/////_____fresnel(below)______    
    
    Vertex = gl_ModelViewMatrix * gl_Vertex;
    inverseEye = gl_ProjectionMatrixInverse * vec4(0,0,-1,0);


    gl_Position = ftransform();
} 


