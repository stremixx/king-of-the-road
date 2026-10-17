
undefined4 * FUN_00517530(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645a9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00631d33(0x120);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005bee00(param_1,0x10000);
    *puVar1 = &PTR_FUN_0064cbd8;
  }
  local_4 = 0xffffffff;
  FUN_005bcc50(&DAT_006cd390);
  FUN_005bcc50(&DAT_006cd390);
  FUN_005bcc50(&DAT_006cd390);
  FUN_005bcc50(&DAT_006cd390);
  ExceptionList = local_c;
  return puVar1;
}

