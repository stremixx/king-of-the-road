
void __fastcall FUN_005f0c10(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006490f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00651c58;
  iVar1 = param_1[0xe];
  local_4 = 1;
  if (iVar1 != 0) {
    FUN_0061ccb5(iVar1,0x58,*(undefined4 *)(iVar1 + -4),FUN_005e4dd0);
    FUN_00631d5c(iVar1 + -4);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005e4e70();
  local_4 = 0xffffffff;
  FUN_005eec90();
  ExceptionList = local_c;
  return;
}

