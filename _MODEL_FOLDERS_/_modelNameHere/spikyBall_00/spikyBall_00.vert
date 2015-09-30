uniform float counter;

varying vec4 position;

varying vec3 lightDir1;

varying float attenuation;

void main( void )
{
    gl_TexCoord[0]   = gl_MultiTexCoord0;

    position         = gl_ModelViewProjectionMatrix * gl_Vertex;
    gl_Position      = position;

    lightDir1        =  normalize(gl_LightSource[0].position.xyz - position.xyz);
    attenuation      =  1.00 / (gl_LightSource[0].quadraticAttenuation);
}

