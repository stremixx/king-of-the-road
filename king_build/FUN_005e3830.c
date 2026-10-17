
undefined4 __thiscall FUN_005e3830(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xf0) = param_2;
    *(undefined4 *)(param_1 + 0xf4) = param_2;
    return param_2;
  }
  FUN_005d1840(*(int *)(param_1 + 0xf4));
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return param_2;
}

