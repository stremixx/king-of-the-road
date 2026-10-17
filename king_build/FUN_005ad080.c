
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005ad080(int *param_1,float *param_2,double param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    return ((float10)_DAT_0064a660 - (float10)param_3) *
           (-(float10)*param_2 * (float10)(float)param_1[4] +
            -(float10)param_2[1] * (float10)(float)param_1[5] +
            -(float10)param_2[2] * (float10)(float)param_1[6] + (float10)_DAT_0064a660) *
           (float10)_DAT_0064a6d0 + (float10)param_3;
  }
  if ((1 < iVar1) && (iVar1 < 4)) {
    return (float10)param_3;
  }
  return (float10)(float)param_2;
}

