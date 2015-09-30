varying vec3 Normal;
varying vec3 invertPosition;
varying vec4 Color;
varying vec4 Position;
varying vec4 rawPosition;
varying vec4 positionOfModelCenter;

float edgefalloff = -1.0;


void main()
{
    invertPosition  = Position.xyz - positionOfModelCenter.xyz;
    
    float opac = dot(normalize(-Normal), normalize(-invertPosition));
    opac = abs(opac);
    opac = 1.0 - pow(opac, edgefalloff);
    opac = 1.0 - opac;
    
    gl_FragColor =  opac * Color;
    gl_FragColor.a = log(opac);
    
  //  if(rawPosition[1] < -.3)
  //  {
  //       gl_FragColor.a = 0.0;//____If ->(varying vec4 Position) is used, then the lower outOfBounds cut-off point is stationary according to the physical computer monitor
  //  }                         //____If ->(varying vec4 rawPosition) is used, then the lower outOfBounds cut-off point moves as the model moves in virtual space
}
