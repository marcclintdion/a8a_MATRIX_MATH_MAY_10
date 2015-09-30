varying vec4 diffuse;
varying vec4 ambientGlobal; 
varying vec4 ambient;

varying vec4 specular;

varying vec3 normal;
varying vec3 lightDir;

uniform float dullFactor;

float   NdotL;

vec4    color1 = ambientGlobal;


float   att;
varying vec4 alphaSpecular;
	
void main()
{ 
    normal = normalize(normal);
	
    normal = normal * dullFactor;//____GLOSS MAP TECHNIQUE APPLIED TO ENTIRE SURFACE
	
    NdotL  = max(dot(normal, normalize(lightDir)), 0.0);
	
    if (NdotL > 0.0 && NdotL < 1.5) 
	{
         att     = 1.0 / (gl_LightSource[0].quadraticAttenuation);
			
         color1 +=  att * (diffuse * NdotL + ambient);
		
         color1 +=  att * gl_FrontMaterial.specular * pow(sqrt(NdotL), gl_FrontMaterial.shininess * 10.0);
	}
    
    gl_FragColor    = color1;
}
