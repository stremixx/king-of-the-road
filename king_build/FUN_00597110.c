
void __fastcall FUN_00597110(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006473d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0x150);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00595260();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  FUN_005d2c20(uVar2);
  FUN_00595f40(*(undefined4 *)(param_1 + 0x48),param_1 + 0x18);
  FUN_00595360();
  piVar3 = (int *)FUN_00631d33(0x20);
  local_4 = 1;
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_005d2890(0x62,s_tvcameramonitor_0067d284);
    *piVar3 = (int)&PTR_FUN_0064faa0;
    piVar4 = piVar3;
  }
  local_4 = 0xffffffff;
  FUN_005d2c20(piVar4);
  (**(code **)(*piVar4 + 0x18))(1);
  ExceptionList = piVar3;
  return;
}

