glGenBuffersARB(1, &spikyBall_00_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, spikyBall_00_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(spikyBall_00_VERT) + sizeof(spikyBall_00_NORM) + sizeof(spikyBall_00_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(spikyBall_00_VERT), spikyBall_00_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(spikyBall_00_VERT),  sizeof(spikyBall_00_NORM), spikyBall_00_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(spikyBall_00_VERT) + sizeof(spikyBall_00_NORM), sizeof(spikyBall_00_TEX), spikyBall_00_TEX);

    loadTexture("_MODEL_FOLDERS_/spikyBall_00/spikyBall_00.jpg",      textureMap[15]);
    loadTexture("_MODEL_FOLDERS_/spikyBall_00/spikyBall_00_DOT3.bmp", normalMap[15]);

    //loadTexture("_MODEL_FOLDERS_/spikyBall_00/spikyBall_00_BUMP.jpg", specularMap[15]);
