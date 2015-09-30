// 
// Fragment shader for environment mapping with an 
// equirectangular 2D texture and refraction mapping 
// with a background texture blended together using 
// the fresnel terms 
// 
// Author: Jon Kennedy, based on the envmap shader by John Kessenich, Randi Rost 
// 
// Copyright (c) 2002-2006 3Dlabs Inc. Ltd. 
// 
// See 3Dlabs-License.txt for license information 
// 


//////////////////////////////////////////////////////_____________________________SEPARATES_--->>ShineyPlastic(above)_______from__________fresnel_01(below)
const vec3 Xunitvec = vec3 (1.0, 0.0, 0.0); 
const vec3 Yunitvec = vec3 (0.0, 1.0, 0.0); 
uniform vec3  BaseColor; 
uniform float Depth; 
uniform float MixRatio; 
// need to scale our framebuffer - it has a fixed width/height of 2048 
uniform float FrameWidth; 
uniform float FrameHeight; 
uniform sampler2D EnvMap; 
uniform sampler2D RefractionMap; 
varying vec3  Normal; 
varying vec3  EyeDir; 
varying vec4  EyePos; 
varying float LightIntensity; 

vec4 tempColor;


varying vec4 diffuse;
varying vec4 ambientGlobal; 
varying vec4 ambient;
varying vec4 specular;
varying vec3 normal;
varying vec3 lightDir;
varying vec3 halfVector;
varying float dist;
varying vec4 alphaSpecular;


void main (void) 
{ 
    vec3 n;
	vec3 halfV;
	vec3 viewV;
	vec3 ldir;
	
    float NdotL;
    float NdotHV;

	vec3 color = (0.0, 0.0, 0.0);
	float att;

	n = normalize(normal);
	NdotL = max(dot(n,normalize(lightDir)), 0.0);    
	


	        att = 1.0 / (gl_LightSource[0].quadraticAttenuation);
			
                        color += att * (diffuse * NdotL + ambient);
		
			
            halfV = normalize(halfVector);

			NdotHV = max(dot(n,halfV),0.0);
			
            color *=  att * gl_FrontMaterial.specular * gl_LightSource[0].specular * pow(NdotHV, gl_FrontMaterial.shininess * 20.0);

	       

    
//////////////////////////////////////////////////////_____________________________SEPARATES_--->>ShineyPlastic(above)_______from__________fresnel_01(below) 
    
    vec3 reflectDir = reflect(EyeDir, Normal); 
    vec2 index; 
    index.y = dot(normalize(reflectDir), Yunitvec); 
    reflectDir.y = 0.0; 
    index.x = dot(normalize(reflectDir), Xunitvec) * 0.5; 

    if (reflectDir.z >= 0.0) 
        index = (index + 1.0) * 0.5; 
    else 
    { 
        index.t = (index.t + 1.0) * 0.5; 
        index.s = (-index.s) * 0.5 + 1.0; 
    } 
    vec3 envColor = vec3 (texture2D(EnvMap, index)); 
    
    float fresnel = abs(dot(normalize(EyeDir), Normal)); 
    fresnel *= MixRatio; 
    fresnel = clamp(fresnel, 0.1, 0.9); 

   vec3 refractionDir = normalize(EyeDir) - normalize(Normal); 

   float depthVal = Depth / -refractionDir.z; 
    
   float recipW = 1.0 / EyePos.w; 
   vec2 eye = EyePos.xy * vec2(recipW); 

   index.s = (eye.x + refractionDir.x * depthVal); 
   index.t = (eye.y + refractionDir.y * depthVal); 
    
   index.s = index.s / 2.0 + 0.5; 
   index.t = index.t / 2.0 + 0.5; 
    
    float recip1k = 1.0 / 2048.0; 
    index.s = clamp(index.s, 0.0, 1.0 - recip1k); 
    index.t = clamp(index.t, 0.0, 1.0 - recip1k); 
    
    vec3 RefractionColor = vec3 (texture2D(RefractionMap, index)); 
    RefractionColor+=color;
    vec3 base = LightIntensity * BaseColor; 

    
    envColor = mix(envColor, RefractionColor, fresnel); 
    envColor = mix(envColor, base, 0.2); 

    
    envColor += color;
    tempColor = vec4 (envColor, 1.0);
    tempColor.a = tempColor.a - 0.2;

    
    gl_FragColor = tempColor; 
}











