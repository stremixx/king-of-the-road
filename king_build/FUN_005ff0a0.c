
undefined4 __fastcall FUN_005ff0a0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064934b;
  local_c = ExceptionList;
  if (DAT_00722c88 == DAT_00722c8c) {
    return 0xffffffff;
  }
  ExceptionList = &local_c;
  if (DAT_00722ca4 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    (**(code **)*DAT_00722ca4)(1,param_1);
  }
  puVar1 = (undefined4 *)FUN_00631d33(0x20);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_006034e0();
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0x3ff00000;
    *puVar1 = &PTR_FUN_00651db0;
  }
  uStack_4 = 0xffffffff;
  DAT_00722ca4 = puVar1;
  FUN_00603520();
  ExceptionList = local_c;
  return 0;
}

