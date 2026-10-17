
void __fastcall FUN_0055e340(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646a68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064eb7c;
  param_1[4] = &PTR_LAB_0064ea90;
  param_1[0x44] = &PTR_LAB_0064ea44;
  param_1[0x62] = &PTR_LAB_0064ea40;
  local_4 = 0;
  if (param_1[0x155e] != 0) {
    FUN_00558040();
  }
  param_1[0x155e] = 0;
  local_4 = 0xffffffff;
  FUN_00544520();
  ExceptionList = local_c;
  return;
}

