
undefined4 FUN_005e8fd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_3;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
  return 1;
}

