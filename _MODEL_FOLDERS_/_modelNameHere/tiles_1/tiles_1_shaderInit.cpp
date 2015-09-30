    const char *tiles_1_SHADER_VertexStrings[1];
    const char *tiles_1_SHADER_FragmentStrings[1];

    tiles_1_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *tiles_1_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/tiles_1/tiles_1.vert" );
    tiles_1_SHADER_VertexStrings[0] = (char*)tiles_1_SHADER_VertexAssembly;
    glShaderSourceARB( tiles_1_SHADER_Vertex, 1, tiles_1_SHADER_VertexStrings, NULL );
    glCompileShaderARB( tiles_1_SHADER_Vertex);
    delete tiles_1_SHADER_VertexAssembly;

    tiles_1_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *tiles_1_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/tiles_1/tiles_1.frag" );
    tiles_1_SHADER_FragmentStrings[0] = (char*)tiles_1_SHADER_FragmentAssembly;
    glShaderSourceARB( tiles_1_SHADER_Fragment, 1, tiles_1_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( tiles_1_SHADER_Fragment );

    delete tiles_1_SHADER_FragmentAssembly;

	 tiles_1_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( tiles_1_SHADER, tiles_1_SHADER_Vertex );
    glAttachObjectARB( tiles_1_SHADER, tiles_1_SHADER_Fragment );

    glLinkProgramARB(tiles_1_SHADER); 

    UNIFORM_counter_tiles_1 = glGetUniformLocationARB( tiles_1_SHADER, "counter" );

