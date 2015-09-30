//# define half2 vec2 
//# define half3 vec3 
//# define half4 vec4 


varying vec4 pos;


float distance;  // Distance between light position and fragment
float NdotL;     // Dot product of normal and lightDir
float attenuation;

vec4 finalcolor;
vec4 diffuse = vec4(2.0,2.0,2.0,1.0);

vec3 normal;
vec3 lightDir;

vec4 specular;
float shininess; 

uniform sampler2D Texture1;			    // Our Texture no.1
uniform sampler2D NormalMap;			// Our Normal Map

void main( void )
{
	
	vec3 NormalTex = texture2D(NormalMap, gl_TexCoord[0].st).xyz;
   
	NormalTex = (NormalTex - 0.5) * 2.0;
		
	normal=normalize(NormalTex);


	lightDir = normalize(vec3(gl_LightSource[0].position - pos));
	distance = length(vec3(gl_LightSource[0].position - pos));
	
    NdotL = max(dot(normal,lightDir),0.0);
	
    specular  = gl_FrontMaterial.specular * NdotL* NdotL;



attenuation = 1.00 / (gl_LightSource[0].constantAttenuation +
					gl_LightSource[0].linearAttenuation * distance +
					gl_LightSource[0].quadraticAttenuation * distance * distance);

    
 
    if (NdotL > 0.75) ///___subtly alters lighting effect
    {   
            shininess =  pow(NdotL* NdotL,gl_FrontMaterial.shininess)*0.2;
    }
	
    
    
    finalcolor = texture2D(Texture1, gl_TexCoord[0].xy) ;  


	finalcolor *= attenuation * (diffuse * NdotL* NdotL)+ specular *  shininess; 
//finalcolor *= attenuation * (diffuse * NdotL* NdotL);
	gl_FragColor = finalcolor; 
}
