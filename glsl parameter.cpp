GLfloat shiftCastleLightPosition[] = {0, 0, 0};
GLint   castleLightPositionMove;


///////////////////////////////////////////////////////////////////


void INIT() 
{
     castleLightPositionMove = glGetUniformLocationARB(programName, "shiftCastleLightPosition");
}


///////////////////////////////////////////////////////////////////


void RENDER(void) 
{
     glUniform3fARB(castleLightPositionMove, shiftCastleLightPosition);

	 glutSolidTeapot(1);
	
     shiftCastleLightPosition += .01;
}


///////////////////////////////////////////////////////////////////


uniform vec3 shiftCastleLightPosition;

void main(void)
{
	vec4 v = vec4(gl_Vertex);
	
	v.z = sin(5.0 *v.x + shiftCastleLightPosition.x)*0.5;
	
	gl_Position = gl_ModelViewProjectionMatrix * v;
}
///////////////////////////////////////////////////////////////////
