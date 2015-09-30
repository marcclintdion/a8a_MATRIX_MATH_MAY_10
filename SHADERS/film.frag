varying float texCoord;
varying float specular, diffuse;

uniform sampler1D film;
vec3 model_color = (0.8, 0.0, 0.8);

void main()
{
   gl_FragColor = vec4(texture2D(film, texCoord) * specular + model_color * diffuse, 1.0);
}
