
int __thiscall FUN_00606110(int *param_1,int *param_2)

{
  if ((*param_1 != 0) && (param_2 == *(int **)(*param_1 + 4))) {
    return param_1[1];
  }
  if ((param_1[1] != 0) && (param_2 == *(int **)(param_1[1] + 4))) {
    return 0;
  }
  return *param_2;
}

