
int * FUN_00512eb0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064594b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00631d33(0x120);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005beed0(param_1,0x1000,param_2);
    *piVar1 = (int)&PTR_FUN_0064cc0c;
  }
  local_4 = 0xffffffff;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  (**(code **)(*piVar1 + 0x14))();
  piVar1[0xd] = piVar1[0xb] + 0xb4;
  ExceptionList = local_c;
  return piVar1;
}

