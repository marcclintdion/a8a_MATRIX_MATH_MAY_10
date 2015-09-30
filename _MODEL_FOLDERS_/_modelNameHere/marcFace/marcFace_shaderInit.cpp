    const char *marcFace_SHADER_VertexStrings[1];
    const char *marcFace_SHADER_FragmentStrings[1];

    marcFace_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *marcFace_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/marcFace/marcFace.vert" );
    marcFace_SHADER_VertexStrings[0] = (char*)marcFace_SHADER_VertexAssembly;
    glShaderSourceARB( marcFace_SHADER_Vertex, 1, marcFace_SHADER_VertexStrings, NULL );
    glCompileShaderARB( marcFace_SHADER_Vertex);
    delete marcFace_SHADER_VertexAssembly;

    marcFace_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *marcFace_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/marcFace/marcFace.frag" );
    marcFace_SHADER_FragmentStrings[0] = (char*)marcFace_SHADER_FragmentAssembly;
    glShaderSourceARB( marcFace_SHADER_Fragment, 1, marcFace_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( marcFace_SHADER_Fragment );

    delete marcFace_SHADER_FragmentAssembly;

	 marcFace_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( marcFace_SHADER, marcFace_SHADER_Vertex );
    glAttachObjectARB( marcFace_SHADER, marcFace_SHADER_Fragment );

    glLinkProgramARB(marcFace_SHADER); 

    UNIFORM_counter_marcFace = glGetUniformLocationARB( marcFace_SHADER, "counter" );

