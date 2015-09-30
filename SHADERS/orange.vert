//
// Vertex shader for producing a turbulent fire effect
//
// Authors: John Kessenich, Randi Rost
//
// Copyright (c) 2002-2005 3Dlabs Inc. Ltd. 
//
// See 3Dlabs-License.txt for license information
//

varying float LightIntensity;
varying vec3  MCposition;

uniform vec3  LightPos = {0.0,0.0,0.0};
uniform float Scale = 1.2;

void main()
{
    vec3 ECposition = vec3(gl_ModelViewMatrix * gl_Vertex);
    MCposition      = vec3(gl_Vertex) * Scale;
    vec3 tnorm      = normalize(vec3 (gl_NormalMatrix * gl_Normal));
    LightIntensity  = dot(normalize(LightPos - ECposition), tnorm);
    LightIntensity *= 8.5;
    gl_Position     = gl_ModelViewProjectionMatrix * gl_Vertex;
}
