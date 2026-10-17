
void __fastcall FUN_004d0f30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064bde8;
  param_1[4] = &PTR_LAB_0064bcfc;
  param_1[0x44] = &PTR_LAB_0064bcb0;
  param_1[0x62] = &PTR_LAB_0064bcac;
  local_4 = 0;
  FUN_004cf420(param_1);
  local_4 = 0xffffffff;
  FUN_00544520();
  ExceptionList = local_c;
  return;
}

