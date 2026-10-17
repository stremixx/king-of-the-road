
void __fastcall FUN_005e26c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00651654;
  local_4 = 0;
  param_1[0x52] = 0;
  FUN_005e2650();
  FUN_00631d5c(param_1[0x45]);
  FUN_00631d5c(param_1[0x46]);
  FUN_00631d5c(param_1[100]);
  DAT_007206b0 = 0;
  local_4 = 0xffffffff;
  FUN_006391ce();
  ExceptionList = local_c;
  return;
}

