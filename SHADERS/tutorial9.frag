varying vec3 N;
varying vec3 I;
varying vec4 Cs;

float edgefalloff = 1.9;

void main()
{

    
    float opac = dot(normalize(-N), normalize(-I));
    opac = abs(opac);
    opac = 1.0-pow(opac, edgefalloff);
    
    
    
    gl_FragColor = opac  * Cs + gl_LightSource[0].ambient;
    gl_FragColor.a = opac;
}
