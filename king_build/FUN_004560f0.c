
int * FUN_004560f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00458a90(&param_2);
  uVar1 = FUN_00447d30();
  uVar1 = FUN_004558b0(uVar1);
  iVar2 = FUN_0045cd50(uVar1);
  if (iVar2 == DAT_0068be64) {
    *param_1 = -1;
    return param_1;
  }
  *param_1 = iVar2 - DAT_0068be60 >> 2;
  return param_1;
}

