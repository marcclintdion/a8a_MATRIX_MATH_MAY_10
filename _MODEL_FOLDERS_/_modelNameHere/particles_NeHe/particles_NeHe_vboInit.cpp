glGenBuffersARB(1, &particles_NeHe_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, particles_NeHe_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(particles_NeHe_VERT) + sizeof(particles_NeHe_NORM) + sizeof(particles_NeHe_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(particles_NeHe_VERT), particles_NeHe_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(particles_NeHe_VERT),  sizeof(particles_NeHe_NORM), particles_NeHe_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(particles_NeHe_VERT) + sizeof(particles_NeHe_NORM), sizeof(particles_NeHe_TEX), particles_NeHe_TEX);

    loadTexture("_MODEL_FOLDERS_/particles_NeHe/particles_NeHe.jpg",      textureMap[515]);
    loadTexture("_MODEL_FOLDERS_/particles_NeHe/particles_NeHe_DOT3.bmp", normalMap[515]);

    //loadTexture("_MODEL_FOLDERS_/particles_NeHe/particles_NeHe_BUMP.jpg", specularMap[515]);
