
undefined4 * __fastcall FUN_005a0f00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006475e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005789e0();
  local_4 = 0;
  FUN_005f9d30();
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[5] = &PTR_LAB_0065019c;
  *param_1 = &PTR_LAB_006501e8;
  ExceptionList = local_c;
  return param_1;
}

