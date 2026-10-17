
void __thiscall FUN_00555df0(int param_1,float param_2,float param_3,float param_4)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00555e50();
  }
  *(float *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0xc) - param_2;
  *(float *)(param_1 + 0x34) = param_3;
  *(float *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(float *)(param_1 + 0x14) = param_3 * param_4;
  return;
}

