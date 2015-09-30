              //glTranslatef(jetPackTopCones_POSITION[0], jetPackTopCones_POSITION[1], jetPackTopCones_POSITION[2]);
              //glRotatef(180, 0, 1, 0);//ROTATE_MODEL_TO_ALIGN_Z_AXIS_LIGHTING_WITH_MODEL_TRANSFORMATION_MATRIX
              //glRotatef(spinFloat,rotation_AXIS_jetPackTopCones[0], rotation_AXIS_jetPackTopCones[1], rotation_AXIS_jetPackTopCones[2]);

              //glPushMatrix();
              //       glLoadIdentity();
              //       glRotatef(-spinFloat,-rotation_AXIS_jetPackTopCones[0], -rotation_AXIS_jetPackTopCones[1], rotation_AXIS_jetPackTopCones[2]);
              //       glLightfv(GL_LIGHT0,GL_POSITION,lightPos_jetPackTopCones);
              //       glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_jetPackTopCones);
              //glPopMatrix();

              glUseProgramObjectARB(jetPackTopCones_SHADER);

              glBindBufferARB(GL_ARRAY_BUFFER_ARB, jetPackTopCones_vboID);
              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_jetPackTopCones);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_jetPackTopCones);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_jetPackTopCones);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_jetPackTopCones);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_jetPackTopCones);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_jetPackTopCones);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_jetPackTopCones);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_jetPackTopCones);

              glUniform1fARB( UNIFORM_counter_jetPackTopCones, jetPackTopCones_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(jetPackTopCones_VERT) + sizeof(jetPackTopCones_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(jetPackTopCones_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(jetPackTopCones_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[225]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(jetPackTopCones_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[225]);

              textureID;
              textureID     = glGetUniformLocationARB(jetPackTopCones_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[225]);

              //glLightfv(GL_LIGHT0,GL_POSITION,lightPos_jetPackTopCones);
              //glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_jetPackTopCones);

              glDrawArrays(GL_TRIANGLES, 0, 378);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

