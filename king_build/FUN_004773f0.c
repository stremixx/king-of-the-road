
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004773f0(int param_1)

{
  int iVar1;
  int local_c;
  double local_8;
  
  local_8 = 1.0;
  FUN_00477c00(&local_c);
  if (local_c != DAT_0068a8f0) {
    local_8 = *(double *)(local_c + 0x300) * _DAT_0064a7b0 + _DAT_0064a660;
  }
  if ((*(int *)(param_1 + 0x1fc) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x1fc) + 4), iVar1 != -1)) {
    return (float10)local_8 * (float10)*(double *)(*(int *)(DAT_0068bf38 + iVar1 * 4) + 0x30) *
           (float10)_DAT_0064ac18;
  }
  return (float10)_DAT_0064a668;
}

