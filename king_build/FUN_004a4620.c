
void __thiscall FUN_004a4620(int *param_1,int *param_2,int *param_3)

{
  if ((param_2[2] & 0x10000U) == 0) {
    param_1[1] = 0;
    if (*param_2 == 0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = *param_2;
      param_1[2] = param_2[2];
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    }
  }
  else {
    param_1[2] = param_2[2];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  if ((param_3[2] & 0x10000U) != 0) {
    param_1[5] = param_3[2];
    param_1[3] = *param_3;
    param_1[4] = param_3[1];
    param_1[6] = param_3[3];
    return;
  }
  param_1[4] = 0;
  if (*param_3 != 0) {
    param_1[3] = *param_3;
    param_1[5] = param_3[2];
    *(int *)(param_1[3] + 4) = *(int *)(param_1[3] + 4) + 1;
    param_1[6] = param_3[3];
    return;
  }
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = param_3[3];
  return;
}

