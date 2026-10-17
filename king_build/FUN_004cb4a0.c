
uint FUN_004cb4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0xe0);
  uVar2 = 0;
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_005cd2d0();
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_005cd390(param_1,param_2,param_3,param_4);
  ExceptionList = local_c;
  return -(uint)(iVar1 != 0) & uVar2;
}

