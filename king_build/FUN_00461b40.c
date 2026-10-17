
void __thiscall FUN_00461b40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2[4] != 0) {
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[4] = 0;
  return;
}

