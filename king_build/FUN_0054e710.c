
undefined4 __thiscall FUN_0054e710(int param_1,int *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x5078) == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return 0;
  }
  *param_2 = *(int *)(param_1 + 0x5078);
  *param_3 = *(undefined4 *)(param_1 + 0x5094);
  return *(undefined4 *)(param_1 + 0x5098);
}

