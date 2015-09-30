varying vec4 position;
float distance;  
float attenuation;
vec4 finalcolor;
vec4 diffuse = vec4(2.0,2.0,2.0,1.0);
vec3 normal;
vec3 lightDir1;

float NdotL1;
vec4 hotSpot1;
vec4 hotSpot2;

varying vec4 ambientGlobal;
varying vec4 ambient;

uniform sampler2D Texture1;			    
uniform sampler2D NormalMap;
uniform sampler2D NormalMap2;

varying vec4 VertexOUT;
varying vec4 inverseEye;		
const vec3 Ln = vec3(-.913, 0.365, 0.183);

const float fresnelReflectance = 0.1;	
const vec4 ka = vec4(.1,.2,.3,1);
const vec4 kd = vec4(.5,.7,.9,0);
const vec4 ks = vec4(.4,.4,.4,0);
const float es = 16;
vec3 newNormal;	
vec3 invertView;  
vec3 Hn;
float diffuseFresnel;
float specularFresnel;
vec4 col;
vec3 Reflect;
vec3 RH;
float fresnel;
vec4 textureMap;

vec4 tempColor;
vec3 lightPosMinusPos;	


varying vec2 primaryTexCoords;
varying vec2 secondTexCoords;
varying vec2 interpolatedTexCoords;	

uniform float modelMixCounter;
	
void main( void )
{
    diffuse = gl_FrontMaterial.diffuse;
	ambient = gl_FrontMaterial.ambient;

    finalcolor       =  texture2D(Texture1,interpolatedTexCoords.xy+inverseEye*.00);   
   
    vec3 NormalTex   =  texture2D(NormalMap,  interpolatedTexCoords.xy).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0*finalcolor;
    
    normal           =  normalize(NormalTex);
	
    lightPosMinusPos =  gl_LightSource[0].position.xyz - position.xyz;
    lightDir1        =  normalize(lightPosMinusPos);
    distance         =  length(lightPosMinusPos);
	NdotL1           =  dot(normal,lightDir1);
    
    attenuation      =  1.00 / (gl_LightSource[0].quadraticAttenuation);

    if(NdotL1 >= 0)
    {
         hotSpot1    = gl_LightSource[0].specular * pow(NdotL1*NdotL1, gl_FrontMaterial.shininess*1000)*32;                                    
         hotSpot2    = gl_LightSource[0].specular * pow(NdotL1*NdotL1, gl_FrontMaterial.shininess);     
    } 
         finalcolor *=  (.4*attenuation * NdotL1 * (ambient.g) + hotSpot1)*1.2 ; 
                                       
    newNormal = normalize(NormalTex);	
    invertView = normalize(VertexOUT.xyz * inverseEye.w - inverseEye.xyz * VertexOUT.w);  
    Hn = normalize(Ln - invertView);

    if(NdotL1 >= 0)
    {    
         diffuseFresnel = max(0.0, dot(newNormal, Ln));
         specularFresnel = pow(max(0.0, dot(newNormal, Hn)), es);
         col = diffuseFresnel * pow(NdotL1*NdotL1, gl_FrontMaterial.shininess);
    }
    
    col = finalcolor*hotSpot2*1.5;
    
    Reflect = reflect(invertView, newNormal);
    RH = normalize(Reflect - invertView);
    
    fresnel = fresnelReflectance + (1.0 - fresnelReflectance) * pow(1.0 + dot(invertView, RH),10.0);
   
    textureMap = texture2D(Texture1, 0.5 + 0.5 * normalize(Reflect + vec3(0, 0, 1)).xy);

    tempColor   = mix(col, textureMap * .1, fresnel);
    
    gl_FragColor     =  tempColor*1.3;

}











