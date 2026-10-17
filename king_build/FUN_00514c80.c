
void __fastcall FUN_00514c80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006459a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064ce40;
  param_1[0x10] = &PTR_LAB_0064ce00;
  local_4 = 0;
  if (param_1[0x150] != 0) {
    FUN_005ff190();
    FUN_005ff1b0();
    param_1[0x150] = 0;
  }
  DAT_006cdbcc = 0;
  local_4 = 0xffffffff;
  FUN_005d8090();
  ExceptionList = local_c;
  return;
}

