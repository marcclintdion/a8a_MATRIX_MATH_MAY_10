glGenBuffersARB(1, &marcShadow_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcShadow_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(marcShadow_VERT) + sizeof(marcShadow_NORM) + sizeof(marcShadow_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(marcShadow_VERT), marcShadow_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(marcShadow_VERT),  sizeof(marcShadow_NORM), marcShadow_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(marcShadow_VERT) + sizeof(marcShadow_NORM), sizeof(marcShadow_TEX), marcShadow_TEX);

    loadTexture("_MODEL_FOLDERS_/marcShadow/marcShadow.jpg",      textureMap[299]);
    loadTexture("_MODEL_FOLDERS_/marcShadow/marcShadow_DOT3.jpg", normalMap[299]);

    //loadTexture("_MODEL_FOLDERS_/marcShadow/marcShadow_BUMP.jpg", specularMap[299]);
