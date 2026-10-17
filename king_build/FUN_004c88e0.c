
void __fastcall FUN_004c88e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064b8a4;
  local_4 = 0;
  FUN_005eedb0();
  local_4 = 0xffffffff;
  if (param_1[0x12] != 0) {
    FUN_00631d5c(param_1[0x12]);
  }
  FUN_005eec90();
  ExceptionList = local_c;
  return;
}

