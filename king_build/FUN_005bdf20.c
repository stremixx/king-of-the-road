
void __fastcall FUN_005bdf20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064cc74;
  local_4 = 0;
  FUN_00631d5c(param_1[3]);
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = local_c;
  return;
}

