
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041d400(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x1c) == 4) {
    fVar1 = (float10)FUN_0061d200();
    return fVar1;
  }
  return (float10)_DAT_0064a668;
}

