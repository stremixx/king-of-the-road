
void FUN_0049e7a0(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10000) != 0) {
    param_1[2] = *(uint *)(param_2 + 0x50);
    *param_1 = *(int *)(param_2 + 0x48);
    param_1[1] = *(int *)(param_2 + 0x4c);
    return;
  }
  param_1[1] = 0;
  if (*(int *)(param_2 + 0x48) != 0) {
    *param_1 = *(int *)(param_2 + 0x48);
    param_1[2] = *(int *)(param_2 + 0x50);
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

