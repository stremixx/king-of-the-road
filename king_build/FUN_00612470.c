
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00612470(float *param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)(uint)(param_2 - (int)param_1[0xc]) * _DAT_0064b938;
  *param_1 = fVar1 * param_1[3] + param_1[6];
  param_1[1] = fVar1 * param_1[4] + param_1[7];
  param_1[2] = fVar1 * param_1[5] + param_1[8];
  param_1[0xd] = param_1[0xe] + param_1[0xd];
  return;
}

