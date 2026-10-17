
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052dda0(int *param_1)

{
  if (param_1[0x38c] == 1) {
    param_1[0x38c] = 2;
    (**(code **)(*param_1 + 0x8c))(param_1[0x37f],param_1 + 0x380);
    (**(code **)(*param_1 + 0x90))(&DAT_007015b0,0);
    (**(code **)(*param_1 + 0x94))(&DAT_007015b0,0);
  }
  if ((param_1[0x38e] != 0) &&
     ((float)_DAT_0064a650 < (float)*(double *)(DAT_006ee15c + 0xb98) - (float)param_1[0x38f])) {
    FUN_005e10c0(param_1[0x38e],0);
    param_1[0x38e] = 0;
  }
  FUN_0052d7d0();
  if ((param_1[0xe0] != 0) && (param_1[0x38c] == 2)) {
    param_1[0x38c] = 0;
  }
  return;
}

