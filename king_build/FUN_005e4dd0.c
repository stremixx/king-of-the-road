
void __fastcall FUN_005e4dd0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648bcb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00631d5c(*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 0x18));
  }
  local_4 = 0xffffffff;
  FUN_005e4e70();
  ExceptionList = local_c;
  return;
}

