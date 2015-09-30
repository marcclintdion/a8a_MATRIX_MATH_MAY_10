glGenBuffersARB(1, &marcFace_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcFace_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(marcFace_VERT) + sizeof(marcFace_NORM) + sizeof(marcFace_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(marcFace_VERT), marcFace_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(marcFace_VERT),  sizeof(marcFace_NORM), marcFace_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(marcFace_VERT) + sizeof(marcFace_NORM), sizeof(marcFace_TEX), marcFace_TEX);

    loadTexture("_MODEL_FOLDERS_/marcFace/marcFace.jpg",      textureMap[7]);
    loadTexture("_MODEL_FOLDERS_/marcFace/marcFace_DOT3.jpg", normalMap[7]);

    //loadTexture("_MODEL_FOLDERS_/marcFace/marcFace_BUMP.jpg", specularMap[7]);
