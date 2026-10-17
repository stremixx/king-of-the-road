
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,double param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646d2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00631d33(0xa0);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005ce830(*(undefined4 *)(DAT_006cdbcc + 0x54c),&DAT_0067b0b8,0);
    local_4._0_1_ = 1;
    *piVar1 = (int)&PTR_FUN_0064eedc;
    piVar1[8] = (int)&PTR_LAB_0064ee90;
    local_1c = 0xff1e1e1e;
    local_18 = 0xff646464;
    local_14 = 0xff1e1e1e;
    local_10 = (void *)0xff323c1e;
    iVar2 = FUN_00631d33(0x20);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iVar2 == 0) {
      piVar1[0x18] = 0;
    }
    else {
      puVar3 = &local_1c;
      if (param_8 != 0) {
        puVar3 = &local_14;
      }
      iVar2 = FUN_005ce340(10,param_1,param_2,param_3,param_4,param_5,param_6,
                           param_7 * _DAT_0064e4c8,puVar3,2,0);
      piVar1[0x18] = iVar2;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x18))(1);
  ExceptionList = local_10;
  return;
}

