
undefined4 __thiscall FUN_005b8b60(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[199] <= param_2) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + param_2 * 4);
}

