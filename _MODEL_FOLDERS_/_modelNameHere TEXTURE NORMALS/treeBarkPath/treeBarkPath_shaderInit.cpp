    const char *treeBarkPath_SHADER_VertexStrings[1];
    const char *treeBarkPath_SHADER_FragmentStrings[1];

    treeBarkPath_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *treeBarkPath_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/treeBarkPath/treeBarkPath.vert" );
    treeBarkPath_SHADER_VertexStrings[0] = (char*)treeBarkPath_SHADER_VertexAssembly;
    glShaderSourceARB( treeBarkPath_SHADER_Vertex, 1, treeBarkPath_SHADER_VertexStrings, NULL );
    glCompileShaderARB( treeBarkPath_SHADER_Vertex);
    delete treeBarkPath_SHADER_VertexAssembly;

    treeBarkPath_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *treeBarkPath_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/treeBarkPath/treeBarkPath.frag" );
    treeBarkPath_SHADER_FragmentStrings[0] = (char*)treeBarkPath_SHADER_FragmentAssembly;
    glShaderSourceARB( treeBarkPath_SHADER_Fragment, 1, treeBarkPath_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( treeBarkPath_SHADER_Fragment );

    delete treeBarkPath_SHADER_FragmentAssembly;

	 treeBarkPath_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( treeBarkPath_SHADER, treeBarkPath_SHADER_Vertex );
    glAttachObjectARB( treeBarkPath_SHADER, treeBarkPath_SHADER_Fragment );

    glLinkProgramARB(treeBarkPath_SHADER); 

    UNIFORM_counter_treeBarkPath = glGetUniformLocationARB( treeBarkPath_SHADER, "counter" );

