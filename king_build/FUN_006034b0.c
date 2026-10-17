
int FUN_006034b0(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    iVar1 = (**(code **)(*param_1 + 4))();
    param_1[1] = iVar1;
  }
  param_1[2] = param_1[2] | 2;
  return param_1[1];
}

