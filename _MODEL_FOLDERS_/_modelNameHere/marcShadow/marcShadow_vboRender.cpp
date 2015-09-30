              //glTranslatef(marcShadow_POSITION[0], marcShadow_POSITION[1], marcShadow_POSITION[2]);
              //glRotatef(180, 0, 1, 0);//ROTATE_MODEL_TO_ALIGN_Z_AXIS_LIGHTING_WITH_MODEL_TRANSFORMATION_MATRIX
              //glRotatef(spinFloat,rotation_AXIS_marcShadow[0], rotation_AXIS_marcShadow[1], rotation_AXIS_marcShadow[2]);

              //glPushMatrix();
              //       glLoadIdentity();
              //       glRotatef(-spinFloat,-rotation_AXIS_marcShadow[0], -rotation_AXIS_marcShadow[1], rotation_AXIS_marcShadow[2]);
              //       glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcShadow);
              //       glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcShadow);
              //glPopMatrix();

              glUseProgramObjectARB(marcShadow_SHADER);

              glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcShadow_vboID);
              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_marcShadow);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_marcShadow);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_marcShadow);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_marcShadow);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_marcShadow);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_marcShadow);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_marcShadow);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_marcShadow);

              glUniform1fARB( UNIFORM_counter_marcShadow, marcShadow_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcShadow_VERT) + sizeof(marcShadow_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcShadow_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(marcShadow_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[299]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(marcShadow_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[299]);

              textureID;
              textureID     = glGetUniformLocationARB(marcShadow_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[299]);

              //glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcShadow);
              //glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcShadow);

              glDrawArrays(GL_TRIANGLES, 0, 6);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

