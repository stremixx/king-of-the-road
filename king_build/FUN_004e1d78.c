
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1d78(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  int local_8;
  
  DAT_00696424 = param_1;
  _DAT_00696428 = param_2;
  _DAT_00696414 = param_3;
  for (local_8 = 0; local_8 < 0x168; local_8 = local_8 + 1) {
    fVar1 = (float10)FUN_0061e834(((double)local_8 * _DAT_0064c8f0 + (double)local_8 * _DAT_0064c8f0
                                  ) / _DAT_0064c8e8);
    *(float *)(&DAT_00695e20 + local_8 * 4) = (float)fVar1;
  }
  Ordinal_17();
  return;
}

