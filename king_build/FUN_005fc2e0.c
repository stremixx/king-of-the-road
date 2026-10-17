
void __fastcall FUN_005fc2e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00649268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00651d58;
  local_4 = 0;
  FUN_00631d5c(param_1[0x10]);
  local_4 = 0xffffffff;
  FUN_005f10e0();
  ExceptionList = local_c;
  return;
}

