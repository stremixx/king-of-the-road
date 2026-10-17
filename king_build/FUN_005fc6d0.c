
int FUN_005fc6d0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006492ab;
  local_c = ExceptionList;
  if (DAT_00722a88 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005e8f40(param_1,param_3);
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_00631d33(0x1c);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_0061db0f(param_1);
      iVar1 = FUN_005fc8a0(param_1,uVar2);
    }
    local_4 = 0xffffffff;
    FUN_005e8fd0(iVar1,param_1,param_3);
  }
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  *(int *)(DAT_00722a94 + param_2 * 4) = iVar1;
  *(int *)(iVar1 + 0xc) = param_2;
  FUN_00604550(param_2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4));
  ExceptionList = local_c;
  return iVar1;
}

