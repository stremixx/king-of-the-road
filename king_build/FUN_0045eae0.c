
undefined4 __thiscall FUN_0045eae0(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      (*(double *)(param_1 + 2) == *(double *)(param_2 + 2))) &&
     (((param_1[4] == param_2[4] && (param_1[5] == param_2[5])) && (param_1[6] == param_2[6])))) {
    return 1;
  }
  return 0;
}

