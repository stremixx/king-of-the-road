
int * FUN_00404c70(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00453d30(DAT_0068be20,DAT_0068be24,param_3,param_2,param_4);
  if (iVar1 != DAT_0068be24) {
    *param_1 = iVar1 - DAT_0068be20 >> 2;
    return param_1;
  }
  *param_1 = -1;
  return param_1;
}

