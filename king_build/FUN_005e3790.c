
int __thiscall FUN_005e3790(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648b4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0x40);
  iVar2 = 0;
  local_4 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005d8120(*(undefined4 *)(param_1 + 0xfc),param_2);
  }
  local_4 = 0xffffffff;
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 4;
  FUN_005e3830(iVar2);
  ExceptionList = local_c;
  return iVar2;
}

