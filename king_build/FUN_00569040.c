
void __fastcall FUN_00569040(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646b48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064edc4;
  iVar1 = param_1[0x142];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_005bb9a0();
    FUN_00631d5c(iVar1);
  }
  iVar1 = param_1[0x143];
  if (iVar1 != 0) {
    FUN_005bb9a0();
    FUN_00631d5c(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = local_c;
  return;
}

