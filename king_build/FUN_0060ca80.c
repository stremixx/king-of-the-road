
void __fastcall FUN_0060ca80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00649696;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = FUN_00631d33(0xc);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00612bc0();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  iVar1 = FUN_00631d33(0xc);
  local_4 = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00612bc0();
  }
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  ExceptionList = local_c;
  return;
}

