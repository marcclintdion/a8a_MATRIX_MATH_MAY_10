              uniform float counter;

              varying vec4 position;

              varying vec3 lightDir1;

              varying float attenuation;

              uniform float textureDisplacement_X;

              uniform float textureDisplacement_Y;

              uniform float offset_X;

              uniform float offset_Y;

              void main( void )

              {

                  gl_TexCoord[0]    = gl_MultiTexCoord0;

                  gl_TexCoord[1]    = gl_MultiTexCoord0;

              //////////////----------------------------    

                  gl_TexCoord[1].x *= 0.2;//____________?_________0.2 FOR 2 METER TILES

                  gl_TexCoord[1].y *= 0.2;

                  gl_TexCoord[1].x -= offset_X - .01;

                  gl_TexCoord[1].y -= offset_Y - .01;    

                  gl_TexCoord[1].x -= textureDisplacement_X;

                  gl_TexCoord[1].y -= textureDisplacement_Y;   

              //////////////----------------------------  

                  position         = gl_ModelViewProjectionMatrix * gl_Vertex;

                  gl_Position      = position;

                  lightDir1        =  normalize(gl_LightSource[0].position.xyz - position.xyz);

                  attenuation      =  1.00 / (gl_LightSource[0].quadraticAttenuation);

              }

