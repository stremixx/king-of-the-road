
undefined4 __thiscall FUN_005bdca0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005bdc50(param_2 - *(int *)(param_1 + 0x2c),param_3 - *(int *)(param_1 + 0x30));
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = FUN_005bd0d0(param_2,param_3);
  return uVar2;
}

