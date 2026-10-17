
SIZE_T FUN_0061fec5(LPCVOID param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined1 local_30 [4];
  byte *local_2c;
  undefined1 local_28 [4];
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006537b8;
  puStack_10 = &LAB_00623924;
  local_14 = ExceptionList;
  if (DAT_0077d80c == 3) {
    ExceptionList = &local_14;
    FUN_006238a4(9);
    local_8 = 0;
    local_20 = (byte *)FUN_006226af(param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)((int)param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_0061ff2f();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_0077d80c != 2) goto LAB_0061ff83;
    ExceptionList = &local_14;
    FUN_006238a4(9);
    local_8 = 1;
    local_2c = (byte *)FUN_0062340a(param_1,local_30,local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_0061ffaa();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_0061ff83:
  SVar2 = HeapSize(DAT_0077d808,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}

