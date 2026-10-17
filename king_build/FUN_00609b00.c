
void FUN_00609b00(int *param_1)

{
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  return;
}

