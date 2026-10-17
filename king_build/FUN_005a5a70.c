
void __fastcall FUN_005a5a70(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650538;
  local_4 = 0;
  FUN_005ba440(0,0,0);
  iVar1 = param_1[0x26];
  if (iVar1 != 0) {
    FUN_005b6140();
    FUN_00631d5c(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = local_c;
  return;
}

