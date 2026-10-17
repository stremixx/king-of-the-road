
void __thiscall FUN_005454c0(int param_1,int *param_2)

{
  if (*param_2 == 1) {
    *(int *)(param_1 + 0x2548) = param_2[1];
  }
  else if (*param_2 == 2) {
    FUN_00543330(param_2[1]);
    return;
  }
  return;
}

