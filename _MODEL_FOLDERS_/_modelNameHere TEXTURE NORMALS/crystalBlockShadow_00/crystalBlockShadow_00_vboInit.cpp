glGenBuffersARB(1, &crystalBlockShadow_00_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, crystalBlockShadow_00_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(crystalBlockShadow_00_VERT) + sizeof(crystalBlockShadow_00_NORM) + sizeof(crystalBlockShadow_00_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(crystalBlockShadow_00_VERT), crystalBlockShadow_00_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(crystalBlockShadow_00_VERT),  sizeof(crystalBlockShadow_00_NORM), crystalBlockShadow_00_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(crystalBlockShadow_00_VERT) + sizeof(crystalBlockShadow_00_NORM), sizeof(crystalBlockShadow_00_TEX), crystalBlockShadow_00_TEX);

    loadTexture("_MODEL_FOLDERS_/crystalBlockShadow_00/crystalBlockShadow_00.jpg",      textureMap[422]);
    loadTexture("_MODEL_FOLDERS_/crystalBlockShadow_00/crystalBlockShadow_00_DOT3.bmp", normalMap[422]);

    //loadTexture("_MODEL_FOLDERS_/crystalBlockShadow_00/crystalBlockShadow_00_BUMP.jpg", specularMap[422]);
