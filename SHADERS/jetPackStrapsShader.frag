varying vec4 position;

float attenuation;

vec4 finalcolor;
vec4 diffuse = vec4(2.0,2.0,2.0,1.0);

vec3 normal;
vec3 lightDir1;

float NdotL1;

uniform sampler2D Texture1;
vec4 textureMap;			    
uniform sampler2D NormalMap;


void main( void )
{
    
    textureMap       =  texture2D(Texture1,   gl_TexCoord[0].xy);
    textureMap       =  normalize(textureMap);
    vec3 NormalTex   =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0;
	normal           =  normalize(NormalTex)*textureMap.xyz*2.15;
    
    lightDir1        =  normalize(gl_LightSource[0].position.xyz - position.xyz);
    
    NdotL1           =  dot(normal,lightDir1);
    
    finalcolor       =  textureMap;
    finalcolor      *= .3987 * diffuse * NdotL1* NdotL1; 
   
    if(NdotL1 >= 0)
    {
         finalcolor +=  pow(max(NdotL1, 0.0), 80.0);
    }
    
    gl_FragColor     =  finalcolor;
}






//__________END____________________END____________________END____________________END____________________END__________
//__________END____________________END____________________END____________________END____________________END__________
//__________END____________________END____________________END____________________END____________________END__________
//__________END____________________END____________________END____________________END____________________END__________


/*
void main( void )
{
    textureMap       =  texture2D(Texture1,gl_TexCoord[0].xy);
    vec3 NormalTex   =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0;
	normal           =  normalize(NormalTex);
	
    
    lightPosMinusPos =  gl_LightSource[0].position.xyz - position.xyz;
    
    lightDir1        =  normalize(gl_LightSource[0].position.xyz - position.xyz);
    lightDir2        =  normalize(gl_LightSource[0].position.xyz - position.xyz)*-1;    
    
    distance         =  length(lightPosMinusPos);
	
    NdotL1           =  dot(normal,lightDir1);
    NdotL2           =  dot(normal,lightDir2);                
    attenuation      =  1.00 / (gl_LightSource[0].quadraticAttenuation);

    finalcolor       = textureMap; 
  
    finalcolor      *=  NdotL1;
    
    finalcolor      *=  attenuation * diffuse * (NdotL1+ NdotL2*.2)*1.4; 
   
    if(NdotL1 >= 0)
    {
         finalcolor      +=  gl_FrontMaterial.specular * pow(sqrt(NdotL1), gl_FrontMaterial.shininess * 100.0)*.6; 
    }
    
    gl_FragColor     =  finalcolor;
}
*/
