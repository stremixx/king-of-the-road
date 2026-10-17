
void __fastcall FUN_004c09d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006449d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064b488;
  local_4 = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_005eedb0();
  local_4 = 0xffffffff;
  FUN_005f10e0();
  ExceptionList = local_c;
  return;
}

