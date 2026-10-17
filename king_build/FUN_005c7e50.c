
void __fastcall FUN_005c7e50(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00648353;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_005f4100();
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 0x3c));
  }
  local_4 = 0xffffffff;
  FUN_005eec90();
  ExceptionList = local_c;
  return;
}

