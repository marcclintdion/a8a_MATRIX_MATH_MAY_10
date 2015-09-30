varying vec3 v_N;
varying vec4 pos;
float amb = 0.1;
vec3 color = vec3(1, 0, 0);
vec3 normal;
float NdotL; 
vec3 lightDir;
uniform sampler2D NormalMap;			// Our Normal Map

void main () 
{
    //vec3 NormalTex = texture2D(NormalMap, gl_TexCoord[0].st).xyz;
    //NormalTex = (NormalTex - 0.5) * 2.0;
    //normal = normalize(NormalTex);
	//lightDir = normalize(vec3(gl_LightSource[0].position-pos));   
    //NdotL = max(dot(normal,lightDir),0.0);
     
    vec3 N = normalize(v_N);
	vec3 L = normalize(gl_LightSource[0].position.xyz);
	vec3 H = normalize(gl_LightSource[0].halfVector.xyz);

	vec3 ambient = color * amb;
	vec3 diffuse = color * (1.0 - amb) * max(dot(L, N), 0.0);
	vec3 specular = gl_FrontMaterial.specular * pow(max(dot(H, N), 0.0), 10.0);


	gl_FragColor = vec4(ambient + diffuse + specular, 1.0);
	//gl_FragColor= gl_FragColor * NdotL;
}

