varying vec3 Normal;
varying vec3 invertPosition;
varying vec4 Color;
varying vec4 Position;


float edgefalloff = -1.0;


void main()
{
    invertPosition  = Position.xyz - vec3(0.0, 0.0, 0.0);
    
    float opac = dot(normalize(-Normal), normalize(-invertPosition));
    opac = abs(opac);
    opac = 1.0-pow(opac, edgefalloff);
    opac = 1.0 / -opac;
    
    gl_FragColor =  opac * Color;
    gl_FragColor[1] = 1;
    gl_FragColor.a = log(opac)-1;
}
