
void __fastcall FUN_005a69e0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00647d43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006505cc;
  iVar1 = param_1[0xf];
  local_4 = 1;
  if (iVar1 != 0) {
    FUN_0061ccb5(iVar1,0x1c,*(undefined4 *)(iVar1 + -4),&LAB_005a34e0);
    FUN_00631d5c(iVar1 + -4);
  }
  FUN_00631d5c(param_1[0x10]);
  local_4 = local_4 & 0xffffff00;
  FUN_005e4e70();
  local_4 = 0xffffffff;
  FUN_005f10e0();
  ExceptionList = local_c;
  return;
}

