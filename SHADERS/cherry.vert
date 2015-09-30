varying vec3 normal;
varying vec3 length;
varying vec3 position;
varying float pattern;

varying vec3 lightPos; // = vec3(0.0,5.0,5.0);  // make this uniform

void main(void)
{
  lightPos = gl_LightSource[0].position;
  
  position = (gl_ModelViewMatrix * gl_Vertex).xyz;
  length = normalize(lightPos - position);
  normal = normalize(gl_NormalMatrix * gl_Normal);

  pattern=fract(4.0 * (gl_Vertex.y + gl_Vertex.x + gl_Vertex.z));

  gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}
