
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409ed0(int param_1,double *param_2)

{
  double dVar1;
  int local_4;
  
  FUN_00477c00(&local_4);
  dVar1 = *(double *)(local_4 + 0x1f8) - *(double *)(param_1 + 0x1f8);
  *param_2 = dVar1;
  if (_DAT_0064a668 < dVar1) {
    return 1;
  }
  return 0;
}

