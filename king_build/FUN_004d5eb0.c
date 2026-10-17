
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d5eb0(int param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)FUN_005aabc0();
  dVar1 = _DAT_0064b948;
  if (_DAT_0064a668 < param_3) {
    dVar1 = _DAT_0064c330;
  }
  fVar3 = ((float10)param_3 * (float10)dVar1) / (float10)*(double *)(param_1 + 0x40a8);
  if ((float10)_DAT_0064a6a8 <= fVar3) {
    if (fVar3 <= (float10)_DAT_0064a6d0) {
      if (ABS(fVar3) < (float10)_DAT_0064c328) {
        fVar3 = (float10)_DAT_0064a668;
      }
    }
    else {
      fVar3 = (float10)_DAT_0064a6d0;
    }
  }
  else {
    fVar3 = (float10)_DAT_0064a6a8;
  }
  fVar4 = (float10)_DAT_0064a660 - (float10)param_4 * (float10)param_4;
  if ((*(byte *)(param_1 + 0x4070) & 2) == 0) {
    if (fVar4 < (float10)_DAT_0064a668) {
      fVar4 = (float10)_DAT_0064a668;
    }
    fVar3 = fVar4 * fVar3 * (float10)_DAT_0064a6d0;
  }
  fVar4 = (float10)*(float *)(param_1 + 0x332c) * (float10)_DAT_0064b960;
  if (fVar4 < (float10)_DAT_0064a6d0) {
    fVar4 = (float10)_DAT_0064a6d0;
  }
  if (ABS(param_4) < _DAT_0064a5a8) {
    param_4 = _DAT_0064a668;
  }
  FUN_004d7440((double)((fVar2 * (float10)param_2 - fVar3 / (fVar4 + fVar4)) - (float10)param_4));
  return;
}

