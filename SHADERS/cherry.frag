varying vec3 normal;
varying vec3 length;
varying vec3 position;
varying float pattern;

float attenuation;

varying vec4 color0;    // "Diffuse" Color
varying vec4 color1;    // "Ambient" Color
varying vec4 color2;    // "Specular" Color

float spec; 
float spec2;

void main (void)
{
     color0           = gl_FrontMaterial.diffuse*1.1;
     color1           = gl_FrontMaterial.ambient;
     color2           = gl_FrontMaterial.specular;
     
     attenuation      = 1.00 / (gl_LightSource[0].constantAttenuation  +
				                gl_LightSource[0].linearAttenuation    * 100 +
				                gl_LightSource[0].quadraticAttenuation * 1000);
     
     vec3 eyePosition = normalize(-position);
     vec3 reflect     = normalize(-reflect(length, normal));

     float diffuse    = max(dot(normal, length), 0.0);
     diffuse          = smoothstep(diffuse, 0.0, 0.5); 

    
         spec       = pow(max(dot(reflect,eyePosition), 0.0), 10.0);
         spec2      = pattern * spec;
    
     gl_FragColor     = color1 + color0 * diffuse + color2 * (spec + spec2) * attenuation;
}
