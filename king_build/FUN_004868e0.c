
void __thiscall FUN_004868e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0xff;
  return;
}

