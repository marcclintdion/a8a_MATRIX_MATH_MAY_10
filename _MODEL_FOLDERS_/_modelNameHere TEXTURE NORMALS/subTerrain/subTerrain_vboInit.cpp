glGenBuffersARB(1, &subTerrain_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, subTerrain_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(subTerrain_VERT) + sizeof(subTerrain_NORM) + sizeof(subTerrain_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(subTerrain_VERT), subTerrain_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(subTerrain_VERT),  sizeof(subTerrain_NORM), subTerrain_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(subTerrain_VERT) + sizeof(subTerrain_NORM), sizeof(subTerrain_TEX), subTerrain_TEX);

    loadTexture("_MODEL_FOLDERS_/subTerrain/subTerrain.jpg",      textureMap[800]);
    loadTexture("_MODEL_FOLDERS_/subTerrain/subTerrain_DOT3.bmp", normalMap[800]);

    //loadTexture("_MODEL_FOLDERS_/subTerrain/subTerrain_BUMP.jpg", specularMap[800]);
