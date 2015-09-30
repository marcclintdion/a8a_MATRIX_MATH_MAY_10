glGenBuffersARB(1, &waterLayer_00_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, waterLayer_00_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(waterLayer_00_VERT) + sizeof(waterLayer_00_NORM) + sizeof(waterLayer_00_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(waterLayer_00_VERT), waterLayer_00_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(waterLayer_00_VERT),  sizeof(waterLayer_00_NORM), waterLayer_00_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(waterLayer_00_VERT) + sizeof(waterLayer_00_NORM), sizeof(waterLayer_00_TEX), waterLayer_00_TEX);

    loadTexture("_MODEL_FOLDERS_/waterLayer_00/waterLayer_00.jpg",      textureMap[441]);
    loadTexture("_MODEL_FOLDERS_/waterLayer_00/waterLayer_00_DOT3.bmp", normalMap[441]);

    //loadTexture("_MODEL_FOLDERS_/waterLayer_00/waterLayer_00_BUMP.jpg", specularMap[441]);
