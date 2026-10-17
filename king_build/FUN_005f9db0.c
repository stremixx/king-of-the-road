
void __fastcall FUN_005f9db0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00649208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00651d00;
  iVar1 = param_1[0xd];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0061ccb5(iVar1,0x28,*(undefined4 *)(iVar1 + -4),FUN_004c4870);
    FUN_00631d5c(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_005eec90();
  ExceptionList = local_c;
  return;
}

