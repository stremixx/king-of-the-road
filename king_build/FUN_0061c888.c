
void FUN_0061c888(LPVOID param_1)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006536f8;
  puStack_10 = &LAB_00623924;
  local_14 = ExceptionList;
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  if (DAT_0077d80c == 3) {
    ExceptionList = &local_14;
    FUN_006238a4(9);
    local_8 = 0;
    local_20 = FUN_006226af(param_1);
    if (local_20 != 0) {
      FUN_006226da(local_20,param_1);
    }
    local_8 = 0xffffffff;
    FUN_0061c8f2();
    iVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_0077d80c != 2) goto LAB_0061c954;
    ExceptionList = &local_14;
    FUN_006238a4(9);
    local_8 = 1;
    local_28 = FUN_0062340a(param_1,&local_2c,&local_24);
    if (local_28 != 0) {
      FUN_00623461(local_2c,local_24,local_28);
    }
    local_8 = 0xffffffff;
    FUN_0061c94a();
    iVar1 = local_28;
  }
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return;
  }
LAB_0061c954:
  HeapFree(DAT_0077d808,0,param_1);
  ExceptionList = local_14;
  return;
}

