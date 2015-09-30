varying vec4 diffuse;
varying vec4 ambientGlobal;
varying vec4 ambient;
varying vec3 normal;
varying vec3 lightDir;
varying vec3 halfVector;
varying float dist;

///////////////////////////////////_____shiny plastic above____////____fresnel_02 below
varying vec3 Normal;
varying vec3 Vertex;

void main(void)
{
  
 	vec4 ecPos;
	vec3 aux;
		
	normal = normalize(gl_NormalMatrix * gl_Normal);
		

	ecPos = gl_ModelViewMatrix * gl_Vertex;
	aux = vec3(gl_LightSource[0].position - ecPos);
	lightDir = normalize(aux);
	dist = length(aux);
	
	halfVector = normalize(gl_LightSource[0].halfVector.xyz);
		

	diffuse = gl_FrontMaterial.diffuse * gl_LightSource[0].diffuse;
		

	ambient = gl_FrontMaterial.ambient * gl_LightSource[0].ambient;
	ambientGlobal = gl_FrontMaterial.ambient; 
  
  
///////////////////////////////////_____shiny plastic above____////____fresnel_02 below 
  Vertex = gl_Vertex.xyz;
//Vertex  = gl_ModelViewProjectionMatrix * gl_Vertex;
  Normal = normalize(gl_NormalMatrix * gl_Normal);
  
  
  
  gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}
