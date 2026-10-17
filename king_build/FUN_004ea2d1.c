
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004ea2d1(float param_1)

{
  float10 fVar1;
  
  if (((float)_DAT_0064a648 < param_1) || (param_1 <= _DAT_0064b928)) {
    fVar1 = (float10)_DAT_0064b254;
  }
  else {
    fVar1 = (float10)_DAT_0064b240 + (float10)param_1;
  }
  return fVar1;
}

