
void __fastcall FUN_006191a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006498e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006522f8;
  *(undefined4 *)param_1[0x13] = 0;
  local_4 = 1;
  FUN_005f4100();
  if (param_1[0xf] != 0) {
    FUN_00631d5c(param_1[0xf]);
  }
  local_4 = 0xffffffff;
  FUN_005eec90();
  ExceptionList = local_c;
  return;
}

