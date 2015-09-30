varying float texCoord;
varying float specular, diffuse;

                                                                                //uniform float film_depth, exponent;
float film_depth = 0.25;
float exponent = 0.25;

vec3 eye_position = (0.0, 1.0, 5.0); 
vec3 light_position = (1.0, 1.0, 1.0);

void main()
{
   vec3 Nn = normalize(gl_NormalMatrix * gl_Normal);
   vec3 Pw = vec3(gl_ModelViewMatrix * gl_Vertex);

   vec3 Ln = normalize(light_position - Pw);
   vec3 Vn = normalize(eye_position   - Pw);
   vec3 Hn = normalize(Ln + Vn);

   float ldn = dot(Ln, Nn);
   float hdn = dot(Hn, Nn);
   float vdn = dot(Vn, Nn);

   diffuse  = max(ldn, 0.0);
   specular = pow(max(hdn, 0.0), exponent);
   
   texCoord = clamp(film_depth / vdn, 0.0, 1.0);


   gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}
