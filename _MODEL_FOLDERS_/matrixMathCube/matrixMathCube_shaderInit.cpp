    const char *matrixMathCube_SHADER_VertexStrings[1];
    const char *matrixMathCube_SHADER_FragmentStrings[1];

    matrixMathCube_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *matrixMathCube_SHADER_VertexAssembly = readShaderFile( "_MODEL_FOLDERS_/matrixMathCube/matrixMathCube.vert" );
    matrixMathCube_SHADER_VertexStrings[0] = (char*)matrixMathCube_SHADER_VertexAssembly;
    glShaderSourceARB( matrixMathCube_SHADER_Vertex, 1, matrixMathCube_SHADER_VertexStrings, NULL );
    glCompileShaderARB( matrixMathCube_SHADER_Vertex);
    delete matrixMathCube_SHADER_VertexAssembly;

    matrixMathCube_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *matrixMathCube_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/matrixMathCube/matrixMathCube.frag" );
    matrixMathCube_SHADER_FragmentStrings[0] = (char*)matrixMathCube_SHADER_FragmentAssembly;
    glShaderSourceARB( matrixMathCube_SHADER_Fragment, 1, matrixMathCube_SHADER_FragmentStrings, NULL );
    glCompileShaderARB(matrixMathCube_SHADER_Fragment );

    delete matrixMathCube_SHADER_FragmentAssembly;

	 matrixMathCube_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( matrixMathCube_SHADER, matrixMathCube_SHADER_Vertex );
    glAttachObjectARB( matrixMathCube_SHADER, matrixMathCube_SHADER_Fragment );

    glLinkProgramARB(matrixMathCube_SHADER); 

    UNIFORM_counter1_matrixMathCube = glGetUniformLocationARB( matrixMathCube_SHADER, "counter1" );

    UNIFORM_counter2_matrixMathCube = glGetUniformLocationARB( matrixMathCube_SHADER, "counter2" );

    UNIFORM_counter3_matrixMathCube = glGetUniformLocationARB( matrixMathCube_SHADER, "counter3" );

    UNIFORM_counter4_matrixMathCube = glGetUniformLocationARB( matrixMathCube_SHADER, "counter4" );

