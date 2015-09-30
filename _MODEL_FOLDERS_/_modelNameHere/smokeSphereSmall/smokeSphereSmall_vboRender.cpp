              glTranslatef(smokeSphereSmall_POSITION[0], smokeSphereSmall_POSITION[1], smokeSphereSmall_POSITION[2]);
              glRotatef(180, 0, 1, 0);//ROTATE_MODEL_TO_ALIGN_Z_AXIS_LIGHTING_WITH_MODEL_TRANSFORMATION_MATRIX
              glRotatef(spinFloat,rotation_AXIS_smokeSphereSmall[0], rotation_AXIS_smokeSphereSmall[1], rotation_AXIS_smokeSphereSmall[2]);

              glPushMatrix();
                   glLoadIdentity();
                   //_ADDITIONAL_ROTATIONS_GO_HERE
                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_smokeSphereSmall);
                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_smokeSphereSmall);
              glPopMatrix();

              glUseProgramObjectARB(smokeSphereSmall_SHADER);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, smokeSphereSmall_vboID);


              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_smokeSphereSmall);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_smokeSphereSmall);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_smokeSphereSmall);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_smokeSphereSmall);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_smokeSphereSmall);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_smokeSphereSmall);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_smokeSphereSmall);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_smokeSphereSmall);

              glUniform1fARB( UNIFORM_counter_smokeSphereSmall, smokeSphereSmall_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(smokeSphereSmall_VERT) + sizeof(smokeSphereSmall_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(smokeSphereSmall_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(smokeSphereSmall_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[510]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(smokeSphereSmall_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[510]);

              textureID;
              textureID     = glGetUniformLocationARB(smokeSphereSmall_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[510]);

              glDrawArrays(GL_TRIANGLES, 0, 6);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

