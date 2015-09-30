    const char *jetPackTopCones_SHADER_VertexStrings[1];
    const char *jetPackTopCones_SHADER_FragmentStrings[1];

    jetPackTopCones_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *jetPackTopCones_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/jetPackTopCones/jetPackTopCones.vert" );
    jetPackTopCones_SHADER_VertexStrings[0] = (char*)jetPackTopCones_SHADER_VertexAssembly;
    glShaderSourceARB( jetPackTopCones_SHADER_Vertex, 1, jetPackTopCones_SHADER_VertexStrings, NULL );
    glCompileShaderARB( jetPackTopCones_SHADER_Vertex);
    delete jetPackTopCones_SHADER_VertexAssembly;

    jetPackTopCones_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *jetPackTopCones_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/jetPackTopCones/jetPackTopCones.frag" );
    jetPackTopCones_SHADER_FragmentStrings[0] = (char*)jetPackTopCones_SHADER_FragmentAssembly;
    glShaderSourceARB( jetPackTopCones_SHADER_Fragment, 1, jetPackTopCones_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( jetPackTopCones_SHADER_Fragment );

    delete jetPackTopCones_SHADER_FragmentAssembly;

	 jetPackTopCones_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( jetPackTopCones_SHADER, jetPackTopCones_SHADER_Vertex );
    glAttachObjectARB( jetPackTopCones_SHADER, jetPackTopCones_SHADER_Fragment );

    glLinkProgramARB(jetPackTopCones_SHADER); 

    UNIFORM_counter_jetPackTopCones = glGetUniformLocationARB( jetPackTopCones_SHADER, "counter" );

