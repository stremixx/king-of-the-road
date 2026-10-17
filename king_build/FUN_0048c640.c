
undefined4 * FUN_0048c640(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064087f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FUN_0048c310(*param_2,*param_3);
  uVar2 = FUN_0048ad80(0,iVar1);
  *param_1 = uVar2;
  local_4 = local_4 & 0xffffff00;
  if ((iVar1 != 0) && (*(short *)(iVar1 + 2) != 0)) {
    FUN_00631d5c(iVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

