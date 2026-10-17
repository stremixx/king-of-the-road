
void __fastcall FUN_00491590(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640d38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0064af28;
  local_4 = 0;
  FUN_004915f0(param_1[3]);
  *param_1 = &PTR_LAB_0064aed4;
  ExceptionList = local_c;
  return;
}

