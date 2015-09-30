              glTranslatef(moveSet[0], moveSet[1], moveSet[2]);                                                
              glTranslatef(rocks_00_POSITION[0], rocks_00_POSITION[1], rocks_00_POSITION[2]);
              glRotatef(spinFloat,rotation_AXIS_rocks_00[0], rotation_AXIS_rocks_00[1], rotation_AXIS_rocks_00[2]);

              glPushMatrix();
                   glLoadIdentity();
                   //_ADDITIONAL_ROTATIONS_GO_HERE
                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_rocks_00);
                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_rocks_00);
              glPopMatrix();

              glUseProgramObjectARB(rocks_00_SHADER);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, rocks_00_vboID);


              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_rocks_00);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_rocks_00);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_rocks_00);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_rocks_00);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_rocks_00);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_rocks_00);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_rocks_00);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_rocks_00);

              glUniform1fARB( UNIFORM_counter_rocks_00, rocks_00_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(rocks_00_VERT) + sizeof(rocks_00_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(rocks_00_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(rocks_00_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[450]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(rocks_00_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[450]);

              textureID;
              textureID     = glGetUniformLocationARB(rocks_00_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[450]);

              glDrawArrays(GL_TRIANGLES, 0, 390);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

