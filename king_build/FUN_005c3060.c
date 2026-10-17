
void __fastcall FUN_005c3060(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0065094c;
  local_4 = 0;
  FUN_005c3150();
  local_4 = 0xffffffff;
  FUN_005e26c0();
  ExceptionList = local_c;
  return;
}

