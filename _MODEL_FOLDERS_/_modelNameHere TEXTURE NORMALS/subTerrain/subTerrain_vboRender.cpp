              glTranslatef(moveSet[0], moveSet[1], moveSet[2]);                                                
              glTranslatef(subTerrain_POSITION[0], subTerrain_POSITION[1], subTerrain_POSITION[2]);
              glRotatef(spinFloat,rotation_AXIS_subTerrain[0], rotation_AXIS_subTerrain[1], rotation_AXIS_subTerrain[2]);

              glPushMatrix();
                   glLoadIdentity();
                   //_ADDITIONAL_ROTATIONS_GO_HERE
                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_subTerrain);
                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_subTerrain);
              glPopMatrix();

              glUseProgramObjectARB(subTerrain_SHADER);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, subTerrain_vboID);


              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_subTerrain);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_subTerrain);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_subTerrain);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_subTerrain);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_subTerrain);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_subTerrain);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_subTerrain);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_subTerrain);

              glUniform1fARB( UNIFORM_counter_subTerrain, subTerrain_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(subTerrain_VERT) + sizeof(subTerrain_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(subTerrain_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(subTerrain_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[800]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(subTerrain_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[800]);

              textureID;
              textureID     = glGetUniformLocationARB(subTerrain_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[800]);

              glDrawArrays(GL_TRIANGLES, 0, 2304);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

