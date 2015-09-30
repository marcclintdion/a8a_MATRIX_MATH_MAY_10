glGenBuffersARB(1, &tiles_1_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, tiles_1_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(tiles_1_VERT) + sizeof(tiles_1_NORM) + sizeof(tiles_1_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(tiles_1_VERT), tiles_1_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(tiles_1_VERT),  sizeof(tiles_1_NORM), tiles_1_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(tiles_1_VERT) + sizeof(tiles_1_NORM), sizeof(tiles_1_TEX), tiles_1_TEX);

    loadTexture("_MODEL_FOLDERS_/tiles_1/tiles_1.jpg",      textureMap[15]);
    loadTexture("_MODEL_FOLDERS_/tiles_1/tiles_1_DOT3.bmp", normalMap[15]);

    //loadTexture("_MODEL_FOLDERS_/tiles_1/tiles_1_BUMP.jpg", specularMap[15]);
