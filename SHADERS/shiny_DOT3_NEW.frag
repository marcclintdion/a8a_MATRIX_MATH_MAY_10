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

varying vec3 wsI;

uniform float cubeMapMix_NEW;
uniform float shinyAdjust;

vec4 mixGroup1;
vec4 mixGroup2;

vec4 shininess;


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
    
    
    float3 wsR       =  reflect(wsI, normal);

    vec3 envColor    =  vec3(textureCube(EnvMap, wsR));
    
    shininess        =  gl_FrontMaterial.specular * pow(NdotL1 * NdotL1, gl_FrontMaterial.shininess) * shinyAdjust;
    
    mixGroup1        =  vec4(envColor,1) * cubeMapMix_NEW * NdotL1 *.3;
    mixGroup2        = (NdotL1  * attenuation + vec4(envColor,1))  *.3;

    vec4 final       = (mixGroup1 + mixGroup2) + shininess;
    
    final.a          =  1;//_lower for water bottle plastic;
    gl_FragColor     =  final;
    
}

/*
    vec3 NormalTex   =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0;
	normal           =  normalize(NormalTex);
	lightPosMinusPos =  gl_LightSource[0].position.xyz - position.xyz;
    lightDir1        =  normalize(lightPosMinusPos);
    distance         =  length(lightPosMinusPos);
	NdotL1           =  dot(normal,lightDir1);
    attenuation      =  1.00 / (gl_LightSource[0].quadraticAttenuation);
    
    vec4 TextureTex   =  texture2D(Texture1,  gl_TexCoord[0].xy)*NdotL1*NdotL1;    
    
    float3 wsR       =  reflect(wsI, normal);

    vec3 envColor    =  vec3(textureCube(EnvMap, wsR));
    
    shininess        =  gl_FrontMaterial.specular * pow(NdotL1 * NdotL1, gl_FrontMaterial.shininess) * shinyAdjust;
    
    mixGroup1        =  vec4(envColor,1) * cubeMapMix_NEW * NdotL1 *.3;
    mixGroup2        = (NdotL1  * attenuation + vec4(envColor,1))  *.3;

    vec4 final       = mixGroup1 + mixGroup2 + shininess + TextureTex;
    
    final.a          =  1;//_lower for water bottle plastic;
    gl_FragColor     =  final;
*/






