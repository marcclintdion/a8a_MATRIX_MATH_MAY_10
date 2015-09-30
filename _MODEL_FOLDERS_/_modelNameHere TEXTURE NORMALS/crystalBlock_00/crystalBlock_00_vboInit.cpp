glGenBuffersARB(1, &crystalBlock_00_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, crystalBlock_00_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(crystalBlock_00_VERT) + sizeof(crystalBlock_00_NORM) + sizeof(crystalBlock_00_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(crystalBlock_00_VERT), crystalBlock_00_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(crystalBlock_00_VERT),  sizeof(crystalBlock_00_NORM), crystalBlock_00_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(crystalBlock_00_VERT) + sizeof(crystalBlock_00_NORM), sizeof(crystalBlock_00_TEX), crystalBlock_00_TEX);

    loadTexture("_MODEL_FOLDERS_/crystalBlock_00/crystalBlock_00.jpg",      textureMap[441]);
    loadTexture("_MODEL_FOLDERS_/crystalBlock_00/crystalBlock_00_DOT3.bmp", normalMap[441]);

    //loadTexture("_MODEL_FOLDERS_/crystalBlock_00/crystalBlock_00_BUMP.jpg", specularMap[441]);
