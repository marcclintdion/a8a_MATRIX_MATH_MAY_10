              glTranslatef(marcRightHand_POSITION[0], marcRightHand_POSITION[1], marcRightHand_POSITION[2]);
              glRotatef(180, 0, 1, 0);//ROTATE_MODEL_TO_ALIGN_Z_AXIS_LIGHTING_WITH_MODEL_TRANSFORMATION_MATRIX
              glRotatef(spinFloat,rotation_AXIS_marcRightHand[0], rotation_AXIS_marcRightHand[1], rotation_AXIS_marcRightHand[2]);

              glPushMatrix();
                     glLoadIdentity();
                     glRotatef(-spinFloat,-rotation_AXIS_marcRightHand[0], -rotation_AXIS_marcRightHand[1], rotation_AXIS_marcRightHand[2]);
                     glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcRightHand);
                     glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcRightHand);
              glPopMatrix();

              glUseProgramObjectARB(marcRightHand_SHADER);

              glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightHand_vboID);
              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_marcRightHand);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_marcRightHand);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_marcRightHand);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_marcRightHand);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_marcRightHand);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_marcRightHand);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_marcRightHand);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_marcRightHand);

              glUniform1fARB( UNIFORM_counter_marcRightHand, marcRightHand_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcRightHand_VERT) + sizeof(marcRightHand_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcRightHand_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(marcRightHand_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[212]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(marcRightHand_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[212]);

              textureID;
              textureID     = glGetUniformLocationARB(marcRightHand_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[212]);

              //glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcRightHand);
              //glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcRightHand);

              glDrawArrays(GL_TRIANGLES, 0, 600);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

