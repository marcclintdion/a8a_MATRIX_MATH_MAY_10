glGenBuffersARB(1, &rocks_00_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, rocks_00_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(rocks_00_VERT) + sizeof(rocks_00_NORM) + sizeof(rocks_00_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(rocks_00_VERT), rocks_00_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rocks_00_VERT),  sizeof(rocks_00_NORM), rocks_00_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rocks_00_VERT) + sizeof(rocks_00_NORM), sizeof(rocks_00_TEX), rocks_00_TEX);

    loadTexture("_MODEL_FOLDERS_/rocks_00/rocks_00.jpg",      textureMap[450]);
    loadTexture("_MODEL_FOLDERS_/rocks_00/rocks_00_DOT3.bmp", normalMap[450]);

    //loadTexture("_MODEL_FOLDERS_/rocks_00/rocks_00_BUMP.jpg", specularMap[450]);
