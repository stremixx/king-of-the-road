
void __fastcall FUN_005c3ae0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00648132;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650a10;
  local_4 = 3;
  if (*(int *)(DAT_00706ecc + 0x1a0) != 0) {
    FUN_00631d5c(param_1[0x7bd]);
  }
  FUN_005c3a10();
  local_4._0_1_ = 2;
  FUN_00602560();
  local_4._0_1_ = 1;
  FUN_005c2940();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005c2660();
  local_4 = 0xffffffff;
  FUN_005dd200();
  ExceptionList = local_c;
  return;
}

