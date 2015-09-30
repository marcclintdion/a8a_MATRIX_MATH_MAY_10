    const char *smokeSphereSmall_SHADER_VertexStrings[1];
    const char *smokeSphereSmall_SHADER_FragmentStrings[1];

    smokeSphereSmall_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *smokeSphereSmall_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/smokeSphereSmall/smokeSphereSmall.vert" );
    smokeSphereSmall_SHADER_VertexStrings[0] = (char*)smokeSphereSmall_SHADER_VertexAssembly;
    glShaderSourceARB( smokeSphereSmall_SHADER_Vertex, 1, smokeSphereSmall_SHADER_VertexStrings, NULL );
    glCompileShaderARB( smokeSphereSmall_SHADER_Vertex);
    delete smokeSphereSmall_SHADER_VertexAssembly;

    smokeSphereSmall_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *smokeSphereSmall_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/smokeSphereSmall/smokeSphereSmall.frag" );
    smokeSphereSmall_SHADER_FragmentStrings[0] = (char*)smokeSphereSmall_SHADER_FragmentAssembly;
    glShaderSourceARB( smokeSphereSmall_SHADER_Fragment, 1, smokeSphereSmall_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( smokeSphereSmall_SHADER_Fragment );

    delete smokeSphereSmall_SHADER_FragmentAssembly;

	 smokeSphereSmall_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( smokeSphereSmall_SHADER, smokeSphereSmall_SHADER_Vertex );
    glAttachObjectARB( smokeSphereSmall_SHADER, smokeSphereSmall_SHADER_Fragment );

    glLinkProgramARB(smokeSphereSmall_SHADER); 

    UNIFORM_counter_smokeSphereSmall = glGetUniformLocationARB( smokeSphereSmall_SHADER, "counter" );

