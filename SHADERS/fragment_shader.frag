varying vec4 position;

float distance;  
varying float attenuation;

uniform float counter;

vec3 normal;
varying vec3 lightDir1;

float NdotL1;

uniform sampler2D Texture1;
uniform sampler2D NormalMap;
uniform sampler2D SpecularMap;
		

vec4 finalcolor;	
vec3 NormalTex;
vec4 shadow;



void main( void )
{

    shadow           =  texture2D(SpecularMap,  gl_TexCoord[1].st);
    NormalTex        =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0;
	normal           =  normalize(NormalTex);
    
    
    finalcolor       =  texture2D(Texture1,gl_TexCoord[0].xy);	
    
    
    NdotL1           =  dot(normal,lightDir1);
    
    finalcolor      *=  attenuation * NdotL1 * NdotL1 * 2.2; 
    
    //gl_FragColor     =  (finalcolor);
   gl_FragColor     =  (finalcolor + shadow *.1);
}


