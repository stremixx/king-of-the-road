
int * FUN_00404c20(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00453b90(DAT_0068be20,DAT_0068be24,param_2,&DAT_0068a928);
  if (iVar1 != DAT_0068be24) {
    *param_1 = iVar1 - DAT_0068be20 >> 2;
    return param_1;
  }
  *param_1 = -1;
  return param_1;
}

