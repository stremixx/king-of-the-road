
void __thiscall FUN_00593790(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x6c) = *param_2;
    *param_2 = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 **)(param_1 + 0x68) = param_2;
    return;
  }
  *param_3 = *param_2;
  *param_2 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 **)(param_1 + 0x68) = param_2;
  return;
}

