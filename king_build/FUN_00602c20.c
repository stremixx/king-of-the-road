
void FUN_00602c20(int param_1,int param_2,undefined1 *param_3)

{
  param_2 = param_2 - param_1;
  if (0 < param_2) {
    param_1 = param_1 - (int)param_3;
    do {
      *param_3 = param_3[param_1];
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

