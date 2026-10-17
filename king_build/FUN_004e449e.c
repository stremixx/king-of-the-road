
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e449e(int param_1,float param_2,float *param_3,int param_4)

{
  float10 fVar1;
  float local_10;
  float local_c;
  float local_8;
  
  if (param_1 != 0) {
    fVar1 = (float10)FUN_0061ecd0((double)*param_3,(double)param_3[1]);
    local_c = (float)-fVar1;
    if (local_c <= (float)_DAT_0064c930) {
      if (local_c < (float)_DAT_0064c920) {
        local_c = (float)_DAT_0064c918 - local_c;
      }
    }
    else {
      local_c = (float)_DAT_0064c928 - local_c;
    }
    local_c = (local_c / (float)_DAT_0064c8f0 + (float)_DAT_0064a660) / (float)_DAT_0064a650;
    if (local_c <= (float)_DAT_0064a6d0) {
      local_c = _DAT_0064b3fc * local_c * local_c;
    }
    else {
      fVar1 = (float10)FUN_0061ed94((double)((local_c - (float)_DAT_0064a6d0) +
                                            (local_c - (float)_DAT_0064a6d0)));
      local_c = (float)(fVar1 * (float10)_DAT_0064a6d0 + (float10)_DAT_0064a6d0);
    }
    local_10 = param_2 * local_c;
    local_8 = (_DAT_0064b240 - local_c) * param_2;
    if (local_10 < _DAT_0064b254) {
      local_10 = 0.0;
    }
    if (local_8 < _DAT_0064b254) {
      local_8 = 0.0;
    }
    if (_DAT_0064b240 < local_10) {
      local_10 = 1.0;
    }
    if (_DAT_0064b240 < local_8) {
      local_8 = 1.0;
    }
    if (param_4 < 0) {
      FUN_005fd160(local_10,local_8);
    }
    else {
      FUN_005fcaa0();
    }
  }
  return;
}

