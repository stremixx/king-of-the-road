
void __fastcall FUN_005ed150(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0065176c;
  local_4 = 0;
  FUN_00631d5c(param_1[0x11]);
  FUN_00631d5c(param_1[0x12]);
  FUN_00631d5c(param_1[0x13]);
  local_4 = 0xffffffff;
  FUN_005ed420();
  ExceptionList = local_c;
  return;
}

