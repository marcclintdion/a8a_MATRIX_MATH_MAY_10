

uniform vec3 lightVector;
uniform vec3 eyeVector;
uniform float filmDepth;

varying vec3 diffColor;
varying vec3 specColor;
varying vec2 viewDepth;
varying vec2 uv;

void main()
{
    gl_Position = ftransform();

    vec3 normalVec = gl_NormalMatrix * gl_Normal;
    normalVec = normalize(normalVec);

    vec3 eyeVec = eyeVector;   //infinite viewer (Best looking)

    viewDepth = vec2((1.0 / dot(normalVec, eyeVec)) * filmDepth);
    
    vec3 lightVec = normalize(lightVector);

    vec3 halfAngleVec = normalize(lightVec + eyeVec);

    float diffuse = max(dot(normalVec, lightVec), 0.0);

    float specular = max(dot(normalVec, halfAngleVec), 0.0);
    specular = pow(specular, 32.0);

    diffColor = vec3(diffuse);
    specColor = vec3(specular);

    uv = gl_MultiTexCoord0.xy;
}
