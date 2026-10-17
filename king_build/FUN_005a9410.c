
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005a9410(int param_1,double param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)_DAT_0064b240 -
          ((float10)*(float *)(param_1 + 0x220) + (float10)*(float *)(param_1 + 0x220));
  fVar2 = (float10)fsin((float10)*(double *)(param_1 + 0x78));
  fVar3 = (float10)fsin(((float10)*(double *)(param_1 + 0x68) - (float10)_DAT_0064c9f0) +
                        (float10)param_2);
  fVar1 = (fVar3 * ((float10)_DAT_0064a660 - ABS(fVar1)) *
                   (fVar2 * (float10)_DAT_0064c0e0 + (float10)_DAT_0064a660) + fVar1 +
          (float10)_DAT_0064a660) * (float10)_DAT_0064a6d0;
  if ((float10)_DAT_0064a660 < fVar1) {
    return (float10)_DAT_0064a660;
  }
  if (fVar1 < (float10)_DAT_0064a668) {
    fVar1 = (float10)_DAT_0064a668;
  }
  return fVar1;
}

