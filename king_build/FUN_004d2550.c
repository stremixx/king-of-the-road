
void __fastcall FUN_004d2550(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644f68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064c224;
  param_1[4] = &PTR_LAB_0064c138;
  param_1[0x44] = &PTR_LAB_0064c0ec;
  param_1[0x62] = &PTR_LAB_0064c0e8;
  local_4 = 0;
  FUN_004cf420(param_1);
  local_4 = 0xffffffff;
  FUN_00557ee0();
  ExceptionList = local_c;
  return;
}

