
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a8400(float *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_0064b240;
  if ((param_3 <= _DAT_0064b240) && (fVar1 = param_3, param_3 < _DAT_0064b254)) {
    fVar1 = _DAT_0064b254;
  }
  fVar2 = _DAT_0064b240 - fVar1;
  *param_4 = fVar2 * *param_2 + fVar1 * *param_1;
  param_4[1] = fVar1 * param_1[1] + fVar2 * param_2[1];
  param_4[2] = fVar1 * param_1[2] + fVar2 * param_2[2];
  return;
}

