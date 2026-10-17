
void __fastcall FUN_005d9e50(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00648730;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0065128c;
  iVar1 = param_1[0x74];
  local_4 = 0;
  if (iVar1 != 0) {
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    FUN_004843e0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0061ccb5(iVar1 + 0x1850,0x50,0x14,FUN_004843e0);
    FUN_00631d5c(iVar1);
  }
  if ((param_1[0x75] != 0) && ((*(byte *)(param_1 + 4) & 8) == 0)) {
    FUN_005d9f60();
  }
  local_4 = 0xffffffff;
  FUN_005d7f00();
  ExceptionList = local_c;
  return;
}

