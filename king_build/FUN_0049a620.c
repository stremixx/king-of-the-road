
int * FUN_0049a620(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00641cb7;
  pvStack_c = ExceptionList;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00491b70(param_2,&local_24,&local_30,param_3,&DAT_0066f7e8);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_004a2290(&local_18,0,param_2,&local_24,&local_30);
    if ((piVar2[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = iVar1;
        param_1[2] = piVar2[2];
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    else {
      param_1[2] = piVar2[2];
      *param_1 = *piVar2;
      param_1[1] = piVar2[1];
    }
    FUN_00492340();
    local_4._0_1_ = 1;
    if (((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) {
      local_30[1] = local_30[1] + -1;
      if ((local_30[1] == 0) && (local_30 != (int *)0x0)) {
        (**(code **)(*local_30 + 0xc))(1);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
      local_24[1] = local_24[1] + -1;
      if ((local_24[1] == 0) && (local_24 != (int *)0x0)) {
        (**(code **)(*local_24 + 0xc))(1);
      }
    }
  }
  else {
    local_18 = 0;
    local_14 = 0;
    local_10 = (void *)0x0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    FUN_00492340();
    local_4._0_1_ = 1;
    if (((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) {
      local_30[1] = local_30[1] + -1;
      if ((local_30[1] == 0) && (local_30 != (int *)0x0)) {
        (**(code **)(*local_30 + 0xc))(1);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
      local_24[1] = local_24[1] + -1;
      if ((local_24[1] == 0) && (local_24 != (int *)0x0)) {
        (**(code **)(*local_24 + 0xc))(1);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

