
void __fastcall FUN_005e3e30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00651728;
  local_4 = 0;
  FUN_00631d5c(param_1[0x3ec]);
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = local_c;
  return;
}

