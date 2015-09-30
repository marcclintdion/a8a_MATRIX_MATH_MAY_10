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
    mainBodyPosition_MOVE_FRAMEB[0]     = 0;
    mainBodyPosition_MOVE_FRAMEB[1]     = -0.144;
    mainBodyPosition_MOVE_FRAMEB[2]     = -0.076;
}
if(setSelection_LEFT_ARM == 1)
{   
    leftUpperArm_ROTATE_FRAMEA[3]   = 0;
    leftUpperArm_ROTATE_FRAMEA[0]   = 1;
    leftUpperArm_ROTATE_FRAMEA[1]   = 0;
    leftUpperArm_ROTATE_FRAMEA[2]   = 0;
    leftUpperArm_ROTATE_FRAMEB[3]   = 35;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0;
    leftUpperArm_ROTATE_FRAMEB[2]   = 0;
    leftForeArm_ROTATE_FRAMEA[3]   = 0;
    leftForeArm_ROTATE_FRAMEA[0]   = 1;
    leftForeArm_ROTATE_FRAMEA[1]   = 0;
    leftForeArm_ROTATE_FRAMEA[2]   = 0;
    leftForeArm_ROTATE_FRAMEB[3]   = -69;
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
{   
    rightUpperArm_ROTATE_FRAMEA[3]   = 0;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightUpperArm_ROTATE_FRAMEB[3]   = 36;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]   = 0;
    rightForeArm_ROTATE_FRAMEA[0]   = 1;
    rightForeArm_ROTATE_FRAMEA[1]   = 0;
    rightForeArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = -68;
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
{   
    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[3]   = -63;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 89;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]       = 0;
    leftFoot_ROTATE_FRAMEA[0]       = 1;
    leftFoot_ROTATE_FRAMEA[1]       = 0;
    leftFoot_ROTATE_FRAMEA[2]       = 0;
    leftFoot_ROTATE_FRAMEB[3]       = -8;
    leftFoot_ROTATE_FRAMEB[0]       = 1;
    leftFoot_ROTATE_FRAMEB[1]       = 0;
    leftFoot_ROTATE_FRAMEB[2]       = 0;
}
if(setSelection_RIGHT_LEG == 1)
{    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[3]   = -65;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 90;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = -10;
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
    head_ROTATE_FRAMEB[3]   = -0;
    head_ROTATE_FRAMEB[0]   = 0.02;
    head_ROTATE_FRAMEB[1]   = 1e-006;
    head_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_TORSO == 1)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
    torso_ROTATE_FRAMEB[3]   = 37;
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
    mainBodyPosition_MOVE_FRAMEA[0]         = 0;
    mainBodyPosition_MOVE_FRAMEA[1]         = -0.144;
    mainBodyPosition_MOVE_FRAMEA[2]         = -0.076;

   if(mainBodyPosition_SelectionCount == 2)
{
   mainBodyPosition_MOVE_FRAMEB[0]          = 0;
   mainBodyPosition_MOVE_FRAMEB[1]          = 0;
   mainBodyPosition_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    mainBodyPosition_MOVE_FRAMEB[0]         = 0;
    mainBodyPosition_MOVE_FRAMEB[1]         = 0.591996;
    mainBodyPosition_MOVE_FRAMEB[2]         = -0.006;
}
}
if(setSelection_LEFT_ARM == 2)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = 35;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0;
    leftUpperArm_ROTATE_FRAMEA[2]     = 0;
    leftForeArm_ROTATE_FRAMEA[3]      = -69;
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
    leftUpperArm_ROTATE_FRAMEB[3]      = -72;
    leftUpperArm_ROTATE_FRAMEB[0]      = 1;
    leftUpperArm_ROTATE_FRAMEB[1]      = 0;
    leftUpperArm_ROTATE_FRAMEB[2]      = 0;
    leftForeArm_ROTATE_FRAMEB[3]       = -69;
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
    rightUpperArm_ROTATE_FRAMEA[3]   = 36;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]    = -68;
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
    rightUpperArm_ROTATE_FRAMEB[3]   = -66;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = -68;
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
    leftUpperLeg_ROTATE_FRAMEA[3]   = -63;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 89;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = -8;
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
    leftUpperLeg_ROTATE_FRAMEB[3]   = 2;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 4;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 24;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 2)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = -65;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 90;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = -10;
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
    rightUpperLeg_ROTATE_FRAMEB[3]   = 2;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 8;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 8;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 2)
{
    head_ROTATE_FRAMEA[3]   = -0;
    head_ROTATE_FRAMEA[0]   = 0.02;
    head_ROTATE_FRAMEA[1]   = 1e-006;
    head_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HEAD == 2)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = -6;
    head_ROTATE_FRAMEB[0]   = 0.02;
    head_ROTATE_FRAMEB[1]   = 1e-006;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 2)
{
    torso_ROTATE_FRAMEA[3]   = 37;
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
    torso_ROTATE_FRAMEB[3]   = -4;
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
    mainBodyPosition_MOVE_FRAMEA[0]      = 0;
    mainBodyPosition_MOVE_FRAMEA[1]      = 0.591996;
    mainBodyPosition_MOVE_FRAMEA[2]      = -0.006;

     if(mainBodyPosition_SelectionCount == 3)
    {
    mainBodyPosition_MOVE_FRAMEB[0]      = 0;
    mainBodyPosition_MOVE_FRAMEB[1]      = 0;
    mainBodyPosition_MOVE_FRAMEB[2]      = 0;
}
     else
    {
    mainBodyPosition_MOVE_FRAMEB[0]      = 0;
    mainBodyPosition_MOVE_FRAMEB[1]      = -0.031;
    mainBodyPosition_MOVE_FRAMEB[2]      = -0.00200001;
}
}
if(setSelection_LEFT_ARM == 3)
{
    leftUpperArm_ROTATE_FRAMEA[3]   = -72;
    leftUpperArm_ROTATE_FRAMEA[0]   = 1;
    leftUpperArm_ROTATE_FRAMEA[1]   = 0;
    leftUpperArm_ROTATE_FRAMEA[2]   = 0;
    leftForeArm_ROTATE_FRAMEA[3]    = -69;
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
    leftUpperArm_ROTATE_FRAMEB[3]   = -5;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0;
    leftUpperArm_ROTATE_FRAMEB[2]   = 0;
    leftForeArm_ROTATE_FRAMEB[3]   = -27;
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
    rightUpperArm_ROTATE_FRAMEA[3]   = -66;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]    = -68;
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
    rightUpperArm_ROTATE_FRAMEB[3]   = 0;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = -26;
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
    leftUpperLeg_ROTATE_FRAMEA[3]   = 2;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 4;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = 24;
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
    leftUpperLeg_ROTATE_FRAMEB[3]   = -21;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 44;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = -6;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 3)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = 2;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 8;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 8;
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
    rightLowerLeg_ROTATE_FRAMEB[3]   = 38;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = -2;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 3)
{
    head_ROTATE_FRAMEA[3]   = -6;
    head_ROTATE_FRAMEA[0]   = 0.02;
    head_ROTATE_FRAMEA[1]   = 1e-006;
    head_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_HEAD == 3)
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    head_ROTATE_FRAMEB[3]   = -2;
    head_ROTATE_FRAMEB[0]   = 0.02;
    head_ROTATE_FRAMEB[1]   = 1e-006;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 3)
{
    torso_ROTATE_FRAMEA[3]   = -4;
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
    torso_ROTATE_FRAMEB[3]   = 7;
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
    mainBodyPosition_MOVE_FRAMEA[0]         = 0;
    mainBodyPosition_MOVE_FRAMEA[1]         = -0.031;
    mainBodyPosition_MOVE_FRAMEA[2]         = -0.00200001;

   if(mainBodyPosition_SelectionCount == 4)
{
   mainBodyPosition_MOVE_FRAMEB[0]          = 0;
   mainBodyPosition_MOVE_FRAMEB[1]          = 0;
   mainBodyPosition_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    mainBodyPosition_MOVE_FRAMEB[0]         = 0;
    mainBodyPosition_MOVE_FRAMEB[1]         = -0.00899997;
    mainBodyPosition_MOVE_FRAMEB[2]         = -4.42378e-009;
}
}
if(setSelection_LEFT_ARM == 4)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = -5;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0;
    leftUpperArm_ROTATE_FRAMEA[2]     = 0;
    leftForeArm_ROTATE_FRAMEA[3]      = -27;
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
    leftUpperArm_ROTATE_FRAMEB[3]      = 8;
    leftUpperArm_ROTATE_FRAMEB[0]      = 1;
    leftUpperArm_ROTATE_FRAMEB[1]      = 0;
    leftUpperArm_ROTATE_FRAMEB[2]      = 0;
    leftForeArm_ROTATE_FRAMEB[3]       = -5;
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
    rightUpperArm_ROTATE_FRAMEA[3]   = 0;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]    = -26;
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
    rightUpperArm_ROTATE_FRAMEB[3]   = 9;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0;
    rightForeArm_ROTATE_FRAMEB[3]   = -6;
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
    leftUpperLeg_ROTATE_FRAMEA[3]   = -21;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 44;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = -6;
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
    leftUpperLeg_ROTATE_FRAMEB[3]   = -3;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 5;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = -6;
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
    rightLowerLeg_ROTATE_FRAMEA[3]   = 38;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = -2;
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
    rightUpperLeg_ROTATE_FRAMEB[3]   = -3;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 3;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = -2;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 4)
{
    head_ROTATE_FRAMEA[3]   = -2;
    head_ROTATE_FRAMEA[0]   = 0.02;
    head_ROTATE_FRAMEA[1]   = 1e-006;
    head_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HEAD == 4)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = -2;
    head_ROTATE_FRAMEB[0]   = 0.02;
    head_ROTATE_FRAMEB[1]   = 1e-006;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 4)
{
    torso_ROTATE_FRAMEA[3]   = 8;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_TORSO == 4)
{
    torso_ROTATE_FRAMEB[3]   = 7;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    torso_ROTATE_FRAMEB[3]   = 8;
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
    mainBodyPosition_MOVE_FRAMEA[0]  = 0;
    mainBodyPosition_MOVE_FRAMEA[1]  = -0.00899997;
    mainBodyPosition_MOVE_FRAMEA[2]  = -4.42378e-009;
    
                                                                    
                                                                    marcJumping    = false;    
                                                                    //resetAnimation = true; 
   
   
   
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
}
if(setSelection_LEFT_ARM == 5)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = 8;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0;
    leftUpperArm_ROTATE_FRAMEA[2]     = 0;
    leftForeArm_ROTATE_FRAMEA[3]      = -5;
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
    rightUpperArm_ROTATE_FRAMEA[3]   = 9;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0;
    rightForeArm_ROTATE_FRAMEA[3]    = -6;
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
    leftUpperLeg_ROTATE_FRAMEA[3]   = -3;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 5;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = -6;
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
    rightUpperLeg_ROTATE_FRAMEA[3]   = -3;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 3;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = -2;
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
    head_ROTATE_FRAMEA[3]   = -2;
    head_ROTATE_FRAMEA[0]   = 0.02;
    head_ROTATE_FRAMEA[1]   = 1e-006;
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
    torso_ROTATE_FRAMEA[3]   = 8;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
    if(SelectionCount_TORSO == 5)
    {
    torso_ROTATE_FRAMEB[3]   = 7;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
    }
    else 
    {
    torso_ROTATE_FRAMEB[3]   = 7;
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
