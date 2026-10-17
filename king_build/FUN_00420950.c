
undefined4 FUN_00420950(int param_1)

{
  if (((*(uint *)(param_1 + 0x58) >> 2 & 1) != 0) &&
     (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14))) {
    return 1;
  }
  return 0;
}

