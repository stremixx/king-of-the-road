
undefined4 * FUN_0046b190(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 3;
  if (iVar1 < 1) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3 = param_3 + 2;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 2;
  } while (iVar1 != 0);
  return param_3;
}

