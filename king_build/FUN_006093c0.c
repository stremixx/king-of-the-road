
int __thiscall FUN_006093c0(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_2 + 4;
    }
    if (iVar1 == *(int *)(*param_1 + 8)) {
      return param_1[1];
    }
  }
  if (param_1[1] != 0) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_2 + 4;
    }
    if (iVar1 == *(int *)(param_1[1] + 8)) {
      return 0;
    }
  }
  if (*(int *)(param_2 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_2 + 4) + -4;
}

