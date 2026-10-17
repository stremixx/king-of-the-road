
void FUN_004d2870(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644fae;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004ea51e();
  local_4 = 0xffffffff;
  FUN_004ea51e();
  ExceptionList = local_c;
  return;
}

