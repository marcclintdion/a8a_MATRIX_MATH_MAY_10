varying vec4 pos;

void main( void )
{
        pos = gl_ModelViewMatrix * gl_Vertex;

	
        gl_Vertex.x -=0.0;   //__this line moves object along x-axis__//

        



        gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

	gl_TexCoord[0] = gl_MultiTexCoord0;
}




//Equation 6-2 Linear Interpolation 
//As f varies from 0 to 1 in this equation, the intermediate position varies between positionA and positionB. 
//When f is equal to 0, the intermediate position is exactly positionA, the starting position. 
//When f is equal to 1, the intermediate position is positionB, the ending position. 
//Once again, you can use Cg's lerp function to accomplish the interpolation.
//Using lerp , the interpolation between two positions can be written concisely as:
//-->>>>>    intermediatePosition = lerp(positionA, positionB, f);




/*
varying vec4 pos;

void main( void )
{
        
	
	pos = gl_ModelViewMatrix * gl_Vertex;

	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

	gl_TexCoord[0] = gl_MultiTexCoord0;
}
*/
