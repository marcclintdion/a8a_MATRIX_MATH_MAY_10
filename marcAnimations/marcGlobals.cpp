////////________________________________________________________________________________________________________///////////////////////////////////////////
////////________________________________________________________________________________________________________///////////////////////////////////////////
////////________________________________________________________________________________________________________///////////////////////////////////////////
////////________________________________________________________________________________________________________///////////////////////////////////////////
////////________________________________________________________________________________________________________///////////////////////////////////////////
////////________________________________________________________________________________________________________///////////////////////////////////////////

GLfloat mainBodyPosition[]                      = {0, 0, 0};
GLfloat mainBodyPosition_MOVE_FRAMEA[]          = {0, 0, 0};
GLfloat mainBodyPosition_MOVE_FRAMEB[]          = {0, 0, 0};


int    mainBodyPosition_setSelection            = 1;
int    mainBodyPosition_setSelectionLimit       = 0;
int    mainBodyPosition_SelectionCount          = 0;
float  mainBodyPosition_animationBlendFactor    = 0.032;

float  mainBodyPosition_FRAME_TIME_01           = 0.155;
float  mainBodyPosition_FRAME_TIME_02           = 0.155;
float  mainBodyPosition_FRAME_TIME_03           = 0.155;
float  mainBodyPosition_FRAME_TIME_04           = 0.155;
float  mainBodyPosition_FRAME_TIME_05           = 0.155;
float  mainBodyPosition_FRAME_TIME_06           = 0.155;

////////________________________________________________________________________________________________________///////////////////////////////////////////

int hipsSelection                                 = 0;
GLfloat hips_04[] = {0, 0, 0};
      GLfloat hips_ROTATE[]                  = {0.0f, 1.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
      GLfloat hips_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__       
      GLfloat hips_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
      GLfloat hips_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      

      bool  hips_ROTATE_X = false;
      bool  hips_ROTATE_Y = false;
      bool  hips_ROTATE_Z = false;

int    setSelection_HIPS                = 1;
int    SelectionCount_HIPS              = 0;
int    setSelectionLimit_HIPS           = 0;
float  animationBlendFactor_HIPS        = 0.032;

float  HIPS_FRAME_TIME_01               = 0.155;
float  HIPS_FRAME_TIME_02               = 0.155;
float  HIPS_FRAME_TIME_03               = 0.155;
float  HIPS_FRAME_TIME_04               = 0.155;
float  HIPS_FRAME_TIME_05               = 0.155;
float  HIPS_FRAME_TIME_06               = 0.155;

////////________________________________________________________________________________________________________///////////////////////////////////////////

int torsoSelection                                 = 0;
GLfloat torso_04[] =  {-0.0011, 0.0704, 0.0107};
      GLfloat torso_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
      GLfloat torso_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__       
      GLfloat torso_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
      GLfloat torso_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      

      bool  torso_ROTATE_X = false;
      bool  torso_ROTATE_Y = false;
      bool  torso_ROTATE_Z = false;

int    setSelection_TORSO               = 1;
int    SelectionCount_TORSO             = 0;
int    setSelectionLimit_TORSO          = 0;
float  animationBlendFactor_TORSO       = 0.032;

float  TORSO_FRAME_TIME_01              = 0.155;
float  TORSO_FRAME_TIME_02              = 0.155;
float  TORSO_FRAME_TIME_03              = 0.155;
float  TORSO_FRAME_TIME_04              = 0.155;
float  TORSO_FRAME_TIME_05              = 0.155;
float  TORSO_FRAME_TIME_06              = 0.155;
////////________________________________________________________________________________________________________///////////////////////////////////////////

int headSelection                                 = 0;
GLfloat faceMarc_04[]  =  {-0.0006, 0.363999, -0.0008};

        //GLfloat head_back_04[] = {0, 0, 0};
                
              GLfloat head_ROTATE[]                  = {0.0f, 1.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
              GLfloat head_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__       
              GLfloat head_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
              GLfloat head_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
              

              bool  head_ROTATE_X = false;
              bool  head_ROTATE_Y = false;
              bool  head_ROTATE_Z = false;
                    

int    setSelection_HEAD                = 1;
int    setSelectionLimit_HEAD           = 0;
int    SelectionCount_HEAD              = 0;
float  animationBlendFactor_HEAD        = 0.032;

float  HEAD_FRAME_TIME_01                  = 0.155;
float  HEAD_FRAME_TIME_02                  = 0.155;
float  HEAD_FRAME_TIME_03                  = 0.155;
float  HEAD_FRAME_TIME_04                  = 0.155;
float  HEAD_FRAME_TIME_05                  = 0.155;
float  HEAD_FRAME_TIME_06                  = 0.155;
////////________________________________________________________________________________________________________///////////////////////////////////////////

int leftArmSelection                                 = 8;
//GLfloat leftArm_04[]                                 = {0, 0, 0};


        

      GLfloat leftUpperArm_04[]                      = {0.131, 0.308999, -0.025};
      GLfloat leftUpperArm_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2] 
      GLfloat leftUpperArm_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
      GLfloat leftUpperArm_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
      GLfloat leftUpperArm_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
      

                     GLfloat leftForeArm_04[]                      =  {0.0137, -0.1636, 0.015};
                     GLfloat leftForeArm_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]                     
                     GLfloat leftForeArm_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                     GLfloat leftForeArm_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                     GLfloat leftForeArm_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
                     
                     GLfloat leftGlovedHand_04[]                     =  {-0.0058907, -0.1834, 0.0436};
                                    GLfloat leftGlovedHand_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]         
                                    GLfloat leftGlovedHand_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                    GLfloat leftGlovedHand_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                    GLfloat leftGlovedHand_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      


bool leftUpperArm_ROTATE_X      = false;
bool leftUpperArm_ROTATE_Y      = false;
bool leftUpperArm_ROTATE_Z      = false;

bool leftForeArm_ROTATE_X       = false;
bool leftForeArm_ROTATE_Y       = false;
bool leftForeArm_ROTATE_Z       = false;

bool leftGlovedHand_ROTATE_X    = false;
bool leftGlovedHand_ROTATE_Y    = false;
bool leftGlovedHand_ROTATE_Z    = false;

int    setSelection_LEFT_ARM            = 1;
int    SelectionCount_LEFT_ARM          = 0;
int    setSelectionLimit_LEFT_ARM       = 0;
float  animationBlendFactor_LEFT_ARM    = 0.032;

float  LEFT_ARM_FRAME_TIME_01              = 0.066;
float  LEFT_ARM_FRAME_TIME_02              = 0.155;
float  LEFT_ARM_FRAME_TIME_03              = 0.155;
float  LEFT_ARM_FRAME_TIME_04              = 0.155;
float  LEFT_ARM_FRAME_TIME_05              = 0.155;
float  LEFT_ARM_FRAME_TIME_06              = 0.155;
////////________________________________________________________________________________________________________///////////////////////////////////////////

int rightArmSelection                       = 8;



        GLfloat rightUpperArm_04[]                      = {-0.131, 0.308999, -0.025};
        GLfloat rightUpperArm_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]         
        GLfloat rightUpperArm_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
        GLfloat rightUpperArm_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat rightUpperArm_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
        

                       GLfloat rightForeArm_04[]                      =  {-0.0132, -0.1606, 0.0121};
                       GLfloat rightForeArm_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]  
                       GLfloat rightForeArm_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                       GLfloat rightForeArm_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                       GLfloat rightForeArm_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
                       


                                      GLfloat rightGlovedHand_04[]                      = {0.0058907, -0.1834, 0.0436};
                                      GLfloat rightGlovedHand_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2] 
                                      GLfloat rightGlovedHand_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                                      GLfloat rightGlovedHand_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                      GLfloat rightGlovedHand_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      


bool  rightUpperArm_ROTATE_X = false;
bool  rightUpperArm_ROTATE_Y = false;
bool  rightUpperArm_ROTATE_Z = false;

bool  rightForeArm_ROTATE_X = false;
bool  rightForeArm_ROTATE_Y = false;
bool  rightForeArm_ROTATE_Z = false;

bool  rightGlovedHand_ROTATE_X = false;
bool  rightGlovedHand_ROTATE_Y = false;
bool  rightGlovedHand_ROTATE_Z = false;

int    setSelection_RIGHT_ARM           = 1;
int    SelectionCount_RIGHT_ARM         = 0;
int    setSelectionLimit_RIGHT_ARM      = 0;
float  animationBlendFactor_RIGHT_ARM   = 0.032;


float  RIGHT_ARM_FRAME_TIME_01             = 0.155;
float  RIGHT_ARM_FRAME_TIME_02             = 0.155;
float  RIGHT_ARM_FRAME_TIME_03             = 0.155;
float  RIGHT_ARM_FRAME_TIME_04             = 0.155;
float  RIGHT_ARM_FRAME_TIME_05             = 0.155;
float  RIGHT_ARM_FRAME_TIME_06             = 0.155;

////////________________________________________________________________________________________________________///////////////////////////////////////////

int leftLegSelection                                 = 8;

//GLfloat leftLeg_04[] = {0, 0, 0};

        GLfloat leftUpperLeg_04[]                      =  {0.0715, -0.0581, -0.004};
        GLfloat leftUpperLeg_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat leftUpperLeg_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
        GLfloat leftUpperLeg_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat leftUpperLeg_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
                 

                       GLfloat leftLowerLeg_04[]                      = {0.0033, -0.2086, 0.0031};
                       GLfloat leftLowerLeg_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2] 
                       GLfloat leftLowerLeg_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                       GLfloat leftLowerLeg_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                       GLfloat leftLowerLeg_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
  

                                       GLfloat leftFoot_04[]                      =  {-0.0007, -0.254, -0.012};
                                       GLfloat leftFoot_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2] 
                                       GLfloat leftFoot_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                                       GLfloat leftFoot_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                       GLfloat leftFoot_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      



bool  leftUpperLeg_ROTATE_X = false;
bool  leftUpperLeg_ROTATE_Y = false;
bool  leftUpperLeg_ROTATE_Z = false;

bool  leftLowerLeg_ROTATE_X = false;
bool  leftLowerLeg_ROTATE_Y = false;
bool  leftLowerLeg_ROTATE_Z = false;

bool  leftFoot_ROTATE_X = false;
bool  leftFoot_ROTATE_Y = false;
bool  leftFoot_ROTATE_Z = false;

int    setSelection_LEFT_LEG            = 1;
int    SelectionCount_LEFT_LEG          = 0;
int    setSelectionLimit_LEFT_LEG       = 0;
float  animationBlendFactor_LEFT_LEG    = 0.032;


float  LEFT_LEG_FRAME_TIME_01              = 0.155;
float  LEFT_LEG_FRAME_TIME_02              = 0.155;
float  LEFT_LEG_FRAME_TIME_03              = 0.155;
float  LEFT_LEG_FRAME_TIME_04              = 0.155;
float  LEFT_LEG_FRAME_TIME_05              = 0.155;
float  LEFT_LEG_FRAME_TIME_06              = 0.155;

////////________________________________________________________________________________________________________///////////////////////////////////////////                      

int rightLegSelection                                 = 8;



        GLfloat rightUpperLeg_04[]                     =  {-0.0715, -0.0581, -0.004};
        GLfloat rightUpperLeg_ROTATE[]                  = {1.0f, 0.0f, 0.0f,  0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat rightUpperLeg_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
        GLfloat rightUpperLeg_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat rightUpperLeg_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
        
                
         
 
                       GLfloat rightLowerLeg_04[]                      =  {-0.0033, -0.2086, 0.0031};
                       GLfloat rightLowerLeg_ROTATE[]                  = {1.0f, 0.0f, 0.0f,  .0f};///THETA =[3] __XYZaxis=[0][1][2] 
                       GLfloat rightLowerLeg_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                       GLfloat rightLowerLeg_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                       GLfloat rightLowerLeg_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
                       


                                       GLfloat rightFoot_04[]                      =  {0.0007, -0.254, -0.012};      
                                       GLfloat rightFoot_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]        
                                       GLfloat rightFoot_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                                       GLfloat rightFoot_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                       GLfloat rightFoot_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
                 


bool  rightUpperLeg_ROTATE_X = false;
bool  rightLowerLeg_ROTATE_X = false;
bool  rightFoot_ROTATE_X     = false;

bool  rightUpperLeg_ROTATE_Y = false;
bool  rightLowerLeg_ROTATE_Y = false;
bool  rightFoot_ROTATE_Y     = false;

bool  rightUpperLeg_ROTATE_Z = false;
bool  rightLowerLeg_ROTATE_Z = false;
bool  rightFoot_ROTATE_Z     = false;

int    setSelection_RIGHT_LEG           = 1;
int    SelectionCount_RIGHT_LEG         = 0;
int    setSelectionLimit_RIGHT_LEG      = 0;
float  animationBlendFactor_RIGHT_LEG   = 0.032;

float  RIGHT_LEG_FRAME_TIME_01             = 0.155;
float  RIGHT_LEG_FRAME_TIME_02             = 0.155;
float  RIGHT_LEG_FRAME_TIME_03             = 0.155;
float  RIGHT_LEG_FRAME_TIME_04             = 0.155;
float  RIGHT_LEG_FRAME_TIME_05             = 0.155;
float  RIGHT_LEG_FRAME_TIME_06             = 0.155;


#include "MARC_PARTS/face.cpp"
#include "MARC_PARTS/head.cpp"
#include "MARC_PARTS/leftUpperArm.cpp"
#include "MARC_PARTS/leftForeArm.cpp"
#include "MARC_PARTS/leftArmClaw.cpp"
#include "MARC_PARTS/rightUpperArm.cpp"
#include "MARC_PARTS/rightForeArm.cpp"
#include "MARC_PARTS/torso.cpp"
#include "MARC_PARTS/hips.cpp"
#include "MARC_PARTS/leftUpperLeg.cpp"
#include "MARC_PARTS/leftLowerLeg.cpp"
#include "MARC_PARTS/leftBoot.cpp"
#include "MARC_PARTS/rightUpperLeg.cpp"
#include "MARC_PARTS/rightLowerLeg.cpp"
#include "MARC_PARTS/rightBoot.cpp"
#include "MARC_PARTS/leftHand.cpp"
#include "MARC_PARTS/rightHand.cpp"
