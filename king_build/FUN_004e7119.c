
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004e7119(float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  fVar1 = param_2 * param_2 - _DAT_0064b3f8 * param_1 * param_3;
  if (_DAT_0064b254 <= fVar1) {
    if (fVar1 == _DAT_0064b254) {
      *param_4 = -param_2 / (_DAT_0064b3fc * param_1);
      *param_5 = *param_4;
      uVar2 = 1;
    }
    else {
      fVar3 = (float10)FUN_0061ed94((double)fVar1);
      *param_4 = (-param_2 + (float)fVar3) / (_DAT_0064b3fc * param_1);
      *param_5 = (-param_2 - (float)fVar3) / (_DAT_0064b3fc * param_1);
      uVar2 = 2;
    }
  }
  else {
    *param_5 = 0.0;
    *param_4 = 0.0;
    uVar2 = 0;
  }
  return uVar2;
}

