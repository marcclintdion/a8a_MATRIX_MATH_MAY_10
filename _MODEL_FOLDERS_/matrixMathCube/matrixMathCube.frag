uniform float counter1;
uniform float counter2;
uniform float counter3;
uniform float counter4;

        vec4  finalcolor;

varying vec3  lightDir1;  
varying float attenuation;


        vec3  normal_2;

float         NdotL1;

uniform sampler2D NormalMap;
uniform sampler2D Texture1;



void main( void )
{
    
    vec3 NormalTex   =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0;
	normal_2           =  normalize(NormalTex);

    
    NdotL1           =  dot(normal_2,lightDir1);    
    
    finalcolor       =  texture2D(Texture1,gl_TexCoord[0].xy);


    if(NdotL1 > 0.0)
    {
         float specularLight  = pow(max(NdotL1, 0.0), gl_FrontMaterial.shininess*.01);  
         finalcolor          += specularLight;
    }  
       
    
    
    finalcolor      *=  attenuation * NdotL1 * NdotL1;

    
    gl_FragColor     =  finalcolor;
}
