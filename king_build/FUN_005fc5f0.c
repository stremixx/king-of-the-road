
int FUN_005fc5f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064928b;
  local_c = ExceptionList;
  if (DAT_00722a88 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005e8e30(param_1);
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_00631d33(0x1c);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_005fc840(param_1);
    }
    local_4 = 0xffffffff;
    FUN_005e8e90(iVar1,param_1);
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

