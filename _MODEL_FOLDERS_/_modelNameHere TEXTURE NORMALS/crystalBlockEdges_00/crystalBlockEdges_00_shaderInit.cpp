    const char *crystalBlockEdges_00_SHADER_VertexStrings[1];
    const char *crystalBlockEdges_00_SHADER_FragmentStrings[1];

    crystalBlockEdges_00_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *crystalBlockEdges_00_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/crystalBlockEdges_00/crystalBlockEdges_00.vert" );
    crystalBlockEdges_00_SHADER_VertexStrings[0] = (char*)crystalBlockEdges_00_SHADER_VertexAssembly;
    glShaderSourceARB( crystalBlockEdges_00_SHADER_Vertex, 1, crystalBlockEdges_00_SHADER_VertexStrings, NULL );
    glCompileShaderARB( crystalBlockEdges_00_SHADER_Vertex);
    delete crystalBlockEdges_00_SHADER_VertexAssembly;

    crystalBlockEdges_00_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *crystalBlockEdges_00_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/crystalBlockEdges_00/crystalBlockEdges_00.frag" );
    crystalBlockEdges_00_SHADER_FragmentStrings[0] = (char*)crystalBlockEdges_00_SHADER_FragmentAssembly;
    glShaderSourceARB( crystalBlockEdges_00_SHADER_Fragment, 1, crystalBlockEdges_00_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( crystalBlockEdges_00_SHADER_Fragment );

    delete crystalBlockEdges_00_SHADER_FragmentAssembly;

	 crystalBlockEdges_00_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( crystalBlockEdges_00_SHADER, crystalBlockEdges_00_SHADER_Vertex );
    glAttachObjectARB( crystalBlockEdges_00_SHADER, crystalBlockEdges_00_SHADER_Fragment );

    glLinkProgramARB(crystalBlockEdges_00_SHADER); 

    UNIFORM_counter_crystalBlockEdges_00 = glGetUniformLocationARB( crystalBlockEdges_00_SHADER, "counter" );

