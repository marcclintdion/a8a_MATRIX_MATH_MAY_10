   //glTranslatef(marcRightHand_POSITION[0],0, marcRightHand_POSITION[2]); 
   //glScalef(scalemarcRightHandShadowY[0],0,scalemarcRightHandShadowY[2]); 
   //glRotatef(180, 0, 1, 0);//ROTATE_MODEL_TO_ALIGN_Z_AXIS_LIGHTING_WITH_MODEL_TRANSFORMATION_MATRIX
   //glRotatef(spinFloat,rotation_AXIS_marcRightHand[0], rotation_AXIS_marcRightHand[1], rotation_AXIS_marcRightHand[2]);
   //glPushMatrix(); 
   //     glLoadIdentity();
   //     glRotatef(-spinFloat,-rotation_AXIS_marcRightHand[0], -rotation_AXIS_marcRightHand[1], rotation_AXIS_marcRightHand[2]); 
   //     glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcRightHand);
  //      glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcRightHand);
  // glPopMatrix();
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightHand_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcRightHand_VERT) + sizeof(marcRightHand_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcRightHand_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);

   glPushMatrix();
   glDisable(GL_TEXTURE_2D);
   glDisable(GL_DEPTH_TEST);
   glEnable(GL_BLEND);
   glColor4f(0.0, 0.0, 0.0, 0.3);

   glDrawArrays(GL_TRIANGLES, 0, 600);
   glColor4f(1.0, 1.0, 1.0, 1.0);
   glDisable(GL_BLEND);
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_TEXTURE_2D);
   glPopMatrix();

   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

