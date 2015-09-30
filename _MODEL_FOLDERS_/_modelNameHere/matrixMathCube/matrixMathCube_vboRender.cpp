//glPushMatrix();
              glTranslatef(matrixMathCube_POSITION[0], matrixMathCube_POSITION[1], matrixMathCube_POSITION[2]);
              glRotatef(rotation_AXIS_matrixMathCube[3]++,rotation_AXIS_matrixMathCube[0], rotation_AXIS_matrixMathCube[1], rotation_AXIS_matrixMathCube[2]);

              glRotatef(180, 0, 1, 0);//__RECTIFIES_LIGHTWAVE_Z-AXIS_TO_THIS_SETUP_WHICH_IS_Z_POSITIVE_TOWARDS_VIEWER 
              glPushMatrix();
                   glLoadIdentity();
                //_ADDITIONAL_ROTATIONS_GO_HERE
                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_matrixMathCube);
                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_matrixMathCube);
              glPopMatrix();

//glPopMatrix();

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

            //Texture3_textureID;
            //Texture3_textureID = glGetUniformLocationARB(matrixMathCube_SHADER,"Texture3");
            //glUniform1iARB(SPECULAR_textureID, 2);
            //glActiveTextureARB(GL_TEXTURE2_ARB);
            //glBindTexture(GL_TEXTURE_2D,  specularMap[520]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(matrixMathCube_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[520]);

              textureID;
              textureID     = glGetUniformLocationARB(matrixMathCube_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[520]);


              glDrawArrays(GL_TRIANGLES, 0, 612);


              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

