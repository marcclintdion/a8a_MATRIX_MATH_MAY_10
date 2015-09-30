glGenBuffersARB(1, &treeBarkPath_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, treeBarkPath_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(treeBarkPath_VERT) + sizeof(treeBarkPath_NORM) + sizeof(treeBarkPath_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(treeBarkPath_VERT), treeBarkPath_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(treeBarkPath_VERT),  sizeof(treeBarkPath_NORM), treeBarkPath_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(treeBarkPath_VERT) + sizeof(treeBarkPath_NORM), sizeof(treeBarkPath_TEX), treeBarkPath_TEX);

    loadTexture("_MODEL_FOLDERS_/treeBarkPath/treeBarkPath.jpg",      textureMap[400]);
    loadTexture("_MODEL_FOLDERS_/treeBarkPath/treeBarkPath_DOT3.bmp", normalMap[400]);

    //loadTexture("_MODEL_FOLDERS_/treeBarkPath/treeBarkPath_BUMP.jpg", specularMap[400]);
