
void __fastcall FUN_004d1250(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064bfe4;
  param_1[4] = &PTR_LAB_0064bef8;
  param_1[0x44] = &PTR_LAB_0064beac;
  param_1[0x62] = &PTR_LAB_0064bea8;
  local_4 = 0;
  FUN_004cf420(param_1);
  local_4 = 0xffffffff;
  FUN_00544520();
  ExceptionList = local_c;
  return;
}

