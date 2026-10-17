
void __fastcall FUN_005c4ab0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650af0;
  local_4 = 0;
  FUN_005d2b10();
  local_4 = 0xffffffff;
  FUN_005c3ae0();
  ExceptionList = local_c;
  return;
}

