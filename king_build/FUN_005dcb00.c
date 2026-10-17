
undefined4 __thiscall FUN_005dcb00(int *param_1,undefined4 param_2)

{
  if (param_1[0x52] == 0) {
    DAT_007206d4 = 1;
    return 1;
  }
  DAT_007206d4 = 0;
  param_1[0x52] = 0;
  (**(code **)(*param_1 + 0xa8))();
  if (param_1[0x55] != 0) {
    (**(code **)(*param_1 + 0xa0))();
    DestroyWindow(DAT_0071f880);
    return 1;
  }
  param_1[0x52] = 1;
  FUN_00631e3d(param_2);
  return 1;
}

