
void __fastcall FUN_00531080(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064675e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064e2e0;
  local_4 = 5;
  FUN_00531120();
  local_4._0_1_ = 4;
  FUN_004ea51e();
  local_4._0_1_ = 3;
  FUN_004ea51e();
  local_4._0_1_ = 2;
  FUN_004ea51e();
  local_4._0_1_ = 1;
  FUN_004ea51e();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004ea51e();
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = local_c;
  return;
}

