
void FUN_0062237a(void)

{
  int iVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_006539e0;
  puStack_10 = &LAB_00623924;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00622273();
  if (*(int *)(iVar1 + 0x60) != 0) {
    local_8 = 1;
    iVar1 = FUN_00622273();
    (**(code **)(iVar1 + 0x60))();
  }
  local_8 = 0xffffffff;
  FUN_0061d8a8();
  return;
}

