
void __fastcall FUN_005fa0f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00649228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00651914;
  local_4 = 0;
  FUN_00631d5c(param_1[0xe]);
  FUN_00631d5c(param_1[0xf]);
  if (param_1[0xd] != 0) {
    FUN_00631d5c(param_1[0xd]);
  }
  local_4 = 0xffffffff;
  FUN_005eec90();
  ExceptionList = local_c;
  return;
}

