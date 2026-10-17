
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004773b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x204);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x28) & 1) != 0)) {
    return ((float10)_DAT_0064a660 - (float10)_DAT_0066b720) *
           (float10)*(double *)(*(int *)(DAT_0068bf38 + *(int *)(iVar1 + 4) * 4) + 0x30) *
           (float10)_DAT_0064ac10;
  }
  return (float10)_DAT_0064a668;
}

