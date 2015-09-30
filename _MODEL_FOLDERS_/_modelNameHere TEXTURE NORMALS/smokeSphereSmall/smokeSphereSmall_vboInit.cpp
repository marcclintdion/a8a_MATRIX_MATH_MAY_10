glGenBuffersARB(1, &smokeSphereSmall_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, smokeSphereSmall_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(smokeSphereSmall_VERT) + sizeof(smokeSphereSmall_NORM) + sizeof(smokeSphereSmall_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(smokeSphereSmall_VERT), smokeSphereSmall_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(smokeSphereSmall_VERT),  sizeof(smokeSphereSmall_NORM), smokeSphereSmall_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(smokeSphereSmall_VERT) + sizeof(smokeSphereSmall_NORM), sizeof(smokeSphereSmall_TEX), smokeSphereSmall_TEX);

    loadTexture("_MODEL_FOLDERS_/smokeSphereSmall/smokeSphereSmall.jpg",      textureMap[510]);
    loadTexture("_MODEL_FOLDERS_/smokeSphereSmall/smokeSphereSmall_DOT3.bmp", normalMap[510]);

    //loadTexture("_MODEL_FOLDERS_/smokeSphereSmall/smokeSphereSmall_BUMP.jpg", specularMap[510]);
