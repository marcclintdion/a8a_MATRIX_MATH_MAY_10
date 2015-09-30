//
// Vertex shader for chromatic aberration effect
//
// Author: Randi Rost
//
// Copyright (c) 2003-2006: 3Dlabs, Inc.
//
// See 3Dlabs-License.txt for license information


const float EtaR = 0.65;
const float EtaG = 0.67;        // Ratio of indices of refraction
const float EtaB = 0.69;
const float FresnelPower = 3.0;

const float F  = ((1.0-EtaG) * (1.0-EtaG)) / ((1.0+EtaG) * (1.0+EtaG));

varying vec3  Reflect;
varying vec3  RefractR;
varying vec3  RefractG;
varying vec3  RefractB;
varying float Ratio;

void main()
{
    vec4 ecPosition  = gl_ModelViewMatrix * gl_Vertex;
    vec3 ecPosition3 = ecPosition.xyz / ecPosition.w;

    vec3 i = normalize(ecPosition3);
    vec3 n = normalize(gl_NormalMatrix * gl_Normal);

    Ratio   = F + (1.0 - F) * pow((1.0 - dot(-i, n)), FresnelPower);

    RefractR = refract(i, n, EtaR);
    RefractR = vec3(gl_TextureMatrix * vec4(RefractR.x, -RefractR.y, RefractR.z, 1.0));

    RefractG = refract(i, n, EtaG);
    RefractG = vec3(gl_TextureMatrix * vec4(RefractG.x, -RefractG.y, RefractG.z, 1.0));

    RefractB = refract(i, n, EtaB);
    RefractB = vec3(gl_TextureMatrix * vec4(RefractB.x, -RefractB.y, RefractB.z, 1.0));

    Reflect  = reflect(i, n);
    Reflect  = vec3(gl_TextureMatrix * vec4(Reflect.x,  -Reflect.y,  Reflect.z,  1.0));

    gl_Position = ecPosition;
}
