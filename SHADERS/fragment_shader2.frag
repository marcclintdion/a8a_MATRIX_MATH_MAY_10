varying vec4 position;

float distance;  
float attenuation;

vec4 finalcolor;
vec4 specularcolor;
vec4 diffuse = vec4(2.0,2.0,2.0,1.0);
vec4 specularCAST;

vec3 normal;
vec3 lightDir;
vec3 specular;

vec3  halfV;
float NdotL;
float NdotHV;

uniform sampler2D Texture1;			    
uniform sampler2D NormalMap;		


void main( void )
{
	vec3 NormalTex = texture2D(NormalMap,     gl_TexCoord[0].st).xyz;
    NormalTex = (NormalTex - 0.5) * 2.0;
	normal=normalize(NormalTex);
	

    lightDir = normalize(vec3(gl_LightSource[0].position - position));
	distance = length(vec3(gl_LightSource[0].position - position));
	
    NdotL = max(dot(normal,lightDir),0.0);
    
    attenuation = 1.00 / (gl_LightSource[0].constantAttenuation +
				  gl_LightSource[0].linearAttenuation * distance +
				  gl_LightSource[0].quadraticAttenuation * distance * distance);

    finalcolor    = texture2D(Texture1,gl_TexCoord[0].xy);  

    finalcolor   *= attenuation * (diffuse * NdotL); 
    

    //finalcolor[3]*= finalcolor[0];
    finalcolor.a *= (finalcolor.g+.2);
    
    gl_FragColor = finalcolor;
}
