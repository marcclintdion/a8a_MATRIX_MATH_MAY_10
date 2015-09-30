                         
glPushMatrix(); 
//glTranslatef(marcShadow_Y_Position[0],marcShadow_Y_Position[1],marcShadow_Y_Position[2]); 
//glTranslatef(marcModelPosition[0], marcModelPosition[1], marcModelPosition[2]);
//glRotatef(marcRotation, 0, 1, 0);        

   //glScalef(scalemarcShadowY[0],0,scalemarcShadowY[2]); 
        
        glTranslatef(mainBodyPosition[0], mainBodyPosition[1], mainBodyPosition[2]);
        glTranslatef(hips_04[0], hips_04[1], hips_04[2]);
        glRotatef(hips_ROTATE[3], hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2]);   

                         
                            
                            
                                 glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcHips_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcHips_VERT) + sizeof(marcHips_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcHips_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);

  
   glDisable(GL_TEXTURE_2D);
   glDisable(GL_DEPTH_TEST);
   glDisable(GL_BLEND);
   

   glDrawArrays(GL_TRIANGLES, 0, 330);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);              
                            
                            
                        
 
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++                           
                             glPushMatrix(); 
                                       glTranslatef(torso_04[0], torso_04[1], torso_04[2]);
                                       glRotatef(torso_ROTATE[3], torso_ROTATE[0], torso_ROTATE[1], torso_ROTATE[2]);  

                                       
                                      
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcTorso_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcTorso_VERT) + sizeof(marcTorso_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcTorso_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 972);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                              
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                              
                                            
                                            glPushMatrix();
                                                   glTranslatef(faceMarc_04[0], faceMarc_04[1], faceMarc_04[2]);
                                                   glRotatef(head_ROTATE[3], head_ROTATE[0], head_ROTATE[1], head_ROTATE[2]);         
                                                   glDisable(GL_BLEND);
                                                   
                                                   
                                                      glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcFace_vboID);

                                                      glEnableClientState(GL_TEXTURE_COORD_ARRAY );
                                                      glEnableClientState(GL_NORMAL_ARRAY);
                                                      glEnableClientState(GL_VERTEX_ARRAY);
                                                      glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcFace_VERT) + sizeof(marcFace_NORM)));
                                                      glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcFace_VERT));
                                                      glVertexPointer(3, GL_FLOAT, 0, 0);



                                                      glDrawArrays(GL_TRIANGLES, 0, 1761);


                                                      glDisableClientState(GL_VERTEX_ARRAY);
                                                      glDisableClientState(GL_NORMAL_ARRAY);
                                                      glDisableClientState(GL_TEXTURE_COORD_ARRAY); 
                                                     
                                                      ////////////////////////////////////////////////////////////////////////////////////////////////////
                                                     
                                                      glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcHeadBack_vboID);

                                                      glEnableClientState(GL_TEXTURE_COORD_ARRAY );
                                                      glEnableClientState(GL_NORMAL_ARRAY);
                                                      glEnableClientState(GL_VERTEX_ARRAY);
                                                      glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcHeadBack_VERT) + sizeof(marcHeadBack_NORM)));
                                                      glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcHeadBack_VERT));
                                                      glVertexPointer(3, GL_FLOAT, 0, 0);

                                                      glDrawArrays(GL_TRIANGLES, 0, 384);

                                                      glDisableClientState(GL_VERTEX_ARRAY);
                                                      glDisableClientState(GL_NORMAL_ARRAY);
                                                      glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                                                      
                                                               
                                                               
                                            glPopMatrix();
                              glPopMatrix();        
                              
                              
                              
////////////_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO
////////////_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO
////////////_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO_____TORSO
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM
////////////_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM
////////////_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM
glPushMatrix();
        //glTranslatef(mainBodyPosition[0], mainBodyPosition[1], mainBodyPosition[2]);
        //glTranslatef(hips_04[0], hips_04[1], hips_04[2]);
        //glRotatef(hips_ROTATE[3], hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2]);      
    glTranslatef(torso_04[0], torso_04[1], torso_04[2]);
    glRotatef(torso_ROTATE[3], torso_ROTATE[0], torso_ROTATE[1], torso_ROTATE[2]);   
        
        glPushMatrix(); 
            glTranslatef(leftUpperArm_04[0], leftUpperArm_04[1], leftUpperArm_04[2]);           
            glRotatef(leftUpperArm_ROTATE[3], leftUpperArm_ROTATE[0], leftUpperArm_ROTATE[1], leftUpperArm_ROTATE[2]);        

            
             
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcLeftUpperArm_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcLeftUpperArm_VERT) + sizeof(marcLeftUpperArm_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcLeftUpperArm_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 453);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


            
 
                       glPushMatrix(); 
                            glTranslatef(leftForeArm_04[0], leftForeArm_04[1], leftForeArm_04[2]);             
                            glRotatef(leftForeArm_ROTATE[3], leftForeArm_ROTATE[0], leftForeArm_ROTATE[1], leftForeArm_ROTATE[2]);       

                            
                            
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcLeftForeArm_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcLeftForeArm_VERT) + sizeof(marcLeftForeArm_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcLeftForeArm_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 222);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                            

                                          glTranslatef(leftGlovedHand_04[0], leftGlovedHand_04[1], leftGlovedHand_04[2]);             
                                          glRotatef(leftGlovedHand_ROTATE[3], leftGlovedHand_ROTATE[0], leftGlovedHand_ROTATE[1], leftGlovedHand_ROTATE[2]);         

                                          
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcLeftHand_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcLeftHand_VERT) + sizeof(marcLeftHand_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcLeftHand_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 600);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

  
                                          
                                          

    glPopMatrix();              
  glPopMatrix();
glPopMatrix();
////////////_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM
////////////_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM
////////////_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM_____LEFT_ARM            
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                    
////////////_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM
////////////_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM
////////////_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM
glPushMatrix();
    
    glTranslatef(torso_04[0], torso_04[1], torso_04[2]);
    glRotatef(torso_ROTATE[3], torso_ROTATE[0], torso_ROTATE[1], torso_ROTATE[2]); 
       
       glPushMatrix(); 
           glTranslatef(rightUpperArm_04[0], rightUpperArm_04[1], rightUpperArm_04[2]);             
           glRotatef(rightUpperArm_ROTATE[3], rightUpperArm_ROTATE[0], rightUpperArm_ROTATE[1], rightUpperArm_ROTATE[2]);   
                 
                 
                  
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightUpperArm_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcRightUpperArm_VERT) + sizeof(marcRightUpperArm_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcRightUpperArm_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 453);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                  
                       glPushMatrix(); 
                              glTranslatef(rightForeArm_04[0], rightForeArm_04[1], rightForeArm_04[2]);             
                              glRotatef(rightForeArm_ROTATE[3], rightForeArm_ROTATE[0], rightForeArm_ROTATE[1], rightForeArm_ROTATE[2]);    
                                              
                                
                                
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightForeArm_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcRightForeArm_VERT) + sizeof(marcRightForeArm_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcRightForeArm_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);


   glDrawArrays(GL_TRIANGLES, 0, 222);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                                
                                         glTranslatef(rightGlovedHand_04[0],  rightGlovedHand_04[1],     rightGlovedHand_04[2]);             
                                         glRotatef(rightGlovedHand_ROTATE[3], rightGlovedHand_ROTATE[0], rightGlovedHand_ROTATE[1], rightGlovedHand_ROTATE[2]);   
                                         
                                          
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightHand_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcRightHand_VERT) + sizeof(marcRightHand_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcRightHand_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 600);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                                         
       glPopMatrix();
   glPopMatrix();
glPopMatrix();            
////////////_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM
////////////_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM
////////////_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM_____RIGHT_ARM
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////            
////////////_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG
////////////_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG
////////////_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG
glPushMatrix(); 
    glPushMatrix(); 
         glTranslatef(leftUpperLeg_04[0], leftUpperLeg_04[1], leftUpperLeg_04[2]);             
         glRotatef(leftUpperLeg_ROTATE[3], leftUpperLeg_ROTATE[0], leftUpperLeg_ROTATE[1], leftUpperLeg_ROTATE[2]); 

                  
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcLeftUpperLeg_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcLeftUpperLeg_VERT) + sizeof(marcLeftUpperLeg_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcLeftUpperLeg_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 282);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                 
                 glPushMatrix(); 
                               glTranslatef(leftLowerLeg_04[0], leftLowerLeg_04[1], leftLowerLeg_04[2]);             
                               glRotatef(leftLowerLeg_ROTATE[3], leftLowerLeg_ROTATE[0], leftLowerLeg_ROTATE[1], leftLowerLeg_ROTATE[2]);   
                               
                                
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcLeftLowerLeg_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcLeftLowerLeg_VERT) + sizeof(marcLeftLowerLeg_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcLeftLowerLeg_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 228);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


       
                                                  glTranslatef(leftFoot_04[0], leftFoot_04[1], leftFoot_04[2]);             
                                                  glRotatef(leftFoot_ROTATE[3], leftFoot_ROTATE[0], leftFoot_ROTATE[1], leftFoot_ROTATE[2]); 
                                                  
                                                   
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcLeftBoot_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcLeftBoot_VERT) + sizeof(marcLeftBoot_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcLeftBoot_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 348);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


 

      glPopMatrix();
   glPopMatrix();
glPopMatrix(); 
////////////_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG
////////////_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG
////////////_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG_____LEFT_LEG
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG
////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG
////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG
glPushMatrix();
         glPushMatrix(); 
                  glTranslatef(rightUpperLeg_04[0], rightUpperLeg_04[1], rightUpperLeg_04[2]);             
                  glRotatef(rightUpperLeg_ROTATE[3], rightUpperLeg_ROTATE[0], rightUpperLeg_ROTATE[1], rightUpperLeg_ROTATE[2]);      
           
                          
                           
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightUpperLeg_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcRightUpperLeg_VERT) + sizeof(marcRightUpperLeg_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcRightUpperLeg_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 282);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

                 
                                    glPushMatrix(); 
                                            glTranslatef(rightLowerLeg_04[0], rightLowerLeg_04[1], rightLowerLeg_04[2]);             
                                            glRotatef(rightLowerLeg_ROTATE[3], rightLowerLeg_ROTATE[0], rightLowerLeg_ROTATE[1], rightLowerLeg_ROTATE[2]);     
                                            
                                             
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightLowerLeg_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcRightLowerLeg_VERT) + sizeof(marcRightLowerLeg_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcRightLowerLeg_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 228);

   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                      
                                                            glTranslatef(rightFoot_04[0], rightFoot_04[1], rightFoot_04[2]);             
                                                            glRotatef(rightFoot_ROTATE[3], rightFoot_ROTATE[0], rightFoot_ROTATE[1], rightFoot_ROTATE[2]);       
                                                            
                                                               glBindBufferARB(GL_ARRAY_BUFFER_ARB, marcRightBoot_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(marcRightBoot_VERT) + sizeof(marcRightBoot_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(marcRightBoot_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 348);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

 
                      glPopMatrix(); 
             glPopMatrix();
       glPopMatrix();


////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG
////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG
////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG      
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


glPopMatrix();////END_MAIN_MARC
                                       
                      
                                              
//glTranslatef(marcShadow_Y_Position[0],marcShadow_Y_Position[1],marcShadow_Y_Position[2]);                                                          
//glTranslatef(marcModelPosition[0], marcModelPosition[1], marcModelPosition[2]);
//glRotatef(marcRotation, 0, 1, 0);        
 //glScalef(scalemarcShadowY[0],0,scalemarcShadowY[2]);         
        glTranslatef(mainBodyPosition[0], mainBodyPosition[1], mainBodyPosition[2]);
        glTranslatef(hips_04[0], hips_04[1], hips_04[2]);
        glRotatef(hips_ROTATE[3], hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2]);                                                 
                                       glTranslatef(torso_04[0], torso_04[1], torso_04[2]);
                                       glRotatef(torso_ROTATE[3], torso_ROTATE[0], torso_ROTATE[1], torso_ROTATE[2]);                                                         
                                                        
                                                        glTranslatef(jetPackPosition[0], jetPackPosition[1], jetPackPosition[2]);     
                                                                    
                                                                  
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, jetPackTopCones_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(jetPackTopCones_VERT) + sizeof(jetPackTopCones_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(jetPackTopCones_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 378);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                                 
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, jetPackMiddleEngines_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(jetPackMiddleEngines_VERT) + sizeof(jetPackMiddleEngines_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(jetPackMiddleEngines_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);


   glDrawArrays(GL_TRIANGLES, 0, 651);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                              
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, jetPackNozzels_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(jetPackNozzels_VERT) + sizeof(jetPackNozzels_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(jetPackNozzels_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 420);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                              
   glBindBufferARB(GL_ARRAY_BUFFER_ARB, jetPackBindings_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(jetPackBindings_VERT) + sizeof(jetPackBindings_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(jetPackBindings_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 384);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                                                                
                                                              

   glBindBufferARB(GL_ARRAY_BUFFER_ARB, jetPacksideHandles_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(jetPacksideHandles_VERT) + sizeof(jetPacksideHandles_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(jetPacksideHandles_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);


   glDrawArrays(GL_TRIANGLES, 0, 300);


   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);

////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
                                                                  

   glBindBufferARB(GL_ARRAY_BUFFER_ARB, jetPackVestStraps_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(jetPackVestStraps_VERT) + sizeof(jetPackVestStraps_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(jetPackVestStraps_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);



   glDrawArrays(GL_TRIANGLES, 0, 879);
   glColor4f(1.0, 1.0, 1.0, 1.0);
   
   glDisable(GL_BLEND);
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_TEXTURE_2D);
   glPopMatrix();

   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


                                      

                                          
