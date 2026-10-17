
void FUN_00483a60(void)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006403db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00631d33(0x20);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_005d27c0(s_doXCycle_0066f01c);
    *piVar1 = (int)&PTR_FUN_0064ade8;
    piVar2 = piVar1;
  }
  local_4 = 0xffffffff;
  FUN_005d2c20(piVar2);
  (**(code **)(*piVar2 + 0x18))(1);
  ExceptionList = piVar1;
  return;
}

