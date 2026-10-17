
bool FUN_00419040(int param_1)

{
  if (*(int *)(param_1 + 0x1fc) == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0xa8) != DAT_0068a8f0) {
    return false;
  }
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0x9c)) {
    return false;
  }
  if (*(int *)(param_1 + 0x54) == 1) {
    return false;
  }
  if (*(int *)(param_1 + 0x54) != 2) {
    return false;
  }
  return *(int *)(param_1 + 0x5c) != 0x101;
}

