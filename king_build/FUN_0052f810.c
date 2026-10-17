
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0052f810(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = *(float **)(param_1 + 0x280 + param_2 * 4);
  if (pfVar1 != (float *)0x0) {
    pfVar2 = *(float **)(param_1 + 0x28c + param_2 * 4);
    if (pfVar2 != (float *)0x0) {
      return ((float10)*pfVar2 + (float10)*pfVar1) * (float10)_DAT_0064a6d0;
    }
    if (pfVar1 != (float *)0x0) {
      return (float10)*pfVar1;
    }
  }
  pfVar1 = *(float **)(param_1 + 0x28c + param_2 * 4);
  if (pfVar1 != (float *)0x0) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0064b254;
}

