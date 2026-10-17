
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eeac0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar3 = (fVar2 / (fVar2 - fVar1)) * (float)_DAT_0064a6d0;
  *param_2 = fVar3;
  param_2[1] = fVar3;
  fVar1 = (fVar1 / (fVar1 - fVar2)) * (float)_DAT_0064a6d0;
  param_2[3] = fVar1;
  param_2[2] = fVar1;
  return;
}

