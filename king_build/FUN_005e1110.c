
void FUN_005e1110(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x10) != 0xc) {
    *(undefined4 *)(param_1 + 0x38) = *param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_2[1];
    *(undefined4 *)(param_1 + 0x40) = param_2[2];
    return;
  }
  *(undefined4 *)(param_1 + 0x54) = *param_2;
  *(undefined4 *)(param_1 + 0x58) = param_2[1];
  *(undefined4 *)(param_1 + 0x5c) = param_2[2];
  return;
}

