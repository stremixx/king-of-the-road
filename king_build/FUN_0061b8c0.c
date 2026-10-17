
undefined4 __thiscall
FUN_0061b8c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0x1c) = param_5;
  if (param_5 != 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_5 + 0x10);
  }
  return 1;
}

