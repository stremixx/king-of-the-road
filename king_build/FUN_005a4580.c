
void __fastcall FUN_005a4580(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00647bbf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650380;
  param_1[8] = &PTR_LAB_006503a0;
  local_4 = 1;
  FUN_005eedb0();
  local_4 = local_4 & 0xffffff00;
  FUN_005f9db0();
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = local_c;
  return;
}

