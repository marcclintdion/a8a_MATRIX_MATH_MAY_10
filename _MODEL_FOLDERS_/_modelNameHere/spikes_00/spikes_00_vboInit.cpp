glGenBuffersARB(1, &spikes_00_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, spikes_00_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(spikes_00_VERT) + sizeof(spikes_00_NORM) + sizeof(spikes_00_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(spikes_00_VERT), spikes_00_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(spikes_00_VERT),  sizeof(spikes_00_NORM), spikes_00_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(spikes_00_VERT) + sizeof(spikes_00_NORM), sizeof(spikes_00_TEX), spikes_00_TEX);

    loadTexture("_MODEL_FOLDERS_/spikes_00/spikes_00.jpg",      textureMap[16]);
    loadTexture("_MODEL_FOLDERS_/spikes_00/spikes_00_DOT3.bmp", normalMap[16]);

    //loadTexture("_MODEL_FOLDERS_/spikes_00/spikes_00_BUMP.jpg", specularMap[16]);
