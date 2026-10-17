
void FUN_004a2e60(int *param_1,int *param_2,int *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (int *)0x0) {
      if ((param_1[2] & 0x10000U) == 0) {
        param_3[1] = 0;
        if (*param_1 == 0) {
          *param_3 = 0;
          param_3[2] = 0;
        }
        else {
          *param_3 = *param_1;
          param_3[2] = param_1[2];
          *(int *)(*param_3 + 4) = *(int *)(*param_3 + 4) + 1;
        }
      }
      else {
        param_3[2] = param_1[2];
        *param_3 = *param_1;
        param_3[1] = param_1[1];
      }
    }
    param_3 = param_3 + 3;
  }
  return;
}

