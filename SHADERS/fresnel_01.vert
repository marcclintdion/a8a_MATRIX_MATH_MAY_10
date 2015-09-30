// 
// Vertex shader for environment mapping with an 
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


varying vec4 diffuse;
varying vec4 ambientGlobal;
varying vec4 ambient;
varying vec3 normal;
varying vec3 lightDir;
varying vec3 halfVector;
varying float dist;
//////////////////////////////////////////////////////_____________________________SEPARATES_--->>ShineyPlastic(above)_______from__________fresnel_01(below)

varying vec3  Normal; 
varying vec3  EyeDir; 
varying vec4  EyePos; 
varying float LightIntensity;
uniform vec3  LightPos;




void main(void) 
{ 
    vec4 ecPos;
	vec3 aux;
	normal = normalize(gl_NormalMatrix * gl_Normal);
	ecPos = gl_ModelViewMatrix * gl_Vertex;
	

    aux = vec3(gl_LightSource[0].position - ecPos);
	
    lightDir = normalize(aux);
	dist = length(aux);
    halfVector = normalize(gl_LightSource[0].halfVector.xyz);	
 	diffuse = gl_FrontMaterial.diffuse * gl_LightSource[0].diffuse;
    ambient = gl_FrontMaterial.ambient * gl_LightSource[0].ambient;    	
	ambientGlobal = gl_FrontMaterial.ambient;

//////////////////////////////////////////////////////_____________________________SEPARATES_--->>ShineyPlastic(above)_______from__________fresnel_01(below)	
    Normal         = normalize(gl_NormalMatrix * gl_Normal);
    vec4 pos       = gl_ModelViewMatrix * gl_Vertex; 

   
    LightIntensity = max(dot(normalize(LightPos - EyeDir), Normal), 0.0); 

    EyeDir         = pos.xyz; 
    EyePos         = gl_ModelViewProjectionMatrix * gl_Vertex; 
    gl_Position    = ftransform(); 
}










