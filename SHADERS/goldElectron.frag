varying vec3 normal;
varying vec3 lightDir_1;
varying vec3 lightDir_2;
varying vec3 eyeVec;

void main (void)
{
	vec4 final_color = (gl_FrontMaterial.ambient) + (gl_LightSource[0].ambient * gl_FrontMaterial.ambient);
							
	vec3 N = normalize(normal);
	vec3 L1 = normalize(lightDir_1);
	vec3 L2 = normalize(lightDir_2);
	L2[0] *= -1;
	L2[1] *=  1;	
	L2[2] *= -1;
    
        
    float lambertTerm_1 = dot(N,L1);
	float lambertTerm_2 = dot(N,L2);
    	
	if(lambertTerm_1 > 0 )
	{
		final_color += gl_LightSource[0].diffuse * gl_FrontMaterial.diffuse * gl_FrontMaterial.emission * lambertTerm_1;	
		
		vec3 E1 = normalize(eyeVec);
		vec3 R1 = reflect(-L1, N);
		float specular_1 = pow( max(dot(R1, E1), 0.0), gl_FrontMaterial.shininess );
		final_color += gl_LightSource[0].specular * gl_FrontMaterial.specular * specular_1;	
	}

	
	if(lambertTerm_2 > 0)
	{
		final_color += gl_LightSource[0].diffuse * gl_FrontMaterial.diffuse * gl_FrontMaterial.emission * lambertTerm_2;	
		
		vec3 E2 = normalize(-eyeVec);
		vec3 R2 = reflect(-L2, N);
		float specular_2 = pow( max(dot(R2, E2), 0.0), gl_FrontMaterial.shininess );
		final_color += gl_LightSource[0].specular * gl_FrontMaterial.specular * specular_2*.5;	
	}	
	

	gl_FragColor    = final_color;
   			
}
