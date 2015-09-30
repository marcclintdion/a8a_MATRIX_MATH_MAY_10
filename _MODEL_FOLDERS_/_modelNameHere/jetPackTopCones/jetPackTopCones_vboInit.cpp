glGenBuffersARB(1, &jetPackTopCones_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, jetPackTopCones_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(jetPackTopCones_VERT) + sizeof(jetPackTopCones_NORM) + sizeof(jetPackTopCones_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(jetPackTopCones_VERT), jetPackTopCones_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(jetPackTopCones_VERT),  sizeof(jetPackTopCones_NORM), jetPackTopCones_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(jetPackTopCones_VERT) + sizeof(jetPackTopCones_NORM), sizeof(jetPackTopCones_TEX), jetPackTopCones_TEX);

    loadTexture("_MODEL_FOLDERS_/jetPackTopCones/jetPackTopCones.jpg",      textureMap[225]);
    loadTexture("_MODEL_FOLDERS_/jetPackTopCones/jetPackTopCones_DOT3.jpg", normalMap[225]);

    //loadTexture("_MODEL_FOLDERS_/jetPackTopCones/jetPackTopCones_BUMP.jpg", specularMap[225]);
