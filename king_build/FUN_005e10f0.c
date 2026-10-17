
undefined4 FUN_005e10f0(int param_1)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x10) != 0x12) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x38);
}

