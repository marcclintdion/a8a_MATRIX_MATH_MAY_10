varying vec4 position;
float distance;  
float attenuation;
vec4 finalcolor;
vec3 normal;
vec3 lightDir1;

float NdotL1;

uniform sampler2D   Texture1;			    
uniform sampler2D   NormalMap;
uniform samplerCube EnvMap;

varying vec3  ReflectDir;
varying float LightIntensity;

vec3 lightPosMinusPos;

varying vec3 eyeDir;

varying float3 wsI;

uniform float cubeMapMix;

void main( void )
{
    vec3 NormalTex   =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0;
	normal           =  normalize(NormalTex);
	lightPosMinusPos =  gl_LightSource[0].position.xyz - position.xyz;
    lightDir1        =  normalize(lightPosMinusPos);
    distance         =  length(lightPosMinusPos);
	NdotL1           =  dot(normal,lightDir1);
    attenuation      =  1.00 / (gl_LightSource[0].quadraticAttenuation);
    
    ReflectDir       = reflect(eyeDir, normal);
    
    float3 wsR       = reflect(wsI, normal);

    vec3 envColor    = vec3(textureCube(EnvMap, wsR));
    
    vec3 TextureMap   =  texture2D(Texture1,  gl_TexCoord[0].st).xyz;


    gl_FragColor     =  ((vec4(TextureMap,1)*NdotL1*.5) + (vec4(envColor,1)* cubeMapMix*NdotL1) + (NdotL1 *attenuation + vec4(envColor,1)))/3;//    =  (NdotL1 *attenuation + vec4(envColor,1));
    
}







