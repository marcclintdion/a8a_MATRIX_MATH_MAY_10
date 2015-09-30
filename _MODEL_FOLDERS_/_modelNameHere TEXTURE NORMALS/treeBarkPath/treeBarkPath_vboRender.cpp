              glTranslatef(moveSet[0], moveSet[1], moveSet[2]);                                                
              glTranslatef(treeBarkPath_POSITION[0], treeBarkPath_POSITION[1], treeBarkPath_POSITION[2]);
              glRotatef(spinFloat,rotation_AXIS_treeBarkPath[0], rotation_AXIS_treeBarkPath[1], rotation_AXIS_treeBarkPath[2]);

              glPushMatrix();
                   glLoadIdentity();
                   //_ADDITIONAL_ROTATIONS_GO_HERE
                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_treeBarkPath);
                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_treeBarkPath);
              glPopMatrix();

              glUseProgramObjectARB(treeBarkPath_SHADER);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, treeBarkPath_vboID);


              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_treeBarkPath);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_treeBarkPath);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_treeBarkPath);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_treeBarkPath);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_treeBarkPath);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_treeBarkPath);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_treeBarkPath);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_treeBarkPath);

              glUniform1fARB( UNIFORM_counter_treeBarkPath, treeBarkPath_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(treeBarkPath_VERT) + sizeof(treeBarkPath_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(treeBarkPath_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(treeBarkPath_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[400]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(treeBarkPath_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[400]);

              textureID;
              textureID     = glGetUniformLocationARB(treeBarkPath_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[400]);

              glDrawArrays(GL_TRIANGLES, 0, 90);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

