
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a82f0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                 float param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_4 + param_6) * _DAT_0064b248;
  if (param_6 < param_5) {
    *param_7 = *param_3;
    param_7[1] = param_3[1];
    param_7[2] = param_3[2];
    return;
  }
  if (param_5 < param_4) {
    *param_7 = *param_1;
    param_7[1] = param_1[1];
    param_7[2] = param_1[2];
    return;
  }
  if (fVar1 < param_5) {
    fVar1 = (param_5 - fVar1) / (param_6 - fVar1);
    fVar2 = _DAT_0064b240 - fVar1;
    *param_7 = fVar1 * *param_3 + fVar2 * *param_2;
    param_7[1] = fVar1 * param_3[1] + fVar2 * param_2[1];
    param_7[2] = fVar1 * param_3[2] + fVar2 * param_2[2];
    return;
  }
  fVar1 = (fVar1 - param_5) / (fVar1 - param_4);
  fVar2 = _DAT_0064b240 - fVar1;
  *param_7 = fVar2 * *param_2 + fVar1 * *param_1;
  param_7[1] = fVar1 * param_1[1] + fVar2 * param_2[1];
  param_7[2] = fVar1 * param_1[2] + fVar2 * param_2[2];
  return;
}

