
void __thiscall FUN_004a3800(int *param_1,int *param_2)

{
  if ((param_2[2] & 0x10000U) != 0) {
    param_1[2] = param_2[2];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[3] = param_2[3];
    return;
  }
  param_1[1] = 0;
  if (*param_2 != 0) {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    param_1[3] = param_2[3];
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = param_2[3];
  return;
}

