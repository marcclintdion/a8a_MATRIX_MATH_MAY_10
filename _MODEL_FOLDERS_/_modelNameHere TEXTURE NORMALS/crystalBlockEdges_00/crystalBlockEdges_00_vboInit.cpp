glGenBuffersARB(1, &crystalBlockEdges_00_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, crystalBlockEdges_00_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(crystalBlockEdges_00_VERT) + sizeof(crystalBlockEdges_00_NORM) + sizeof(crystalBlockEdges_00_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(crystalBlockEdges_00_VERT), crystalBlockEdges_00_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(crystalBlockEdges_00_VERT),  sizeof(crystalBlockEdges_00_NORM), crystalBlockEdges_00_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(crystalBlockEdges_00_VERT) + sizeof(crystalBlockEdges_00_NORM), sizeof(crystalBlockEdges_00_TEX), crystalBlockEdges_00_TEX);

    loadTexture("_MODEL_FOLDERS_/crystalBlockEdges_00/crystalBlockEdges_00.jpg",      textureMap[421]);
    loadTexture("_MODEL_FOLDERS_/crystalBlockEdges_00/crystalBlockEdges_00_DOT3.bmp", normalMap[421]);

    //loadTexture("_MODEL_FOLDERS_/crystalBlockEdges_00/crystalBlockEdges_00_BUMP.jpg", specularMap[421]);
