
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca490(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0xf10);
  fVar2 = *(float *)(param_2 + 0xf1c);
  fVar3 = (*(float *)(param_2 + 0xf0c) + *(float *)(param_2 + 0xf18)) * _DAT_0064b248;
  *param_1 = (*(float *)(param_2 + 0xf08) + *(float *)(param_2 + 0xf14)) * _DAT_0064b248;
  fVar1 = (fVar1 + fVar2) * _DAT_0064b248;
  param_1[1] = fVar3;
  param_1[2] = fVar1;
  return;
}

