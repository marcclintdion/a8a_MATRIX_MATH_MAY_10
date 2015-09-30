    const char *spikes_00_SHADER_VertexStrings[1];
    const char *spikes_00_SHADER_FragmentStrings[1];

    spikes_00_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *spikes_00_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/spikes_00/spikes_00.vert" );
    spikes_00_SHADER_VertexStrings[0] = (char*)spikes_00_SHADER_VertexAssembly;
    glShaderSourceARB( spikes_00_SHADER_Vertex, 1, spikes_00_SHADER_VertexStrings, NULL );
    glCompileShaderARB( spikes_00_SHADER_Vertex);
    delete spikes_00_SHADER_VertexAssembly;

    spikes_00_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *spikes_00_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/spikes_00/spikes_00.frag" );
    spikes_00_SHADER_FragmentStrings[0] = (char*)spikes_00_SHADER_FragmentAssembly;
    glShaderSourceARB( spikes_00_SHADER_Fragment, 1, spikes_00_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( spikes_00_SHADER_Fragment );

    delete spikes_00_SHADER_FragmentAssembly;

	 spikes_00_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( spikes_00_SHADER, spikes_00_SHADER_Vertex );
    glAttachObjectARB( spikes_00_SHADER, spikes_00_SHADER_Fragment );

    glLinkProgramARB(spikes_00_SHADER); 

    UNIFORM_counter_spikes_00 = glGetUniformLocationARB( spikes_00_SHADER, "counter" );

