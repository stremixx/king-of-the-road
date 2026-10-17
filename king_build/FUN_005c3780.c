
void __thiscall FUN_005c3780(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (0x3e6 < *(int *)(param_1 + 0x1ef0)) {
      FUN_00602560();
      FUN_00631d5c(param_2);
      return;
    }
    *(int *)(param_1 + 0xf50 + *(int *)(param_1 + 0x1ef0) * 4) = param_2;
    *(int *)(param_1 + 0x1ef0) = *(int *)(param_1 + 0x1ef0) + 1;
  }
  return;
}

