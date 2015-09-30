varying vec4 position;
varying vec4 Vertex;			
varying vec4 inverseEye;

varying vec3 primaryVertex;
varying vec3 secondaryVertex;
varying vec3 interpolatedVertex;


varying vec2 primaryTexCoords;
varying vec2 secondTexCoords;			
varying vec2 interpolatedTexCoords;


uniform float modelMixCounter;

void main( void )
{
    primaryVertex         = gl_Vertex;
    secondaryVertex       = gl_Normal;
    
    
    interpolatedVertex    = mix(primaryVertex, secondaryVertex, modelMixCounter); 
    
    
    primaryTexCoords      = gl_MultiTexCoord0;
    secondTexCoords       = gl_Color.xy;    
    interpolatedTexCoords = mix(primaryTexCoords, secondTexCoords, modelMixCounter);  

    
    Vertex                = gl_ModelViewMatrix * vec4(interpolatedVertex, 1.0);
    position              = gl_ModelViewProjectionMatrix * vec4(interpolatedVertex, 1.0);
    
    
    gl_Position           = position;
    inverseEye            = gl_ModelViewMatrixInverse * vec4(0,0,-1,0);
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////



/*void main( void )
{
    
    
    
    
    primaryVertex         = gl_Vertex;
    secondaryVertex       = vec4(gl_Normal, 1.0);
    interpolatedVertex    = primaryVertex  * (1 - animationBlendFactor) + secondaryVertex * animationBlendFactor; 
    
    primaryTexCoords      = gl_MultiTexCoord0;
    secondTexCoords       = gl_Color.xy;    
    interpolatedTexCoords = gl_MultiTexCoord0  * (1 - animationBlendFactor) + secondTexCoords * animationBlendFactor;  

    
    Vertex              = gl_ModelViewMatrix * interpolatedVertex;
    position            = gl_ModelViewProjectionMatrix * interpolatedVertex;
    
    gl_Position         = position;
    inverseEye          = gl_ModelViewMatrixInverse * vec4(0,0,-1,0);
}*/


















/*  
    Vertex         = gl_ModelViewMatrix * vec4(gl_Normal, 1.0);
    //Vertex         = gl_ModelViewMatrix * gl_Vertex;
    //Vertex         = gl_ModelViewMatrix * gl_Color;
    inverseEye       = gl_ModelViewMatrixInverse * vec4(0,0,-1,0);
    
   
    primaryTexCoords = gl_MultiTexCoord0;
    secondTexCoords  = gl_Color.xy;


    position       = gl_ModelViewProjectionMatrix * vec4(gl_Normal, 1.0);
    //position       = gl_ModelViewProjectionMatrix * gl_Vertex;
    //position       = gl_ModelViewProjectionMatrix * gl_Color;
    gl_Position      = position;
*/


