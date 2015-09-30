


const float Shininess = 40.0;


void main (void)
{

vec3 NNormal;
	vec3 LNormal;
	vec4 MyColor;
	vec4 SpecularColor;

	float Intensity;


	NNormal = normalize( vec3(gl_TexCoord[0]) );




	Intensity = dot (vec3(gl_TexCoord[1]), NNormal );
	Intensity = max ( Intensity, 0.0 );

	MyColor =  vec4(Intensity) * gl_TexCoord[4];



	NNormal = abs(NNormal);



	Intensity = dot( NNormal, vec3( gl_TexCoord[1] ) );
	Intensity = max( Intensity, 0.0 );
	Intensity = pow( Intensity, Shininess );


	MyColor += vec4(Intensity) * gl_TexCoord[6];




	Intensity = dot( NNormal, vec3( gl_TexCoord[2] ) );
	Intensity = max( Intensity, 0.0 );
	Intensity = pow( Intensity, Shininess );



	MyColor += vec4(Intensity) * gl_TexCoord[7];


	NNormal.y = 0.0;

	NNormal = normalize( NNormal );



	Intensity = dot( NNormal, vec3( gl_TexCoord[3] ) );

	Intensity = pow( Intensity, Shininess );



	MyColor += vec4(Intensity) * gl_TexCoord[5];



	MyColor.a = gl_TexCoord[4].a;
	
	gl_FragColor = MyColor;

}




///////////////////////////////////////////////////////////////////////////////////
// wwlk<<---this persons work is related to a shader SDK published by ATI, 
