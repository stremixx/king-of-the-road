
void FUN_004ddcb0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00645352;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_004ea51e();
  local_4._0_1_ = 2;
  FUN_004ea51e();
  local_4._0_1_ = 1;
  FUN_004ea51e();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004ea51e();
  local_4 = 0xffffffff;
  FUN_005d9e50();
  ExceptionList = local_c;
  return;
}

