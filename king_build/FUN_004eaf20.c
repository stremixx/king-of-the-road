
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004eaf20(int param_1,float param_2)

{
  if (param_2 < _DAT_0064b254) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  if (_DAT_0064b240 < param_2) {
    *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
    return;
  }
  *(float *)(param_1 + 0x24) = param_2;
  return;
}

