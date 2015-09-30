    const char *crystalBlock_00b_SHADER_VertexStrings[1];
    const char *crystalBlock_00b_SHADER_FragmentStrings[1];

    crystalBlock_00b_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *crystalBlock_00b_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/crystalBlock_00b/crystalBlock_00b.vert" );
    crystalBlock_00b_SHADER_VertexStrings[0] = (char*)crystalBlock_00b_SHADER_VertexAssembly;
    glShaderSourceARB( crystalBlock_00b_SHADER_Vertex, 1, crystalBlock_00b_SHADER_VertexStrings, NULL );
    glCompileShaderARB( crystalBlock_00b_SHADER_Vertex);
    delete crystalBlock_00b_SHADER_VertexAssembly;

    crystalBlock_00b_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *crystalBlock_00b_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/crystalBlock_00b/crystalBlock_00b.frag" );
    crystalBlock_00b_SHADER_FragmentStrings[0] = (char*)crystalBlock_00b_SHADER_FragmentAssembly;
    glShaderSourceARB( crystalBlock_00b_SHADER_Fragment, 1, crystalBlock_00b_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( crystalBlock_00b_SHADER_Fragment );

    delete crystalBlock_00b_SHADER_FragmentAssembly;

	 crystalBlock_00b_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( crystalBlock_00b_SHADER, crystalBlock_00b_SHADER_Vertex );
    glAttachObjectARB( crystalBlock_00b_SHADER, crystalBlock_00b_SHADER_Fragment );

    glLinkProgramARB(crystalBlock_00b_SHADER); 

    UNIFORM_counter_crystalBlock_00b = glGetUniformLocationARB( crystalBlock_00b_SHADER, "counter" );

