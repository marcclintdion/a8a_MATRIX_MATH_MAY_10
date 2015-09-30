uniform float counter;

varying vec4 position;

float distance;  
varying float attenuation;

vec4 finalcolor;

//vec4 greyScaleTexture;
vec3 normal;
varying vec3 lightDir1;

float NdotL1;

uniform sampler2D Texture1;
uniform sampler2D NormalMap;
//uniform sampler2D SpecularMap;

vec3 lightPosMinusPos;

void main( void )
{
    //greyScaleTexture =  texture2D(SpecularMap,  gl_TexCoord[0].st);
    //greyScaleTexture =  greyScaleTexture;

    finalcolor       =  texture2D(Texture1,gl_TexCoord[0].xy);
    finalcolor       =  finalcolor;

    vec3 NormalTex   =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex        = (NormalTex - 0.5) * 2.0;
	normal           =  normalize(NormalTex);

    NdotL1           =  dot(normal,lightDir1);

    finalcolor      *=  attenuation * NdotL1 * NdotL1; 

    if(NdotL1 > 0.0)
    {
         float specularLight  = pow(max(NdotL1, 0.0), gl_FrontMaterial.shininess);  
         finalcolor          += specularLight * finalcolor*2;
    }

    gl_FragColor              =  finalcolor;

}
