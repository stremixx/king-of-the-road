
undefined4 * FUN_004b20e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643c98;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_0048c5f0(*param_2,&DAT_0066f3f0);
  uVar2 = FUN_0048ad80(0,iVar1);
  *param_1 = uVar2;
  if ((iVar1 != 0) && (*(short *)(iVar1 + 2) != 0)) {
    FUN_00631d5c(iVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

