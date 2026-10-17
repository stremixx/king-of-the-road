
void __fastcall FUN_005e2530(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00653410;
  local_4 = 0;
  FUN_0063689f(param_1);
  ExceptionList = local_c;
  return;
}

