
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0057be10(float param_1,float param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_30 [12];
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  puVar6 = local_30;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_005aafe0(local_30);
  if (ABS(fVar3) <= (float)_DAT_0064b3e8) {
    return (float10)_DAT_0064f46c;
  }
  return -(((float10)fVar2 * (float10)param_2 + (float10)fVar1 * (float10)param_1 + (float10)fVar4)
          / (float10)fVar3);
}

