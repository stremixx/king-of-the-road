
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00528000(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064627d;
  local_c = ExceptionList;
  if (DAT_00674cbc == 0) {
    ExceptionList = &local_c;
    if (param_1[0x5d] == 0) {
      ExceptionList = &local_c;
      FUN_005b7d70(param_1[3],0,0,param_1[0x5c]);
    }
    FUN_005d8240();
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0x1e0);
  local_4 = 0;
  if (iVar1 == 0) {
    DAT_006cdc20 = (int *)0x0;
  }
  else {
    DAT_006cdc20 = (int *)FUN_00518a50(DAT_006957ac,0);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc20);
  (**(code **)(*DAT_006cdc20 + 0x20))();
  iVar1 = FUN_00631d33(0x1e0);
  local_4 = 1;
  if (iVar1 == 0) {
    DAT_006cdc24 = (int *)0x0;
  }
  else {
    DAT_006cdc24 = (int *)FUN_00518a50(DAT_006957ac,1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc24);
  (**(code **)(*DAT_006cdc24 + 0x20))();
  iVar1 = FUN_00631d33(0x1e0);
  local_4 = 2;
  if (iVar1 == 0) {
    DAT_006cdc28 = (int *)0x0;
  }
  else {
    DAT_006cdc28 = (int *)FUN_00518a50(DAT_006957ac,2);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc28);
  (**(code **)(*DAT_006cdc28 + 0x20))();
  iVar1 = FUN_00631d33(0x1e0);
  local_4 = 3;
  if (iVar1 == 0) {
    DAT_006cdc2c = (int *)0x0;
  }
  else {
    DAT_006cdc2c = (int *)FUN_00518a50(DAT_006957ac,3);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc2c);
  (**(code **)(*DAT_006cdc2c + 0x20))();
  iVar1 = FUN_00631d33(0x1e0);
  local_4 = 4;
  if (iVar1 == 0) {
    DAT_006cdc30 = (int *)0x0;
  }
  else {
    DAT_006cdc30 = (int *)FUN_00518a50(DAT_006957ac,4);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc30);
  (**(code **)(*DAT_006cdc30 + 0x20))();
  iVar1 = FUN_00631d33(0x1e0);
  local_4 = 5;
  if (iVar1 == 0) {
    DAT_006cdc34 = (int *)0x0;
  }
  else {
    DAT_006cdc34 = (int *)FUN_00518a50(DAT_006957ac,5);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc34);
  (**(code **)(*DAT_006cdc34 + 0x20))();
  FUN_005b5b90(**(undefined4 **)(*(int *)(DAT_00695c00 + 0x24b4) + 100));
  if (DAT_00674cb8 == 0) {
    (**(code **)(*DAT_006cdbe8 + 0x20))();
    FUN_005dcf80(800,600,1,0xe00);
  }
  else {
    iVar1 = FUN_00631d33(0x908);
    local_4 = 6;
    if (iVar1 == 0) {
      DAT_006cdbe8 = (int *)0x0;
    }
    else {
      DAT_006cdbe8 = (int *)FUN_00528360(DAT_006957ac);
    }
    local_4 = 0xffffffff;
    FUN_005e3830(DAT_006cdbe8);
    _DAT_006957d8 = 0xffffffff;
    FUN_005dcf80(0x280,0x1e0,2,0x3e00);
    iVar1 = FUN_005271c0(s__Kotr_avi_006772e8,0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x20))();
      DAT_00674cbc = 0;
      ExceptionList = local_c;
      return;
    }
    _DAT_006957d8 = 0;
  }
  FUN_005275c0();
  DAT_00674cbc = 0;
  ExceptionList = local_c;
  return;
}

