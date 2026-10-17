
void __fastcall thunk_FUN_005a4580(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00647bbf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650380;
  param_1[8] = &PTR_LAB_006503a0;
  uStack_4 = 1;
  FUN_005eedb0();
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_005f9db0();
  uStack_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}

