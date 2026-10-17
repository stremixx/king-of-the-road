
undefined4 FUN_00637751(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00635554(8);
    *(char **)(param_1 + 0x28) = "AfxFrameOrView42s";
  }
  if ((*(uint *)(param_1 + 0x20) & 0x8000) != 0) {
    if (DAT_0072d034 == 0) {
      return 1;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x4000;
  }
  if (DAT_0072d034 != 0) {
    *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) | 2;
  }
  return 1;
}

