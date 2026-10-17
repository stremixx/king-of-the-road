
void __fastcall FUN_0059a180(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064748f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064fbc0;
  param_1[5] = &PTR_LAB_0064fb74;
  local_4 = 1;
  FUN_004843e0();
  FUN_005eedb0();
  local_4 = local_4 & 0xffffff00;
  FUN_005f9db0();
  *param_1 = &PTR_LAB_0064f324;
  param_1[1] = 0;
  ExceptionList = local_c;
  return;
}

