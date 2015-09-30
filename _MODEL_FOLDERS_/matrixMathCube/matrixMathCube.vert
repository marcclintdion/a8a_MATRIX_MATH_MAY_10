uniform float counter1;
uniform float counter2;
uniform float counter3;
uniform float counter4;


vec4            position;


varying vec3 lightDir1;
varying float attenuation;


void main( void )
{
    gl_TexCoord[0]         = gl_MultiTexCoord0;

    float angle_rad        = counter1 * 3.14159 / 180.0;
      
    
 /*   
    position.x =  gl_Vertex.x * cos(angle_rad) + gl_Vertex.y * sin(angle_rad);
    
    position.y = -gl_Vertex.x * sin(angle_rad) + gl_Vertex.y * cos(angle_rad);   
    
    
    
    position.z =  gl_Vertex.z;
    
    position.w =  gl_Vertex.w;   
*/

    
    position.x =  gl_Vertex.x + sin(counter1*0.02) * 5.0;   
    
    
    position.y =  gl_Vertex.y;   
    position.z =  gl_Vertex.z;
    position.w =  gl_Vertex.w;       
    
    lightDir1   =  normalize(gl_LightSource[0].position.xyz - position.xyz);
    attenuation =  1.00 /   (gl_LightSource[0].quadraticAttenuation);    
    
    gl_Position =  gl_ModelViewProjectionMatrix * position;
}







//______OTHER_AXIS_OF_TRANSFORMATION_BELOW___!!!!



   // position.x  =  gl_Vertex.x * cos(angle_rad)     -  gl_Vertex.y * sin(angle_rad)   +   gl_Vertex.z * sin(angle_rad);
   // position.y  =  gl_Vertex.x * sin(angle_rad)     +  gl_Vertex.y * cos(angle_rad)   -   gl_Vertex.z * sin(angle_rad);
   // position.z  = -gl_Vertex.x * sin(angle_rad)     +  gl_Vertex.y * sin(angle_rad)   +   gl_Vertex.z * cos(angle_rad);



//_______________________BLOCK_1_____________________ROTATION_ABOUT_THE_Y-AXIS________________
//_______________________BLOCK_1_____________________ROTATION_ABOUT_THE_Y-AXIS________________
//_______________________BLOCK_1_____________________ROTATION_ABOUT_THE_Y-AXIS________________
//_______________________BLOCK_1_____________________ROTATION_ABOUT_THE_Y-AXIS________________

/*
uniform float counter1;
uniform float counter2;
uniform float counter3;
uniform float counter4;


vec4 position;




void main( void )
{
    gl_TexCoord[0]         = gl_MultiTexCoord0;

    float angle_rad        = counter1 * 3.14159 / 180.0;


    position.x =  gl_Vertex.x * cos(angle_rad) + gl_Vertex.z * sin(angle_rad);
    
    position.z = -gl_Vertex.x * sin(angle_rad) + gl_Vertex.z * cos(angle_rad);    
    
    position.y = gl_Vertex.y;
    position.w = gl_Vertex.w;   
    
    
    
    
    gl_Position = gl_ModelViewProjectionMatrix * position;
}
*/
//_______________________BLOCK_1_____________________ROTATION_ABOUT_THE_Y-AXIS________________
//_______________________BLOCK_1_____________________ROTATION_ABOUT_THE_Y-AXIS________________
//_______________________BLOCK_1_____________________ROTATION_ABOUT_THE_Y-AXIS________________
//_______________________BLOCK_1_____________________ROTATION_ABOUT_THE_Y-AXIS________________

//-------------------------------------------------------------------------------------------------------

//_______________________BLOCK_2_____________________ROTATION_ABOUT_THE_X-AXIS________________
//_______________________BLOCK_2_____________________ROTATION_ABOUT_THE_X-AXIS________________
//_______________________BLOCK_2_____________________ROTATION_ABOUT_THE_X-AXIS________________
//_______________________BLOCK_2_____________________ROTATION_ABOUT_THE_X-AXIS________________
/*
uniform float counter1;
uniform float counter2;
uniform float counter3;
uniform float counter4;


vec4 position;




void main( void )
{
    gl_TexCoord[0]         = gl_MultiTexCoord0;

    float angle_rad        = counter1 * 3.14159 / 180.0;


    position.y = gl_Vertex.y * cos(angle_rad)  + gl_Vertex.z * sin(angle_rad);
    position.z = -gl_Vertex.y * sin(angle_rad) + gl_Vertex.z * cos(angle_rad);    
    
    position.x = gl_Vertex.x;
    position.w = gl_Vertex.w;   
    
    
    
    
    gl_Position = gl_ModelViewProjectionMatrix * position;
}
*/
//_______________________BLOCK_2_____________________ROTATION_ABOUT_THE_X-AXIS________________
//_______________________BLOCK_2_____________________ROTATION_ABOUT_THE_X-AXIS________________
//_______________________BLOCK_2_____________________ROTATION_ABOUT_THE_X-AXIS________________
//_______________________BLOCK_2_____________________ROTATION_ABOUT_THE_X-AXIS________________

//-------------------------------------------------------------------------------------------------------

/* File: Twist.cpp; Mode: C++; Tab-width: 3; Author: Simon Flannery;          */
//__blended_with_
