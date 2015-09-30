    const char *crystalBlock_00_SHADER_VertexStrings[1];
    const char *crystalBlock_00_SHADER_FragmentStrings[1];

    crystalBlock_00_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *crystalBlock_00_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/crystalBlock_00/crystalBlock_00.vert" );
    crystalBlock_00_SHADER_VertexStrings[0] = (char*)crystalBlock_00_SHADER_VertexAssembly;
    glShaderSourceARB( crystalBlock_00_SHADER_Vertex, 1, crystalBlock_00_SHADER_VertexStrings, NULL );
    glCompileShaderARB( crystalBlock_00_SHADER_Vertex);
    delete crystalBlock_00_SHADER_VertexAssembly;

    crystalBlock_00_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *crystalBlock_00_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/crystalBlock_00/crystalBlock_00.frag" );
    crystalBlock_00_SHADER_FragmentStrings[0] = (char*)crystalBlock_00_SHADER_FragmentAssembly;
    glShaderSourceARB( crystalBlock_00_SHADER_Fragment, 1, crystalBlock_00_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( crystalBlock_00_SHADER_Fragment );

    delete crystalBlock_00_SHADER_FragmentAssembly;

	 crystalBlock_00_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( crystalBlock_00_SHADER, crystalBlock_00_SHADER_Vertex );
    glAttachObjectARB( crystalBlock_00_SHADER, crystalBlock_00_SHADER_Fragment );

    glLinkProgramARB(crystalBlock_00_SHADER); 

    UNIFORM_counter_crystalBlock_00 = glGetUniformLocationARB( crystalBlock_00_SHADER, "counter" );

