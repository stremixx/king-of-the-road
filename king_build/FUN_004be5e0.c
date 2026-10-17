
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004be5e0(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  
  fVar6 = (float10)FUN_004be580(param_1,param_2,param_3);
  fVar1 = (float)fVar6;
  fVar6 = (float10)FUN_004be5b0(param_1,param_2,param_3);
  fVar2 = (float)fVar6;
  fVar4 = fVar1 - fVar2;
  fVar5 = (fVar2 + fVar1) * _DAT_0064b248;
  *param_5 = fVar5;
  if (ABS(fVar4) <= (float)_DAT_0064b400) {
    *param_4 = 3.4028235e+38;
    *param_6 = 0.0;
    return;
  }
  if (_DAT_0064b248 <= fVar5) {
    *param_6 = fVar4 / ((_DAT_0064b3fc - fVar1) - fVar2);
  }
  else {
    *param_6 = fVar4 / (fVar2 + fVar1);
  }
  fVar5 = (fVar1 - param_1) / fVar4;
  fVar2 = (fVar1 - param_2) / fVar4;
  fVar4 = (fVar1 - param_3) / fVar4;
  if (param_1 == fVar1) {
    *param_4 = fVar4 - fVar2;
  }
  else if (param_2 == fVar1) {
    *param_4 = (fVar5 + _DAT_0064b3fc) - fVar4;
  }
  else {
    *param_4 = (fVar2 + _DAT_0064b3f8) - fVar5;
  }
  fVar1 = *param_4 * _DAT_0064b3f4;
  bVar3 = fVar1 < _DAT_0064b254;
  *param_4 = fVar1;
  if (bVar3) {
    *param_4 = fVar1 + _DAT_0064b3f0;
    return;
  }
  return;
}

