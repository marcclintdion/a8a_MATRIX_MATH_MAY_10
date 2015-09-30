              glTranslatef(moveSet[0], moveSet[1], moveSet[2]);                                                
              glTranslatef(crystalBlockEdges_00_POSITION[0], crystalBlockEdges_00_POSITION[1], crystalBlockEdges_00_POSITION[2]);
              glRotatef(spinFloat,rotation_AXIS_crystalBlockEdges_00[0], rotation_AXIS_crystalBlockEdges_00[1], rotation_AXIS_crystalBlockEdges_00[2]);

              glPushMatrix();
                   glLoadIdentity();
                   //_ADDITIONAL_ROTATIONS_GO_HERE
                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_crystalBlockEdges_00);
                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_crystalBlockEdges_00);
              glPopMatrix();

              glUseProgramObjectARB(crystalBlockEdges_00_SHADER);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, crystalBlockEdges_00_vboID);


              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_crystalBlockEdges_00);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_crystalBlockEdges_00);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_crystalBlockEdges_00);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_crystalBlockEdges_00);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_crystalBlockEdges_00);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_crystalBlockEdges_00);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_crystalBlockEdges_00);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_crystalBlockEdges_00);

              glUniform1fARB( UNIFORM_counter_crystalBlockEdges_00, crystalBlockEdges_00_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(crystalBlockEdges_00_VERT) + sizeof(crystalBlockEdges_00_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(crystalBlockEdges_00_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID = glGetUniformLocationARB(crystalBlockEdges_00_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[421]);

              DOT3_textureID     = glGetUniformLocationARB(crystalBlockEdges_00_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[421]);

              textureID     = glGetUniformLocationARB(crystalBlockEdges_00_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[421]);

              glDrawArrays(GL_TRIANGLES, 0, 24);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

