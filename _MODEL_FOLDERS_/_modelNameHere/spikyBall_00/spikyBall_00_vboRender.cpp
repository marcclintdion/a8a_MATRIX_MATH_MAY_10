              //glTranslatef(spikyBall_00_POSITION[0], spikyBall_00_POSITION[1], spikyBall_00_POSITION[2]);
              //glRotatef(180, 0, 1, 0);//ROTATE_MODEL_TO_ALIGN_Z_AXIS_LIGHTING_WITH_MODEL_TRANSFORMATION_MATRIX
              //glRotatef(spinFloat,rotation_AXIS_spikyBall_00[0], rotation_AXIS_spikyBall_00[1], rotation_AXIS_spikyBall_00[2]);

              //glPushMatrix();
              //       glLoadIdentity();
              //       glRotatef(-spinFloat,-rotation_AXIS_spikyBall_00[0], -rotation_AXIS_spikyBall_00[1], rotation_AXIS_spikyBall_00[2]);
              //       glLightfv(GL_LIGHT0,GL_POSITION,lightPos_spikyBall_00);
              //       glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_spikyBall_00);
              //glPopMatrix();

              glUseProgramObjectARB(spikyBall_00_SHADER);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, spikyBall_00_vboID);


              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_spikyBall_00);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_spikyBall_00);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_spikyBall_00);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_spikyBall_00);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_spikyBall_00);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_spikyBall_00);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_spikyBall_00);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_spikyBall_00);

              glUniform1fARB( UNIFORM_counter_spikyBall_00, spikyBall_00_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(spikyBall_00_VERT) + sizeof(spikyBall_00_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(spikyBall_00_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(spikyBall_00_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[15]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(spikyBall_00_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[15]);

              textureID;
              textureID     = glGetUniformLocationARB(spikyBall_00_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[15]);

              //glPushMatrix();
                  // glLoadIdentity();
                  // glTranslatef(eyePosition[0],-eyePosition[1],-eyePosition[2]);
                 //  glLightfv(GL_LIGHT0,GL_POSITION,lightPos_spikyBall_00);
                //   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_spikyBall_00);
             // glPopMatrix();

              glDrawArrays(GL_TRIANGLES, 0, 360);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

