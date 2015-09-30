//setSelection_TORSO          = 1;
//SelectionCount_TORSO        = 0;

if(setSelection_TORSO == 6)
{        
         torso_ROTATE_FRAMEA[3]   =  torso_SET_06[3]     ;
         torso_ROTATE_FRAMEA[0]   =  torso_SET_06[0]     ;
         torso_ROTATE_FRAMEA[1]   =  torso_SET_06[1]     ;
         torso_ROTATE_FRAMEA[2]   =  torso_SET_06[2]     ;
          
              if(SelectionCount_TORSO == 6)         
              {
                      torso_ROTATE_FRAMEB[3]   =  torso_SET_01[3]     ;
                      torso_ROTATE_FRAMEB[0]   =  torso_SET_01[0]     ;
                      torso_ROTATE_FRAMEB[1]   =  torso_SET_01[1]     ;
                      torso_ROTATE_FRAMEB[2]   =  torso_SET_01[2]     ;
              }
              else
              {             
                      torso_ROTATE_FRAMEB[3]   =  torso_SET_07[3]     ;
                      torso_ROTATE_FRAMEB[0]   =  torso_SET_07[0]     ;
                      torso_ROTATE_FRAMEB[1]   =  torso_SET_07[1]     ;
                      torso_ROTATE_FRAMEB[2]   =  torso_SET_07[2]     ;
              }
}
