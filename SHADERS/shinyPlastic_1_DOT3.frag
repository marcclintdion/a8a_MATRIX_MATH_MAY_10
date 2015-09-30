varying vec4 position;
float distance;  
float attenuation;
vec4 finalcolor;
vec4 diffuse = vec4(2.0,2.0,2.0,1.0);
vec3 normal;
vec3 lightDir1;

float NdotL1;
vec4 hotSpot;
vec4 hotSpot2;

varying vec4 ambientGlobal;
varying vec4 ambient;

uniform sampler2D Texture1;			    
uniform sampler2D NormalMap;
uniform samplerCube cubeMapPlastic1;//cubeMapPlastic1


varying vec4 Vertex;
varying vec4 inverseEye;		
const vec3 Ln = vec3(-.913, 0.365, 0.183);
//uniform sampler2D env;
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


varying vec4 oOsR;
varying float3 wsI;


void main( void )
{
    diffuse = gl_FrontMaterial.diffuse;
	ambient = gl_FrontMaterial.ambient;

    vec3 NormalTex   =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0;
	normal           =  normalize(NormalTex);
	lightPosMinusPos =  gl_LightSource[0].position.xyz - position.xyz;
    lightDir1        =  normalize(lightPosMinusPos);
    distance         =  length(lightPosMinusPos);
	NdotL1           =  dot(normal,lightDir1);
    
    attenuation      =  1.00 / (gl_LightSource[0].quadraticAttenuation);
    


    
 
    finalcolor       =  texture2D(Texture1,gl_TexCoord[0].xy);  
 
    diffuse         +=  attenuation * gl_FrontMaterial.specular * pow(cos(NdotL1), gl_FrontMaterial.shininess * 100.0);
                                  
    hotSpot          = gl_LightSource[0].specular * pow(NdotL1*NdotL1, gl_FrontMaterial.shininess*50)*4;                                    
    hotSpot2         = (gl_LightSource[0].specular * pow(NdotL1, gl_FrontMaterial.shininess*1000))*100;
    
         
    finalcolor      *=  (attenuation * diffuse * exp2(NdotL1)*.4 * (ambient) + hotSpot*NdotL1)+hotSpot2*sqrt(NdotL1);
    
    
     
   
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
 
    newNormal = normalize(NormalTex);	
    invertView = normalize(Vertex.xyz * inverseEye.w - inverseEye.xyz * Vertex.w);  
    Hn = normalize(Ln - invertView);

    diffuseFresnel = max(0.0, dot(newNormal, Ln));
    specularFresnel = pow(max(0.0, dot(newNormal, Hn)), es);
    
    col   = ka + kd * diffuseFresnel;// * gl_FrontMaterial.specular * gl_LightSource[0].specular * pow(NdotL1*NdotL1, gl_FrontMaterial.shininess);
    col = finalcolor;
    
    Reflect = reflect(invertView, newNormal);
    RH = normalize(Reflect - invertView);
    fresnel = fresnelReflectance + (1.0 - fresnelReflectance) * pow(1.0 + dot(invertView, RH),5.0);///ADJUSTMENT FOR TEXTURE MAP BRIGHTNESS
    textureMap = texture2D(Texture1, 0.5 + 0.5 * normalize(Reflect + vec3(0, 0, 1)).xy);

    fresnel = sqrt(fresnel)/2;
   
    
    tempColor = mix(col, textureMap, fresnel)*3;
    
    
   
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    
    gl_FragColor    = tempColor;          //=  *vec4(en vColor,1.0)*NdotL1;

     
    
}











