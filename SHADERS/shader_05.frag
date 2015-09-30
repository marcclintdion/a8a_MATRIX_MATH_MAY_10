varying vec4 diffuse;
varying vec4 ambientGlobal; 
varying vec4 ambient;



varying vec3 normal;
varying vec3 lightDir;
varying vec3 halfVector;

varying float dist;
	
	
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
		
	n = normalize(normal);
	NdotL = max(dot(n,normalize(lightDir)),0.0);
	
	//if (NdotL > 0.0) 
	//{

	        att = 1.0 / (gl_LightSource[0].quadraticAttenuation);
			
                        color += att * (diffuse * NdotL + ambient);
		
			
			halfV = normalize(halfVector);
			NdotHV = max(dot(n,halfV),0.0);
			color += att * gl_FrontMaterial.specular * gl_LightSource[0].specular * 
							pow(NdotHV,gl_FrontMaterial.shininess);
		
	//}	
	
		gl_FragColor = color;
}

