
void __fastcall FUN_005cdfe0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006483c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650dbc;
  local_4 = 0;
  FUN_00631d5c(param_1[10]);
  FUN_00631d5c(param_1[0xe]);
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = local_c;
  return;
}

