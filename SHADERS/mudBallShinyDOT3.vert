varying vec4 pos;

void main( void )
{

    pos = gl_ModelViewMatrix * gl_Vertex;
    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
    gl_TexCoord[0] = gl_MultiTexCoord0;
}







//Equation 6-2 Linear Interpolation ---->>> blendedPosition = positionA * (1 - f) + positionB * f;
//As f varies from 0 to 1 in this equation, the intermediate position varies between positionA and positionB. 
//When f is equal to 0, the intermediate position is exactly positionA, the starting position. 
//When f is equal to 1, the intermediate position is positionB, the ending position. 
//Once again, you can use Cg's lerp function to accomplish the interpolation.
//Using lerp , the interpolation between two positions can be written concisely as:
//-->>>>>    intermediatePosition = lerp(positionA, positionB, f);


/*
void main( void )/ /////////////////////__variation 01
{
    pos = gl_ModelViewMatrix * gl_Vertex;

	gl_TexCoord[2] = gl_Vertex;
	gl_TexCoord[3] = gl_Vertex;
    gl_TexCoord[2].b -= 2.0;
    
    //gl_Vertex.x -= 2.0;   //__this line moves object along x-axis__//
    gl_Vertex = gl_TexCoord[2];
        
    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

	gl_TexCoord[0] = gl_MultiTexCoord0;
}
*/

/*
varying vec4 pos;//////////////////////__variation 02
varying vec4 positionA;
varying vec4 positionB;
varying vec4 intermediatePosition;

float3 normal;

void main( void )
{
    pos = gl_ModelViewMatrix * gl_Vertex;

	positionA = gl_Vertex;
	positionB = gl_Vertex;
    positionB.z -= 2.0;
       
       float f = gl_FrontMaterial.emission.b;   
       intermediatePosition = lerp(positionA, positionB, f);    

    gl_Vertex = intermediatePosition;
    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
    gl_TexCoord[0] = gl_MultiTexCoord0;
}
*/
/*///////////////////________ORIGINAL
varying vec4 pos;

void main( void )
{
        
    pos = gl_ModelViewMatrix * gl_Vertex;

	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

	gl_TexCoord[0] = gl_MultiTexCoord0;
}
*/
