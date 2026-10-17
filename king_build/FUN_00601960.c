
undefined4 FUN_00601960(undefined4 *param_1,int *param_2)

{
  if (param_2[1] == *param_2) {
    *param_1 = 0;
    return 0xffffffff;
  }
  *param_1 = *(undefined4 *)(param_2[1] + 8);
  param_2[1] = *(int *)param_2[1];
  return 0;
}

