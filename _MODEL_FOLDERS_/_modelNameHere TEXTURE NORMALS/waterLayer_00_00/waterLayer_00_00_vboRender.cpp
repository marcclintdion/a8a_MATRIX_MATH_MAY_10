              glTranslatef(moveSet[0], moveSet[1], moveSet[2]);                                                
              glTranslatef(waterLayer_00_00_POSITION[0], waterLayer_00_00_POSITION[1], waterLayer_00_00_POSITION[2]);
              glRotatef(spinFloat,rotation_AXIS_waterLayer_00_00[0], rotation_AXIS_waterLayer_00_00[1], rotation_AXIS_waterLayer_00_00[2]);

              glPushMatrix();
                   glLoadIdentity();
                   //_ADDITIONAL_ROTATIONS_GO_HERE
                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_waterLayer_00_00);
                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_waterLayer_00_00);
              glPopMatrix();

              glUseProgramObjectARB(waterLayer_00_00_SHADER);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, waterLayer_00_00_vboID);


              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_waterLayer_00_00);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_waterLayer_00_00);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_waterLayer_00_00);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_waterLayer_00_00);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_waterLayer_00_00);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_waterLayer_00_00);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_waterLayer_00_00);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_waterLayer_00_00);

              glUniform1fARB( UNIFORM_counter_waterLayer_00_00, waterLayer_00_00_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(waterLayer_00_00_VERT) + sizeof(waterLayer_00_00_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(waterLayer_00_00_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              SHADOW_MAP_textureID;
              SHADOW_MAP_textureID = glGetUniformLocationARB(treeBarkPath_SHADER,"ShadowMap");
              glUniform1iARB(SHADOW_MAP_textureID, 2);
              glActiveTextureARB(GL_TEXTURE2_ARB);
               glBindTexture(GL_TEXTURE_2D,  textureMap[299]);

              DOT3_textureID     = glGetUniformLocationARB(waterLayer_00_00_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[441]);

              textureID     = glGetUniformLocationARB(waterLayer_00_00_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[441]);

              glDrawArrays(GL_TRIANGLES, 0, 0);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

