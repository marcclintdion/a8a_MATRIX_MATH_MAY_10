    const char *spikyBall_00_SHADER_VertexStrings[1];
    const char *spikyBall_00_SHADER_FragmentStrings[1];

    spikyBall_00_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *spikyBall_00_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/spikyBall_00/spikyBall_00.vert" );
    spikyBall_00_SHADER_VertexStrings[0] = (char*)spikyBall_00_SHADER_VertexAssembly;
    glShaderSourceARB( spikyBall_00_SHADER_Vertex, 1, spikyBall_00_SHADER_VertexStrings, NULL );
    glCompileShaderARB( spikyBall_00_SHADER_Vertex);
    delete spikyBall_00_SHADER_VertexAssembly;

    spikyBall_00_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *spikyBall_00_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/spikyBall_00/spikyBall_00.frag" );
    spikyBall_00_SHADER_FragmentStrings[0] = (char*)spikyBall_00_SHADER_FragmentAssembly;
    glShaderSourceARB( spikyBall_00_SHADER_Fragment, 1, spikyBall_00_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( spikyBall_00_SHADER_Fragment );

    delete spikyBall_00_SHADER_FragmentAssembly;

	 spikyBall_00_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( spikyBall_00_SHADER, spikyBall_00_SHADER_Vertex );
    glAttachObjectARB( spikyBall_00_SHADER, spikyBall_00_SHADER_Fragment );

    glLinkProgramARB(spikyBall_00_SHADER); 

    UNIFORM_counter_spikyBall_00 = glGetUniformLocationARB( spikyBall_00_SHADER, "counter" );

