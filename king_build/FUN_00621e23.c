
undefined4
FUN_00621e23(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006539a8;
  puStack_10 = &LAB_00623924;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00622273();
  FUN_00622273();
  iVar1 = FUN_00622273();
  *(undefined4 *)(iVar1 + 0x6c) = param_1;
  iVar1 = FUN_00622273();
  *(undefined4 *)(iVar1 + 0x70) = param_3;
  local_8 = 1;
  uVar2 = FUN_0061c541(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_00621ef0();
  ExceptionList = local_14;
  return uVar2;
}

