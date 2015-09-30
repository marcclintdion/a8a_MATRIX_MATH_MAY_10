              glTranslatef(particles_NeHe_POSITION[0], particles_NeHe_POSITION[1], particles_NeHe_POSITION[2]);
              glRotatef(180, 0, 1, 0);//ROTATE_MODEL_TO_ALIGN_Z_AXIS_LIGHTING_WITH_MODEL_TRANSFORMATION_MATRIX
              glRotatef(spinFloat,rotation_AXIS_particles_NeHe[0], rotation_AXIS_particles_NeHe[1], rotation_AXIS_particles_NeHe[2]);

              glPushMatrix();
                   glLoadIdentity();
                   //_ADDITIONAL_ROTATIONS_GO_HERE
                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_particles_NeHe);
                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_particles_NeHe);
              glPopMatrix();

              glUseProgramObjectARB(particles_NeHe_SHADER);


              glBindBufferARB(GL_ARRAY_BUFFER_ARB, particles_NeHe_vboID);


              glLightfv(GL_LIGHT0, GL_AMBIENT,     LightAmbient_particles_NeHe);
              glLightfv(GL_LIGHT0, GL_DIFFUSE,     LightDiffuse_particles_NeHe);
              glLightfv(GL_LIGHT0, GL_SPECULAR,    LightSpecular_particles_NeHe);
              glMaterialfv(GL_FRONT, GL_AMBIENT,   MaterialAmbient_particles_NeHe);
              glMaterialfv(GL_FRONT, GL_DIFFUSE,   MaterialDiffuse_particles_NeHe);
              glMaterialfv(GL_FRONT, GL_EMISSION,  MaterialEmission_particles_NeHe);
              glMaterialfv(GL_FRONT, GL_SPECULAR,  MaterialSpecular_particles_NeHe);
              glMaterialf(GL_FRONT, GL_SHININESS,  MaterialShininess_particles_NeHe);

              glUniform1fARB( UNIFORM_counter_particles_NeHe, particles_NeHe_counter);

              glEnableClientState(GL_TEXTURE_COORD_ARRAY );
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(particles_NeHe_VERT) + sizeof(particles_NeHe_NORM)));
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(particles_NeHe_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              //SPECULAR_textureID;
              //SPECULAR_textureID = glGetUniformLocationARB(particles_NeHe_SHADER,"SpecularMap");
              //glUniform1iARB(SPECULAR_textureID, 2);
              //glActiveTextureARB(GL_TEXTURE2_ARB);
              //glBindTexture(GL_TEXTURE_2D,  specularMap[515]);

              DOT3_textureID;
              DOT3_textureID     = glGetUniformLocationARB(particles_NeHe_SHADER,"NormalMap");
              glUniform1iARB(DOT3_textureID, 1);
              glActiveTextureARB(GL_TEXTURE1_ARB);
              glBindTexture(GL_TEXTURE_2D,  normalMap[515]);

              textureID;
              textureID     = glGetUniformLocationARB(particles_NeHe_SHADER,"Texture1");
              glUniform1iARB(textureID, 0);
              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[515]);

              glDrawArrays(GL_TRIANGLES, 0, 6);

              glDisableClientState(GL_VERTEX_ARRAY);
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);

              glUseProgramObjectARB(0);

