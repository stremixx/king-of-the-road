
void __fastcall FUN_005a4a90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006504c4;
  local_4 = 0;
  FUN_00631d5c(param_1[10]);
  FUN_00631d5c(param_1[9]);
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = local_c;
  return;
}

