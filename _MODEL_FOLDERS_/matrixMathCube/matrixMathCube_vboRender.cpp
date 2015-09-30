

              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_matrixMathCube);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_matrixMathCube);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_matrixMathCube);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_matrixMathCube);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_matrixMathCube);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_matrixMathCube);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_matrixMathCube);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_matrixMathCube);

              glUseProgramObjectARB(matrixMathCube_SHADER);


              glUniform1fARB( UNIFORM_counter1_matrixMathCube, matrixMathCube_counter1);
              glUniform1fARB( UNIFORM_counter2_matrixMathCube, matrixMathCube_counter2);
              glUniform1fARB( UNIFORM_counter3_matrixMathCube, matrixMathCube_counter3);
              glUniform1fARB( UNIFORM_counter4_matrixMathCube, matrixMathCube_counter4);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, matrixMathCube_vboID);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(matrixMathCube_VERT) + sizeof(matrixMathCube_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(matrixMathCube_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

            //SPECULAR_textureID;
            //SPECULAR_textureID = glGetUniformLocationARB(matrixMathCube_SHADER,"SpecularMap");
            //glUniform1iARB(SPECULAR_textureID, 2);
            //glActiveTextureARB(GL_TEXTURE2_ARB);
            //glBindTexture(GL_TEXTURE_2D,  specularMap[520]);

              textureID;
              textureID     = glGetUniformLocationARB(matrixMathCube_SHADER,"Texture1");
              glUniform1iARB(textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[520]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(matrixMathCube_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[520]);


              glDrawArrays(GL_TRIANGLES, 0, 612);


              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

