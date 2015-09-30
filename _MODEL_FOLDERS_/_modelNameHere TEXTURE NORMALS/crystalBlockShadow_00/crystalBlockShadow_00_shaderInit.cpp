    const char *crystalBlockShadow_00_SHADER_VertexStrings[1];
    const char *crystalBlockShadow_00_SHADER_FragmentStrings[1];

    crystalBlockShadow_00_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *crystalBlockShadow_00_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/crystalBlockShadow_00/crystalBlockShadow_00.vert" );
    crystalBlockShadow_00_SHADER_VertexStrings[0] = (char*)crystalBlockShadow_00_SHADER_VertexAssembly;
    glShaderSourceARB( crystalBlockShadow_00_SHADER_Vertex, 1, crystalBlockShadow_00_SHADER_VertexStrings, NULL );
    glCompileShaderARB( crystalBlockShadow_00_SHADER_Vertex);
    delete crystalBlockShadow_00_SHADER_VertexAssembly;

    crystalBlockShadow_00_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *crystalBlockShadow_00_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/crystalBlockShadow_00/crystalBlockShadow_00.frag" );
    crystalBlockShadow_00_SHADER_FragmentStrings[0] = (char*)crystalBlockShadow_00_SHADER_FragmentAssembly;
    glShaderSourceARB( crystalBlockShadow_00_SHADER_Fragment, 1, crystalBlockShadow_00_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( crystalBlockShadow_00_SHADER_Fragment );

    delete crystalBlockShadow_00_SHADER_FragmentAssembly;

	 crystalBlockShadow_00_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( crystalBlockShadow_00_SHADER, crystalBlockShadow_00_SHADER_Vertex );
    glAttachObjectARB( crystalBlockShadow_00_SHADER, crystalBlockShadow_00_SHADER_Fragment );

    glLinkProgramARB(crystalBlockShadow_00_SHADER); 

    UNIFORM_counter_crystalBlockShadow_00 = glGetUniformLocationARB( crystalBlockShadow_00_SHADER, "counter" );

