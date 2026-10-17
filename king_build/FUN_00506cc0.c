
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00506cc0(undefined4 param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  if (_DAT_0064b254 <= param_4) {
    if (param_4 <= _DAT_0064b240) {
      fVar1 = (float10)param_4;
    }
    else {
      fVar1 = (float10)_DAT_0064b240;
    }
  }
  else {
    fVar1 = (float10)_DAT_0064b254;
  }
  return fVar1 * (float10)param_2 + ((float10)_DAT_0064b240 - fVar1) * (float10)param_3;
}

