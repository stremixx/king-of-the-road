
void FUN_0045ae30(int *param_1,int *param_2,int *param_3,int *param_4)

{
  if (param_2 != param_3) {
    do {
      if (param_2[2] == *param_4) break;
      param_2 = (int *)*param_2;
    } while (param_2 != param_3);
  }
  *param_1 = (int)param_2;
  return;
}

