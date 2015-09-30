uniform vec3  SurfaceColor = (-0.1, -0.1, -0.1); 
uniform vec3  WarmColor    = (0.6,  0.6, 0.0); 
uniform vec3  CoolColor    = (0.0,  0.0, 0.6); 
uniform float DiffuseWarm  =  0.7;
uniform float DiffuseCool  =  0.7; 

varying float NdotL;
varying vec3  ReflectVec;
varying vec3  ViewVec;

void main()
{
    vec3 kcool    = CoolColor + DiffuseCool * SurfaceColor;
    vec3 kwarm    = WarmColor + DiffuseWarm * SurfaceColor; 
    vec3 kfinal   = mix(kcool, kwarm, NdotL);

    vec3 nreflect = normalize(ReflectVec);
    vec3 nview    = normalize(ViewVec);

    float spec    = max(dot(nreflect, nview), 0.0);
    spec          = pow(spec, 32.0);


    kfinal.r += 0.07;
    kfinal.g += 0.02; 
    kfinal.b += 0.005;   
    gl_FragColor = vec4(kfinal + spec, 1.0);
}
