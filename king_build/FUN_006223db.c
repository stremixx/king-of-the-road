
void FUN_006223db(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_006539f8;
  puStack_10 = &LAB_00623924;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_00685944 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_00685944)();
  }
  local_8 = 0xffffffff;
  FUN_0062237a();
  return;
}

