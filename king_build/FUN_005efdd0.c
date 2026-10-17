
void FUN_005efdd0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00649068;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005f4100();
  local_4 = 0xffffffff;
  FUN_005f10e0();
  ExceptionList = local_c;
  return;
}

