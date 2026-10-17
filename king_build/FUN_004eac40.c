
void __thiscall FUN_004eac40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064554b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0x28);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_004eaaf0(param_1,param_2,*(undefined4 *)(param_1 + 4),param_3);
  }
  ExceptionList = local_c;
  return;
}

