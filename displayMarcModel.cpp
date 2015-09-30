  
        
        glTranslatef(mainBodyPosition[0], mainBodyPosition[1], mainBodyPosition[2]);
        glTranslatef(hips_04[0], hips_04[1], hips_04[2]);
        glRotatef(hips_ROTATE[3], hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2]);   

                         
                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                  
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                                 glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                 glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);
                            glPopMatrix();

                            #include "_MODEL_FOLDERS_/marcParts/marcHips/marcHips_vboRender.cpp" //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER 
                        
 
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++                           
                             glPushMatrix(); 
                                       glTranslatef(torso_04[0], torso_04[1], torso_04[2]);
                                       glRotatef(torso_ROTATE[3], torso_ROTATE[0], torso_ROTATE[1], torso_ROTATE[2]);  
                            
                                          glPushMatrix();
                                              glLoadIdentity();
                                              //
                                              glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                                
                                              glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                              glRotatef(marcRotation, 0, 1, 0); 
                                              glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                              glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);
                                              glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                              glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);
                                         glPopMatrix();          
                                       

                                       #include "_MODEL_FOLDERS_/marcParts/marcTorso/marcTorso_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                              
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
                 /////////////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                              
                                            
                                            glPushMatrix();
                                                   glTranslatef(faceMarc_04[0], faceMarc_04[1], faceMarc_04[2]);
                                                   glRotatef(head_ROTATE[3], head_ROTATE[0], head_ROTATE[1], head_ROTATE[2]);         
                                                   glDisable(GL_BLEND);
                                                      
                                                      glPushMatrix();
                                                           glLoadIdentity();
                                                           //
                                                           glRotatef(-head_ROTATE[3],  -head_ROTATE[0],   -head_ROTATE[1],  head_ROTATE[2]);                                                            
                                                           glRotatef(-torso_ROTATE[3], -torso_ROTATE[0],  -torso_ROTATE[1], torso_ROTATE[2]);                                                           
                                                           glRotatef(-hips_ROTATE[3],  -hips_ROTATE[0],   -hips_ROTATE[1],  hips_ROTATE[2]);                                                           
                                                           glRotatef(marcRotation, 0, 1, 0); 
                                                           glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                                           glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                                                   
                                                           glLightfv (GL_LIGHT0,GL_POSITION, face_Marc_DOT3_light);
                                                           glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationFace_Marc_DOT3);
                                                      glPopMatrix();                        
                                              
                                                     #include "_MODEL_FOLDERS_/marcParts/marcFace/marcFace_vboRender.cpp"  
                                                                                
                                                       glPushMatrix();
                                                            glLoadIdentity();
                                                            //
                                                            glRotatef(-head_ROTATE[3], -head_ROTATE[0], -head_ROTATE[1], head_ROTATE[2]);                                                             
                                                            glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                                            
                                                            glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                                            
                                                            glRotatef(marcRotation, 0, 1, 0); 
                                                            glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                                            glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                                              
                                                            glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                                            glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);
                                                       glPopMatrix();                          

                                                     #include "_MODEL_FOLDERS_/marcParts/marcHeadBack/marcHeadBack_vboRender.cpp" //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER
                                                              
                                                               
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
                            
                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                                 
                                 glRotatef(-leftUpperArm_ROTATE[3], -leftUpperArm_ROTATE[0], -leftUpperArm_ROTATE[1], leftUpperArm_ROTATE[2]);                                 
                                 glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                 
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]); 
                                 glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                 glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);            
                            glPopMatrix();    

            #include "_MODEL_FOLDERS_/marcParts/marcLeftUpperArm/marcLeftUpperArm_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER
  
 
                       glPushMatrix(); 
                            glTranslatef(leftForeArm_04[0], leftForeArm_04[1], leftForeArm_04[2]);             
                            glRotatef(leftForeArm_ROTATE[3], leftForeArm_ROTATE[0], leftForeArm_ROTATE[1], leftForeArm_ROTATE[2]);       
                            
                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                            
                                 glRotatef(-leftForeArm_ROTATE[3], -leftForeArm_ROTATE[0], -leftForeArm_ROTATE[1], leftForeArm_ROTATE[2]);                                 
                                 glRotatef(-leftUpperArm_ROTATE[3], -leftUpperArm_ROTATE[0], -leftUpperArm_ROTATE[1], leftUpperArm_ROTATE[2]);                                  
                                 glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]); 
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]); 
                                 glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                 glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);
                            glPopMatrix();                                 

                            #include "_MODEL_FOLDERS_/marcParts/marcLeftForeArm/marcLeftForeArm_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER

                            

                                          glTranslatef(leftGlovedHand_04[0], leftGlovedHand_04[1], leftGlovedHand_04[2]);             
                                          glRotatef(leftGlovedHand_ROTATE[3], leftGlovedHand_ROTATE[0], leftGlovedHand_ROTATE[1], leftGlovedHand_ROTATE[2]);         
                                                      
                                          glPushMatrix();
                                               glLoadIdentity();
                                               //
                                               glRotatef(-leftGlovedHand_ROTATE[3], -leftGlovedHand_ROTATE[0], -leftGlovedHand_ROTATE[1], leftGlovedHand_ROTATE[2]);                                               
                                               glRotatef(-leftForeArm_ROTATE[3], -leftForeArm_ROTATE[0], -leftForeArm_ROTATE[1], leftForeArm_ROTATE[2]);                                               
                                               glRotatef(-leftUpperArm_ROTATE[3], -leftUpperArm_ROTATE[0], -leftUpperArm_ROTATE[1], leftUpperArm_ROTATE[2]);                                                
                                               glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                               
                                               glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                               
                                               glRotatef(marcRotation, 0, 1, 0); 
                                               glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                               glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]); 
                                               glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                               glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);   
                                          glPopMatrix();     

                                          #include "_MODEL_FOLDERS_/marcParts/marcLeftHand/marcLeftHand_vboRender.cpp" //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER 

                                          

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
        //glTranslatef(mainBodyPosition[0], mainBodyPosition[1], mainBodyPosition[2]);
        //glTranslatef(hips_04[0], hips_04[1], hips_04[2]);
        //glRotatef(hips_ROTATE[3], hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2]);     
    glTranslatef(torso_04[0], torso_04[1], torso_04[2]);
   //glRotatef(180, 0, 1, 0);//ROTATE_MODEL_TO_ALIGN_Z_AXIS_LIGHTING_WITH_MODEL_TRANSFORMATION_MATRIX    
    glRotatef(torso_ROTATE[3], torso_ROTATE[0], torso_ROTATE[1], torso_ROTATE[2]); 
       
       glPushMatrix(); 
           glTranslatef(rightUpperArm_04[0], rightUpperArm_04[1], rightUpperArm_04[2]);             
           glRotatef(rightUpperArm_ROTATE[3], rightUpperArm_ROTATE[0], rightUpperArm_ROTATE[1], rightUpperArm_ROTATE[2]);   
                           
                           
                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                                 
                                 glRotatef(-rightUpperArm_ROTATE[3], -rightUpperArm_ROTATE[0], -rightUpperArm_ROTATE[1], rightUpperArm_ROTATE[2]);                                 
                                 glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                 
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                  
                                 glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                 glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);
                            glPopMatrix();
                 

                 #include "_MODEL_FOLDERS_/marcParts/marcRightUpperArm/marcRightUpperArm_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER


                    
                     glPushMatrix(); 
                              glTranslatef(rightForeArm_04[0], rightForeArm_04[1], rightForeArm_04[2]);             
                              glRotatef(rightForeArm_ROTATE[3], rightForeArm_ROTATE[0], rightForeArm_ROTATE[1], rightForeArm_ROTATE[2]);    
                            
                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                                 
                                 glRotatef(-rightForeArm_ROTATE[3], -rightForeArm_ROTATE[0], -rightForeArm_ROTATE[1], rightForeArm_ROTATE[2]);                                  
                                 glRotatef(-rightUpperArm_ROTATE[3], -rightUpperArm_ROTATE[0], -rightUpperArm_ROTATE[1], rightUpperArm_ROTATE[2]);                                
                                 glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                 
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                                               
                                glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);
                            glPopMatrix();                                

                                
                                #include "_MODEL_FOLDERS_/marcParts/marcRightForeArm/marcRightForeArm_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER

                 
                                         glTranslatef(rightGlovedHand_04[0],  rightGlovedHand_04[1],     rightGlovedHand_04[2]);             
                                         glRotatef(rightGlovedHand_ROTATE[3], rightGlovedHand_ROTATE[0], rightGlovedHand_ROTATE[1], rightGlovedHand_ROTATE[2]);   
                                          
                                          glPushMatrix();
                                               glLoadIdentity();
                                               //
                                               glRotatef(-rightGlovedHand_ROTATE[3], -rightGlovedHand_ROTATE[0], -rightGlovedHand_ROTATE[1], rightGlovedHand_ROTATE[2]);    
                                               glRotatef(-rightForeArm_ROTATE[3], -rightForeArm_ROTATE[0], -rightForeArm_ROTATE[1], rightForeArm_ROTATE[2]);
                                               glRotatef(-rightUpperArm_ROTATE[3], -rightUpperArm_ROTATE[0], -rightUpperArm_ROTATE[1], rightUpperArm_ROTATE[2]);                                            
                                               glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                               
                                               glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                              
                                               glRotatef(marcRotation, 0, 1, 0); 
                                               glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                               glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                                          
                                               glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                               glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);  
                                          glPopMatrix();                                         

                                         #include "_MODEL_FOLDERS_/marcParts/marcRightHand/marcRightHand_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER

 
                                         

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
    //glTranslatef(mainBodyPosition[0], mainBodyPosition[1], mainBodyPosition[2]);
    //glTranslatef(hips_04[0], hips_04[1], hips_04[2]);
    //glRotatef(hips_ROTATE[3], hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2]);    
   
    glPushMatrix(); 
         glTranslatef(leftUpperLeg_04[0], leftUpperLeg_04[1], leftUpperLeg_04[2]);             
         glRotatef(leftUpperLeg_ROTATE[3], leftUpperLeg_ROTATE[0], leftUpperLeg_ROTATE[1], leftUpperLeg_ROTATE[2]); 

                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                                 
                                 glRotatef(-leftUpperLeg_ROTATE[3], -leftUpperLeg_ROTATE[0], -leftUpperLeg_ROTATE[1], leftUpperLeg_ROTATE[2]);                                 
                                 glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                 
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);             
                                 glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                 glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);
                            glPopMatrix();                 

                 
                 #include "_MODEL_FOLDERS_/marcParts/marcLeftUpperLeg/marcLeftUpperLeg_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER



                    glPushMatrix(); 
                               glTranslatef(leftLowerLeg_04[0], leftLowerLeg_04[1], leftLowerLeg_04[2]);             
                               glRotatef(leftLowerLeg_ROTATE[3], leftLowerLeg_ROTATE[0], leftLowerLeg_ROTATE[1], leftLowerLeg_ROTATE[2]);   
                            
                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                                 
                                 glRotatef(-leftLowerLeg_ROTATE[3], -leftLowerLeg_ROTATE[0], -leftLowerLeg_ROTATE[1], leftLowerLeg_ROTATE[2]);                                 
                                 glRotatef(-leftUpperLeg_ROTATE[3], -leftUpperLeg_ROTATE[0], -leftUpperLeg_ROTATE[1], leftUpperLeg_ROTATE[2]);                                  
                                 glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                 
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                               
                                 glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                 glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);   
                            glPopMatrix();                               

                               
                               #include "_MODEL_FOLDERS_/marcParts/marcLeftLowerLeg/marcLeftLowerLeg_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER

       
                                                  glTranslatef(leftFoot_04[0], leftFoot_04[1], leftFoot_04[2]);             
                                                  glRotatef(leftFoot_ROTATE[3], leftFoot_ROTATE[0], leftFoot_ROTATE[1], leftFoot_ROTATE[2]); 
                                                 
                                                 glPushMatrix();
                                                      glLoadIdentity();
                                                      //
                                                      glRotatef(-leftFoot_ROTATE[3], -leftFoot_ROTATE[0], -leftFoot_ROTATE[1], leftFoot_ROTATE[2]);                                                       
                                                      glRotatef(-leftLowerLeg_ROTATE[3], -leftLowerLeg_ROTATE[0], -leftLowerLeg_ROTATE[1], leftLowerLeg_ROTATE[2]);                                                       
                                                      glRotatef(-leftUpperLeg_ROTATE[3], -leftUpperLeg_ROTATE[0], -leftUpperLeg_ROTATE[1], leftUpperLeg_ROTATE[2]);                                                       
                                                      glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                                      
                                                      glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                                     
                                                      glRotatef(marcRotation, 0, 1, 0); 
                                                      glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                                      glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                                                  
                                                      glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                                      glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);     
                                                 glPopMatrix();                                                  

                                                  
                                                  #include "_MODEL_FOLDERS_/marcParts/marcLeftBoot/marcLeftBoot_vboRender.cpp"  //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER

 

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
    //glTranslatef(mainBodyPosition[0], mainBodyPosition[1], mainBodyPosition[2]);
    //glTranslatef(hips_04[0], hips_04[1], hips_04[2]);
    //glRotatef(hips_ROTATE[3], hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2]);              
          
           glPushMatrix(); 
                  glTranslatef(rightUpperLeg_04[0], rightUpperLeg_04[1], rightUpperLeg_04[2]);             
                  glRotatef(rightUpperLeg_ROTATE[3], rightUpperLeg_ROTATE[0], rightUpperLeg_ROTATE[1], rightUpperLeg_ROTATE[2]);      
           
                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                  
                                 glRotatef(-rightUpperLeg_ROTATE[3], -rightUpperLeg_ROTATE[0], -rightUpperLeg_ROTATE[1], rightUpperLeg_ROTATE[2]);                                 
                                 glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                 
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                          
                                 glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                 glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);
                            glPopMatrix();

                          
                          #include "_MODEL_FOLDERS_/marcParts/marcRightUpperLeg/marcRightUpperLeg_vboRender.cpp"      //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER    
                                            
                                    glPushMatrix(); 
                                            glTranslatef(rightLowerLeg_04[0], rightLowerLeg_04[1], rightLowerLeg_04[2]);             
                                            glRotatef(rightLowerLeg_ROTATE[3], rightLowerLeg_ROTATE[0], rightLowerLeg_ROTATE[1], rightLowerLeg_ROTATE[2]);     
                            glPushMatrix();
                                 glLoadIdentity();
                                 //
                                 glRotatef(-rightLowerLeg_ROTATE[3], -rightLowerLeg_ROTATE[0], -rightLowerLeg_ROTATE[1], rightLowerLeg_ROTATE[2]);                                 
                                 glRotatef(-rightUpperLeg_ROTATE[3], -rightUpperLeg_ROTATE[0], -rightUpperLeg_ROTATE[1], rightUpperLeg_ROTATE[2]);                                 
                                 glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                 
                                 glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                 
                                 glRotatef(marcRotation, 0, 1, 0); 
                                 glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                 glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                                            
                                 glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                 glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);                                            
                            glPopMatrix();                

                                            
                                            #include "_MODEL_FOLDERS_/marcParts/marcRightLowerLeg/marcRightLowerLeg_vboRender.cpp" //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER
                          
   
                      
                                                            glTranslatef(rightFoot_04[0], rightFoot_04[1], rightFoot_04[2]);             
                                                            glRotatef(rightFoot_ROTATE[3], rightFoot_ROTATE[0], rightFoot_ROTATE[1], rightFoot_ROTATE[2]);       
                           
                                                              glPushMatrix();
                                                                   glLoadIdentity();
                                                                   //
                                                                   glRotatef(-rightFoot_ROTATE[3], -rightFoot_ROTATE[0], -rightFoot_ROTATE[1], rightFoot_ROTATE[2]);                                                                    
                                                                   glRotatef(-rightLowerLeg_ROTATE[3], -rightLowerLeg_ROTATE[0], -rightLowerLeg_ROTATE[1], rightLowerLeg_ROTATE[2]);                                                                   
                                                                   glRotatef(-rightUpperLeg_ROTATE[3], -rightUpperLeg_ROTATE[0], -rightUpperLeg_ROTATE[1], rightUpperLeg_ROTATE[2]);                                                                   
                                                                   glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                                                   
                                                                   glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                                                   
                                                                   glRotatef(marcRotation, 0, 1, 0); 
                                                                   glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                                                   glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                                                            
                                                                   glLightfv(GL_LIGHT0,GL_POSITION,lightPos_marcTorso);
                                                                   glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, lightAttenuation_marcTorso);   
                                                              glPopMatrix();                           

                                                            
                                                            #include "_MODEL_FOLDERS_/marcParts/marcRightBoot/marcRightBoot_vboRender.cpp" //_________________________________ALL_WOOD_SHADERS_ARE_LINKED_TO_THE_TORSO_SHADER 

                        
     
       
                                    glPopMatrix(); 
             glPopMatrix();
       glPopMatrix();


////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG
////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG
////////////_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG_____RIGHT_LEG      
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   glTranslatef(torso_04[0], torso_04[1], torso_04[2]);
   glRotatef(torso_ROTATE[3], torso_ROTATE[0], torso_ROTATE[1], torso_ROTATE[2]); 

                                                      
                                                        glTranslatef(jetPackPosition[0], jetPackPosition[1], jetPackPosition[2]);     
                                                                    
                                                                    glPushMatrix();
                                                                          glLoadIdentity();
                                                                          //
                                                                          glRotatef(-torso_ROTATE[3], -torso_ROTATE[0], -torso_ROTATE[1], torso_ROTATE[2]);                                                                          
                                                                          glRotatef(-hips_ROTATE[3], -hips_ROTATE[0], -hips_ROTATE[1], hips_ROTATE[2]);                                                                          
                                                                          glRotatef(marcRotation, 0, 1, 0); 
                                                                          glRotatef(-look_LEFT_RIGHT, 0, -1, 0);
                                                                          glTranslatef(-eyePosition[0],-eyePosition[1],-eyePosition[2]);                                                                      
                                                                          glLightfv (GL_LIGHT0,GL_POSITION, lightPos_jetPackEngines);
                                                                          glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_jetPackEngines);
                                                                    glPopMatrix();     

                                                                    #include "_MODEL_FOLDERS_/jetPack/jetPackTopCones/jetPackTopCones_vboRender.cpp" 
                                                             ////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

                                                                    #include "_MODEL_FOLDERS_/jetPack/jetPackMiddleEngines/jetPackMiddleEngines_vboRender.cpp"                         
                                                             ////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    

                                                                    #include "_MODEL_FOLDERS_/jetPack/jetPackNozzels/jetPackNozzels_vboRender.cpp"  
                                                             ////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     

                                                                    #include "_MODEL_FOLDERS_/jetPack/jetPackBindings/jetPackBindings_vboRender.cpp"  
                                                             ////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                                                                

                                                                    
                                                                    #include "_MODEL_FOLDERS_/jetPack/jetPacksideHandles/jetPacksideHandles_vboRender.cpp"  
                                                     
                                                             ////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

                                                                    #include "_MODEL_FOLDERS_/jetPack/jetPackVestStraps/jetPackVestStraps_vboRender.cpp"  
                                                    
                                                   

                                      
