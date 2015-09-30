   glScalef(scalespikyBall_00ShadowY[0],0,scalespikyBall_00ShadowY[2]); 
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, spikyBall_00_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(spikyBall_00_VERT) + sizeof(spikyBall_00_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(spikyBall_00_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);

   glPushMatrix();
   glDisable(GL_TEXTURE_2D);
   glDisable(GL_DEPTH_TEST);
   glEnable(GL_BLEND);
   glColor4f(0.0, 0.0, 0.0, 0.3);

   glDrawArrays(GL_TRIANGLES, 0, 360);
   glColor4f(1.0, 1.0, 1.0, 1.0);
   glDisable(GL_BLEND);
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_TEXTURE_2D);
   glPopMatrix();

   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

