
undefined4 FUN_004ccd70(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return 0;
}

