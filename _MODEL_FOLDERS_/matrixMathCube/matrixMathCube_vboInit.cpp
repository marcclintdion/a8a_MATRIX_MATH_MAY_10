glGenBuffersARB(1, &matrixMathCube_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, matrixMathCube_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(matrixMathCube_VERT) + sizeof(matrixMathCube_NORM) + sizeof(matrixMathCube_TEX), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(matrixMathCube_VERT), matrixMathCube_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(matrixMathCube_VERT),  sizeof(matrixMathCube_NORM), matrixMathCube_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(matrixMathCube_VERT) + sizeof(matrixMathCube_NORM), sizeof(matrixMathCube_TEX), matrixMathCube_TEX);


    loadTexture("_MODEL_FOLDERS_/matrixMathCube/matrixMathCube_DOT3.bmp",   normalMap[520]);
    loadTexture("_MODEL_FOLDERS_/matrixMathCube/matrixMathCube.jpg",        textureMap[520]);
    //loadTexture("_MODEL_FOLDERS_/matrixMathCube/matrixMathCube_BUMP.jpg", specularMap[520]);
