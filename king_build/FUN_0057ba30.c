
void __fastcall FUN_0057ba30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006470c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f3d4;
  local_4 = 1;
  FUN_005eedb0();
  local_4 = local_4 & 0xffffff00;
  FUN_00578f20();
  local_4 = 0xffffffff;
  if (param_1[0x12] != 0) {
    FUN_00631d5c(param_1[0x12]);
  }
  FUN_005eec90();
  ExceptionList = local_c;
  return;
}

