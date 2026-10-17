
void FUN_005c5bc0(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_0070db44;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064830b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0070db44 != 0) {
    ExceptionList = &local_c;
    FUN_005cc100();
    FUN_00631d5c(iVar1);
    DAT_0070db44 = 0;
  }
  if (DAT_0070db58 != 0) {
    iVar1 = FUN_00631d33(0xa8);
    local_4 = 0;
    if (iVar1 != 0) {
      FUN_005cd1b0();
    }
    DAT_0070db58 = 0;
  }
  DAT_00706ef4 = 0;
  DAT_00706ef8 = 0;
  ExceptionList = local_c;
  return;
}

