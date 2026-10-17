
void __fastcall FUN_0060db80(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00649747;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00652030;
  param_1[0x13] = &PTR_LAB_00652010;
  iVar1 = param_1[0x1b];
  local_4 = 1;
  if (iVar1 != 0) {
    FUN_0060d440();
    FUN_00631d5c(iVar1);
    param_1[0x1b] = 0;
  }
  FUN_005eedb0();
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_005d2940();
  local_4 = 2;
  if (param_1[0x12] != 0) {
    FUN_00631d5c(param_1[0x12]);
  }
  local_4 = 0xffffffff;
  FUN_005eec90();
  ExceptionList = local_c;
  return;
}

