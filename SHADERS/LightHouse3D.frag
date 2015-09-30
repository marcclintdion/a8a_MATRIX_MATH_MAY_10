varying vec4 diffuse;
varying vec4 ambientGlobal;
varying vec4 ambient;

varying vec3 normal;
varying vec3 lightDir;
varying vec3 halfVector;
varying float dist;
	
	
void main()
{
	vec3 n,halfV,viewV,ldir;
	float NdotL,NdotHV;
	vec4 color = ambientGlobal;
	float att;
		
    n = normalize(normal);
		
    halfVector = normalize(gl_LightSource[0].halfVector.xyz);
		
    NdotL = max(dot(n,normalize(lightDir)),0.0);
	

	att = 1.0 / (gl_LightSource[0].constantAttenuation  +
		         gl_LightSource[0].linearAttenuation    * dist +
		         gl_LightSource[0].quadraticAttenuation * dist * dist);
			
    color += att * (diffuse * NdotL + ambient);
		
			
	halfV  = normalize(halfVector);
	NdotHV = max(dot(n, halfV),0.0);
	
	color += att * gl_FrontMaterial.specular * gl_LightSource[0].specular * pow(NdotL*NdotL, gl_FrontMaterial.shininess);
	
	
	gl_FragColor = color;
}
