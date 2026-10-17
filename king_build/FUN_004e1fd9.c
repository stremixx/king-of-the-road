
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e1fd9(void)

{
  float10 fVar1;
  
  if (DAT_00696422 == 0) {
    if (*(double *)(DAT_00696424 + 0xb90) <= _DAT_0064a728) {
      fVar1 = (float10)*(double *)(DAT_00696424 + 0xb90);
    }
    else {
      fVar1 = (float10)_DAT_0064b324;
    }
  }
  else {
    fVar1 = (float10)(int)DAT_00696422 / (float10)_DAT_0064a720;
  }
  return fVar1;
}

