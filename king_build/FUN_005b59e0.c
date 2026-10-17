
bool __thiscall FUN_005b59e0(int *param_1,int param_2,int param_3)

{
  if (param_2 < *param_1) {
    return false;
  }
  if (param_1[2] < param_2) {
    return false;
  }
  if (param_3 < param_1[1]) {
    return false;
  }
  return param_3 <= param_1[3];
}

