varying vec4 diffuse;
varying vec4 ambientGlobal;
varying vec4 ambient;

varying vec3 normal;
varying vec3 lightDir;

vec3 texCoordinates0;
vec3 texCoordinates1;
vec3 texCoordinates2;
vec3 texCoordinates3;
vec3 texCoordinates4;
vec3 texCoordinates5;
vec3 texCoordinates6;
vec3 texCoordinates7;

varying float dist;


	
void main()
{	
	gl_TexCoord[0]  = gl_MultiTexCoord0;
    gl_TexCoord[1]  = gl_MultiTexCoord1;
    gl_TexCoord[2]  = gl_MultiTexCoord2;
    gl_TexCoord[3]  = gl_MultiTexCoord3;
    gl_TexCoord[4]  = gl_MultiTexCoord4;
    gl_TexCoord[5]  = gl_MultiTexCoord5;    
    gl_TexCoord[6]  = gl_MultiTexCoord6;    
    gl_TexCoord[7]  = gl_MultiTexCoord7;
                
    texCoordinates0 = gl_TexCoord[0];
    texCoordinates1 = gl_TexCoord[1];
    texCoordinates2 = gl_TexCoord[2];
    texCoordinates3 = gl_TexCoord[3];
    texCoordinates4 = gl_TexCoord[4];
    texCoordinates5 = gl_TexCoord[5];
    texCoordinates6 = gl_TexCoord[6];    
    texCoordinates7 = gl_TexCoord[7];

                    
    vec4 ecPos;
	vec3 aux;
 	                
	normal = normalize(gl_NormalMatrix * gl_Normal);
		
    ecPos = gl_ModelViewMatrix * gl_Vertex;
    
    aux = vec3(gl_LightSource[0].position - ecPos);
	lightDir = normalize(aux);
	dist = length(aux);
	
    diffuse = gl_FrontMaterial.diffuse * gl_LightSource[0].diffuse;
		
    ambient = gl_FrontMaterial.ambient * gl_LightSource[0].ambient;
	ambientGlobal = gl_FrontMaterial.ambient;
		
 	//gl_Vertex =   vec4(texCoordinates1, 1.0);
    gl_Position = gl_ModelViewProjectionMatrix  * gl_Vertex;

} 













