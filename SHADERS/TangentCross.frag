varying vec4 position;

float distance;  
float attenuation;

vec4 finalcolor;
vec4 specularcolor;
vec4 diffuse = vec4(3.0,3.0,3.0,1.0);
vec4 specularCAST;
vec4 SpecularTex;

vec3  normal;
vec3  lightDir1;
vec3  lightDir2;

vec4  specular;
float shininess = 100; 

vec3  halfV;
float NdotL1;
float NdotL2;
float NdotHV;


uniform sampler2D Texture1;			    
uniform sampler2D NormalMap;		
uniform sampler2D SpecularMap;		

void main( void )
{
	
    vec3 NormalTex = texture2D(NormalMap,     gl_TexCoord[0].st).xyz;
    NormalTex = (NormalTex - 0.5) * 2.0;
	normal=normalize(NormalTex);

    shininess  = gl_FrontMaterial.shininess;
    
    lightDir1 = normalize(vec3(gl_LightSource[0].position - position));
    lightDir2 = normalize(vec3(gl_LightSource[0].position - position))*-1;

    
    distance = length(vec3(gl_LightSource[0].position - position));
	
    SpecularTex = texture2D(SpecularMap, gl_TexCoord[0].st);

    
    specular = SpecularTex;    
    
    NdotL1 = max(dot(normal,lightDir1),0.0);
    NdotL2 = max(dot(normal,lightDir2),0.0);
        
    diffuse *= specular;
    
    attenuation = 1.00 / (gl_LightSource[0].constantAttenuation  +
				          gl_LightSource[0].linearAttenuation    * distance +
				          gl_LightSource[0].quadraticAttenuation * distance * distance);

    finalcolor  = texture2D(Texture1,    gl_TexCoord[0].xy);
    
    specular += specular * pow(NdotL1, shininess);
    
    finalcolor += specular;
    
    finalcolor   *= attenuation * (diffuse * (NdotL1 + NdotL2 * .4));
    
    finalcolor.a = 1;
    
    gl_FragColor = finalcolor;

}










