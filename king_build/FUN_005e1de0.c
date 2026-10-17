
void __fastcall FUN_005e1de0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648a1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0xc4,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_005dc790(iVar1);
    *(undefined4 *)(DAT_007206b0 + 0x180) = uVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(DAT_007206b0 + 0x180) = 0;
  ExceptionList = local_c;
  return;
}

