
void FUN_005075b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_fa0 [1000];
  
  puVar2 = local_fa0;
  iVar1 = param_6;
  if (0 < param_6) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = param_3;
      puVar2 = puVar2 + 1;
    }
  }
  FUN_00507350(param_1,param_2,local_fa0,param_4,param_5,param_6);
  return;
}

