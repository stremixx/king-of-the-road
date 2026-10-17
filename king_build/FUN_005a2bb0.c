
undefined4 * __fastcall FUN_005a2bb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005789e0();
  local_4 = 0;
  FUN_005f9d30();
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[5] = &PTR_LAB_006500c4;
  *param_1 = &PTR_LAB_00650110;
  ExceptionList = local_c;
  return param_1;
}

