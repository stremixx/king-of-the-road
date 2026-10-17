
void FUN_0049e800(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x5c) & 0x10000) != 0) {
    param_1[2] = *(uint *)(param_2 + 0x5c);
    *param_1 = *(int *)(param_2 + 0x54);
    param_1[1] = *(int *)(param_2 + 0x58);
    return;
  }
  param_1[1] = 0;
  if (*(int *)(param_2 + 0x54) != 0) {
    *param_1 = *(int *)(param_2 + 0x54);
    param_1[2] = *(int *)(param_2 + 0x5c);
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

