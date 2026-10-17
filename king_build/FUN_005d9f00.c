
void __fastcall FUN_005d9f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064874b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x1e4) == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00631d33(0x28);
    local_4 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_005e3a00(param_1);
    }
    *(undefined4 *)(param_1 + 0x1e4) = uVar2;
  }
  ExceptionList = local_c;
  return;
}

