
void FUN_0061cf45(uint param_1)

{
  int iVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00653730;
  puStack_10 = &LAB_00623924;
  local_14 = ExceptionList;
  if (DAT_0077d80c == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_0077d804) {
      ExceptionList = &local_14;
      FUN_006238a4(9);
      local_8 = 0;
      iVar1 = FUN_00622a03(param_1);
      local_8 = 0xffffffff;
      FUN_0061cfac();
      if (iVar1 != 0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_0077d80c == 2) {
      if (param_1 == 0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = param_1 + 0xf & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_00687974) {
        ExceptionList = &local_14;
        FUN_006238a4(9);
        local_8 = 1;
        iVar1 = FUN_006234a6(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_0061d00b();
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_0061d024;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_0061d024:
  HeapAlloc(DAT_0077d808,0,dwBytes);
  ExceptionList = local_14;
  return;
}

