
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004be7f0(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if (_DAT_0064b248 < param_2) {
    fVar2 = (param_2 + param_3) - param_2 * param_3;
  }
  else {
    fVar2 = (param_3 + _DAT_0064b240) * param_2;
  }
  fVar1 = (param_2 + param_2) - fVar2;
  if (param_3 == _DAT_0064b254) {
    *param_4 = param_2;
    *param_5 = param_2;
    *param_6 = param_2;
    return;
  }
  fVar3 = (float10)FUN_004be750(fVar1,fVar2,param_1 + _DAT_0064b414);
  *param_4 = (float)fVar3;
  fVar3 = (float10)FUN_004be750(fVar1,fVar2,param_1);
  *param_5 = (float)fVar3;
  fVar3 = (float10)FUN_004be750(fVar1,fVar2,param_1 - _DAT_0064b414);
  *param_6 = (float)fVar3;
  return;
}

