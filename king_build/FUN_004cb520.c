
void __fastcall FUN_004cb520(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644c3b;
  local_c = ExceptionList;
  if (DAT_006f59d8 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00631d33(0x1924,param_1);
    local_4 = 0;
    if (iVar1 != 0) {
      DAT_006f59d8 = FUN_0059f6f0(DAT_00695184);
      ExceptionList = local_c;
      return;
    }
    DAT_006f59d8 = 0;
  }
  ExceptionList = local_c;
  return;
}

