
void FUN_004d9dd0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006450e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004843e0();
  local_4 = 0xffffffff;
  FUN_005f10e0();
  ExceptionList = local_c;
  return;
}

