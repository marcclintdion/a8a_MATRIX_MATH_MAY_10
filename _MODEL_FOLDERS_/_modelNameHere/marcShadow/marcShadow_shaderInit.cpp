    const char *marcShadow_SHADER_VertexStrings[1];
    const char *marcShadow_SHADER_FragmentStrings[1];

    marcShadow_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *marcShadow_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/marcShadow/marcShadow.vert" );
    marcShadow_SHADER_VertexStrings[0] = (char*)marcShadow_SHADER_VertexAssembly;
    glShaderSourceARB( marcShadow_SHADER_Vertex, 1, marcShadow_SHADER_VertexStrings, NULL );
    glCompileShaderARB( marcShadow_SHADER_Vertex);
    delete marcShadow_SHADER_VertexAssembly;

    marcShadow_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *marcShadow_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/marcShadow/marcShadow.frag" );
    marcShadow_SHADER_FragmentStrings[0] = (char*)marcShadow_SHADER_FragmentAssembly;
    glShaderSourceARB( marcShadow_SHADER_Fragment, 1, marcShadow_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( marcShadow_SHADER_Fragment );

    delete marcShadow_SHADER_FragmentAssembly;

	 marcShadow_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( marcShadow_SHADER, marcShadow_SHADER_Vertex );
    glAttachObjectARB( marcShadow_SHADER, marcShadow_SHADER_Fragment );

    glLinkProgramARB(marcShadow_SHADER); 

    UNIFORM_counter_marcShadow = glGetUniformLocationARB( marcShadow_SHADER, "counter" );

