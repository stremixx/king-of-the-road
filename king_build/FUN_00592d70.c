
void __fastcall FUN_00592d70(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064732f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f93c;
  param_1[8] = &PTR_LAB_0064f8f0;
  local_4 = 1;
  FUN_00631d5c(param_1[0x1c]);
  iVar1 = param_1[0x19];
  if (iVar1 != 0) {
    FUN_0061ccb5(iVar1,0x7c,*(undefined4 *)(iVar1 + -4),FUN_004030a0);
    FUN_00631d5c(iVar1 + -4);
  }
  FUN_005eedb0();
  FUN_005d2a60();
  FUN_00594470();
  local_4 = local_4 & 0xffffff00;
  FUN_005f10e0();
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = local_c;
  return;
}

