
void FUN_0059d1e0(int param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006474eb;
  local_c = ExceptionList;
  if (DAT_006f59d4 == (int *)0x0) {
    ExceptionList = &local_c;
    piVar1 = (int *)FUN_00631d33(0x24);
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_005d2890(0x62,s_DustColor_0067d34c);
      *piVar1 = (int)&PTR_FUN_0064ff4c;
      piVar1[8] = param_1;
    }
    local_4 = 0xffffffff;
    DAT_006f59d4 = piVar1;
    FUN_005d2c20(piVar1);
    (**(code **)(*DAT_006f59d4 + 0x18))(1);
  }
  ExceptionList = local_c;
  return;
}

