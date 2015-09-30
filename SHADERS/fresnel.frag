varying vec4 diffuse;
varying vec3 normal;

////////////////////////////////////////////////////////________lightHouse3D(above)_____/////_____fresnel(below)______

varying vec4 Vertex;
varying vec4 inverseEye;		
const vec3 Ln = vec3(-.913, 0.365, 0.183);
uniform sampler2D env;
const float fresnelReflectance = 0.1;	
const vec4 ka = vec4(.1,.2,.3,1);
const vec4 kd = vec4(.5,.7,.9,0);
const vec4 ks = vec4(.4,.4,.4,0);
const float es = 16;

vec4 tempColor;

void main()
{

		    
    
////////////////////////////////////////////////////////________lightHouse3D(above)_____/////_____fresnel(below)______    
    
    vec3 newNormal = normalize(normal);	
    vec3 invertView = normalize(Vertex.xyz * inverseEye.w - inverseEye.xyz * Vertex.w);  
    vec3 Hn = normalize(Ln - invertView);

    float diffuse = max(0.0, dot(newNormal, Ln));
    float specular = pow(max(0.0, dot(newNormal, Hn)), es);
    
    vec4 col   = ka + kd * diffuse;
    col *= specular;
    
    vec3 Reflect = reflect(invertView, newNormal);
    vec3 RH = normalize(Reflect - invertView);
    float fresnel = fresnelReflectance + (1.0 - fresnelReflectance) * pow(1.0 + dot(invertView, RH),5.0);///ADJUSTMENT FOR TEXTURE MAP BRIGHTNESS
    vec4 env = texture2D(env, 0.5 + 0.5 * normalize(Reflect + vec3(0, 0, 1)).xy);

    tempColor = mix(col, env, fresnel);


gl_FragColor = tempColor;

}










