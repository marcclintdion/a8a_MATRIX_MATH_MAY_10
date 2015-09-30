    const char *subTerrain_SHADER_VertexStrings[1];
    const char *subTerrain_SHADER_FragmentStrings[1];

    subTerrain_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *subTerrain_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/subTerrain/subTerrain.vert" );
    subTerrain_SHADER_VertexStrings[0] = (char*)subTerrain_SHADER_VertexAssembly;
    glShaderSourceARB( subTerrain_SHADER_Vertex, 1, subTerrain_SHADER_VertexStrings, NULL );
    glCompileShaderARB( subTerrain_SHADER_Vertex);
    delete subTerrain_SHADER_VertexAssembly;

    subTerrain_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *subTerrain_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/subTerrain/subTerrain.frag" );
    subTerrain_SHADER_FragmentStrings[0] = (char*)subTerrain_SHADER_FragmentAssembly;
    glShaderSourceARB( subTerrain_SHADER_Fragment, 1, subTerrain_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( subTerrain_SHADER_Fragment );

    delete subTerrain_SHADER_FragmentAssembly;

	 subTerrain_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( subTerrain_SHADER, subTerrain_SHADER_Vertex );
    glAttachObjectARB( subTerrain_SHADER, subTerrain_SHADER_Fragment );

    glLinkProgramARB(subTerrain_SHADER); 

    UNIFORM_counter_subTerrain = glGetUniformLocationARB( subTerrain_SHADER, "counter" );

