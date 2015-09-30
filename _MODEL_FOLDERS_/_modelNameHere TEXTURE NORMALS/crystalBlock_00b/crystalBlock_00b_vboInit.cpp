glGenBuffersARB(1, &crystalBlock_00b_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, crystalBlock_00b_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(crystalBlock_00b_VERT) + sizeof(crystalBlock_00b_NORM) + sizeof(crystalBlock_00b_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(crystalBlock_00b_VERT), crystalBlock_00b_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(crystalBlock_00b_VERT),  sizeof(crystalBlock_00b_NORM), crystalBlock_00b_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(crystalBlock_00b_VERT) + sizeof(crystalBlock_00b_NORM), sizeof(crystalBlock_00b_TEX), crystalBlock_00b_TEX);

    loadTexture("_MODEL_FOLDERS_/crystalBlock_00b/crystalBlock_00b.jpg",      textureMap[441]);
    loadTexture("_MODEL_FOLDERS_/crystalBlock_00b/crystalBlock_00b_DOT3.bmp", normalMap[441]);

    //loadTexture("_MODEL_FOLDERS_/crystalBlock_00b/crystalBlock_00b_BUMP.jpg", specularMap[441]);
