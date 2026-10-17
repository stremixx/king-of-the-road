
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d7440(int param_1,double param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_2 * (float10)_DAT_0064c350;
  param_2 = (double)fVar4;
  dVar3 = _DAT_0064a660;
  if (((float10)_DAT_0064a660 < fVar4) || (dVar3 = _DAT_0064ba38, fVar4 < (float10)_DAT_0064ba38)) {
    param_2 = dVar3;
    fVar4 = (float10)param_2;
  }
  if ((*(int *)(param_1 + 0x274c) != 0) || (*(float *)(param_1 + 0x332c) < _DAT_0064b440))
  goto LAB_004d7560;
  fVar1 = *(float *)(param_1 + 0x332c);
  fVar4 = (float10)FUN_004fee60();
  if (fVar4 * (float10)_DAT_0064a798 <= (float10)fVar1) {
    fVar4 = (float10)param_2 * (float10)_DAT_0064a6d0;
    if (fVar4 < (float10)_DAT_0064c348) {
      fVar4 = (float10)_DAT_0064c348;
      goto LAB_004d7560;
    }
    if (fVar4 <= (float10)_DAT_0064ba68) goto LAB_004d7560;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x332c) - _DAT_0064b440;
    fVar2 = (float)_DAT_0064a6d0;
    fVar4 = (float10)FUN_004fee60();
    fVar4 = ((float10)_DAT_0064a660 -
            (float10)(fVar1 * fVar2) / (fVar4 * (float10)_DAT_0064a798 - (float10)_DAT_0064a770)) *
            (float10)param_2;
    if (fVar4 < (float10)_DAT_0064c348) {
      fVar4 = (float10)_DAT_0064c348;
      goto LAB_004d7560;
    }
    if (fVar4 <= (float10)_DAT_0064ba68) goto LAB_004d7560;
  }
  fVar4 = (float10)_DAT_0064ba68;
LAB_004d7560:
  if (*(float *)(param_1 + 0x3330) < _DAT_0064b254) {
    fVar4 = -fVar4;
  }
  *(float *)(param_1 + 0x271c) = (float)fVar4;
  return;
}

