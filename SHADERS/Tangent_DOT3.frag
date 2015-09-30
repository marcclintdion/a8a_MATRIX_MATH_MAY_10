varying vec4 position;

float attenuation;

vec4 finalcolor;

vec4 diffuse = vec4(2.0,2.0,2.0,1.0);

vec3  normal;
vec3  tangent;
vec3  normal_DOT_tangent;

vec4  specular;

vec3  lightDir1;

vec3  halfV;
float NdotL1;

uniform sampler2D Texture1;			    
uniform sampler2D NormalMap;		


uniform float modelMixCounter;

varying vec4 eyeVector;


void main( void )
{
	
    vec3 NormalTex     = texture2D(NormalMap, gl_TexCoord[0].st).xyz;
    NormalTex          =(NormalTex - 0.5) * 2.0;
	normal             = normalize(NormalTex);

    lightDir1          = normalize(vec3(gl_LightSource[0].position - position));
  
    NdotL1             = max(dot(normal,lightDir1),0.0);
    
    specular           = gl_FrontMaterial.specular * pow(NdotL1 * NdotL1, gl_FrontMaterial.shininess * 10.0); 
    
    finalcolor         = texture2D(Texture1, gl_TexCoord[0].xy) * NdotL1;

    finalcolor        += finalcolor * .2631 * diffuse * NdotL1 *  NdotL1 * specular;

    gl_FragColor       = finalcolor;

}










