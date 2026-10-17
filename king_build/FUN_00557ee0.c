
void __fastcall FUN_00557ee0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064e95c;
  param_1[4] = &PTR_LAB_0064e870;
  param_1[0x44] = &PTR_LAB_0064e824;
  param_1[0x62] = &PTR_LAB_0064e820;
  local_4 = 0;
  if (param_1[0x155e] != 0) {
    FUN_0055e4a0();
  }
  param_1[0x155e] = 0;
  local_4 = 0xffffffff;
  FUN_00544520();
  ExceptionList = local_c;
  return;
}

