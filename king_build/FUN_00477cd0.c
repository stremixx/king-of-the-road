
void FUN_00477cd0(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x7fefffff;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 4;
  return;
}

