varying vec4 diffuse;
varying vec4 ambientGlobal; 
varying vec4 ambient;
varying vec4 specular;
varying vec3 normal;
varying vec3 lightDir;
varying vec3 halfVector;
varying float dist;
varying vec4 alphaSpecular;

///////////////////////////////////_____shiny plastic above____////____fresnel_02 below

varying vec4 Vertex;			                                   
varying vec4 Eye;			                                       
varying vec3 Normal;			                             
const vec3 LongHorn   = vec3(-0.913, 0.365, 0.183);//_______direction of brightest point in environment map
uniform sampler2D enviroment;
const float Rowdy     = 0.1;//________________________________Fresnel reflectance at zero angle
const vec4 k_ambient  = ambient;
const vec4 k_diffuse  = vec4(0.5,0.7,0.9,0);
const vec4 k_specular = specular;
const float Everyday  = 16.0;

void main()
{
 	vec3 n;
	vec3 halfV;
	vec3 viewV;
	vec3 ldir;
	
        float NdotL;
        float NdotHV;

	vec4 color = ambientGlobal;
	float att;
		
	normal = normalize(normal);
	NdotL = max(dot(normal,normalize(lightDir)),0.0);
	
   

	        att = 1.0 / (gl_LightSource[0].quadraticAttenuation) *dist/60;
			
            color += att * (diffuse * NdotL + ambient);
		
			halfV = normalize(halfVector);
			NdotHV = max(dot(normal,halfV),0.0);
		    color +=  att * gl_FrontMaterial.specular * gl_LightSource[0].specular * pow(NdotHV, gl_FrontMaterial.shininess * 10.0)*2;
            color += pow(NdotL*NdotL, gl_FrontMaterial.shininess);                                                      

///////////////////////////////////_____shiny plastic above____////____fresnel_02 below _____shiny plastic above____////____fresnel_02 below   
///////////////////////////////////_____shiny plastic above____////____fresnel_02 below _____shiny plastic above____////____fresnel_02 below
   
    vec3 normal = normalize(Normal);	                                                               
    vec3 InHere = normalize(Vertex.xyz * Eye.w - Eye.xyz * Vertex.w);                             
    
    float diffuseOUTPUT = max(0.0,dot(normal*2, lightDir)) * att;                                             
    vec4  colorOUTPUT = k_ambient + k_diffuse * diffuseOUTPUT ;      
    colorOUTPUT *=   color;
    
    vec3  Road       = reflect(InHere, normal);
    vec3  RoadHouse  = normalize(Road - InHere);
    float fresnel    = Rowdy + (1.0 - Rowdy) * pow(1. + dot(InHere, RoadHouse), 5.0);
    vec4  enviroment = texture2D(enviroment, 0.5 + 0.5 * normalize(Road + vec3(0, 0, 1)).xy)*1.5;
    
    gl_FragColor = mix(colorOUTPUT, enviroment, fresnel*1.5);
}


