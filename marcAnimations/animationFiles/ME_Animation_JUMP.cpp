mainBodyPosition_setSelectionLimit  = 5;
mainBodyPosition_SelectionCount     = 5;


mainBodyPosition_setSelectionLimit  = 5;
mainBodyPosition_SelectionCount     = 5;


setSelectionLimit_HEAD      = 5;
SelectionCount_HEAD         = 5;


setSelectionLimit_TORSO     = 5;
SelectionCount_TORSO        = 5;


setSelectionLimit_HIPS      = 5;
SelectionCount_HIPS         = 5;


setSelectionLimit_LEFT_ARM  = 5;
SelectionCount_LEFT_ARM     = 5;


setSelectionLimit_RIGHT_ARM = 5;
SelectionCount_RIGHT_ARM    = 5;


setSelectionLimit_LEFT_LEG  = 5;
SelectionCount_LEFT_LEG     = 5;


setSelectionLimit_RIGHT_LEG = 5;
SelectionCount_RIGHT_LEG    = 5;


if(mainBodyPosition_setSelection == 1)
{
    mainBodyPosition_MOVE_FRAMEA[0]     = 0;
    mainBodyPosition_MOVE_FRAMEA[1]     = 0;
    mainBodyPosition_MOVE_FRAMEA[2]     = 0;
    mainBodyPosition_MOVE_FRAMEB[0]     = 0.003;
    mainBodyPosition_MOVE_FRAMEB[1]     = -0.148;
    mainBodyPosition_MOVE_FRAMEB[2]     = -0.078;
}
if(setSelection_LEFT_ARM == 1)
{    leftUpperArm_ROTATE_FRAMEA[3]   = 0;
    leftUpperArm_ROTATE_FRAMEA[0]   = 1;
    leftUpperArm_ROTATE_FRAMEA[1]   = 0;
    leftUpperArm_ROTATE_FRAMEA[2]   = 0;
    leftUpperArm_ROTATE_FRAMEB[3]   = 22;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0;
    leftUpperArm_ROTATE_FRAMEB[2]   = 0;
    leftForeArm_ROTATE_FRAMEA[3]   = 0;
    leftForeArm_ROTATE_FRAMEA[0]   = 1;
    leftForeArm_ROTATE_FRAMEA[1]   = 0;
    leftForeArm_ROTATE_FRAMEA[2]   = 0;
    leftForeArm_ROTATE_FRAMEB[3]   = -55;
    leftForeArm_ROTATE_FRAMEB[0]   = 1;
    leftForeArm_ROTATE_FRAMEB[1]   = 0;
    leftForeArm_ROTATE_FRAMEB[2]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEA[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[2]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_RIGHT_ARM == 1)
{    rightUpperArm_ROTATE_FRAMEA[3]   = 0;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightUpperArm_ROTATE_FRAMEB[3]   = 33;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]   = 0;
    rightForeArm_ROTATE_FRAMEA[0]   = 1;
    rightForeArm_ROTATE_FRAMEA[1]   = 0;
    rightForeArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = -67;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEA[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_LEFT_LEG == 1)
{    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[3]   = -60;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 82;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]       = 0;
    leftFoot_ROTATE_FRAMEA[0]       = 1;
    leftFoot_ROTATE_FRAMEA[1]       = 0;
    leftFoot_ROTATE_FRAMEA[2]       = 0;
    leftFoot_ROTATE_FRAMEB[3]       = -12;
    leftFoot_ROTATE_FRAMEB[0]       = 1;
    leftFoot_ROTATE_FRAMEB[1]       = 0;
    leftFoot_ROTATE_FRAMEB[2]       = 0;
}
if(setSelection_RIGHT_LEG == 1)
{    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[3]   = -59;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 86;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = -12;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_HEAD == 1)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
    head_ROTATE_FRAMEB[3]   = -25;
    head_ROTATE_FRAMEB[0]   = 0.010001;
    head_ROTATE_FRAMEB[1]   = 1e-006;
    head_ROTATE_FRAMEB[2]   = 1e-006;
}
if(setSelection_TORSO == 1)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
    torso_ROTATE_FRAMEB[3]   = 35;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_HIPS == 1)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 1;
    hips_ROTATE_FRAMEA[2]   = 0;
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
if(mainBodyPosition_setSelection == 2)
{
    mainBodyPosition_MOVE_FRAMEA[0]         = 0.003;
    mainBodyPosition_MOVE_FRAMEA[1]         = -0.148;
    mainBodyPosition_MOVE_FRAMEA[2]         = -0.078;

   if(mainBodyPosition_SelectionCount == 2)
{
   mainBodyPosition_MOVE_FRAMEB[0]          = 0;
   mainBodyPosition_MOVE_FRAMEB[1]          = 0;
   mainBodyPosition_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    mainBodyPosition_MOVE_FRAMEB[0]         = 0.003;
    mainBodyPosition_MOVE_FRAMEB[1]         = 0.619996;
    mainBodyPosition_MOVE_FRAMEB[2]         = -0.022;
}
}
if(setSelection_LEFT_ARM == 2)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = 22;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0;
    leftUpperArm_ROTATE_FRAMEA[2]     = 0;
    leftForeArm_ROTATE_FRAMEA[3]      = -55;
    leftForeArm_ROTATE_FRAMEA[0]      = 1;
    leftForeArm_ROTATE_FRAMEA[1]      = 0;
    leftForeArm_ROTATE_FRAMEA[2]      = 0;
    leftGlovedHand_ROTATE_FRAMEA[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEA[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_ARM == 2)
    {
    leftUpperArm_ROTATE_FRAMEB[3]     = 0;
    leftUpperArm_ROTATE_FRAMEB[0]     = 1;
    leftUpperArm_ROTATE_FRAMEB[1]     = 0;
    leftUpperArm_ROTATE_FRAMEB[2]     = 0;
    leftForeArm_ROTATE_FRAMEB[3]      = 0;
    leftForeArm_ROTATE_FRAMEB[0]      = 1;
    leftForeArm_ROTATE_FRAMEB[1]      = 0;
    leftForeArm_ROTATE_FRAMEB[2]      = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]    = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]    = 0;
}
     else 
    {
    leftUpperArm_ROTATE_FRAMEB[3]      = -45;
    leftUpperArm_ROTATE_FRAMEB[0]      = 1;
    leftUpperArm_ROTATE_FRAMEB[1]      = 0;
    leftUpperArm_ROTATE_FRAMEB[2]      = 0;
    leftForeArm_ROTATE_FRAMEB[3]       = -56;
    leftForeArm_ROTATE_FRAMEB[0]       = 1;
    leftForeArm_ROTATE_FRAMEB[1]       = 0;
    leftForeArm_ROTATE_FRAMEB[2]       = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]    = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]    = 0;
}
}
if(setSelection_RIGHT_ARM == 2)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = 33;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]    = -67;
    rightForeArm_ROTATE_FRAMEA[0]    = 1;
    rightForeArm_ROTATE_FRAMEA[1]    = 0;
    rightForeArm_ROTATE_FRAMEA[2]    = 0;
    rightGlovedHand_ROTATE_FRAMEA[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEA[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_ARM == 2)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 0;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = 0;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = -46;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = -49;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 2)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = -60;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 82;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = -12;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 2)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = -60;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 82;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = -11;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 2)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = -59;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 86;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = -12;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 2)
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = -59;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 86;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = -12;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 2)
{
    head_ROTATE_FRAMEA[3]   = -25;
    head_ROTATE_FRAMEA[0]   = 0.010001;
    head_ROTATE_FRAMEA[1]   = 1e-006;
    head_ROTATE_FRAMEA[2]   = 1e-006;
   if(SelectionCount_HEAD == 2)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = -25;
    head_ROTATE_FRAMEB[0]   = 0.010001;
    head_ROTATE_FRAMEB[1]   = 1e-006;
    head_ROTATE_FRAMEB[2]   = 1e-006;
}
}
if(setSelection_TORSO == 2)
{
    torso_ROTATE_FRAMEA[3]   = 35;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_TORSO == 2)
{
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    torso_ROTATE_FRAMEB[3]   = -2;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 2)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 1;
    hips_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HIPS == 2)
{
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(mainBodyPosition_setSelection == 3)
{
    mainBodyPosition_MOVE_FRAMEA[0]      = 0.003;
    mainBodyPosition_MOVE_FRAMEA[1]      = 0.619996;
    mainBodyPosition_MOVE_FRAMEA[2]      = -0.022;

     if(mainBodyPosition_SelectionCount == 3)
    {
    mainBodyPosition_MOVE_FRAMEB[0]      = 0;
    mainBodyPosition_MOVE_FRAMEB[1]      = 0;
    mainBodyPosition_MOVE_FRAMEB[2]      = 0;
}
     else
    {
    mainBodyPosition_MOVE_FRAMEB[0]      = 0.003;
    mainBodyPosition_MOVE_FRAMEB[1]      = -0.028;
    mainBodyPosition_MOVE_FRAMEB[2]      = -0.009;
}
}
if(setSelection_LEFT_ARM == 3)
{
    leftUpperArm_ROTATE_FRAMEA[3]   = -45;
    leftUpperArm_ROTATE_FRAMEA[0]   = 1;
    leftUpperArm_ROTATE_FRAMEA[1]   = 0;
    leftUpperArm_ROTATE_FRAMEA[2]   = 0;
    leftForeArm_ROTATE_FRAMEA[3]    = -56;
    leftForeArm_ROTATE_FRAMEA[0]    = 1;
    leftForeArm_ROTATE_FRAMEA[1]    = 0;
    leftForeArm_ROTATE_FRAMEA[2]    = 0;
    leftGlovedHand_ROTATE_FRAMEA[3] = 0;
    leftGlovedHand_ROTATE_FRAMEA[0] = 1;
    leftGlovedHand_ROTATE_FRAMEA[1] = 0;
    leftGlovedHand_ROTATE_FRAMEA[2] = 0;

     if(SelectionCount_LEFT_ARM == 3)
    {
    leftUpperArm_ROTATE_FRAMEB[3]   = 0;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0;
    leftUpperArm_ROTATE_FRAMEB[2]   = 0;
    leftForeArm_ROTATE_FRAMEB[3]   = 0;
    leftForeArm_ROTATE_FRAMEB[0]   = 1;
    leftForeArm_ROTATE_FRAMEB[1]   = 0;
    leftForeArm_ROTATE_FRAMEB[2]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    leftUpperArm_ROTATE_FRAMEB[3]   = -9;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0;
    leftUpperArm_ROTATE_FRAMEB[2]   = 0;
    leftForeArm_ROTATE_FRAMEB[3]   = 9;
    leftForeArm_ROTATE_FRAMEB[0]   = 1;
    leftForeArm_ROTATE_FRAMEB[1]   = 0;
    leftForeArm_ROTATE_FRAMEB[2]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_ARM == 3)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = -46;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]    = -49;
    rightForeArm_ROTATE_FRAMEA[0]    = 1;
    rightForeArm_ROTATE_FRAMEA[1]    = 0;
    rightForeArm_ROTATE_FRAMEA[2]    = 0;
    rightGlovedHand_ROTATE_FRAMEA[3] = 0;
    rightGlovedHand_ROTATE_FRAMEA[0] = 1;
    rightGlovedHand_ROTATE_FRAMEA[1] = 0;
    rightGlovedHand_ROTATE_FRAMEA[2] = 0;

     if(SelectionCount_RIGHT_ARM == 3)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 0;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = 0;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = -1;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = -4;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 3)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = -60;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 82;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = -11;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 3)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = -23;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 39;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = -11;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 3)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = -59;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 86;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = -12;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 3)
    {
     rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = -20;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 33;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = -12;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 3)
{
    head_ROTATE_FRAMEA[3]   = -25;
    head_ROTATE_FRAMEA[0]   = 0.010001;
    head_ROTATE_FRAMEA[1]   = 1e-006;
    head_ROTATE_FRAMEA[2]   = 1e-006;
     if(SelectionCount_HEAD == 3)
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    head_ROTATE_FRAMEB[3]   = -4;
    head_ROTATE_FRAMEB[0]   = 0.010001;
    head_ROTATE_FRAMEB[1]   = 1e-006;
    head_ROTATE_FRAMEB[2]   = 1e-006;
}
}
if(setSelection_TORSO == 3)
{
    torso_ROTATE_FRAMEA[3]   = -2;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_TORSO == 3)
    {
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    torso_ROTATE_FRAMEB[3]   = 9;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 3)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 1;
    hips_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_HIPS == 3)
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(mainBodyPosition_setSelection == 4)
{
    mainBodyPosition_MOVE_FRAMEA[0]         = 0.003;
    mainBodyPosition_MOVE_FRAMEA[1]         = -0.028;
    mainBodyPosition_MOVE_FRAMEA[2]         = -0.009;

   if(mainBodyPosition_SelectionCount == 4)
{
   mainBodyPosition_MOVE_FRAMEB[0]          = 0;
   mainBodyPosition_MOVE_FRAMEB[1]          = 0;
   mainBodyPosition_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    mainBodyPosition_MOVE_FRAMEB[0]         = 0;
    mainBodyPosition_MOVE_FRAMEB[1]         = 0;
    mainBodyPosition_MOVE_FRAMEB[2]         = 0;
}
}
if(setSelection_LEFT_ARM == 4)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = -9;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0;
    leftUpperArm_ROTATE_FRAMEA[2]     = 0;
    leftForeArm_ROTATE_FRAMEA[3]      = 9;
    leftForeArm_ROTATE_FRAMEA[0]      = 1;
    leftForeArm_ROTATE_FRAMEA[1]      = 0;
    leftForeArm_ROTATE_FRAMEA[2]      = 0;
    leftGlovedHand_ROTATE_FRAMEA[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEA[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_ARM == 4)
    {
    leftUpperArm_ROTATE_FRAMEB[3]     = 0;
    leftUpperArm_ROTATE_FRAMEB[0]     = 1;
    leftUpperArm_ROTATE_FRAMEB[1]     = 0;
    leftUpperArm_ROTATE_FRAMEB[2]     = 0;
    leftForeArm_ROTATE_FRAMEB[3]      = 0;
    leftForeArm_ROTATE_FRAMEB[0]      = 1;
    leftForeArm_ROTATE_FRAMEB[1]      = 0;
    leftForeArm_ROTATE_FRAMEB[2]      = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]    = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]    = 0;
}
     else 
    {
    leftUpperArm_ROTATE_FRAMEB[3]      = 0;
    leftUpperArm_ROTATE_FRAMEB[0]      = 1;
    leftUpperArm_ROTATE_FRAMEB[1]      = 0;
    leftUpperArm_ROTATE_FRAMEB[2]      = 0;
    leftForeArm_ROTATE_FRAMEB[3]       = 0;
    leftForeArm_ROTATE_FRAMEB[0]       = 1;
    leftForeArm_ROTATE_FRAMEB[1]       = 0;
    leftForeArm_ROTATE_FRAMEB[2]       = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]    = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]    = 0;
}
}
if(setSelection_RIGHT_ARM == 4)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = -1;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]    = -4;
    rightForeArm_ROTATE_FRAMEA[0]    = 1;
    rightForeArm_ROTATE_FRAMEA[1]    = 0;
    rightForeArm_ROTATE_FRAMEA[2]    = 0;
    rightGlovedHand_ROTATE_FRAMEA[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEA[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_ARM == 4)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 0;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = 0;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 0;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = 0;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 4)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = -23;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 39;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = -11;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 4)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 4)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = -20;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 33;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = -12;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 4)
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 4)
{
    head_ROTATE_FRAMEA[3]   = -4;
    head_ROTATE_FRAMEA[0]   = 0.010001;
    head_ROTATE_FRAMEA[1]   = 1e-006;
    head_ROTATE_FRAMEA[2]   = 1e-006;
   if(SelectionCount_HEAD == 4)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 4)
{
    torso_ROTATE_FRAMEA[3]   = 9;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_TORSO == 4)
{
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 4)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 1;
    hips_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HIPS == 4)
{
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(mainBodyPosition_setSelection == 5)
{
    mainBodyPosition_MOVE_FRAMEA[0]         = 0;
    mainBodyPosition_MOVE_FRAMEA[1]         = 0;
    mainBodyPosition_MOVE_FRAMEA[2]         = 0;

   if(mainBodyPosition_SelectionCount == 5)
{
   mainBodyPosition_MOVE_FRAMEB[0]          = 0;
   mainBodyPosition_MOVE_FRAMEB[1]          = 0;
   mainBodyPosition_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    mainBodyPosition_MOVE_FRAMEB[0]         = 0;
    mainBodyPosition_MOVE_FRAMEB[1]         = 0;
    mainBodyPosition_MOVE_FRAMEB[2]         = 0;
}
marcJumping=false;
}
if(setSelection_LEFT_ARM == 5)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = 0;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0;
    leftUpperArm_ROTATE_FRAMEA[2]     = 0;
    leftForeArm_ROTATE_FRAMEA[3]      = 0;
    leftForeArm_ROTATE_FRAMEA[0]      = 1;
    leftForeArm_ROTATE_FRAMEA[1]      = 0;
    leftForeArm_ROTATE_FRAMEA[2]      = 0;
    leftGlovedHand_ROTATE_FRAMEA[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEA[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_ARM == 5)
    {
    leftUpperArm_ROTATE_FRAMEB[3]     = 0;
    leftUpperArm_ROTATE_FRAMEB[0]     = 1;
    leftUpperArm_ROTATE_FRAMEB[1]     = 0;
    leftUpperArm_ROTATE_FRAMEB[2]     = 0;
    leftForeArm_ROTATE_FRAMEB[3]      = 0;
    leftForeArm_ROTATE_FRAMEB[0]      = 1;
    leftForeArm_ROTATE_FRAMEB[1]      = 0;
    leftForeArm_ROTATE_FRAMEB[2]      = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]    = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]    = 0;
}
     else 
    {
    leftUpperArm_ROTATE_FRAMEB[3]      = 0;
    leftUpperArm_ROTATE_FRAMEB[0]      = 1;
    leftUpperArm_ROTATE_FRAMEB[1]      = 0;
    leftUpperArm_ROTATE_FRAMEB[2]      = 0;
    leftForeArm_ROTATE_FRAMEB[3]       = 0;
    leftForeArm_ROTATE_FRAMEB[0]       = 1;
    leftForeArm_ROTATE_FRAMEB[1]       = 0;
    leftForeArm_ROTATE_FRAMEB[2]       = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]    = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]    = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]    = 0;
}
}
if(setSelection_RIGHT_ARM == 5)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = 0;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]    = 0;
    rightForeArm_ROTATE_FRAMEA[0]    = 1;
    rightForeArm_ROTATE_FRAMEA[1]    = 0;
    rightForeArm_ROTATE_FRAMEA[2]    = 0;
    rightGlovedHand_ROTATE_FRAMEA[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEA[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_ARM == 5)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 0;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = 0;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 0;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = 0;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 5)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = 0;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 5)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 5)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 5)
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 5)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HEAD == 5)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 1;
    head_ROTATE_FRAMEB[1]   = 0;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 5)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_TORSO == 5)
{
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 5)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 1;
    hips_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HIPS == 5)
{
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 1;
    hips_ROTATE_FRAMEB[1]   = 0;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(mainBodyPosition_setSelection == 6)
{
    mainBodyPosition_MOVE_FRAMEA[0]     = 0;
    mainBodyPosition_MOVE_FRAMEA[1]     = 0;
    mainBodyPosition_MOVE_FRAMEA[2]     = 0;
    mainBodyPosition_MOVE_FRAMEB[0]     = 0;
    mainBodyPosition_MOVE_FRAMEB[1]     = 0;
    mainBodyPosition_MOVE_FRAMEB[2]     = 0;
}
if(setSelection_LEFT_ARM == 6)
{    leftUpperArm_ROTATE_FRAMEA[3]   = 0;
    leftUpperArm_ROTATE_FRAMEA[0]   = 1;
    leftUpperArm_ROTATE_FRAMEA[1]   = 0;
    leftUpperArm_ROTATE_FRAMEA[2]   = 0;
    leftUpperArm_ROTATE_FRAMEB[3]   = 0;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0;
    leftUpperArm_ROTATE_FRAMEB[2]   = 0;
    leftForeArm_ROTATE_FRAMEA[3]   = 0;
    leftForeArm_ROTATE_FRAMEA[0]   = 1;
    leftForeArm_ROTATE_FRAMEA[1]   = 0;
    leftForeArm_ROTATE_FRAMEA[2]   = 0;
    leftForeArm_ROTATE_FRAMEB[3]   = 0;
    leftForeArm_ROTATE_FRAMEB[0]   = 1;
    leftForeArm_ROTATE_FRAMEB[1]   = 0;
    leftForeArm_ROTATE_FRAMEB[2]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEA[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEA[2]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[3]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[0]   = 1;
    leftGlovedHand_ROTATE_FRAMEB[1]   = 0;
    leftGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_RIGHT_ARM == 6)
{    rightUpperArm_ROTATE_FRAMEA[3]   = 0;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightUpperArm_ROTATE_FRAMEB[3]   = 0;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]   = 0;
    rightForeArm_ROTATE_FRAMEA[0]   = 1;
    rightForeArm_ROTATE_FRAMEA[1]   = 0;
    rightForeArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = 0;
    rightForeArm_ROTATE_FRAMEB[0]   = 1;
    rightForeArm_ROTATE_FRAMEB[1]   = 0;
    rightForeArm_ROTATE_FRAMEB[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEA[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEA[2]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[3]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[0]   = 1;
    rightGlovedHand_ROTATE_FRAMEB[1]   = 0;
    rightGlovedHand_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_LEFT_LEG == 6)
{    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]       = 0;
    leftFoot_ROTATE_FRAMEA[0]       = 1;
    leftFoot_ROTATE_FRAMEA[1]       = 0;
    leftFoot_ROTATE_FRAMEA[2]       = 0;
    leftFoot_ROTATE_FRAMEB[3]       = 0;
    leftFoot_ROTATE_FRAMEB[0]       = 1;
    leftFoot_ROTATE_FRAMEB[1]       = 0;
    leftFoot_ROTATE_FRAMEB[2]       = 0;
}
if(setSelection_RIGHT_LEG == 6)
{    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_HEAD == 6)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 1;
    head_ROTATE_FRAMEA[1]   = 0;
    head_ROTATE_FRAMEA[2]   = 0;
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_TORSO == 6)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_HIPS == 6)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 1;
    hips_ROTATE_FRAMEA[1]   = 0;
    hips_ROTATE_FRAMEA[2]   = 0;
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 1;
    hips_ROTATE_FRAMEB[2]   = 0;
}
