
void __fastcall FUN_005cea20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064846f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650e70;
  param_1[8] = &PTR_LAB_00650e24;
  local_4 = 1;
  FUN_005eedb0();
  FUN_005d2a60();
  local_4 = local_4 & 0xffffff00;
  FUN_005f10e0();
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = local_c;
  return;
}

