varying vec3 normal;
varying vec4 halfAngle;

vec3  halfV;
float NdotL;
float NdotHV;
vec4  color;
vec4  finalcolor;
 
uniform sampler2D Texture1;	

void main()
{
    normal        = normalize(normal);
	
    NdotL         = dot(normal, normalize(halfAngle.xyz));
	
    halfV         =  normalize(halfAngle.xyz);
    halfV         = halfV;
    NdotHV        =  dot(normal,halfV);
    color         =  pow(NdotHV*NdotHV, gl_FrontMaterial.shininess*4);
		
    finalcolor    = 0.3 * texture2D(Texture1,gl_TexCoord[0].xy);
    
    color        += finalcolor;
    
    gl_FragColor += color;
}
    
