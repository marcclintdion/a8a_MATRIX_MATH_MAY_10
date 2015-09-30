    const char *rocks_00_SHADER_VertexStrings[1];
    const char *rocks_00_SHADER_FragmentStrings[1];

    rocks_00_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *rocks_00_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/rocks_00/rocks_00.vert" );
    rocks_00_SHADER_VertexStrings[0] = (char*)rocks_00_SHADER_VertexAssembly;
    glShaderSourceARB( rocks_00_SHADER_Vertex, 1, rocks_00_SHADER_VertexStrings, NULL );
    glCompileShaderARB( rocks_00_SHADER_Vertex);
    delete rocks_00_SHADER_VertexAssembly;

    rocks_00_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *rocks_00_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/rocks_00/rocks_00.frag" );
    rocks_00_SHADER_FragmentStrings[0] = (char*)rocks_00_SHADER_FragmentAssembly;
    glShaderSourceARB( rocks_00_SHADER_Fragment, 1, rocks_00_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( rocks_00_SHADER_Fragment );

    delete rocks_00_SHADER_FragmentAssembly;

	 rocks_00_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( rocks_00_SHADER, rocks_00_SHADER_Vertex );
    glAttachObjectARB( rocks_00_SHADER, rocks_00_SHADER_Fragment );

    glLinkProgramARB(rocks_00_SHADER); 

    UNIFORM_counter_rocks_00 = glGetUniformLocationARB( rocks_00_SHADER, "counter" );

