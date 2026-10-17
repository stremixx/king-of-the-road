
void __fastcall FUN_005d8090(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006485f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006511e0;
  param_1[0x10] = &PTR_LAB_006511a0;
  local_4 = 0;
  param_1[0xe] = 0;
  FUN_005bd140();
  local_4 = 0xffffffff;
  FUN_005d81e0();
  ExceptionList = local_c;
  return;
}

