varying vec3 normal;
varying vec4 pos;


vec3 lightDir;

float distance; 
vec4 finalcolor;
float NdotL;  
varying vec3 halfVector;
float attenuation;
float shininess;

vec4 mixedVariables;

uniform sampler2D testTexture;

void main( void )
{
    vec4 ambient = gl_FrontMaterial.ambient;
    vec4 diffuse = gl_FrontMaterial.diffuse;
    
    normal=normalize(normal);

	lightDir = normalize(vec3(gl_LightSource[0].position-pos));

	distance = length(vec3(gl_LightSource[0].position-pos));
    
    shininess = gl_FrontMaterial.shininess;
	
    NdotL = max(dot(normal,lightDir),0.0);

	attenuation = 1.00 / (gl_LightSource[0].constantAttenuation +
					gl_LightSource[0].linearAttenuation * distance +
					gl_LightSource[0].quadraticAttenuation * distance * distance);

    float specularLight = pow(NdotL, shininess);

    finalcolor = texture2D(testTexture,gl_TexCoord[0].xy); 
    finalcolor *=  attenuation * (diffuse * NdotL + ambient) + specularLight; 


	gl_FragColor = finalcolor; 
}
//based on codeSampler perFragment lighting;with single texture map set to-->>glDisable(GL_TEXTURE_2D);
