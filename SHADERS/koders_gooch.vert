vec3  LightPosition = (0.0, 10.0, 4.0);   

varying float NdotL;
varying vec3  ReflectVec;
varying vec3  ViewVec;

void main()
{
    vec3 ecPos      = vec3(gl_ModelViewMatrix   * gl_Vertex);
    vec3 tnorm      = normalize(gl_NormalMatrix * gl_Normal);
    vec3 lightVec   = normalize(gl_LightSource[0].position - ecPos);
    ReflectVec      = normalize(reflect(-lightVec, tnorm));
    ViewVec         = normalize(-ecPos);
    NdotL           = (dot(lightVec, tnorm) + 1.0) * 0.5;
    gl_Position     = ftransform();
}
