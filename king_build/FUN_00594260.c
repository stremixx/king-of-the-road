
void __thiscall FUN_00594260(int *param_1,int param_2)

{
  if (param_2 == 0) {
    DAT_006f5610 = param_1;
    return;
  }
  *param_1 = param_2;
  param_1[1] = *(int *)(param_2 + 4);
  if (*(int **)(param_2 + 4) == (int *)0x0) {
    DAT_006f5610 = param_1;
    *(int **)(param_2 + 4) = param_1;
    return;
  }
  **(int **)(param_2 + 4) = (int)param_1;
  *(int **)(param_2 + 4) = param_1;
  return;
}

