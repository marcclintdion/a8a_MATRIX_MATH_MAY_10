uniform float counter;

varying vec4 position;

float distance;  

varying float attenuation;

vec4 finalcolor;

vec3 normal;

varying vec3 lightDir1;

float NdotL1;

uniform sampler2D Texture1;

uniform sampler2D Texture2;

uniform sampler2D NormalMap;

uniform sampler2D ShadowMap;

vec4 shadowTexture;

vec4 secondTexture;

void main( void )

{

        //secondTexture                =   texture2D(Texture2,  gl_TexCoord[0].st);//__ADDS_A_SECOND_PRIMARY_TEXTURE_-->>THIS_HAS_THE_EFFECT_OF_BLENDING_VARIOUS_MODEL_COLORS
         shadowTexture                  =   texture2D(ShadowMap,  gl_TexCoord[1].st);

         //finalcolor                   =   texture2D(Texture1, gl_TexCoord[0].xy)*.5 + secondTexture*.5;//____ADDS_PRIMARY_TEXTURE_AND_SECOND_TEXTURE
         finalcolor                     =   texture2D(Texture1, gl_TexCoord[0].xy); 

         vec3 NormalTex                 =   texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
         NormalTex                      =  (NormalTex - 0.5) * 2.0;
         normal                         =   normalize(NormalTex);

         NdotL1                         =   dot(normal,lightDir1);

         if(NdotL1 > 0.0)
         {
                float specularLight       =   pow(NdotL1, gl_FrontMaterial.shininess);  
                finalcolor               +=  (finalcolor * specularLight) * shadowTexture;
         }    

         finalcolor                    *=   attenuation * NdotL1; 

         shadowTexture                  =  (1.0 - shadowTexture) * 0.3; 

         gl_FragColor                   =  (finalcolor - shadowTexture);

         }

