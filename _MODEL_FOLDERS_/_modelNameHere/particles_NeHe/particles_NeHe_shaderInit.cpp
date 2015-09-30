    const char *particles_NeHe_SHADER_VertexStrings[1];
    const char *particles_NeHe_SHADER_FragmentStrings[1];

    particles_NeHe_SHADER_Vertex = glCreateShaderObjectARB( GL_VERTEX_SHADER_ARB );

	 unsigned char *particles_NeHe_SHADER_VertexAssembly   = readShaderFile( "_MODEL_FOLDERS_/particles_NeHe/particles_NeHe.vert" );
    particles_NeHe_SHADER_VertexStrings[0] = (char*)particles_NeHe_SHADER_VertexAssembly;
    glShaderSourceARB( particles_NeHe_SHADER_Vertex, 1, particles_NeHe_SHADER_VertexStrings, NULL );
    glCompileShaderARB( particles_NeHe_SHADER_Vertex);
    delete particles_NeHe_SHADER_VertexAssembly;

    particles_NeHe_SHADER_Fragment = glCreateShaderObjectARB( GL_FRAGMENT_SHADER_ARB );

    unsigned char *particles_NeHe_SHADER_FragmentAssembly = readShaderFile( "_MODEL_FOLDERS_/particles_NeHe/particles_NeHe.frag" );
    particles_NeHe_SHADER_FragmentStrings[0] = (char*)particles_NeHe_SHADER_FragmentAssembly;
    glShaderSourceARB( particles_NeHe_SHADER_Fragment, 1, particles_NeHe_SHADER_FragmentStrings, NULL );
    glCompileShaderARB( particles_NeHe_SHADER_Fragment );

    delete particles_NeHe_SHADER_FragmentAssembly;

	 particles_NeHe_SHADER = glCreateProgramObjectARB();

    glAttachObjectARB( particles_NeHe_SHADER, particles_NeHe_SHADER_Vertex );
    glAttachObjectARB( particles_NeHe_SHADER, particles_NeHe_SHADER_Fragment );

    glLinkProgramARB(particles_NeHe_SHADER); 

    UNIFORM_counter_particles_NeHe = glGetUniformLocationARB( particles_NeHe_SHADER, "counter" );

