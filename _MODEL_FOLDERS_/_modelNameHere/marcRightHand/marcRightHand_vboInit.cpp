glGenBuffersARB(1, &marcRightHand_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightHand_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(marcRightHand_VERT) + sizeof(marcRightHand_NORM) + sizeof(marcRightHand_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(marcRightHand_VERT), marcRightHand_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(marcRightHand_VERT),  sizeof(marcRightHand_NORM), marcRightHand_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(marcRightHand_VERT) + sizeof(marcRightHand_NORM), sizeof(marcRightHand_TEX), marcRightHand_TEX);

    loadTexture("_MODEL_FOLDERS_/marcRightHand/marcRightHand.jpg",      textureMap[212]);
    loadTexture("_MODEL_FOLDERS_/marcRightHand/marcRightHand_DOT3.jpg", normalMap[212]);

    //loadTexture("_MODEL_FOLDERS_/marcRightHand/marcRightHand_BUMP.jpg", specularMap[212]);
