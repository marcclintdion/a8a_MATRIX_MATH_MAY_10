uniform vec4 eyePosition;
uniform vec4 lightVector;

varying vec3 normal;
varying vec4 halfAngle;

void main( void )
{
    normal = gl_NormalMatrix * gl_Normal;
    vec4 worldNormal;
    worldNormal.x = normal.x;
    worldNormal.y = normal.y;
    worldNormal.z = normal.z;
    worldNormal.w = 0.0;

	vec4 worldSpacePos = gl_ModelViewMatrix * gl_Vertex;

    vec4 vertToEye = normalize( eyePosition - worldSpacePos );

	
    halfAngle = normalize( vertToEye + lightVector );
    

    gl_TexCoord[0]   = gl_MultiTexCoord0;
	gl_TexCoord[0].x = dot(lightVector, worldNormal);
	gl_TexCoord[0].y = dot(halfAngle, worldNormal);

	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

    gl_FrontColor = gl_Color;
}
