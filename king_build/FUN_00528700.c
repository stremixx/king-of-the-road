
void __fastcall FUN_00528700(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006462b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064db48;
  local_4 = 0;
  thunk_FUN_005c09a0();
  local_4 = 0xffffffff;
  FUN_005d7f00();
  ExceptionList = local_c;
  return;
}

