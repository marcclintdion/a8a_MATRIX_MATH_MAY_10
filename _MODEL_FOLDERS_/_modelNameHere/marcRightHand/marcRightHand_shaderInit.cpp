    const char *marcRightHand_SHADER_VertexStrings[1];
    const char *marcRightHand_SHADER_FragmentStrings[1];

    marcRightHand_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *marcRightHand_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/marcRightHand/marcRightHand.vert" );
    marcRightHand_SHADER_VertexStrings[0] = (char*)marcRightHand_SHADER_VertexAssembly;
    glShaderSourceARB( marcRightHand_SHADER_Vertex, 1, marcRightHand_SHADER_VertexStrings, NULL );
    glCompileShaderARB( marcRightHand_SHADER_Vertex);
    delete marcRightHand_SHADER_VertexAssembly;

    marcRightHand_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *marcRightHand_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/marcRightHand/marcRightHand.frag" );
    marcRightHand_SHADER_FragmentStrings[0] = (char*)marcRightHand_SHADER_FragmentAssembly;
    glShaderSourceARB( marcRightHand_SHADER_Fragment, 1, marcRightHand_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( marcRightHand_SHADER_Fragment );

    delete marcRightHand_SHADER_FragmentAssembly;

	 marcRightHand_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( marcRightHand_SHADER, marcRightHand_SHADER_Vertex );
    glAttachObjectARB( marcRightHand_SHADER, marcRightHand_SHADER_Fragment );

    glLinkProgramARB(marcRightHand_SHADER); 

    UNIFORM_counter_marcRightHand = glGetUniformLocationARB( marcRightHand_SHADER, "counter" );

