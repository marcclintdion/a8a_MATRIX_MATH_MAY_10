           skeleton_setSelectionLimit         = skeleton_setSelectionLimit;   
           skeleton_SelectionCount            = skeleton_SelectionCount;          
//ERASE_ALL_OF_THESE                 
           setSelectionLimit_HEAD       = setSelectionLimit_HEAD;
           SelectionCount_HEAD          = SelectionCount_HEAD;     
//ERASE_ALL_OF_THESE       
           setSelectionLimit_TORSO      = setSelectionLimit_TORSO;
           SelectionCount_TORSO         = SelectionCount_TORSO;
//ERASE_ALL_OF_THESE            
           setSelectionLimit_HIPS       = setSelectionLimit_HIPS;
           SelectionCount_HIPS          = SelectionCount_HIPS;           
//BOTH_SIDES_ARE_EQUAL
           setSelectionLimit_LEFT_ARM   = setSelectionLimit_LEFT_ARM;
           SelectionCount_LEFT_ARM      = SelectionCount_LEFT_ARM;
//BOTH_SIDES_ARE_EQUAL           
           setSelectionLimit_RIGHT_ARM  = setSelectionLimit_RIGHT_ARM;
           SelectionCount_RIGHT_ARM     = SelectionCount_RIGHT_ARM;         
//BOTH_SIDES_ARE_EQUAL         
           setSelectionLimit_LEFT_LEG   = setSelectionLimit_LEFT_LEG;
           SelectionCount_LEFT_LEG      = SelectionCount_LEFT_LEG;
//BOTH_SIDES_ARE_EQUAL           
           setSelectionLimit_RIGHT_LEG  = setSelectionLimit_RIGHT_LEG;
           SelectionCount_RIGHT_LEG     = SelectionCount_RIGHT_LEG;          
         
         #include "HEAD/HEAD_frame_1.cpp"
         #include "LEFT_LEG/LEFT_LEG_frame_1.cpp"         
         #include "TORSO/TORSO_frame_1.cpp"
         #include "HIPS/HIPS_frame_1.cpp"         
         #include "LEFT_ARM/LEFT_ARM_frame_1.cpp"          
         #include "RIGHT_ARM/RIGHT_ARM_frame_1.cpp"
          
         #include "RIGHT_LEG/RIGHT_LEG_frame_1.cpp"         
         
                  
        if(skeleton_setSelection == 1)
        {          
                      skeleton_MOVE_FRAMEA[0]      =  skeleton_SET_01[0];
                      skeleton_MOVE_FRAMEA[1]      =  skeleton_SET_01[1];                     
                      skeleton_MOVE_FRAMEA[2]      =  skeleton_SET_01[2];
                      
                      skeleton_MOVE_FRAMEB[0]      =  skeleton_SET_02[0];
                      skeleton_MOVE_FRAMEB[1]      =  skeleton_SET_02[1];                      
                      skeleton_MOVE_FRAMEB[2]      =  skeleton_SET_02[2];                    
        }
     
      
         #include "HEAD/HEAD_frame_2.cpp"           
         #include "TORSO/TORSO_frame_2.cpp"
         #include "HIPS/HIPS_frame_2.cpp" 
         #include "LEFT_ARM/LEFT_ARM_frame_2.cpp" 
         #include "RIGHT_ARM/RIGHT_ARM_frame_2.cpp"
         #include "LEFT_LEG/LEFT_LEG_frame_2.cpp" 
         #include "RIGHT_LEG/RIGHT_LEG_frame_2.cpp"         
                               
         if(skeleton_setSelection == 2)
         {
                skeleton_MOVE_FRAMEA[0]      =  skeleton_SET_02[0];
                skeleton_MOVE_FRAMEA[1]      =  skeleton_SET_02[1];                     
                skeleton_MOVE_FRAMEA[2]      =  skeleton_SET_02[2];

                if(skeleton_SelectionCount == 2)
                {         
                      skeleton_MOVE_FRAMEB[0]      =  skeleton_SET_01[0];
                      skeleton_MOVE_FRAMEB[1]      =  skeleton_SET_01[1];                      
                      skeleton_MOVE_FRAMEB[2]      =  skeleton_SET_01[2];                                     
                }
                else
                {         
                      skeleton_MOVE_FRAMEB[0]      =  skeleton_SET_03[0];
                      skeleton_MOVE_FRAMEB[1]      =  skeleton_SET_03[1];                      
                      skeleton_MOVE_FRAMEB[2]      =  skeleton_SET_03[2];                                       
                }
          }    
           
           
         #include "HEAD/HEAD_frame_3.cpp"
         #include "TORSO/TORSO_frame_3.cpp"                      
         #include "HIPS/HIPS_frame_3.cpp" 
         #include "LEFT_ARM/LEFT_ARM_frame_3.cpp" 
         #include "RIGHT_ARM/RIGHT_ARM_frame_3.cpp"         
         #include "LEFT_LEG/LEFT_LEG_frame_3.cpp" 
         #include "RIGHT_LEG/RIGHT_LEG_frame_3.cpp"
         
                    
           if(skeleton_setSelection == 3)
           {
                 skeleton_MOVE_FRAMEA[0]      =  skeleton_SET_03[0];
                 skeleton_MOVE_FRAMEA[1]      =  skeleton_SET_03[1];                     
                 skeleton_MOVE_FRAMEA[2]      =  skeleton_SET_03[2];
         
                 if(skeleton_SelectionCount == 3)
                 {          

                      skeleton_MOVE_FRAMEB[0]      =  skeleton_SET_01[0];
                      skeleton_MOVE_FRAMEB[1]      =  skeleton_SET_01[1];                      
                      skeleton_MOVE_FRAMEB[2]      =  skeleton_SET_01[2];   
                 }
                 else
                 {
                      skeleton_MOVE_FRAMEB[0]      =  skeleton_SET_04[0];
                      skeleton_MOVE_FRAMEB[1]      =  skeleton_SET_04[1];                      
                      skeleton_MOVE_FRAMEB[2]      =  skeleton_SET_04[2];                                     
                 } 
            }    
           
         #include "HEAD/HEAD_frame_4.cpp" 
         #include "TORSO/TORSO_frame_4.cpp"
         #include "HIPS/HIPS_frame_4.cpp"            
         #include "LEFT_ARM/LEFT_ARM_frame_4.cpp" 
         #include "RIGHT_ARM/RIGHT_ARM_frame_4.cpp"         
         #include "LEFT_LEG/LEFT_LEG_frame_4.cpp" 
         #include "RIGHT_LEG/RIGHT_LEG_frame_4.cpp"         
                   
           if(skeleton_setSelection == 4)
           {
                      skeleton_MOVE_FRAMEA[0]      =  skeleton_SET_04[0];
                      skeleton_MOVE_FRAMEA[1]      =  skeleton_SET_04[1];                     
                      skeleton_MOVE_FRAMEA[2]      =  skeleton_SET_04[2];
           
                      if(skeleton_SelectionCount == 4)
                      {          
                          skeleton_MOVE_FRAMEB[0]      =  skeleton_SET_01[0];
                          skeleton_MOVE_FRAMEB[1]      =  skeleton_SET_01[1];                      
                          skeleton_MOVE_FRAMEB[2]      =  skeleton_SET_01[2];                                
                      }

           }
