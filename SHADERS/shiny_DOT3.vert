varying vec4 position;
varying vec4 Vertex;

varying vec3  ReflectDir;
varying float LightIntensity;
			
varying vec3 eyeDir;


varying vec4 oOsR;

varying float3 wsI;

void main( void )
{
    Vertex            = gl_ModelViewMatrixInverseTranspose * gl_Vertex;


    vec3 normal       = normalize(gl_NormalMatrix * gl_Normal);
    vec4 pos          = gl_ModelViewMatrix * gl_Vertex;
    eyeDir            = pos.xyz;
    
    LightIntensity    = max(dot(normalize(gl_LightSource[0].position.xyz - eyeDir), normal),0.0);
    
    wsI               = Vertex *-1;

    position          = gl_ModelViewProjectionMatrix * gl_Vertex;
    
    gl_TexCoord[0]    = gl_MultiTexCoord0;
    gl_Position       = position;
    
    
}
