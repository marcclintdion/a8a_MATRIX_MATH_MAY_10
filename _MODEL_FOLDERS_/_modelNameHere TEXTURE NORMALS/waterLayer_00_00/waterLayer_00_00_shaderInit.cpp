    const char *waterLayer_00_00_SHADER_VertexStrings[1];
    const char *waterLayer_00_00_SHADER_FragmentStrings[1];

    waterLayer_00_00_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *waterLayer_00_00_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/waterLayer_00_00/waterLayer_00_00.vert" );
    waterLayer_00_00_SHADER_VertexStrings[0] = (char*)waterLayer_00_00_SHADER_VertexAssembly;
    glShaderSourceARB( waterLayer_00_00_SHADER_Vertex, 1, waterLayer_00_00_SHADER_VertexStrings, NULL );
    glCompileShaderARB( waterLayer_00_00_SHADER_Vertex);
    delete waterLayer_00_00_SHADER_VertexAssembly;

    waterLayer_00_00_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *waterLayer_00_00_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/waterLayer_00_00/waterLayer_00_00.frag" );
    waterLayer_00_00_SHADER_FragmentStrings[0] = (char*)waterLayer_00_00_SHADER_FragmentAssembly;
    glShaderSourceARB( waterLayer_00_00_SHADER_Fragment, 1, waterLayer_00_00_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( waterLayer_00_00_SHADER_Fragment );

    delete waterLayer_00_00_SHADER_FragmentAssembly;

	 waterLayer_00_00_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( waterLayer_00_00_SHADER, waterLayer_00_00_SHADER_Vertex );
    glAttachObjectARB( waterLayer_00_00_SHADER, waterLayer_00_00_SHADER_Fragment );

    glLinkProgramARB(waterLayer_00_00_SHADER); 

    UNIFORM_counter_waterLayer_00_00 = glGetUniformLocationARB( waterLayer_00_00_SHADER, "counter" );

