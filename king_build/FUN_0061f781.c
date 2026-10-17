
undefined4 FUN_0061f781(DWORD *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00653790;
  puStack_10 = &LAB_00623924;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  BVar1 = TlsSetValue(DAT_00685940,param_1);
  if (BVar1 == 0) {
    __amsg_exit(0x10);
  }
  DVar2 = GetCurrentThreadId();
  *param_1 = DVar2;
  if (PTR_FUN_0068525c != (undefined *)0x0) {
    (*(code *)PTR_FUN_0068525c)();
  }
  local_8 = 0;
  uVar3 = (*(code *)param_1[0x12])(param_1[0x13]);
  FUN_0061f81d(uVar3);
  ExceptionList = local_14;
  return 0;
}

