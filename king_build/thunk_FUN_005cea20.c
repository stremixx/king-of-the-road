
void __fastcall thunk_FUN_005cea20(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_0064846f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650e70;
  param_1[8] = &PTR_LAB_00650e24;
  uStack_4 = 1;
  FUN_005eedb0();
  FUN_005d2a60();
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_005f10e0();
  uStack_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}

