
void FUN_004b6ab0(int *param_1,int param_2,int *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (int *)0x0) {
      if ((param_3[2] & 0x10000U) == 0) {
        param_1[1] = 0;
        if (*param_3 == 0) {
          *param_1 = 0;
          param_1[2] = 0;
        }
        else {
          *param_1 = *param_3;
          param_1[2] = param_3[2];
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
        }
      }
      else {
        param_1[2] = param_3[2];
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
    }
    param_1 = param_1 + 3;
  }
  return;
}

