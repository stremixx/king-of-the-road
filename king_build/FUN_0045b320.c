
int * FUN_0045b320(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != param_2) {
    *param_3 = *param_1;
    while (param_1 = param_1 + 1, param_1 != param_2) {
      if (*param_3 != *param_1) {
        param_3 = param_3 + 1;
        *param_3 = *param_1;
      }
    }
    return param_3 + 1;
  }
  return param_3;
}

