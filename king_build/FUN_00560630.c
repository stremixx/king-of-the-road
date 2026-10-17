
void __thiscall FUN_00560630(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 1000) = 1;
  *(undefined1 *)((int)param_1 + 0x7d1) = 0;
  *(undefined4 *)(param_1 + 0x5dc) = 1;
  return;
}

